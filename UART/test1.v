`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:33:59 12/08/2016
// Design Name:   s_top
// Module Name:   E:/DES/test1.v
// Project Name:  DES
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: s_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;
	reg rst_m;
	reg parity_en;
	reg parity_kind;
	reg read;
	reg [64:1] data;
	reg txd_en;

	// Outputs
	wire txd;
	wire ft;

	// Instantiate the Unit Under Test (UUT)
	s_top uut (
		.clk(clk), 
		.rst_m(rst_m), 
		.parity_en(parity_en), 
		.parity_kind(parity_kind), 
		.read(read), 
		.data(data), 
		.txd_en(txd_en), 
		.txd(txd), 
		.ft(ft)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_m = 0;
		parity_en = 0;
		parity_kind = 0;
		read = 0;
		data = 0;
		txd_en = 0;
		data=64'hC16B85393ADB0ECB;
		// Wait 100 ns for global reset to finish
		#100
       rst_m=1;
		#10
		txd_en=1;
		#10000
		txd_en=0;
		read=1;
		#100
		txd_en=1;
		/*#10
		txd_en=1;
		#10
		read=0;
		#10
		read=1;
		#100
		txd_en=0;
		#10
		txd_en=1;
		#10
		read=0;
		#10
		read=1;
		#100
		txd_en=0;
		#10
		txd_en=1;
		#10
		read=0;
		#10
		read=1;
		// Add stimulus here
*/
	end
     always #10 clk=~clk;
endmodule

