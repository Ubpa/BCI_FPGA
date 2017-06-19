`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:02:28 06/18/2017 
// Design Name: 
// Module Name:    SETCURRENT 
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
module SETCURRENT(clk, MDR, LD_SC_buffer, readed, buffer1d, change, RDCurrent1d, WR );
input clk;
input [3:0] readed;
input [15:0] MDR;
input [2:0] LD_SC_buffer;
output [127:0] RDCurrent1d;
output [111:0] buffer1d;
output reg [7:0] change;
output reg WR;

reg [15:0] buffer [6:0];
assign buffer1d = { buffer[6],buffer[5],buffer[4],buffer[3],buffer[2],buffer[1],buffer[0] };
reg [15:0] RDCurrent [7:0];
assign RDCurrent1d = { RDCurrent[7], RDCurrent[6], RDCurrent[5], RDCurrent[4], RDCurrent[3], RDCurrent[2], RDCurrent[1], RDCurrent[0] };

reg [15:0] lastID;
reg [31:0] RDdcw [7:0];
reg [31:0] IRDdcw [7:0];
integer currentT;
integer lastCheckT [7:0];
integer i;
wire [15:0] ID;
assign ID = buffer[6];

initial begin
	buffer[6] = 16'hFFFF;
	lastID = 16'hFFFF;
	WR = 0;
	currentT = 0;
	for( i=0; i<6; i=i+1 )
		buffer[i] = 0;
	for( i=0; i<8; i=i+1 ) begin
		change[i] = 0;
		RDdcw[i] = 0;
		IRDdcw[i] = 0;
		RDCurrent[i] = 16'h0080;
		lastCheckT[i] = 0;
	end
end

parameter times = 16'd50000;
wire [15:0] cnt;
COUNTER counter(
 .times( times ),
 .clk( clk ),
 .reset( 1'b0 ),
 .cnt( cnt ),
 .c(c) );

always @( posedge clk ) begin
	if(c)
		currentT <= currentT + 1;
	if( LD_SC_buffer != 3'b111 ) begin
		buffer[LD_SC_buffer] <= MDR;
		WR <= 1;
	end
	else
		WR <= 0;
	if( readed != 4'b1000 )
		change[readed[2:0]] <= 0;
	else if( lastID != ID ) begin
		RDdcw[ID] <= newRDdcw;
		IRDdcw[ID] <= newIRDdcw;
		for( i=0; i<8; i=i+1 ) begin
			if( currentT > lastCheckT[i] + 100 ) begin
				if( ( IRDdcw[i] - RDdcw[i] > 70000 ) && ( IRDdcw[i] - RDdcw[i] < 32'h80000000 ) && ( RDCurrent[i] < 16'h00FF ) ) begin
					RDCurrent[i] <= RDCurrent[i] + 1;
					change[i] <= 1;
				end
				else if( ( RDdcw[i] - IRDdcw[i] > 70000 ) && ( RDdcw[i] - IRDdcw[i] < 32'h80000000 ) && ( RDCurrent[i] > 0 ) ) begin
					RDCurrent[i] <= RDCurrent[i] - 1;
					change[i] <= 1;
				end 
				lastCheckT[i] <= currentT;
			end
		end
		lastID = ID;
	end
end

wire [31:0] RDraw = { buffer[0][1:0], buffer[1][7:0], buffer[2][7:0] };
wire [31:0] alphaRDdcw = ( RDdcw[ID] >> 1 ) + ( RDdcw[ID] >> 2 ) + ( RDdcw[ID] >> 3 ) + ( RDdcw[ID] >> 4 ) + ( RDdcw[ID] >> 6 );
wire [31:0] newRDdcw = RDraw + alphaRDdcw;

wire [31:0] IRDraw = { buffer[3][1:0], buffer[4][7:0], buffer[5][7:0] };
wire [31:0] alphaIRDdcw = ( IRDdcw[ID] >> 1 ) + ( IRDdcw[ID] >> 2 ) + ( IRDdcw[ID] >> 3 ) + ( IRDdcw[ID] >> 4 ) + ( IRDdcw[ID] >> 6 );
wire [31:0] newIRDdcw = IRDraw + alphaIRDdcw;

endmodule
