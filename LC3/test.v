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

reg SDA_BUS_reg, SCL_BUS_reg, clk, ack;
reg [7:0] sw;
reg [4:0] btn;

wire [15:0] SDAER;

initial clk = 0;
always #0.5 clk = ~clk;

initial begin
	ack = 0;

	#9000;
	
	ack = 1;
	#900;
	ack = 0;

end

wire SDA_BUS, SCL_BUS;
wire [6:0] seg;
wire [3:0] an;

LC3 lc3( SDA_BUS, SCL_BUS, sw, btn, clk, seg, an, SDAER );

always @( posedge clk )
	SDA_BUS_reg <= ( SDAER[0] ? 
					  ( SDA_BUS === 1'bx ? 1'bz
					: ( SDA_BUS === 1'bz ? 1'b1 : SDA_BUS ))
				 : ( ack ? 1'b0
				 : 1'b1 ));

assign SDA_BUS = SDA_BUS_reg;

endmodule
