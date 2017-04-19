`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:40 11/30/2016 
// Design Name: 
// Module Name:    rxd 
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
module rxd(
input sample_clk,rst_n,
input parity_en,
input parity_kind,
input rxd,
output reg [7:0] rcv_data
    );
//��������

reg [2:0] curr_state,next_state;
parameter idle=0,start=1,shift=2,parity=3,stop=4,error=5;
// ��6��״̬
reg  f;//�����־
reg  parity1;//��żУ��
reg [3:0] sample_counter;
reg [3:0] bit_counter;//λ����
reg       rc_rxd;
reg [7:0] rcv_sr;//���ݻ�����

always@(posedge sample_clk or negedge rst_n)
begin
		if(~rst_n)
		  curr_state <= idle;
		 else
		  curr_state <= next_state;
end

always@(*)
//״̬ת��ͼ,f/rxd/bit_counterΪ����
begin 
 case(curr_state)
 idle:    if(~rc_rxd) next_state<=start;
              else next_state<=idle;		 
 
 start:    next_state<=shift;
 
 shift:   if(bit_counter==8) 
            if(parity_en) next_state<=parity;
		        else next_state<=stop;
		     else next_state<=shift;    
			
 parity:   if(f) next_state<=stop; 
             else next_state<=error;
			  
 stop:     if(f) next_state<=idle;
             else  next_state<=error;
	 
 default: next_state<=error;//�����־��һֱά����error״̬
 endcase
end

always@(posedge sample_clk or negedge rst_n)
//����״̬�Ĳ���
begin
  if(~rst_n)
  begin 
        bit_counter <=0;
		  sample_counter<=0;
		  rc_rxd<=1;
		  f<=1;
		  rcv_data <=8'b1111_1111;
		  rcv_sr   <=8'b0000_0000;		  
		  if(parity_kind) parity1<=1;//��
		  else   parity1<=0;//ż
  end
  else 
  case(curr_state)
  idle : if(sample_counter==8)
              begin 
				  rc_rxd<=rxd;
				  sample_counter<=0; 
				  end
         else sample_counter<=sample_counter+1;
  start: begin rc_rxd<=1; rcv_sr<=0; end
  shift: if(sample_counter==15)
           begin 
			      sample_counter<=0;
					rcv_sr<={rxd,rcv_sr[7:1]};
               bit_counter <= bit_counter+1;
					if(rxd) parity1<=parity1+1;
					else parity1<=parity1;				
           end
         else 
			  sample_counter<=sample_counter+1;			

 parity :  if(sample_counter==15)
            begin 
				sample_counter<=0;
            if(rxd == parity1)    
				     f<=1;  
				else f<=0;
				end
			else sample_counter<=sample_counter+1;	
  
  stop  :begin 
            rcv_data<=rcv_sr;
				bit_counter<=0;
            sample_counter<=0;				
			 end
  default: f<=0;
  endcase
end


endmodule
