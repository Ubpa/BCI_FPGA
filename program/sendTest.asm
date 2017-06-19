	.ORIG x3000
					LD    R0, SIZE
					LEA   R1, DATA
LOOP				ADD   R0, R0, #-1
					BRn   DONE
WAIT				LDI	  R2, UARTSR_ADDR
					BRzp  WAIT
					LDR   R2, R1, #0
					STI	  R2, UARTDR_ADDR
					ADD   R1, R1, #1
					BR    LOOP
DONE				HALT

UARTSR_ADDR			.FILL x7E14
UARTDR_ADDR			.FILL x7E16
SIZE				.FILL 0x0005
DATA				.FILL 0x0010
					.FILL 0x0011
					.FILL 0x0012
					.FILL 0x00F4
					.FILL 0x00F6
					.END