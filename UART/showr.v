`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:49:44 12/01/2016 
// Design Name: 
// Module Name:    showr 
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
module showr(
input  [1:0]clks,
input   rst_n,
input [7:0] send_data,
input  [7:0] rcv_rxd,
output reg[7:0] segments,
output reg[3:0] sel
    );
reg [3:0] data;

always@(*)
begin
  case(clks)
  0: if(rst_n)
     begin
     sel<=4'b1101;
	  data<=rcv_rxd[7:4];
     end  
	  else begin data<=4'b1111;sel<=4'b1101;
	  end
  1: if(rst_n)
     begin
     sel<=4'b1110;
	  data<=rcv_rxd[3:0];
	  end
	  else begin
	  data<=4'b1111;sel<=4'b1110;
	  end
  2:begin
     sel<=4'b1011;
	  data<=send_data[3:0];
	  end
  3:if(rst_n)
     begin
     sel<=4'b0111;
	  data<=send_data[7:4];
	  end
	  else
     sel<=4'b1111;	
	default:sel<=4'b1111;
endcase
end

always@(*)
case(data)
        4'b0000: 
		           segments =  8'b0000_0011;           	  
		  4'b0001:  
		           segments =  8'b1001_1111;         
		  4'b0010:  
		           segments =  8'b0010_0101;   		  
		  4'b0011: 
		           segments =  8'b0000_1101;         
		  4'b0100: 
		           segments =  8'b1001_1001;
		  4'b0101:  
		           segments =  8'b0100_1001;	           
		  4'b0110: 
		           segments =  8'b0100_0001;		           
		  4'b0111: 
		           segments =  8'b0001_1111;		           
		  4'b1000: 
         		  segments =  8'b0000_0001;		           
		  4'b1001: 
          		  segments =  8'b0000_1001;		           
		  4'b1010: 
           		  segments =  8'b0001_0001;		          
		  4'b1011: 
         		  segments =  8'b1100_0001;	          
		  4'b1100: 
		           segments =  8'b0110_0011;		           
		  4'b1101: 
		           segments =  8'b1000_0101;		           
		  4'b1110: 
		           segments =  8'b0110_0001;		           
		  4'b1111: 
		           segments =  8'b0111_0001;	          
		  default : 
		            segments = 8'b0000_0000;
endcase

endmodule
