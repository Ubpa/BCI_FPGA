`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:36 11/24/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU( OPA, OPB, ALUK, out );
input [15:0] OPA, OPB;
input [1:0] ALUK;
output [15:0] out;

assign out = ( ALUK == 2'b00 ? OPA+OPB
				 :( ALUK == 2'b01 ? OPA&OPB
				 :( ALUK == 2'b10 ? ~OPA
				 : OPA )));

endmodule
