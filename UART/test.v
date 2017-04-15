`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:02:23 12/08/2016
// Design Name:   Des_Top
// Module Name:   E:/DES/test.v
// Project Name:  DES
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Des_Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg CLK;
	reg RST;
	reg rst_n;
	reg rst_m;
	reg parity_en;
	reg parity_kind;
	reg rxd;
	reg CHIP_SELECT_BAR;
	reg read;
	reg txd_en;

	// Outputs
	wire [64:1] CIPHER_TEXT;
	wire txd;
	wire ft;
	wire fr;

	// Instantiate the Unit Under Test (UUT)
	Des_Top uut (
		.CLK(CLK), 
		.RST(RST), 
		.rst_n(rst_n), 
		.rst_m(rst_m), 
		.parity_en(parity_en), 
		.parity_kind(parity_kind), 
		.rxd(rxd), 
		.CHIP_SELECT_BAR(CHIP_SELECT_BAR), 
		.CIPHER_TEXT(CIPHER_TEXT), 
		.read(read), 
		.txd_en(txd_en), 
		.txd(txd), 
		.ft(ft), 
		.fr(fr)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 0;
		rst_n = 0;
		rst_m = 0;
		parity_en = 0;
		parity_kind = 0;
		rxd = 0;
		CHIP_SELECT_BAR = 0;
		read = 0;
		txd_en = 0;

		// Wait 100 ns for global reset to finish

		// Add stimulus here
		#20
	RST=1;
	#20
	RST=0;
	end
      always #10 CLK=~CLK;
endmodule

