        .ORIG x3000
        LD    R1, NUMBER
        NOT   R1, R1
        ADD   R1, R1, #1
LOOP    TRAP  x21
        ADD   R0, R0, R1
        BRn   MORE
        BRp   LESS
        LEA   R0, DONE_S
        TRAP  x23
        BR    LP_END
MORE    LEA   R0, MORE_S
        BR    CTN
LESS    LEA   R0, LESS_S
CTN     TRAP  x23
        BR    LOOP
LP_END  TRAP  x21
END     HALT
        BR    END
NUMBER  .FILL #128
LESS_S  .FILL #76;  'L'
        .FILL #101; 'e'
        .FILL #115; 's'
        .FILL #115; 's'
MORE_S  .FILL #109; 'M'
        .FILL #111; 'o'
        .FILL #114; 'r'
        .FILL #101; 'e'
DONE_S  .FILL #68;  'D'
        .FILL #111; 'o'
        .FILL #110; 'n'
        .FILL #101; 'e'
        .END