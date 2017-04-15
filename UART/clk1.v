`timescale 1ns / 1ps

module clk1(
input    clk,rst_n,
output reg sample_clk
    );
	 
reg [14:0] clk_counter;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
     clk_counter<=15'b0;            //复位置0
  else
     if(clk_counter==13'd651)            //651一次循环，这里采用波特率为9600，所以用50MHz时钟，发送一个数据需5208个周期，5208/8=651，即工作时钟是波特率的8
													 //倍，在数据传送中点，接收数据最为稳定，即每四个sample——clk接收一个数据
       clk_counter<=15'b0;
     else clk_counter<=clk_counter+1;
end


//产生采样时钟sample_clk

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    sample_clk<=1'd0;
  else
    if(clk_counter==13'd651)           //仅当clk_counter为651时s_c高
       sample_clk<=1'd1;
    else
       sample_clk<=1'd0;
end


endmodule
