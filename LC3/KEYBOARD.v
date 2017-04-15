`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:09 11/23/2016 
// Design Name: 
// Module Name:    KEYBOARD 
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
module KEYBOARD( MDR, LD_KBSR, readed, btn, clk, KBDR, KBSR, WR );
input [15:0] MDR;
input LD_KBSR, readed;
input [4:0] btn;//{ up, down, left, right, middle } µÕŒª”≈œ»
input clk;
output reg [15:0] KBDR;// { {11{0}}, btn_up, btn_down, btn_left, btn_right£¨ btn_middle }
output reg [15:0] KBSR;// { Ready, INT_EN, {14{0}} }
output reg WR;

wire [4:0] btn_i, btn_Op;

initial begin
	KBSR = 16'h0000;
	KBDR = 16'h0000;
end
//#(16'd10) 
BTN_I btn_up( .in(btn[4]), .clk(clk), .Ol(btn_i[4]), .Op(btn_Op[4]) );
BTN_I btn_down( .in(btn[3]), .clk(clk), .Ol(btn_i[3]), .Op(btn_Op[3]) );
BTN_I btn_left( .in(btn[2]), .clk(clk), .Ol(btn_i[2]), .Op(btn_Op[2]) );
BTN_I btn_right( .in(btn[1]), .clk(clk), .Ol(btn_i[1]), .Op(btn_Op[1]) );
BTN_I btn_middle( .in(btn[0]), .clk(clk), .Ol(btn_i[0]), .Op(btn_Op[0]) );

always @( posedge clk ) begin
	if( LD_KBSR ) begin
		KBSR[14:0] <= MDR[14:0];
		WR <= 1;
	end
	else begin
		WR <= 0;
		if( readed ) begin
			KBDR <= 16'h0000;
			KBSR[15] <= 0;
		end
		else if( (|(btn_i&btn_Op)) & (~KBSR[15]) ) begin
			KBDR[4:0] <= { (~|btn_i[3:0])&btn_i[4] , (~|btn_i[2:0])&btn_i[3], (~|btn_i[1:0])&btn_i[2]  , (~btn_i[0])&btn_i[1] , btn_i[0] };
			KBSR[15] <= 1;
		end
	end
end

endmodule
