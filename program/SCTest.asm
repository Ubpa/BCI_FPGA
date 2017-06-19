                    .ORIG x3000
					LD    R5, TWO
					LD    R0, SC_RDCurrent_ADDR
					ADD   R0, R0, R5
					LDR   R1, R0, #0; R1 = new RD current
					
					AND   R0, R0, #0
					ADD   R0, R0, #6
					LEA   R1, SAMPLE1
					LD    R2, SC_BUFFER_ADDR
LP1					ADD   R0, R0, #-1
					BRn   LP1_D
					ADD   R3, R1, R0
					LDR   R3, R3, #0
					ADD   R4, R2, R0
					STR   R3, R4, #0
					BR    LP1
LP1_D				ADD   R3, R2, #6
					STR   R5, R3, #0
					
					LD    R5, ONE
					AND   R0, R0, #0
					ADD   R0, R0, #6
					LEA   R1, SAMPLE2
					LD    R2, SC_BUFFER_ADDR
LP2					ADD   R0, R0, #-1
					BRn   LP2_D
					ADD   R3, R1, R0
					LDR   R3, R3, #0
					ADD   R4, R2, R0
					STR   R3, R4, #0
					BR    LP2
LP2_D				ADD   R3, R2, #6
					STR   R5, R3, #0
					
					LD    R5, TWO
					AND   R0, R0, #0
					ADD   R0, R0, #6
					LEA   R1, SAMPLE2
					LD    R2, SC_BUFFER_ADDR
LP3					ADD   R0, R0, #-1
					BRn   LP3_D
					ADD   R3, R1, R0
					LDR   R3, R3, #0
					ADD   R4, R2, R0
					STR   R3, R4, #0
					BR    LP3
LP3_D				ADD   R3, R2, #6
					STR   R5, R3, #0
					
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
					LEA   R0, UART_BUFFER
					STR   R1, R0, #0
					STR   R5, R0, #1
					LD    R1, TWO
					JSR   uart_send
					BR    SC_DONE

uart_send;( R0 = address of SC_BUFFER, R1 = num of data )
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

TIME				.FILL #0100
NUM_CHIP			.FILL x0008
max30102_WR_address .FILL x00AE
FIFO_DATA_address   .FILL x0007
TEMP_address		.FILL x001F
LED1I_address		.FILL x000C
FIFO_RD_PTR_address .FILL x0006
FIFO_WR_PTR_address .FILL x0004
TWO					.FILL x0002
ONE                 .FILL x0001
ZERO                .FILL x0000
SAMPLE_SIZE			.FILL x0006
ASCII_0				.FILL x0030
SCLER_ADDR			.FILL x7E10
SDASR_ADDR			.FILL x7E0D
CHECK_SIZE			.FILL x0010
CHECK_DATA			.FILL x00FF
					.FILL x00FF
					.FILL x00FF
CHECK_DATA_SIZE     .FILL x0003
UARTSR_ADDR			.FILL x7E14
UARTDR_ADDR			.FILL x7E16
SC_BUFFER_ADDR      .FILL x7E20; RED[23:16], RED[15:8], RED[7:0], IR[23:16], IR[15:8], IR[7:0], ID of chip
SC_change_ADDR		.FILL x7E30
SC_RDCurrent_ADDR   .FILL x7E40
UART_BUFFER			.BLKW x0002
SAMPLE1				.FILL x0000
					.FILL #200
					.FILL #200
					.FILL x0000
					.FILL x0000
					.FILL #100
SAMPLE2				.FILL x0000
					.FILL #220
					.FILL #220
					.FILL x0000
					.FILL x0000
					.FILL #130
                    .END