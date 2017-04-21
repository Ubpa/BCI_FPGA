`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:33 04/08/2017 
// Design Name: 
// Module Name:    SDA 
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
module SDA( SDA_BUS, MDR, LD_SDAER, LD_SDADR, LD_SDASR, clk, SDAER, SDADR, SDASR, WR );
inout [7:0] SDA_BUS;
input [15:0] MDR;
input LD_SDAER, LD_SDADR, LD_SDASR, clk;
output reg [15:0] SDAER, SDADR, SDASR;
output reg WR;

reg [7:0] SDA_MODE [15:0];
initial begin
	SDA_MODE[ 0] = 8'bzzzzzzz0;
	SDA_MODE[ 1] = 8'bzzzzzz0z;
	SDA_MODE[ 2] = 8'bzzzzz0zz;
	SDA_MODE[ 3] = 8'bzzzz0zzz;
	SDA_MODE[ 4] = 8'bzzz0zzzz;
	SDA_MODE[ 5] = 8'bzz0zzzzz;
	SDA_MODE[ 6] = 8'bz0zzzzzz;
	SDA_MODE[ 7] = 8'b0zzzzzzz;
	SDA_MODE[ 8] = 8'bzzzzzzz1;
	SDA_MODE[ 9] = 8'bzzzzzz1z;
	SDA_MODE[10] = 8'bzzzzz1zz;
	SDA_MODE[11] = 8'bzzzz1zzz;
	SDA_MODE[12] = 8'bzzz1zzzz;
	SDA_MODE[13] = 8'bzz1zzzzz;
	SDA_MODE[14] = 8'bz1zzzzzz;
	SDA_MODE[15] = 8'b1zzzzzzz;
end

wire [7:0] temp;
assign temp = SDAER[0] ? SDA_MODE[{SDADR[0], SDASR[2:0]}] : 8'bzzzzzzzz;
assign SDA_BUS = SDAER[0] ? SDA_MODE[{SDADR[0], SDASR[2:0]}] : 8'bzzzzzzzz;

initial begin
	SDAER = 16'h0000;
	SDADR = 16'h0000;
	SDASR = 16'b0000000000000xxx;
	WR = 0;
end

always @( posedge clk ) begin
	if( LD_SDADR ) begin
		SDADR[0] <= MDR[0];
		WR <= 1;
	end
	else if( LD_SDAER ) begin
		SDAER[0] <= MDR[0];
		WR <= 1;
	end
	else if( LD_SDASR ) begin
		SDASR[2:0] <= MDR[2:0];
		WR <= 1;
	end
	else
		WR <= 0;
end

endmodule
