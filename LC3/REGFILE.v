`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:14:30 11/25/2016 
// Design Name: 
// Module Name:    REGFILE 
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
module REGFILE( BUS, DR, SR1, SR2, LD_REG, clk, SR1OUT, SR2OUT );
input [15:0] BUS;
input [2:0] DR, SR1, SR2;
input LD_REG, clk;
output [15:0] SR1OUT;
output [15:0] SR2OUT;

reg [15:0] REGFILE [7:0];

assign SR1OUT = REGFILE[SR1];
assign SR2OUT = REGFILE[SR2];

initial begin
	REGFILE[0] = 16'h0000;
	REGFILE[1] = 16'h0000;
	REGFILE[2] = 16'h0000;
	REGFILE[3] = 16'h0000;
	REGFILE[4] = 16'h0000;
	REGFILE[5] = 16'h0000;
	REGFILE[6] = 16'h7000;// R6 : USP from x6FFF
	REGFILE[7] = 16'h0000;
end


always@( posedge clk ) begin
	if( LD_REG )
		REGFILE[DR] <= BUS;
end

endmodule
