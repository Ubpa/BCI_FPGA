`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:21:45 12/02/2016 
// Design Name: 
// Module Name:    RXD 
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
module RXD( rst_n, parity_en, parity_kind, rxd, clk, r1, r2, r3, r4, fr );
input rst_n, parity_en, parity_kind, rxd, clk;
output reg [7:0] r1, r2, r3, r4;
output reg fr;

parameter times = 16'h0036;

wire [15:0] cnt;
reg [1:0] wr;
reg [1:0] receiveflag;
reg [2:0] sample_counter;
reg [3:0] bit_counter;
reg [7:0] rcv_sr,rcv_data;
reg reset, parity1;

COUNTER counter( times, clk, reset, cnt, c );//9600 bps
initial reset = 0;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    begin
	   wr<=3;
      receiveflag<=2'b00;
      sample_counter<=3'd0;
      bit_counter<=4'd0;
      rcv_data<=8'b1111_1111;
      rcv_sr<=8'd0;
		fr<=1;//��ʼʱĬ��֮ǰ����ȷ�Ĵ���
		if(parity_kind) parity1<=1;//��
		  else   parity1<=0;//ż
    end
  else
    if(c)
      begin
        if((receiveflag==2'b00)&&(rxd==1'b0))   //�����ʼλ
             begin
				 if(fr==0)   receiveflag<=2'b00;      //��һλ����ʧ�ܣ�ֹͣ��������
             else
				 begin
					if(sample_counter==3'd3)            //ȷ����ʼλ�е�
                 begin
                 sample_counter<=3'd0;
                 receiveflag<=2'b01;              //��1����ʼ����
                 bit_counter<=4'd0;
					  wr<=wr+1;
                 end
               else
                 sample_counter<=sample_counter+1;
             end
				end
        else if(receiveflag==2'b01)
            begin
              if(sample_counter==3'd7)             //����һλ���е�
                begin
                  if(bit_counter==4'd8)             //�������
                    begin
						   if(parity_en==0)
                      receiveflag<=2'b11;           //��У��
                     else
                      receiveflag<=2'b10;							//��2
                    end
                   else
                    begin
                      if(rxd==1) parity1<=parity1+1;
					           else parity1<=parity1;		
							 rcv_sr<={rxd,rcv_sr[7:1]};     //����������������λ����λ
                      sample_counter<=3'd0;           
                      bit_counter<=bit_counter+1;    //λ������+1
                    end
                end
              else
                sample_counter<=sample_counter+1;
             end
			 else if(receiveflag==2'b10)
			      begin
					 begin
					 receiveflag<=2'b11;
					 if(rxd==parity1)
					   fr<=1;
				    else 
					   fr<=0;
				    end
					 end
          else                            //��־Ϊ3ʱ�������
              begin
				    if(parity_kind) parity1<=1;//��
		             else   parity1<=0;//ż   
                rcv_data<=rcv_sr;					 //������rcv_data��
                receiveflag<=2'b00;
              end
       end
end

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
   begin
	r1<=0;r2<=0;r3<=0;r4<=0;
	end
else case(wr)
0: r1<=rcv_data;
1: r2<=rcv_data;
2: r3<=rcv_data;
3: r4<=rcv_data;
default:r1<=0;
endcase
end

endmodule
