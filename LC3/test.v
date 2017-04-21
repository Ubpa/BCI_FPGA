`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:49:40 04/08/2017 
// Design Name: 
// Module Name:    test 
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
module test();
reg [7:0] SDA_BUS_reg;
reg SCL_BUS_reg, clk, ack;
reg [7:0] sw;
reg [4:0] btn;
integer i;

wire [15:0] SDAER;


initial clk = 0;
always #0.5 clk = ~clk;

initial begin
	ack = 0;
	
end

wire [7:0] SDA_BUS;
wire SCL_BUS;
wire [6:0] seg;
wire [3:0] an;

LC3 lc3( SDA_BUS, newSCL, SCL_BUS, sw, btn, rxd, clk, SDAER, seg, an, txd );

always @( posedge clk )
	for( i=0; i<=7; i= i+1)
		SDA_BUS_reg[i] <= ( SDAER[0] ?
						  ( SDA_BUS[i] === 1'bx ? 1'bz
						: ( SDA_BUS[i] === 1'bz ? 1'b1 : SDA_BUS[i] ))
					 : ( ack ? 1'b0
					 : 1'b1 ));

assign SDA_BUS = SDA_BUS_reg;

endmodule
