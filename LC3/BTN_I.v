`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:34:40 11/23/2016 
// Design Name: 
// Module Name:    BTN_I 
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
module BTN_I(in, clk, Ol, Op);
input in, clk;
output reg Ol, Op;

parameter times = 16'hFFFF;

reg reset;
wire [15:0] cnt;
wire c;

initial begin
	Ol = 0;
	Op = 0;
	reset = 0;
end

COUNTER counter(
 .times( times ),
 .clk( clk ),
 .reset( reset ),
 .cnt( cnt ),
 .c(c) );


always @( posedge clk ) begin
	if( in == Ol ) begin
		reset <= ~reset;
		Op <= 0;
	end
	else if( c == 1 ) begin
		Ol <= in;
		Op <= in == 1;
	end
end

endmodule
