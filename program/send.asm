					.ORIG  x3000
					LEA   R0, DATA_BUFF
					AND   R1, R0, #0
					JSR   uart_send
					HALT
uart_send;( R0 = address of DATA_BUFF, R1 = num of data )
					ADD   R6, R6, #-2
					STR   R2, R6, #0
					STR   R3, R6, #1
SEND_LOOP			ADD   R1, R1, #-1
					BRn   SEND_DONE
					LDR   R2, R0, #0
					ADD   R0, R0, #1
WAIT				LDI	  R3, UARTSR_ADDR
					BRzp  WAIT
					STI	  R2, UARTDR_ADDR
					BR    SEND_LOOP
SEND_DONE			LDR   R2, R6, #0
					LDR   R3, R6, #1
					ADD   R6, R6, #2
					RET
UARTSR_ADDR			.FILL x7E14
UARTDR_ADDR			.FILL x7E16
DATA_BUFF           .FILL x0031
					.FILL x0075
					.FILL x0012
					.END