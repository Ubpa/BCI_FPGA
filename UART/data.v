`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:07 12/02/2016 
// Design Name: 
// Module Name:    data 
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
module data(
input [7:0] r1,r2,r3,r4,
input [1:0] button,
input clk,rst_n,
output reg [7:0] rcv_data
);

reg bf3,bf2;
reg [1:0] ar;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    ar<=0;
  else
  begin 
  if(button[0]&&bf3)
    begin
	 ar<= ar+1;
	 bf3<=0;
	 end
    else if(button[0]==0)  bf3<=1;
    else ar<=ar;
	 
   if(button[1]&&bf2)
    begin	 
	 ar<= ar+ 3;
	 bf2<=0;
	 end
	else if(button[1]==0)
	   bf2<=1;
	else
	   ar<=ar;
  end
end

always@(*)
begin
case(ar)
0:  rcv_data<=r1;
1:  rcv_data<=r2;
2:  rcv_data<=r3;
3:  rcv_data<=r4;
default: rcv_data<=0;
endcase
end

endmodule
