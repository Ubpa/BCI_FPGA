`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:00:25 12/01/2016 
// Design Name: 
// Module Name:    showclk 
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
module clks(
input    clk,rst_m,
output reg [1:0] sample_clk
    );
reg [25:0] clk_counter;

always@(posedge clk or posedge rst_m)
begin
  if(rst_m)
     clk_counter<=25'b0;            //¸´Î»ÖÃ0
  else
     if(clk_counter==25'd50_000)    
	  clk_counter<=26'b0;
     else clk_counter<=clk_counter+1;
end

always@(posedge clk or posedge rst_m)
begin
  if(rst_m)
    sample_clk<=2'b0;
  else
    if(clk_counter==25'd50_000)           
       sample_clk<=sample_clk + 2'b1;
    else
       sample_clk<=sample_clk;
end


endmodule
