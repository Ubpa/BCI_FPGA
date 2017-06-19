                    .ORIG x3000
					LD    R0, TIME
					TRAP  x27
					LEA   R0, CHECK_DATA
					LD    R1, CHECK_DATA_SIZE
					JSR   uart_send
					LD    R4, CHECK_SIZE
					LD    R1, NUM_CHIP
INIT_ALL_CHIP		ADD   R1, R1, #-1
					BRn   LOOP_READ
					STI   R1, SDASR_ADDR
					JSR   max30102_init
					BR    INIT_ALL_CHIP
LOOP_READ			LD    R5, NUM_CHIP; R5 : chip ID
LOOP_CHIP			ADD   R5, R5, #-1
					BRn   LOOP_READ
					STI   R5, SDASR_ADDR
					LD    R0, SC_BUFFER_ADDR
					JSR   max30102_Sample_Read
					ADD   R0, R0, #0
					BRz   LOOP_CHIP
					LD    R0, SC_BUFFER_ADDR
					STR   R5, R0, #6; SC_BUFFER[6] == ID of chip
					LD    R1, SAMPLE_SIZE
					ADD   R1, R1, #1
					JSR   uart_send
					LD    R0, SC_change_ADDR
					ADD   R0, R0, R5
					LDR   R0, R0, #0
					BRp   SETCURRENT
SC_DONE				ADD   R4, R4, #-1
					BRp   LOOP_CHIP
					LEA   R0, CHECK_DATA
					LD    R1, CHECK_DATA_SIZE
					JSR   uart_send
					LD    R4, CHECK_SIZE
					BR    LOOP_CHIP

SETCURRENT			LD    R0, SC_RDCurrent_ADDR
					ADD   R0, R0, R5
					LDR   R1, R0, #0; R1 = new RD current
					AND   R0, R0, #0
					ADD   R0, R0, #12; R0 = LED1(RED) current register adress
					JSR   max30102_Bus_Write
					BR    SC_DONE

max30102_Bus_Write;( R0 = (u8) Register_Address, R1 = (u8) Word_Data )
                    ADD   R6, R6, #-2
                    STR   R0, R6, #0
                    STR   R7, R6, #1
                    TRAP  x28; i2c start
                    LD    R0, max30102_WR_address
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
                    ADD   R0, R0, #0
                    BRp   WR_FAIL
                    LDR   R0, R6, #0
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
                    ADD   R0, R0, #0
                    BRp   WR_FAIL
                    ADD   R0, R1, #0
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
WR_FAIL             TRAP  x2C; i2c stop
                    LDR   R0, R6, #0
                    LDR   R7, R6, #1
                    ADD   R6, R6, #2
                    RET

max30102_Bus_Read;( R0 = (u8) Register_Address, R1 = n bits, R2 = address of data )
                    ADD   R6, R6, #-2
                    STR   R0, R6, #0
                    STR   R7, R6, #1
                    TRAP  x28; i2c start
                    LD    R0, max30102_WR_address
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
                    ADD   R0, R0, #0
                    BRp   RD_FAIL
                    LDR   R0, R6, #0
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
                    ADD   R0, R0, #0
                    BRp   RD_FAIL
                    TRAP  x28; i2c start
                    LD    R0, max30102_WR_address
                    ADD   R0, R0, #1
                    TRAP  x29; i2c sent byte
                    TRAP  x2A; i2c wait ack
                    ADD   R0, R0, #0
                    BRp   RD_FAIL
RD_LOOP				TRAP  x2B; i2c read byte
					STR   R0, R2, #0
					ADD   R2, R2, #1
					ADD   R1, R1, #-1
					BRz   RD_NACK
					TRAP  x2E; i2c master ack
					BR    RD_LOOP
RD_NACK				STR   R0, R6, #0; 貌似下面两个函数会修改 R0
					TRAP  x2A; i2c nack
RD_FAIL             TRAP  x2C; i2c stop
					LDR   R0, R6, #0; final 8 bits data
                    LDR   R7, R6, #1
                    ADD   R6, R6, #2
                    RET; R0 == final 8 bits data, R2 == address of data + n

