`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:56 11/24/2016 
// Design Name: 
// Module Name:    MICROSEQUENCER 
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
module MICROSEQUENCER( J, IR_15_11, COND, IRD, INT, R, BEN, PSR_15, Addr_next_state );
input [5:0] J;
input [4:0] IR_15_11;
input [2:0] COND;
input IRD, INT, R, BEN, PSR_15;
output [5:0] Addr_next_state;

wire [5:0] newJ;
assign newJ[0] = J[0] | ( (~COND[2])&COND[1]&COND[0]&IR_15_11[0] );
assign newJ[1] = J[1] | ( (~COND[2])&(~COND[1])&COND[0]&R );
assign newJ[2] = J[2] | ( (~COND[2])&COND[1]&(~COND[0])&BEN );
assign newJ[3] = J[3] | ( COND[2]&(~COND[1])&(~COND[0])&PSR_15 );
assign newJ[4] = J[4] | ( COND[2]&(~COND[1])&COND[0]&INT );
assign newJ[5] = J[5];
assign Addr_next_state = IRD ? {2'b00,IR_15_11[4:1]} : newJ;

endmodule
