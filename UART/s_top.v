`timescale 1ns / 1ps

module s_top(clk,rst_m,parity_en,parity_kind,read,data,txd_en,txd,ft);
input clk,rst_m,parity_en,parity_kind,read;
input [64:1]data;
input txd_en;
output txd,ft;
wire sample_clktx;

clk2    sampleclk2(
.clk(clk),
.rst_n(rst_m),
.sample_clk(sample_clktx)
);//产生工作时钟，是波特率的八倍

transfer      u_tranfser(
.sample_clk(sample_clktx),
.rst_m(rst_m),
.clk(clk),
.parity_en(parity_en),
.parity_kind(parity_kind),
.read(read),
.data(data),
.txden(txd_en),
.txd(txd),
.ft(ft)
);//发送模块

endmodule