max30102_Sample_Read;( R0 = address of SC_BUFFER )
					ADD   R6, R6, #-3
					STR   R1, R6, #0
					STR   R2, R6, #1
					STR   R7, R6, #2
					ADD   R2, R0, #0
					LD    R0, FIFO_RD_PTR_address
					LD    R1, ONE
					JSR   max30102_Bus_Read; 读 FIFO_RD_PTR_address
					LD    R0, FIFO_WR_PTR_address
					LD    R1, ONE
					JSR   max30102_Bus_Read; 读 FIFO_WD_PTR
					LDR   R0, R2, #-1
					LDR   R1, R2, #-2
					ADD   R2, R2, #-1
					NOT   R1, R1
					ADD   R1, R1, #1
					ADD   R0, R0, R1
					BRz   NO_SAMPLE
					ADD   R2, R2, #-1
					LD    R0, FIFO_DATA_address
					LD    R1, SAMPLE_SIZE
					JSR   max30102_Bus_Read; 读 sample
					LD    R0, ONE; have sample
					BR    Sample_Read_DONE
NO_SAMPLE			LD    R0, ZERO; no sample
Sample_Read_DONE	LDR   R1, R6, #0
					LDR   R2, R6, #1
					LDR   R7, R6, #2
					ADD   R6, R6, #3
					RET
					
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

max30102_init;()
                    ADD   R6, R6, #-6
                    STR   R0, R6, #0
                    STR   R1, R6, #1
                    STR   R2, R6, #2
                    STR   R3, R6, #3
					STR   R4, R6, #4
                    STR   R7, R6, #5
                    LEA   R2, INIT_DATA
					LD    R4, INIT_NUM_I
					NOT   R4, R4
					ADD   R4, R4, #1; R4 == - INIT_NUM_I
                    AND   R3, R3, #0
INIT_LOOP           ADD   R0, R3, R4
                    BRz   INIT_LOOP_END
                    ADD   R0, R3, R3
                    ADD   R0, R2, R0
                    LDR   R1, R0, #1
                    LDR   R0, R0, #0
                    JSR   max30102_Bus_Write
                    ADD   R3, R3, #1
                    BR    INIT_LOOP
INIT_LOOP_END       LDR   R0, R6, #0
                    LDR   R1, R6, #1
                    LDR   R2, R6, #2
                    LDR   R3, R6, #3
					LDR   R4, R6, #4
                    LDR   R7, R6, #5
                    ADD   R6, R6, #6
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
INIT_NUM_I          .FILL x000B;number of initial instructions
INIT_DATA           .FILL x0009
                    .FILL x000b;1: mode configuration : temp_en[3]      MODE[2:0]=010 HR only enabled    011 SP02 enabled
                    .FILL x0001
                    .FILL x00F0;2: open all of interrupt
                    .FILL x0000
                    .FILL x0000;3: all interrupt clear
                    .FILL x0003
                    .FILL x0002;4: DIE_TEMP_RDY_EN
                    .FILL x0021
                    .FILL x0001;5: SET TEMP_EN
                    .FILL x000a
                    .FILL x0047;6: SPO2_SR[4:2]=001  100 per second    LED_PW[1:0]=11  18BITS
                    .FILL x000c
                    .FILL x0080;7: set LED1(RED) current  why is 0x47? now is 0x80
                    .FILL x000d
                    .FILL x00FF;8: set LED2(IR) current  why is 0x47? now is 0xFF
					.FILL x0004
					.FILL x0001;9: clear FIFO_WR_PTR
					.FILL x0005
					.FILL x0000;10: clear OVF_COUNTER
					.FILL x0006
					.FILL x0000;11: clear FIFO_RD_PTR
UARTSR_ADDR			.FILL x7E14
UARTDR_ADDR			.FILL x7E16
SC_BUFFER_ADDR      .FILL x7E20; RED[23:16], RED[15:8], RED[7:0], IR[23:16], IR[15:8], IR[7:0], ID of chip
SC_change_ADDR		.FILL x7E30
SC_RDCurrent_ADDR   .FILL x7E40
UART_BUFFER			.BLKW x0002
                    .END