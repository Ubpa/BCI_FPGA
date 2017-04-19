`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:31 12/02/2016 
// Design Name: 
// Module Name:    fd 
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
module fdd(
input        clk,
input        rst_n,
input  [3:0] button,
output reg [3:0]  buttons
    );
	 
parameter SAMPLE_TIME = 150_000;

reg [25:0] count_low2,count_low3,count_low0,count_low1;
reg [25:0] count_high2,count_high3,count_high0,count_high1;

always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_low2 <=0;
 else if(button[0] ==1'b0)
  count_low2 <= count_low2 + 1;
 else
  count_low2 <= 0;

always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_high2<=0;
 else if(button[0] ==1'b1)
  count_high2 <= count_high2 + 1;
 else
  count_high2 <= 0;
  
always@(posedge clk or negedge rst_n)
if(~rst_n)
  buttons[0] <= 0;
else if(count_high2 == SAMPLE_TIME)
  buttons[0] <= 1;
 else if(count_low2 == SAMPLE_TIME)
  buttons[0] <= 0;
//
always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_low3 <=0;
 else if(button[1] ==1'b0)
  count_low3 <= count_low3 + 1;
 else
  count_low3 <= 0;

always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_high3<=0;
 else if(button[1] ==1'b1)
  count_high3 <= count_high3 + 1;
 else
  count_high3 <= 0;
  
always@(posedge clk or negedge rst_n)
if(~rst_n)
  buttons[1] <= 0;
else if(count_high3 == SAMPLE_TIME)
  buttons[1] <= 1;
 else if(count_low3 == SAMPLE_TIME)
  buttons[1] <= 0;
//
always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_low0 <=0;
 else if(button[2] ==1'b0)
  count_low0 <= count_low0 + 1;
 else
  count_low0 <= 0;

always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_high0<=0;
 else if(button[2] ==1'b1)
  count_high0 <= count_high0 + 1;
 else
  count_high0 <= 0;
  
always@(posedge clk or negedge rst_n)
if(~rst_n)
  buttons[2] <= 0;
else if(count_high0 == SAMPLE_TIME)
  buttons[2] <= 1;
 else if(count_low0 == SAMPLE_TIME)
  buttons[2] <= 0;
//
always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_low1 <=0;
 else if(button[3] ==1'b0)
  count_low1 <= count_low1 + 1;
 else
  count_low1 <= 0;

always@(posedge clk or negedge rst_n)
if(~rst_n)
  count_high1<=0;
 else if(button[3] ==1'b1)
  count_high1 <= count_high1 + 1;
 else
  count_high1 <= 0;
  
always@(posedge clk or negedge rst_n)
if(~rst_n)
  buttons[3] <= 0;
else if(count_high1 == SAMPLE_TIME)
  buttons[3] <= 1;
 else if(count_low1 == SAMPLE_TIME)
  buttons[3] <= 0;
endmodule


