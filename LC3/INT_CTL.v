`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:19:12 11/24/2016 
// Design Name: 
// Module Name:    INT_CTL 
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
module INT_CTL( KBSR, DSR, UARTSR, VectorMUX, LD_Vector, clk, Vector, INT_Priority );
input [15:0] KBSR, DSR, UARTSR;
input [1:0] VectorMUX;
input LD_Vector, clk;
output reg [7:0] Vector;
output [2:0] INT_Priority;

assign INT_Priority = ( KBSR[15] & KBSR[14]     ? 3'b011
						  : ( DSR[15] & DSR[14]       ? 3'b010
						  : ( UARTSR[15] & UARTSR[14] ? 3'b001
						  : 3'b000 )));

wire [7:0] INTV;
assign INTV = ( INT_Priority == 3'b011 ? 8'h02
				: ( INT_Priority == 3'b010 ? 8'h03
				: ( INT_Priority == 3'b001 ? 8'h04
				: 8'hzz )));
always @( posedge clk ) begin
	if( LD_Vector )
		Vector <= ( VectorMUX == 2'b00 ? INTV// Device INT
					:( VectorMUX == 2'b01 ? 8'h00// Priv exception
					:8'h01));// Opc exception
end

endmodule
