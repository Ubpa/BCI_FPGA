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
//接收数据

reg [2:0] curr_state,next_state;
parameter idle=0,start=1,shift=2,parity=3,stop=4,error=5;
// 共6个状态
reg  f;//错误标志
reg  parity1;//奇偶校验
reg [3:0] sample_counter;
reg [3:0] bit_counter;//位计数
reg       rc_rxd;
reg [7:0] rcv_sr;//数据缓存器

always@(posedge sample_clk or negedge rst_n)
begin
		if(~rst_n)
		  curr_state <= idle;
		 else
		  curr_state <= next_state;
end

always@(*)
//状态转换图,f/rxd/bit_counter为输入
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
	 
 default: next_state<=error;//错误标志，一直维持在error状态
 endcase
end

always@(posedge sample_clk or negedge rst_n)
//各个状态的操作
begin
  if(~rst_n)
  begin 
        bit_counter <=0;
		  sample_counter<=0;
		  rc_rxd<=1;
		  f<=1;
		  rcv_data <=8'b1111_1111;
		  rcv_sr   <=8'b0000_0000;		  
		  if(parity_kind) parity1<=1;//奇
		  else   parity1<=0;//偶
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
