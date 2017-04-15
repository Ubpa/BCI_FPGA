`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:52:28 11/24/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU( BUS,
LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP,
GatePC, GateALU, GateMARMUX, GatePC_1, GatePSR, GateSP,
PCMUX, DRMUX, SR1MUX, ADDR1MUX, ADDR2MUX, SPMUX, MARMUX, PSRMUX,
ALUK, Set_Priv, INT_Priority, clk,
IR_15_11, INT, BEN, PSR_15 ); 
inout [15:0] BUS;
input [2:0] INT_Priority;
input LD_IR, LD_BEN, LD_REG, LD_CC, LD_PC, LD_Priority, LD_Priv, LD_SavedSSP, LD_SavedUSP;
input GatePC, GateALU, GateMARMUX, GatePC_1, GatePSR, GateSP;
input [1:0] PCMUX, DRMUX, SR1MUX, ADDR2MUX, SPMUX, ALUK;
input ADDR1MUX, MARMUX, PSRMUX;
input Set_Priv, clk;
output [4:0] IR_15_11;
output INT, BEN, PSR_15;

reg [15:0] Saved_USP, Saved_SSP, PC, IR, PSR;
reg BEN;
wire [15:0] MARMUX_OUT, PSRMUX_OUT, ADDR1MUX_OUT, ADDR2MUX_OUT, ADDER, PCMUX_OUT, OPB, ALU_OUT, SR1OUT, SR2OUT, SPMUX_OUT;
wire [2:0] CC_LOGIC, DR, SR1, SR2;

initial begin
	PSR = 16'b1_0000_000_00000_000;
	PC = 16'h3000;
	Saved_SSP = 16'h3000;// from 16'h2FFF
end

always @( posedge clk ) begin
	if( LD_IR )
		IR <= BUS;
end

assign IR_15_11 = IR[15:11];
assign PSR_15 = PSR[15];
assign MARMUX_OUT = MARMUX ? ADDER : { 8'h00,IR[7:0] };
assign ADDR1MUX_OUT = ADDR1MUX ? SR1OUT : PC;
assign ADDR2MUX_OUT = (ADDR2MUX == 2'b00 ? 16'h0000
					 :(ADDR2MUX == 2'b01 ? { {10{IR[5]}}, IR[5:0] }
					 :(ADDR2MUX == 2'b10 ? { {7{IR[8]}}, IR[8:0] }
					 :{ {5{IR[10]}}, IR[10:0] } )));
assign ADDER = ADDR1MUX_OUT + ADDR2MUX_OUT;

assign PCMUX_OUT =  ( PCMUX == 2'b00 ? PC + 16'h0001
				  : ( PCMUX == 2'b01 ? BUS
				  : ADDER ));
always @( posedge clk )
	if( LD_PC )
		PC <= PCMUX_OUT;

assign CC_LOGIC = { BUS[15], ~(|BUS), (~BUS[15])&(|BUS[14:0]) };
assign PSRMUX_OUT = PSRMUX ? BUS : { Set_Priv, 4'h0, INT_Priority, 5'b00000, CC_LOGIC };
always @( posedge clk ) begin
	if( LD_Priv )
		PSR[15] <= PSRMUX_OUT[15];
	if( LD_Priority )
		PSR[10:8] <= PSRMUX_OUT[10:8];
	if( LD_CC )
		PSR[2:0] <= PSRMUX_OUT[2:0];
end

assign INT = INT_Priority > PSR[10:8];
always @(posedge clk) begin
	if( LD_BEN )
		BEN <= |(IR[11:9]&PSR[2:0]);
end

assign OPB = IR[5] ? { {11{IR[4]}}, IR[4:0] } : SR2OUT; 
ALU alu( .OPA(SR1OUT), .OPB(OPB), .ALUK(ALUK), .out(ALU_OUT) );

assign DR = ( DRMUX == 2'b00 ? IR[11:9]
		  : ( DRMUX == 2'b01 ? 3'b111
		  : 3'b110 ));
assign SR1 =  ( SR1MUX == 2'b00 ? IR[11:9]
				: ( SR1MUX == 2'b01 ? IR[8:6]
				: 3'b110 ));
assign SR2 = IR[2:0];
REGFILE regfile( BUS, DR, SR1, SR2, LD_REG, clk, SR1OUT, SR2OUT );

always @( posedge clk ) begin
	if( LD_SavedSSP )
		Saved_SSP <= SR1OUT;
end
always @( posedge clk ) begin
	if( LD_SavedUSP )
		Saved_USP <= SR1OUT;
end

assign SPMUX_OUT = ( SPMUX == 2'b00 ? SR1OUT+16'h0001
				 : ( SPMUX == 2'b01 ? SR1OUT-16'h0001
				 : ( SPMUX == 2'b10 ? Saved_SSP
				 : Saved_USP )));
				 
assign BUS =  ( GateMARMUX ? MARMUX_OUT
			: ( GatePC ? PC
			: ( GatePC_1 ? PC - 16'h0001
			: ( GateSP ? SPMUX_OUT
			: ( GateALU ? ALU_OUT
			: ( GatePSR ? PSR
			: 16'hzzzz ))))));

endmodule
