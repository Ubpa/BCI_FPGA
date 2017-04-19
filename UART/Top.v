`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:34 11/29/2016 
// Design Name: 
// Module Name:    top 
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
`timescale 1ns / 1ps

module uart(
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

wire sample_clktx,sample_clkrx;
wire [1:0] clks;
wire [7:0] rcv_data,r1,r2,r3,r4;
wire [3:0] buttons;

fdd  fdd1(
.clk(clk),
.rst_n(rst_n),
.button(button),
.buttons(buttons)
    );
	 
clk1    sampleclk1(
.clk(clk),
.rst_n(rst_n),
.sample_clk(sample_clkrx)
);
//RXDclk

clk2    sampleclk2(
.clk(clk),
.rst_n(rst_n),
.sample_clk(sample_clktx)
);
//TXDclk

clks  show(
.clk(clk),
.rst_m(rst_m),
.sample_clk(clks)
);
//showclk

rxd2   rxd1(
.sample_clk(sample_clkrx),
.clk(clk),
.fr(fr),
.rst_n(rst_n),
.parity_en(parity_en),
.parity_kind(parity_kind),
.rxd(rxd),
.r1(r1),
.r2(r2),
.r3(r3),
.r4(r4)
);


txd  txd1(
.sample_clk(sample_clktx),
.rst_n(rst_n),
.clk(clk),
.ft(ft),
.button(buttons[1:0]),
.parity_en(parity_en),
.parity_kind(parity_kind),
.send_data(send_data),
.sd_en(sd_en),
.txd(txd)
);

data  data1(
.clk(clk),
.rst_n(rst_n),
.r1(r1),
.r2(r2),
.r3(r3),
.r4(r4),
.rcv_data(rcv_data),
.button(buttons[3:2])
);

showr showr1(
.clks(clks),
.rst_n(rst_n),
.rcv_rxd(rcv_data),
.send_data(send_data),
.segments(segments),
.sel(sel)
);
endmodule
