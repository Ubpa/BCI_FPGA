                    .ORIG x3000
					TRAP  x21
					JSR   max30102_init
					TRAP  x21
					LD    R2, DATA_addr
					LD    R3, NUM_SAMPLE
main_LOOP			ADD   R3, R3, #-1
					BRn   main_LOOP_END
					LD    R0, FIFO_RD_PTR_address
					LD    R1, ONE
					JSR   max30102_Bus_Read; 读 FIFO_RD_PTR; 仅做检验用
					LD    R0, FIFO_DATA_address
					LD    R1, SAMPLE_SIZE
					JSR   max30102_Bus_Read; 读 sample
					BR    main_LOOP
main_LOOP_END       LD    R1, DATA_addr
					LD	  R2, NUM_DATA
PRINT_LOOP			ADD	  R2, R2, #-1
					BRn	  PRINT_LOOP_END
WAIT				LDI	  R0, UARTSR_ADDR
					BRzp  WAIT
					LDR	  R0, R1, #0
					STI	  R0, UARTDR_ADDR
					ADD	  R1, R1, #1
					BR	  PRINT_LOOP
PRINT_LOOP_END		HALT

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
                    ADD   R0, R0, #0
                    BRp   WR_FAIL
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
LOOP                ADD   R0, R3, R4
                    BRz   LOOP_END
                    ADD   R0, R3, R3
                    ADD   R0, R2, R0
                    LDR   R1, R0, #1
                    LDR   R0, R0, #0
                    JSR   max30102_Bus_Write
                    ADD   R3, R3, #1
                    BR    LOOP
LOOP_END            LDR   R0, R6, #0
                    LDR   R1, R6, #1
                    LDR   R2, R6, #2
                    LDR   R3, R6, #3
					LDR   R4, R6, #4
                    LDR   R7, R6, #5
                    ADD   R6, R6, #6
                    RET

TIME				.FILL #1000
NUM_SAMPLE			.FILL x0020
NUM_DATA			.FILL x00E0; NUM_SAMPLE * 7
max30102_WR_address .FILL x00AE
FIFO_DATA_address   .FILL x0007
TEMP_address		.FILL x001F
LED1I_address		.FILL x000C
FIFO_RD_PTR_address .FILL x0006
FIFO_WR_PTR_address .FILL x0004
ONE                 .FILL x0001
ZERO                .FILL x0000
SAMPLE_SIZE			.FILL x0006
ASCII_0				.FILL x0030
SCLER_ADDR			.FILL x7E10
DONE_STR			.STRINGZ "OK!"
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
                    .FILL x0047;6: SPO2_SR[4:2]=001  100 per second    LED_PW[1:0]=11  16BITS
                    .FILL x000c
                    .FILL x0047;7: set LED1 current  why is 0x47?
                    .FILL x000d
                    .FILL x0047;8: set LED2 current  why is 0x47?
					.FILL x0004
					.FILL x0000;9: clear FIFO_WR_PTR
					.FILL x0005
					.FILL x0000;10: clear OVF_COUNTER
					.FILL x0006
					.FILL x0000;11: clear FIFO_RD_PTR
DATA_addr           .FILL x3500
UARTSR_ADDR			.FILL x7E14
UARTDR_ADDR			.FILL x7E16
                    .END