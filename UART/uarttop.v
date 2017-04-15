`timescale 1ns / 1ps
module uart(
input clk,rst_n,
input parity_en,parity_kind,
input rxd,
output fr,
output  [7:0]r1,
output  [7:0]r2,
output  [7:0]r3,
output  [7:0]r4,
output  [7:0]r5,
output  [7:0]r6,
output  [7:0]r7,
output  [7:0]r8
);

wire sample_clkrx;

clk1    sampleclk1(
.clk(clk),
.rst_n(rst_n),
.sample_clk(sample_clkrx)
);     //产生工作时钟，是波特率的八倍


rxd1   rxd1(
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
.r4(r4),
.r5(r5),
.r6(r6),
.r7(r7),
.r8(r8)
);  //接收模块 

endmodule









