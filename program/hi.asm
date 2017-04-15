         .ORIG x3000
         AND   R1, R1, #0
         ADD   R1, R1, #4
         LEA   R2, NAME
LOOP     ADD   R1, R1, #-1
         BRn   LOOP_END
         TRAP  x24
         STR   R0, R2, #0
         ADD   R2, R2, #1
         TRAP  x21
         BR    LOOP
LOOP_END LEA   R0, STRING
         TRAP  x26
         TRAP  x21
         HALT
STRING   .FILL #72;  'H'
         .FILL #105; 'i'
         .FILL #44;  ','
NAME     .BLKW #4
         .FILL #46;  '.'
         .FILL #77;  'M'
         .FILL #89;  'y'
         .FILL #32;  ' '
         .FILL #110; 'n'
         .FILL #97;  'a'
         .FILL #109; 'm'
         .FILL #101; 'e'
         .FILL #32;  ' '
         .FILL #105; 'i'
         .FILL #115; 's'
         .FILL #32;  ' '
         .FILL #76;  'L'
         .FILL #67;  'C'
         .FILL #51;  '3'
         .FILL #46;  '.'
         .FILL #0;   '\0'
         .END
