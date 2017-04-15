`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:58 11/30/2016 
// Design Name: 
// Module Name:    clk 
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
module clk2(
input    clk,rst_n,
output reg sample_clk
    );
	 


reg [14:0] clk_counter;

always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
     clk_counter<=15'b0;           
  else
     if(clk_counter==15'd5208)          
       clk_counter<=15'b0;
     else clk_counter<=clk_counter+1;
end



always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
    sample_clk<=1'd0;
  else
    if(clk_counter==15'd5208)        
       sample_clk<=1'd1;
    else
       sample_clk<=1'd0;
end


endmodule
