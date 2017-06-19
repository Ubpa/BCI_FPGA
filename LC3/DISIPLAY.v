`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:15:29 11/23/2016 
// Design Name: 
// Module Name:    DISIPLAY 
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
module DISIPLAY( MDR, LD_DDR, LD_DSR, clk, DSR, seg, an, WR );
input [15:0] MDR;
input LD_DDR, LD_DSR;
input clk;
output reg [15:0] DSR;
output [6:0] seg;
output [3:0] an;
output WR;

parameter dT = 16'hFFFF;

reg [15:0] DDR;//{position, {6{0}}, ASCII}
reg [6:0] segOfASCII [255:0];
reg [6:0] SEGREG [3:0];
reg [3:0] ANREG  [3:0];
reg [1:0] i;
reg DDR_WR;
reg DSR_WR;

wire [15:0] cnt;

COUNTER counter( .times(dT), .clk(clk), .reset(1'b0), .cnt(cnt), .c(c) );

assign an = ANREG[i];
assign seg = SEGREG[i];
assign WR = LD_DDR ? DDR_WR : ( LD_DSR ? DSR_WR : 1'b0 );

initial begin
	DDR = 16'h0000;
	DSR = 16'h0000;
	i = 0;
	$readmemb( "segOfASCII.v", segOfASCII );
	SEGREG[0] = 7'b1111111;
	SEGREG[1] = 7'b1111111;
	SEGREG[2] = 7'b1111111;
	SEGREG[3] = 7'b1111111;
	ANREG[0]  = 4'b1110;
	ANREG[1]  = 4'b1101;
	ANREG[2]  = 4'b1011;
	ANREG[3]  = 4'b0111;
end

always @( posedge clk ) begin
	if( LD_DDR ) begin
		DDR <= MDR;
		DSR[15] <= 0;
		DDR_WR <= 1;
	end
	else begin
		DDR_WR <= 0;
		if( DSR[15] == 0 ) begin
			SEGREG[DDR[15:14]] <= segOfASCII[DDR[7:0]];
			DDR <= 16'h0000;
			DSR[15] <= 1;
		end
	end
end

always @( posedge clk ) begin
	if( LD_DSR ) begin
		DSR[14:0] <= MDR[14:0];
		DSR_WR <= 1;
	end
	else
		DSR_WR <= 0;
end

always @( posedge clk ) begin
	if( c == 1 )
		i <= i+1;
end

endmodule
