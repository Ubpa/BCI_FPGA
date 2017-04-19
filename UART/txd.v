`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:55 11/30/2016 
// Design Name: 
// Module Name:    txd 
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
module txd(
input sample_clk,rst_n,clk,
input parity_en,parity_kind,
input [1:0] button,
output reg [7:0] send_data,
input sd_en,
output reg txd,ft
    );
reg bf3,bf2;
  
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    send_data[7:0]<=0;
else 
	begin 
  if(button[1]&&bf3)
    begin
	 send_data[7:4]<= send_data[7:4]+1;
	 bf3<=0;
	 end
    else if(button[1]==0)  bf3<=1;
    else send_data[7:0]<=send_data[7:0];
	 
   if(button[0]&&bf2)
    begin	 
	 send_data[3:0]<=send_data[3:0]+1;
	 bf2<=0;
	 end
	else if(button[0]==0)
	   bf2<=1;
	else
	   send_data[7:0]<=send_data[7:0];
  end
end


//发送串行数据
reg [3:0] bit_counter;      
reg  parity1;
reg [2:0] curr_state,next_state;
parameter idle=0,start=1,shift=2,parity=3,stop=4,error=5;
// 共6个状态	

always@(posedge sample_clk or negedge rst_n)
	begin
		if(~rst_n)
		  curr_state <= 0;
		 else
		  curr_state <= next_state;
	end

always@(*)

begin 
 case(curr_state)
 idle:    if(sd_en) begin next_state<=start; end
            else next_state<=idle;		 
 
 start:    next_state<=shift;
 
 shift:  if(bit_counter==7)
            if(parity_en) next_state<=parity;
		        else next_state<=stop;
		    else next_state<=shift;    

 parity:   if(ft==1) next_state<=stop; 
             else next_state<=error;
 
 stop:   if(ft==1) next_state<=idle;
            else  next_state<=error;
 
 default: next_state<=error;//错误标志，一直维持在error状态
 endcase
end

always@(posedge sample_clk or negedge rst_n)
//各个状态的操作
begin
  if(~rst_n)
  begin 
        ft<=1;
        bit_counter <=0;
		  txd<=1;
		  if(parity_kind) parity1<=1;//奇
		  else   parity1<=0;//偶
  end
  else 
  case(curr_state)
  idle : txd<=1;
  start: txd<=0;
  shift:   begin 
					txd<=send_data[bit_counter];
               bit_counter <= bit_counter+1;
			 		if(txd==1) parity1<=parity1+1;
					else parity1<=parity1;					
           end			  
  parity:  txd<=parity1;
  stop  : begin
              bit_counter<=0;  
		        txd<=0;
          end				  
  default: ft<=0;
  endcase
end

endmodule