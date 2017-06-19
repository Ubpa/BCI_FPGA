					.ORIG x3000
					AND   R5, R5, #0
					ADD   R5, R5, #1
					LD    R0, SC_change_ADDR
					ADD   R0, R0, R5
					LDR   R0, R0, #0
					BRp   SETCURRENT
SC_DONE				HALT

SETCURRENT			LD    R0, SC_RDCurrent_ADDR
					ADD   R0, R0, R5
					LDR   R1, R0, #0; R1 = new RD current
					AND   R0, R0, #0
					ADD   R0, R0, #12; R0 = LED1(RED) current register adress
					;JSR   max30102_Bus_Write
					BR    SC_DONE
					
SC_change_ADDR		.FILL x7E30
SC_RDCurrent_ADDR   .FILL x7E40
					.END