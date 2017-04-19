`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:20:47:55 11/30/2016 
// Design Name: 
// Module Name:TXD 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module TXD( UARTDR, rst_n, sd_en, parity_en, parity_kind, clk, txd, ft, flag );
input [15:0] UARTDR;
input rst_n, sd_en, parity_en, parity_kind, clk;
output reg txd, ft, flag;

parameter times = 16'h28B0;

wire [15:0] cnt;
reg bf3, bf2, bf1, bf0, reset;
assign txd_en = ~bf1 & bf0;//边沿检测, 检测txden的上升沿, txden通过开关输入, txden每出现一个上升沿, 状态机开始工作一次, 发送八个数据

initial reset = 0;

COUNTER counter( times, clk, reset, cnt, c );// 9600 bps

always@( posedge clk or negedge rst_n ) begin
	if( ~rst_n ) begin
		bf0 <= 0;
		bf1 <= 0;
	end
	else begin
		bf0 <= sd_en;
		bf1 <= bf0;
	end
end

//发送串行数据
reg [2:0] bit_counter;
reg parity1;
reg [2:0] curr_state, next_state;
parameter idle = 3'b000, start = 3'b001, shift = 3'b010, parity = 3'b011, stop = 3'b100, error = 3'b101;
// 共6个状态	

always@( posedge c or negedge rst_n ) begin
	curr_state <= ~rst_n ? idle : next_state;
end

always @( posedge clk or negedge rst_n ) begin
	flag = ( ~rst_n ? 1'b0
		  : ( txd_en ? 1'b1
		  : ( curr_state == stop & cnt == times - 2 ? 1'b0
		  : flag )));
end

always@( * ) begin
	case( curr_state )
		idle    : next_state = flag ? start : idle;
		start   : next_state = shift;
		shift   : next_state = bit_counter == 7 ? ( parity_en ? parity : stop ) : shift;
		parity  : next_state = ft == 1 ? stop : error;
		stop    : next_state = ft == 1 ? idle : error;
		default : next_state = error;//错误标志, 一直维持在error状态
	endcase
end

always@( posedge c or negedge rst_n ) begin
//各个状态的操作
	if( ~rst_n ) begin
		ft <= 1;
		bit_counter <= 0;
		txd <= 1;
		if( parity_kind )
			parity1 <= 1;//奇
		else
			parity1 <= 0;//偶
	end
	else begin
		case( curr_state )
			idle : txd <= 1;
			start : txd <= 0;
			shift : begin 
							txd <= UARTDR[bit_counter];
							bit_counter <= bit_counter+1;
							parity1 <= txd == 1'b1 ? ~parity1 : parity1;
					  end
			parity : txd <= parity1;
			stop : begin
					   bit_counter <= 3'b000; 
					   txd <= 1'b0;
				    end
			default : ft <= 1'b0;
		endcase
	end
end

endmodule
