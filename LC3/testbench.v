`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:19 11/23/2016 
// Design Name: 
// Module Name:    testbench 
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
module testbench();

reg clk;
always #1 clk <= ~clk;
initial clk = 0;

reg [7:0] sw;
reg [4:0] btn;
wire [6:0] seg;
wire [3:0] an;

always #1000 btn[0] = ~btn[0];

initial begin
	btn = 5'b00000;
end 

LC3 lc3( sw, btn, clk, seg, an );

endmodule
