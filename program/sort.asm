        .ORIG x3000
        AND   R2, R2, #0
        ADD   R2, R2, #4
        LD    R3, DELTA
        LD    R4, LINE
LOOP1   ADD   R2, R2, -1
        BRn   LP1_END
        ADD   R0, R4, #0
        ADD   R1, R2, #0
        TRAP  x22
        TRAP  x21
        LEA   R5, NUMBER
        ADD   R5, R5, R0
        LDR   R6, R5, #0
        ADD   R6, R6, #1
        STR   R6, R5, #0; NUMBER[R0]++
        ADD   R0, R0, R3
        ADD   R1, R2, #0
        TRAP  x22
        BR    LOOP1
        ; sort
LP1_END TRAP  x21
        AND   R4, R4, #0
        ADD   R4, R4, #3
        AND   R2, R2, #0
        ADD   R2, R2, #10
LOOP2   ADD   R2, R2, #-1
        BRn   LP2_END
        LEA   R5, NUMBER
        ADD   R5, R5, R2
        LDR   R5, R5, #0
LOOP3   ADD   R5, R5, #-1
        BRn   LP3_END
        ADD   R0, R2, #0
        ADD   R0, R2, R3
        ADD   R1, R4, #0
        TRAP  x22
        ADD   R4, R4, #-1
        BRn   LP2_END
        BR    LOOP3
LP3_END BR    LOOP2
LP2_END TRAP  x21
END     HALT
        BR    END
DELTA   .FILL #48; '0'
LINE    .FILL #95; '_'
NUMBER  .BLKW #10
        .END