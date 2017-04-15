                    .ORIG x3000
					;LD    R0, TIME
					;TRAP  x27
                    JSR   max30102_init
                    HALT
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

max30102_Bus_Read;( R0 = (u8) Register_Address )
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
                    TRAP  x2B; i2c read byte
                    TRAP  x2A; i2c nack
RD_FAIL             TRAP  x2C; i2c stop
                    LDR   R0, R6, #0
                    LDR   R7, R6, #1
                    ADD   R6, R6, #2
                    RET

max30102_init;()
                    ADD   R6, R6, #-5
                    STR   R0, R6, #0
                    STR   R1, R6, #1
                    STR   R2, R6, #2
                    STR   R3, R6, #3
                    STR   R7, R6, #4
                    LEA   R2, INIT_DATA
                    AND   R3, R3, #0
LOOP                ADD   R0, R3, #-8
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
                    LDR   R7, R6, #4
                    ADD   R6, R6, #5
                    RET

;TIME				.FILL x0400
max30102_WR_address .FILL x00AE
ONE                 .FILL x0001
ZERO                .FILL x0000
INIT_DATA           .FILL x0009
                    .FILL x000b
                    .FILL x0001
                    .FILL x00F0
                    .FILL x0000
                    .FILL x0000
                    .FILL x0003
                    .FILL x0002
                    .FILL x0021
                    .FILL x0001
                    .FILL x000a
                    .FILL x0047
                    .FILL x000c
                    .FILL x0047
                    .FILL x000d
                    .FILL x0047
                    .END