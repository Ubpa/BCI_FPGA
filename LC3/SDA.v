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
	SDA_MODE[ 0] = 8'b11111110;
	SDA_MODE[ 1] = 8'b11111101;
	SDA_MODE[ 2] = 8'b11111011;
	SDA_MODE[ 3] = 8'b11110111;
	SDA_MODE[ 4] = 8'b11101111;
	SDA_MODE[ 5] = 8'b11011111;
	SDA_MODE[ 6] = 8'b10111111;
	SDA_MODE[ 7] = 8'b01111111;
	SDA_MODE[ 8] = 8'b11111111;
	SDA_MODE[ 9] = 8'b11111111;
	SDA_MODE[10] = 8'b11111111;
	SDA_MODE[11] = 8'b11111111;
	SDA_MODE[12] = 8'b11111111;
	SDA_MODE[13] = 8'b11111111;
	SDA_MODE[14] = 8'b11111111;
	SDA_MODE[15] = 8'b11111111;

end

wire [7:0] temp;

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
