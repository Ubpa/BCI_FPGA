`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:39 11/24/2016 
// Design Name: 
// Module Name:    MEMORY 
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
module MEMORY( MDR, MAR, R_W, MEM_EN, clk, dout, R );
input [15:0] MDR, MAR;
input R_W, MEM_EN, clk;
output reg [15:0] dout;
output reg R;

reg [15:0] RAM [15'h7FFF:0];

initial $readmemb( "MEMORY_INIT.v", RAM );

always @( posedge clk ) begin
	if( MEM_EN ) begin
		if( ~R_W ) begin
			// read
			dout <= RAM[MAR];
			R <= 1;
		end
		else begin
			// write
			RAM[MAR] <= MDR;
			R <= 1;
		end
	end
	else
		R <= 0;
end

endmodule
