`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:59 04/08/2017 
// Design Name: 
// Module Name:    SCL 
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
module SCL( SCL_BUS, MDR, LD_SCLER, clk, SCLER, WR );

parameter times = 16'h00FA;// 100,000 kHZ / 400 kHZ / 2 = 250 = 16'h00FA

input [15:0] MDR;
input LD_SCLER, clk;
output reg [15:0] SCLER;
output reg WR, SCL_BUS;

reg reset;
wire [15:0] cnt;

COUNTER counter( times, clk, reset, cnt, c );

initial begin
	reset = 0;
	SCL_BUS = 1;
	SCLER = 16'h0000;
end

always @( posedge clk ) begin
	if( LD_SCLER ) begin
		SCLER[0] <= MDR[0];
		WR <= 1;
	end
	else
		WR <= 0;
	if( ~SCLER[0] ) begin
		reset <= ~reset;
		SCL_BUS <= 1;
	end
	else if( c ) begin
		SCL_BUS <= ~SCL_BUS;
	end
end

endmodule
