`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:33 12/01/2016 
// Design Name: 
// Module Name:    clk1 
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
module CLK1(
input    clk,rst_n,
output reg sample_clk
    );
	 

//������Ƶ����651��Ƶ50M,8��ȡ��
reg [14:0] clk_counter;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
     clk_counter<=15'b0;            //��λ��0
  else
     if(clk_counter==13'd651)            //651һ��ѭ��
       clk_counter<=15'b0;
     else clk_counter<=clk_counter+1;
end


//��������ʱ��sample_clk

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    sample_clk<=1'd0;
  else
    if(clk_counter==13'd651)           //����clk_counterΪ651ʱs_c��
       sample_clk<=1'd1;
    else
       sample_clk<=1'd0;
end


endmodule
