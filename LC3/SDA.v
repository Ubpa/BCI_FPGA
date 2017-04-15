`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:33 04/08/2017 
// Design Name: 
// Module Name:    SDA 
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
module SDA( SDA_BUS, MDR, LD_SDAER, LD_SDADR, clk, SDAER, SDADR, WR );
inout SDA_BUS;
input [15:0] MDR;
input LD_SDAER, LD_SDADR, clk;
output reg [15:0] SDAER, SDADR;
output reg WR;

assign SDA_BUS = SDAER[0] ? SDADR[0] : 1'bz;

initial begin
	SDAER = 16'h0000;
	SDADR = 16'h0000;
	WR = 0;
end

always @( posedge clk ) begin
	if( LD_SDADR ) begin
		SDADR[0] <= MDR[0];
		WR <= 1;
	end
	else if( LD_SDAER ) begin
		SDAER[0] <= MDR[0];
		WR <= 1;
	end
	else
		WR <= 0;
end

endmodule
