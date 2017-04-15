`timescale 1ns / 1ps
//uart_top是接收部分
//key+round+swap+iip是加密
//txd是数据发送部分
//RST,rst_n,rst_m是加密，接收、发送的复位使能信号

module Des_Top(CLK, RST,rst_n,rst_m,parity_en,parity_kind,rxd,read,txd_en,txd,ft,fr);
input CLK;
input RST,rst_n,rst_m;
input parity_en,parity_kind,rxd,read,txd_en;

output txd,ft,fr;
wire CLK;
wire RST,rst_n,rst_m;
wire parity_en,parity_kind,rxd,read,txd_en;
wire txd,ft,fr;

wire [7:0]r1,r2,r3,r4,r5,r6,r7,r8;
wire [64 : 1]CIPHER_TEXT;

uart  u_uart(
.clk(CLK),
.rst_n(rst_n),
.parity_en(parity_en),
.parity_kind(parity_kind),
.rxd(rxd),
.fr(fr),
.r1(r1),
.r2(r2),
.r3(r3),
.r4(r4),
.r5(r5),
.r6(r6),
.r7(r7),
.r8(r8)
);


s_top  u_txd(
.clk(CLK),
.rst_m(rst_m),
.parity_en(parity_en),
.parity_kind(parity_kind),
.read(read),
.data(CIPHER_TEXT),
.txd_en(txd_en),
.txd(txd),
.ft(ft)
);
 
 endmodule
