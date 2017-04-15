`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:28:58 11/24/2016 
// Design Name: 
// Module Name:    SWITCH 
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
module SWITCH( sw, clk, SWR );
input [7:0] sw;
input clk;
output reg [15:0] SWR;

always @( posedge clk )
	SWR <= { 8'h00, sw };

endmodule
