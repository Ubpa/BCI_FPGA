`timescale 1ns / 1ps

module transfer(
input sample_clk,rst_m,clk,
input parity_en,parity_kind,read,
input [64:1] data,
input txden,
output reg txd,ft
    );

initial begin ft<=0;end

reg [2:0]ar;
reg [7:0]send_data;
reg buf_0,buf_1;
reg buf_2,buf_3;
reg flag;

always@(posedge clk or negedge rst_m)
begin
if(~rst_m)
begin
buf_0<=0;
buf_1<=0;
//buf_2<=0;
//buf_3<=0;
end
else
begin
	buf_0<=txden;
	buf_1<=buf_0;
	//buf_2<=read;
	//buf_3<=buf_2;
end
end


always@(posedge clk or negedge rst_m)
begin
if(~rst_m)
begin
//buf_0<=0;
//buf_1<=0;
buf_2<=0;
buf_3<=0;
end
else
begin
	//buf_0<=txden;
	//buf_1<=buf_0;
	buf_2<=read;
	buf_3<=buf_2;
end
end


wire sd_en;
assign sd_en =(~buf_1)&(buf_0);    //边沿检测，检测txden的上升沿，txden通过开关输入，txden每出现一个上升沿，状态机开始工作一次，发送八个数据
wire read_en;
assign read_en=(~buf_3)&(buf_2);    //read_en每出现一个正信号，读地址加1，装入新的八个数据 
 
always@(posedge clk or negedge rst_m)
begin
  if(~rst_m)
  begin
   send_data[7:0]<=0;
	end
else 
begin
	case(ar)
	3'd0: send_data<=data[8:1];
	3'd1: send_data<=data[16:9];
	3'd2: send_data<=data[24:17];
	3'd3: send_data<=data[32:25];
	3'd4: send_data<=data[40:33];
	3'd5: send_data<=data[48:41];
	3'd6: send_data<=data[56:49];
	3'd7: send_data<=data[64:57];
	default: send_data<=8'hef;
	endcase
end
end

always@(posedge clk or negedge rst_m)
begin
if(~rst_m) ar<=0;
else if(read_en)
ar<=ar+1'b1;
else ar<=ar;
end

reg [3:0] bit_counter;      
reg  parity1;
reg [2:0] curr_state,next_state;
parameter idle=0,start=1,shift=2,parity=3,stop=4,error=5;	

always@(posedge sample_clk or negedge rst_m)
	begin
		if(~rst_m)
		  curr_state <= 0;
		 else
		  curr_state <= next_state;
	end

always@(*)
begin 
	if(sd_en) flag=1;
 case(curr_state)
 idle:    if(flag) next_state<=start;
            else next_state<=idle;		 
 
 start:    next_state<=shift;
 
 shift:  if(bit_counter==7)
            if(parity_en) next_state<=parity;
		        else next_state<=stop;
		    else next_state<=shift;    

 parity:   if(ft==1) next_state<=stop; 
             else next_state<=error;
 
 stop:   if(ft==1) begin next_state<=idle;flag=0;end
            else  begin next_state<=error;flag=0;end
 
 default: next_state<=error;
 endcase
end

always@(posedge sample_clk or negedge rst_m)
begin
  if(~rst_m)
  begin 
        ft<=1;
        bit_counter <=0;
		  txd<=1;
		  if(parity_kind) parity1<=1;
		  else   parity1<=0;
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
