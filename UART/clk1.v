`timescale 1ns / 1ps

module clk1(
input    clk,rst_n,
output reg sample_clk
    );
	 
reg [14:0] clk_counter;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
     clk_counter<=15'b0;            //��λ��0
  else
     if(clk_counter==13'd651)            //651һ��ѭ����������ò�����Ϊ9600��������50MHzʱ�ӣ�����һ��������5208�����ڣ�5208/8=651��������ʱ���ǲ����ʵ�8
													 //���������ݴ����е㣬����������Ϊ�ȶ�����ÿ�ĸ�sample����clk����һ������
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
