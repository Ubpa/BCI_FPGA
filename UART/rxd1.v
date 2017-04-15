`timescale 1ns / 1ps
//receiveflag表示状态，fr用于检测就校验
//r1~8是用于存储64位数据，为加密做好准备

module rxd1(
input sample_clk,rst_n,clk,
input rxd,
input parity_en,parity_kind,
output reg fr,
output reg [7:0]r1,
output reg [7:0]r2,
output reg [7:0]r3,
output reg [7:0]r4,
output reg [7:0]r5,
output reg [7:0]r6,
output reg [7:0]r7,
output reg [7:0]r8
);

initial begin fr<=0;end

reg [2:0] wr;
reg [1:0] receiveflag;
reg [2:0] sample_counter;
reg [3:0] bit_counter;
reg [7:0] rcv_sr,rcv_data;
reg  parity1;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    begin
	   wr<=7;
      receiveflag<=2'b00;
      sample_counter<=3'd0;
      bit_counter<=4'd0;
      rcv_data<=8'b1111_1111;
      rcv_sr<=8'd0;
		fr<=1;
		if(parity_kind) parity1<=1;
		  else   parity1<=0;
    end
  else
    if(sample_clk)
      begin
        if((receiveflag==2'b00)&&(rxd==1'b0))  
             begin
				 if(fr==0)   receiveflag<=2'b00;     
             else
				 begin
					if(sample_counter==3'd3)         
                 begin
                 sample_counter<=3'd0;
                 receiveflag<=2'b01;              
                 bit_counter<=4'd0;
					  wr<=wr+1;
                 end
               else
                 sample_counter<=sample_counter+1;
             end
				end
        else if(receiveflag==2'b01)
            begin
              if(sample_counter==3'd7)             
                begin
                  if(bit_counter==4'd8)             
                    begin
						   if(parity_en==0)
                      receiveflag<=2'b11;          
                     else
                      receiveflag<=2'b10;							
                    end
                   else
                    begin
                      if(rxd==1) parity1<=parity1+1;
					           else parity1<=parity1;		
							 rcv_sr<={rxd,rcv_sr[7:1]};     
                      sample_counter<=3'd0;           
                      bit_counter<=bit_counter+1;   
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
          else                        
              begin
				    if(parity_kind) parity1<=1;
		             else   parity1<=0; 
                rcv_data<=rcv_sr;					 
                receiveflag<=2'b00;
              end
       end
end

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
   begin
	r1<=0;
	r2<=0;
	r3<=0;
	r4<=0;
	r5<=0;
	r6<=0;
	r7<=0;
	r8<=0;
	end
else case(wr)
3'd0: r1<=rcv_data;
3'd1: r2<=rcv_data;
3'd2: r3<=rcv_data;
3'd3: r4<=rcv_data;
3'd4: r5<=rcv_data;
3'd5: r6<=rcv_data;
3'd6: r7<=rcv_data;
3'd7: r8<=rcv_data;
default:r1<=0;
endcase
end

endmodule
