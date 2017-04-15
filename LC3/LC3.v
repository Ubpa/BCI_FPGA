`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:04 11/24/2016 
// Design Name: 
// Module Name:    LC3 
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
module LC3( SDA_BUS, SCL_BUS, sw, btn, clk, seg, an, SDAER );
inout SDA_BUS, SCL_BUS;
input [7:0] sw;
input [4:0] btn;
input clk;
output [15:0] SDAER;
output [6:0] seg;
output [3:0] an;

wire [15:0] BUS;
wire [4:0] IR_15_11;
wire [2:0] INT_Priority;
wire [1:0] VectorMUX, PCMUX, DRMUX, SR1MUX, ADDR2MUX, SPMUX, ALUK;

CPU cpu( BUS,
LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP,
GatePC, GateALU, GateMARMUX, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, PSRMUX,
ALUK, Set_Priv, INT_Priority, clk,
IR_15_11, INT, BEN, PSR_15 );

G_MEMORY g_memory( BUS, SDA_BUS, SCL_BUS, sw, btn, VectorMUX, LD_Vector, LD_MAR, LD_MDR, MIO_EN, R_W, GateMDR, GateVector, clk, seg, an, INT_Priority, R, SDAER );

FSM fsm( IR_15_11, INT, R, BEN, PSR_15, clk,
LD_MAR, LD_MDR, LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP, LD_Vector,
GatePC, GateMDR, GateALU, GateMARMUX, GateVector, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, VectorMUX, PSRMUX,
ALUK, MIO_EN, R_W, Set_Priv );

endmodule
