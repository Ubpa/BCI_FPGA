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
module G_MEMORY( BUS, SDA_BUS, SCL_BUS, sw, btn, VectorMUX, LD_Vector, LD_MAR, LD_MDR, MIO_EN, R_W, GateMDR, GateVector, rxd, clk, SDAER, seg, an, INT_Priority, R, txd );
inout [15:0] BUS;
inout [7:0] SDA_BUS;
output SCL_BUS;
input [7:0] sw;
input [4:0] btn;
input [1:0] VectorMUX;
input LD_Vector, LD_MAR, LD_MDR, MIO_EN, R_W, GateMDR, GateVector, rxd, clk;
output [15:0] SDAER;
output [6:0] seg;
output [3:0] an;
output [2:0] INT_Priority;
output txd;
output reg R;

reg [15:0] MAR, MDR;
reg [3:0] SC_readed;
reg readed;
wire [127:0] RDCurrent1d, RDCurrent1ds;
wire [111:0] buffer1d, buffer1ds;
wire [15:0] INMUX, dout, KBDR, KBSR, DSR, SDAER, SDADR, SDASR, SCLER, SWR, UARTSR;
wire [7:0] Vector, change;
wire [3:0] INMUX_Sel;
wire [2:0] LD_SC_buffer;

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


assign buffer1ds = buffer1d >> { MAR[2:0], 4'b0 };
assign RDCurrent1ds = RDCurrent1d >> { MAR[2:0], 4'b0 };
assign INMUX =   ( INMUX_Sel == 4'b0000 ? dout
					: ( INMUX_Sel == 4'b0001 ? KBSR
					: ( INMUX_Sel == 4'b0010 ? KBDR
					: ( INMUX_Sel == 4'b0011 ? DSR
					: ( INMUX_Sel == 4'b0100 ? SWR
					: ( INMUX_Sel == 4'b0101 ? SDAER
					: ( INMUX_Sel == 4'b0110 ? SDADR
					: ( INMUX_Sel == 4'b0111 ? SDASR
					: ( INMUX_Sel == 4'b1000 ? { 15'd0, SDA_BUS[SDASR[2:0]] }
					: ( INMUX_Sel == 4'b1001 ? SCLER
					: ( INMUX_Sel == 4'b1010 ? { 15'd0, SCL_BUS }
					: ( INMUX_Sel == 4'b1011 ? UARTSR
					: ( INMUX_Sel == 4'b1100 ? buffer1ds[15:0]
					: ( INMUX_Sel == 4'b1101 ? { 15'd0, change[MAR[2:0]] }
					: ( INMUX_Sel == 4'b1110 ? RDCurrent1ds[15:0]
					: 16'hzzzz )))))))))))))));

ADDR_CTL_LOGIC addr_ctl_logic( MAR, R_W, MIO_EN, INMUX_Sel, MEM_EN, LD_KBSR, LD_DDR, LD_DSR, LD_SDAER, LD_SDADR, LD_SDASR, LD_SCLER, LD_UARTDR, LD_UARTSR, LD_SC_buffer );

MEMORY memory( MDR, MAR, R_W, MEM_EN, clk, dout, R_MEM );

KEYBOARD keyboard( MDR, LD_KBSR, readed, btn, clk, KBDR, KBSR, WR_KB );

DISIPLAY display( MDR, LD_DDR, LD_DSR, clk, DSR, seg, an, WR_DSP );

SWITCH switch( sw, clk, SWR );

SDA sda( SDA_BUS, MDR, LD_SDAER, LD_SDADR, LD_SDASR, clk, SDAER, SDADR, SDASR, WR_SDA );

SCL scl( SCL_BUS, MDR, LD_SCLER, clk, SCLER, WR_SCL );

UART uart( MDR, rxd, LD_UARTDR, LD_UARTSR, clk, UARTSR, txd, WR_UART );

SETCURRENT setcurrent(clk, MDR, LD_SC_buffer, SC_readed, buffer1d, change, RDCurrent1d, SC_WR );

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
			: ( LD_SDAER | LD_SDADR | LD_SDASR ? WR_SDA
			: ( LD_SCLER ? WR_SCL
			: ( LD_UARTDR | LD_UARTSR ? WR_UART
			: SC_WR ))))));
		SC_readed <= 4'b1000;
		readed <= 0;
	end
	else if( ~R & ( R_MEM | ~MEM_EN ) )begin // 此时 LD_MDR 必定为 1
		//read
		MDR <= INMUX;
		if( INMUX_Sel == 4'b0010 )
			readed <= 1;
		else if( INMUX_Sel == 4'b1110 )
			SC_readed <= { 1'b0, MAR[2:0] };
		R <= 1;
	end
	else begin
		readed <= 0;
		SC_readed <= 4'b1000;
	end
end

INT_CTL int_ctl( KBSR, DSR, UARTSR, VectorMUX, LD_Vector, clk, Vector, INT_Priority );

endmodule
