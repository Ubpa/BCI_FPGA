`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:39 11/24/2016 
// Design Name: 
// Module Name:    CONTROLSTORE 
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
module CONTROLSTORE( Addr_next_state, clk,
IRD, COND, J,
LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector,
GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, VectorMUX, PSRMUX,
ALUK, MIO_EN, R_W, Set_Priv );

input [5:0] Addr_next_state;
input clk;
output IRD;
output [2:0] COND;
output [5:0] J;
output LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector;
output GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP;
output [1:0] PCMUX, DRMUX, SR1MUX, ADDR2MUX, SPMUX, VectorMUX;
output ADDR1MUX, MARMUX, PSRMUX;
output [1:0] ALUK;
output MIO_EN, R_W, Set_Priv;

reg [49:0] MicroIR;
reg [49:0] MicroI_ROM [63:0];
initial begin
	$readmemb( "MicroI_ROM.v", MicroI_ROM );
	MicroIR = MicroI_ROM[6'b010010];
end


assign {IRD, COND, J,
LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector,
GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, VectorMUX, PSRMUX,
ALUK, MIO_EN, R_W, Set_Priv} = MicroIR;

always @( posedge clk )
	MicroIR <= MicroI_ROM[Addr_next_state];

endmodule
