`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:47:55 11/24/2016 
// Design Name: 
// Module Name:    ADDR_CTL_LOGIC 
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
module ADDR_CTL_LOGIC( MAR, R_W, MIO_EN, INMUX_Sel, MEM_EN, LD_KBSR, LD_DDR, LD_DSR, LD_SDAER, LD_SDADR, LD_SCLER, LD_UARTDR, LD_UARTSR );
input [15:0] MAR;
input R_W, MIO_EN;
output [3:0] INMUX_Sel;
output MEM_EN, LD_KBSR, LD_DDR, LD_DSR, LD_SDAER, LD_SDADR, LD_SCLER, LD_UARTDR, LD_UARTSR;

assign LD_KBSR = (MAR == 16'h7E00) & MIO_EN & R_W;
assign LD_DSR = (MAR == 16'h7E04) & MIO_EN & R_W;
assign LD_DDR = (MAR == 16'h7E06) & MIO_EN & R_W;
assign LD_SDAER = (MAR == 16'h7E0A) & MIO_EN & R_W;
assign LD_SDADR = (MAR == 16'h7E0C) & MIO_EN & R_W;
assign LD_SCLER = (MAR == 16'h7E10) & MIO_EN & R_W;
assign LD_UARTSR = (MAR == 16'h7E14) & MIO_EN & R_W;
assign LD_UARTDR = (MAR == 16'h7E16) & MIO_EN & R_W;

assign INMUX_Sel = ( ~MIO_EN || R_W  ? 4'bxxxx
						:( MAR == 16'h7E00 ? 4'b0001//KBSR
						:( MAR == 16'h7E02 ? 4'b0010//KBDR
						:( MAR == 16'h7E04 ? 4'b0011//DSR
						:( MAR == 16'h7E08 ? 4'b0100//SWR
						:( MAR == 16'h7E0A ? 4'b0101//SDAER
						:( MAR == 16'h7E0C ? 4'b0110//SDADR
						:( MAR == 16'h7E0E ? 4'b0111//SDA_BUS
						:( MAR == 16'h7E10 ? 4'b1000//SCLER
						:( MAR == 16'h7E12 ? 4'b1001//SCL_BUS
						:( MAR == 16'h7E14 ? 4'b1010//UARTSR
						: 4'b0000 )))))))))));// MEM

assign MEM_EN = MIO_EN
				  & ( MAR != 16'h7E00 )
				  & ( MAR != 16'h7E02 )
				  & ( MAR != 16'h7E04 )
				  & ( MAR != 16'h7E06 )
				  & ( MAR != 16'h7E08 )
				  & ( MAR != 16'h7E0A )
				  & ( MAR != 16'h7E0C )
				  & ( MAR != 16'h7E0E )
				  & ( MAR != 16'h7E10 )
				  & ( MAR != 16'h7E12 )
				  & ( MAR != 16'h7E14 )
				  & ( MAR != 16'h7E16 );
endmodule
