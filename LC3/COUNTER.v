`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:00 11/23/2016 
// Design Name: 
// Module Name:    COUNTER 
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
module COUNTER( times, clk, reset, cnt, c );
input [15:0] times;
input clk, reset;
output reg [15:0] cnt;
output c;

reg inner_reset;
initial begin
	inner_reset = 0;
	cnt = 16'h0000;
end

assign c = cnt == times - 1;

always @( posedge clk ) begin
	if( reset != inner_reset ) begin
		inner_reset <= reset;
		cnt <= 16'h0000;
	end
	else if( cnt < times - 1 ) begin
		cnt <= cnt + 1;
	end
	else begin
		cnt <= 0;
	end
end

endmodule
