`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:00:10 04/19/2017 
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
module testuart(
input clk,rst_n,rst_m,
input parity_en,parity_kind,
input rxd,
input sd_en,
input [3:0] button,
output [7:0] send_data,
output  txd,
output  fr,ft,
output[7:0] segments,
output [3:0] sel
);

reg slowclk;
initial slowclk = 0;
always@(posedge clk)
	slowclk <= ~slowclk;

uart(
slowclk,rst_n,rst_m,
parity_en,parity_kind,
rxd,
sd_en,
button,
send_data,
txd,
fr,ft,
segments,
sel
);

endmodule
