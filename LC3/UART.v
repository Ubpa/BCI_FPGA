`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:34 11/29/2016 
// Design Name: 
// Module Name:    UART 
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
`timescale 1ns / 1ps

module UART( MDR, rxd, LD_UARTDR, LD_UARTSR, clk, UARTSR, txd, WR );
input [15:0] MDR;
input rxd, LD_UARTDR, LD_UARTSR, clk;
output reg [15:0] UARTSR;
output txd, WR;

wire [7:0] r1, r2, r3, r4;
reg [15:0] UARTDR;
reg UARTDR_WR, UARTSR_WR, flag_buff, rst_n;

initial begin
	flag_buff = 0;
	UARTSR = 16'h8000;
	UARTDR = 16'h0000;
	rst_n = 0;
end

always @( posedge clk )
	rst_n <= 1;

assign parity_en = 1'b0;
assign parity_kind = 1'b0;
assign WR = LD_UARTDR ? UARTDR_WR : ( LD_UARTSR ? UARTSR_WR : 1'b0 );

always @( posedge clk ) begin
	if( LD_UARTDR ) begin
		UARTDR <= MDR;
		UARTSR[15] <= 0;
		flag_buff <= 0;
		UARTDR_WR <= 1;
	end
	else begin
		UARTDR_WR <= 0;
		if( ~UARTSR[15] & flag_buff & ~flag ) begin
		// ¼ì²â flag ÏÂ½µÑØ
			UARTDR <= 16'h0000;
			UARTSR[15] <= 1;
		end
		else
			flag_buff <= flag;
	end
end

always @( posedge clk ) begin
	if( LD_UARTSR ) begin
		UARTSR[14:0] <= MDR[14:0];
		UARTSR_WR <= 1;
	end
	else
		UARTSR_WR <= 0;
end


RXD _rxd( rst_n, parity_en, parity_kind, rxd, clk, r1, r2, r3, r4, fr );

TXD _txd( UARTDR, rst_n, ~UARTSR[15], parity_en, parity_kind, clk, txd, ft, flag );

endmodule
