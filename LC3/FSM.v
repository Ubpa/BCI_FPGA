`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:05:15 11/24/2016 
// Design Name: 
// Module Name:    FSM 
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
module FSM( IR_15_11, INT, R, BEN, PSR_15, clk,
LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector,
GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, VectorMUX, PSRMUX,
ALUK, MIO_EN, R_W, Set_Priv );
input [4:0] IR_15_11;
input INT, R, BEN, PSR_15, clk;
output LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector;
output GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP;
output [1:0] PCMUX, DRMUX, SR1MUX, ADDR2MUX, SPMUX, VectorMUX;
output ADDR1MUX, MARMUX, PSRMUX;
output [1:0] ALUK;
output MIO_EN, R_W, Set_Priv;

wire [5:0] J, Addr_next_state;
wire [2:0] COND;
wire IRD;

CONTROLSTORE controlstore( Addr_next_state, clk,
IRD, COND, J,
LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector,
GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, VectorMUX, PSRMUX,
ALUK, MIO_EN, R_W, Set_Priv );

MICROSEQUENCER microsequencer( J, IR_15_11, COND, IRD, INT, R, BEN, PSR_15, Addr_next_state );


endmodule
