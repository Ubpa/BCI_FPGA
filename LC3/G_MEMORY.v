`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:41:25 11/24/2016 
// Design Name: 
// Module Name:    G_MEMORY 
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
module G_MEMORY( BUS, SDA_BUS, SCL_BUS, sw, btn, VectorMUX, LD_Vector, LD_MAR, LD_MDR, MIO_EN, R_W, GateMDR, GateVector, clk, seg, an, INT_Priority, R, SDAER );
inout [15:0] BUS;
inout SDA_BUS;
output SCL_BUS;
input [7:0] sw;
input [4:0] btn;
input [1:0] VectorMUX;
input LD_Vector, LD_MAR, LD_MDR, MIO_EN, R_W, GateMDR, GateVector, clk;
output [15:0] SDAER;
output [6:0] seg;
output [3:0] an;
output [2:0] INT_Priority;
output reg R;

reg [15:0] MAR, MDR;
reg readed;
wire [15:0] INMUX, dout, KBDR, KBSR, DSR, SDADR, SCLER, SWR;
wire [7:0] Vector;
wire [3:0] INMUX_Sel;

assign BUS = GateMDR ? MDR
				: ( GateVector ? {8'h01, Vector}
				: 16'hzzzz );

initial begin
	MAR = 16'h0000;
	MDR = 16'h0000;
end

always @( posedge clk ) begin
	if( LD_MAR )
		MAR <= BUS;
end

assign INMUX =   ( INMUX_Sel == 4'b0000 ? dout
					: ( INMUX_Sel == 4'b0001 ? KBSR
					: ( INMUX_Sel == 4'b0010 ? KBDR
					: ( INMUX_Sel == 4'b0011 ? DSR
					: ( INMUX_Sel == 4'b0100 ? SWR
					: ( INMUX_Sel == 4'b0101 ? SDAER
					: ( INMUX_Sel == 4'b0110 ? SDADR
					: ( INMUX_Sel == 4'b0111 ? { 15'b0, SDA_BUS }
					: ( INMUX_Sel == 4'b1000 ? SCLER
					: ( INMUX_Sel == 4'b1001 ? { 15'b0, SCL_BUS }
					: 16'hzzzz ))))))))));

ADDR_CTL_LOGIC addr_ctl_logic( MAR, R_W, MIO_EN, INMUX_Sel, MEM_EN, LD_KBSR, LD_DDR, LD_DSR, LD_SDAER, LD_SDADR, LD_SCLER );

MEMORY memory( MDR, MAR, R_W, MEM_EN, clk, dout, R_MEM );

KEYBOARD keyboard( MDR, LD_KBSR, readed, btn, clk, KBDR, KBSR, WR_KB );

DISIPLAY display( MDR, LD_DDR, LD_DSR, clk, DSR, seg, an, WR_DSP );

SWITCH switch( sw, clk, SWR );

SDA sda( SDA_BUS, MDR, LD_SDAER, LD_SDADR, clk, SDAER, SDADR, WR_SDA );

SCL scl( SCL_BUS, MDR, LD_SCLER, clk, SCLER, WR_SCL );

always @( posedge clk ) begin
	if( ~MIO_EN ) begin
		R <= 0;
		if( LD_MDR )
			MDR <= BUS;
		readed <= 0;
	end
	else if( R_W ) begin
		// write
		R <= ( MEM_EN ? R_MEM
			: ( LD_KBSR ? WR_KB
			: ( LD_DDR | LD_DSR ? WR_DSP
			: ( LD_SDAER | LD_SDADR ? WR_SDA
			: WR_SCL ))));
		readed <= 0;
	end
	else if( ~R & ( R_MEM | ~MEM_EN ) )begin // 此时 LD_MDR 必定为 1
		//read
		MDR <= INMUX;
		if( INMUX_Sel == 4'b0010 )
			readed <= 1;
		R <= 1;
	end
	else
		readed <= 0;
end

INT_CTL int_ctl( KBSR, DSR, VectorMUX, LD_Vector, clk, Vector, INT_Priority );

endmodule
