            .ORIG x3000
            ; INT set
            LD    R0, KBSR_ADDR
            LD    R1, SET_INT_E
            STR   R1, R0, #0
            LD    R0, INT_A_KB
            LEA   R1, INT_P_KB
            STR   R1, R0, #0
            ; wave
LOOP1       LD    R0, dT
            TRAP  x27
            AND   R2, R2, #0
            ADD   R2, R2, #4
LOOP2       ADD   R2, R2, #-1
            BRn   LP2_END
            LEA   R3, OFFSET
            ADD   R3, R3, R2
            LDR   R4, R3, #0; R4 = OFFSET[R2]
            LEA   R5, DIREC
            ADD   R5, R5, R2
            LDR   R6, R5, #0; R6 = DIREC[R2]
            ADD   R4, R4, R6; R4 = OFFSET[R2] + DIREC[R2]
            BRz   DIRCed
            BRn   ToUP
ToDOWN      ADD   R6, R6, #-2
            STR   R6, R5, #0; DIREC[R2] = #-1
            BR    DIRCed
ToUP        ADD   R6, R6, #2
            STR   R6, R5, #0; DIREC[R2] = #1
DIRCed      STR   R4, R3, #0; OFFSET[R2] = OFFSET[R2] + DIREC[R2]
            LEA   R3, MID
            ADD   R3, R3, R4
            LDR   R0, R3, #0; R0 = MID+OFFSET[R2]
            ADD   R1, R2, #0
            TRAP  x22
            BR    LOOP2
LP2_END     BR    LOOP1
            ; INT program
INT_P_KB    ST    R0, TEMP1
            ST    R7, TEMP2
            TRAP  x20
            HALT
            LD    R0, TEMP1
            LD    R7, TEMP2
            RTI
;
TEMP1       .BLKW #1
TEMP2       .BLKW #1
KBSR_ADDR   .FILL x7E00
INT_A_KB    .FILL x0103
SET_INT_E   .FILL x4000
dT          .FILL #100
OFFSET      .FILL #-1
            .FILL #0
            .FILL #1
            .FILL #0
DIREC       .FILL #1
            .FILL #1
            .FILL #-1
            .FILL #-1
DOWN        .FILL b11110111
MID         .FILL b10111111
UP          .FILL b11111110
            .END