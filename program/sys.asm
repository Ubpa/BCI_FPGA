             .ORIG  x0000
             TRAP   x25; illegal trap
             .BLKW  x001F
             .FILL  x0200; x20 ������
             .FILL  x020B; x21 ������
             .FILL  x0217; x22 ��ʾ�ַ�
             .FILL  x0229; x23 ����ĸ��ַ�
             .FILL  x023E; x24 ��ʾ���뿪��
             .FILL  x024E; x25 ͣ��
             .FILL  x025E; x26 ����ַ���
             .FILL  x0280; x27 ˯��
             .FILL  x028D; x28 i2c start
             .FILL  x029C; x29 i2c send byte
             .FILL  x02BA; x2A i2c wait ack
             .FILL  x02C4; x2B i2c read byte
             .FILL  x02DD; x2C i2c stop
             .FILL  x02EE; x2D i2c nack
             .BLKW  x01D2
; x20 ������
             ADD   R6, R6, #-1
             STR   R1, R6, #0
             LD    R1, KBSR_ADDR
LOOP0        LDR   R0, R1, #0
             BRzp  LOOP0
             LD    R0, KBDR_ADDR
             LDR   R0, R0, #0
             LDR   R1, R6, #0
             ADD   R6, R6, #1
             RET
KBDR_ADDR    .FILL x7E02
; x21 ������
             ADD   R6, R6, #-1
             STR   R7, R6, #0
LOOP2        TRAP  x20
             ADD   R0, R0, #-1
             BRnp  LOOP2
             LD    R0, SW_ADDR
             LDR   R0, R0, #0
             LDR   R7, R6, #0
             ADD   R6, R6, #1
             RET
SW_ADDR      .FILL x7E08
KBSR_ADDR    .FILL x7E00
; x22 ��ʾ�ַ�
; R0 == �ַ�
; R1 == λ��
             ADD   R6, R6, #-1
             STR   R2, R6, #0
             LD    R2, P
LOOP3        ADD   R1, R1, #-1
             BRn   LOOP4
             ADD   R0, R0, R2
             BR    LOOP3
LOOP4        LD    R1, DSR_ADDR
             LDR   R1, R1, #0
             BRzp  LOOP4
             LD    R1, DDR_ADDR
             STR   R0, R1, #0
             LDR   R2, R6, #0
             ADD   R6, R6, #1
             RET
P            .FILL x4000
DSR_ADDR     .FILL x7E04
DDR_ADDR     .FILL x7E06
; x23 ����ĸ��ַ�
; R0 == �ĸ��ַ�����ʼ��ַ
             ADD   R6, R6, #-4
             STR   R1, R6, #0
             STR   R2, R6, #1
             STR   R3, R6, #2
             STR   R7, R6, #3
             ADD   R2, R0, #0
             AND   R3, R3, #0
             ADD   R3, R3, #4
LOOP5        ADD   R3, R3, #-1
             BRn   LOOP5_END
             LDR   R0, R2, #0
             ADD   R1, R3, #0
             TRAP  x22; ��ʾ�ַ�
             ADD   R2, R2, #1
             BR    LOOP5
LOOP5_END    LDR   R1, R6, #0
             LDR   R2, R6, #1
             LDR   R3, R6, #2
             LDR   R7, R6, #3
             ADD   R6, R6, #4
             RET
; x24 ��ʾ���뿪��
             ADD   R6, R6, #-2
             STR   R1, R6, #0
             STR   R7, R6, #1
             LEA   R0, IN_STR
             TRAP  x23; ����ַ���
             TRAP  x21; ������
             AND   R1, R1, #0; λ��
             TRAP  x22; ��ʾ�ַ�
             LDR   R1, R6, #0
             LDR   R7, R6, #1
             ADD   R6, R6, #2
             RET
IN_STR       .FILL #105; 'i'
             .FILL #110; 'n'
             .FILL #61;  '='
             .FILL #0
; x25 ͣ��
             ADD   R6, R6, #-2
             STR   R0, R6, #0
             STR   R7, R6, #1
             LEA   R0, HALT_STR
             TRAP  x23; ����ַ���
LOOP6        TRAP  x20; ������
             ADD   R0, R0, #-1
             BRnp  LOOP6
             LDR   R0, R6, #0
             LDR   R7, R6, #1
             ADD   R6, R6, #2
             RET
HALT_STR     .FILL #72; 'H'
             .FILL #65; 'A'
             .FILL #76; 'L'
             .FILL #84; 'T'
; x26 ����ַ���
             ADD   R6, R6, #-4
             STR   R1, R6, #0
             STR   R2, R6, #1
             STR   R3, R6, #2
             STR   R7, R6, #3
             ADD   R1, R0, #0
             ADD   R6, R6, #-4
LOOP7        ADD   R0, R6, #0
             AND   R2, R2, #0
             STR   R2, R0, #0
             STR   R2, R0, #1
             STR   R2, R0, #2
             STR   R2, R0, #3
             ADD   R2, R2, #4
LOOP8        ADD   R2, R2, #-1
             BRn   LOOP8_END
             LDR   R3, R1, #0
             BRz   LOOP8_END
             STR   R3, R0, #0
             ADD   R0, R0, #1
             ADD   R1, R1, #1
             BR    LOOP8
LOOP8_END    ADD   R0, R6, #0
             TRAP  x23
             TRAP  x21
             LDR   R2, R1, #0
             BRnp  LOOP7
             ADD   R6, R6, #4
             LDR   R1, R6, #0
             LDR   R2, R6, #1
             LDR   R3, R6, #2
             LDR   R7, R6, #3
             ADD   R6, R6, #4
             RET
; x27 ˯��
             ADD   R6, R6, #-1
             STR   R1, R6, #0
LOOP9        ADD   R0, R0, #-1
             BRn   LOOP9_END
             LD    R1, MILLISEC
LOOP10       ADD   R1, R1, #-1
             BRn   LOOP10_END
             BR    LOOP10
LOOP10_END   BR    LOOP9
LOOP9_END    LDR    R1, R6, #0
             ADD   R6, R6, #1
             RET
MILLISEC     .FILL x11C0
; x28 i2c start
             ADD   R6, R6, #-1
             STR   R0, R6, #0
LOOP11       LDI   R0, SDA_BUS_ADDR
             BRz   LOOP11
             LDI   R0, SCL_BUS_ADDR
             BRz   LOOP11
             ; SDA_BUS == SCL_BUS == H
             LD    R0, ONE
             STI   R0, SDAER_ADDR; en SDA
             LD    R0, ZERO
             STI   R0, SDADR_ADDR; SDA_BUS <= L
             ;STI   R0, SDAER_ADDR; dis SDA;;;;;;;;;;;;;;����ë��-------------------------------------del line
             LD    R0, ONE
             STI   R0, SCLER_ADDR; en SCL
             LDR   R0, R6, #0
             ADD   R6, R6, #1
             RET
; x29 i2c sent byte
             ADD   R6, R6, #-4
             STR   R1, R6, #0
             STR   R2, R6, #1
             STR   R3, R6, #2
             STR   R7, R6, #3
             LD    R1, ONE               ;;;;;;;;;;;;;start ���Ѿ���ȡ SDA ���ƿ�Ȩ
             STI   R1, SDAER_ADDR; en SDA;;;;;;;;;;;;;
             LEA   R1, MASK
             AND   R3, R3, #0; R3 : i
             ADD   R3, R3, #8
LOOP12       ADD   R3, R3, #-1
             BRn   LOOP12_END
             ADD   R2, R1, R3
             LDR   R2, R2, #0
             AND   R2, R2, R0
             BRz   SET_SDADR
             LD    R2, ONE
SET_SDADR     ; R2 == byte[i]
             JSR   WAIT_SCL_L
             STI   R2, SDADR_ADDR; SDA_BUS <= byte[i]
             JSR   WAIT_SCL_H
             BR    LOOP12
LOOP12_END   JSR   WAIT_SCL_L
             LD    R1, ZERO
             STI   R1, SDAER_ADDR; dis SDA;;;;;;;;;;;;;; �ͷ� SDL �ƿ�Ȩ
             LDR   R1, R6, #0
             LDR   R2, R6, #1
             LDR   R3, R6, #2
             LDR   R7, R6, #3
             ADD   R6, R6, #4
             RET
; x2A i2c wait ack
             ADD   R6, R6, #-2
             STR   R1, R6, #0
             STR   R7, R6, #1
             JSR   WAIT_SCL_H
             LDI   R0, SDA_BUS_ADDR
             JSR   WAIT_SCL_L
             ;LD    R1, ONE
             ;STI   R1, SDAER_ADDR; en SDA
             ;STI   R1, SDADR_ADDR; SDA_BUS <= H;;;;;�Զ�����
             ;LD    R1, ZERO
             ;STI   R1, SDAER_ADDR; dis SDA
             LDR   R1, R6, #0
             LDR   R7, R6, #1
             ADD   R6, R6, #2
             RET
; x2B i2c read byte
             ADD   R6, R6, #-4
             STR   R1, R6, #0
             STR   R2, R6, #1
             STR   R3, R6, #2
             STR   R7, R6, #3
             AND   R0, R0, #0
             LEA   R1, MASK
             AND   R3, R3, #0; R3 : i
             ADD   R3, R3, #8
LOOP13       ADD   R3, R3, #-1
             BRn   LOOP13_END
             JSR   WAIT_SCL_H
             LDI   R2, SDA_BUS_ADDR
             BRz   ADD_DONE
             ADD   R2, R1, R3
             LDR   R2, R2, #0
             ADD   R0, R0, R2
ADD_DONE     JSR   WAIT_SCL_L
             BR    LOOP13
LOOP13_END   LDR   R1, R6, #0
             LDR   R2, R6, #1
             LDR   R3, R6, #2
             LDR   R7, R6, #3
             ADD   R6, R6, #4
             RET
; x2C i2c stop
             ADD   R6, R6, #-2
             STR   R0, R6, #0
             STR   R7, R6, #1
             LD    R0, ONE
             STI   R0, SDAER_ADDR; en SDA
             LD    R0, ZERO
             STI   R0, SDADR_ADDR; SDA <= L
             JSR   WAIT_SCL_H
             LD    R0, ONE
             STI   R0, SDADR_ADDR; SDA <= H
             LD    R0, ZERO
             STI   R0, SDAER_ADDR; dis SDA
             STI   R0, SCLER_ADDR; dis SCL
             LDR   R0, R6, #0
             LDR   R7, R6, #1
             ADD   R6, R6, #2
             RET
; x2D i2c nack
             ADD   R6, R6, #-2
             STR   R0, R6, #0
             STR   R7, R6, #1
             LD    R0, ONE
             STI   R0, SDAER_ADDR; en SDA
             STI   R0, SDADR_ADDR; SDA <= H
             JSR   WAIT_SCL_H
             JSR   WAIT_SCL_L
             LD    R0, ZERO
             STI   R0, SDAER_ADDR; dis SDA
             LDR   R0, R6, #0
             LDR   R7, R6, #1
             ADD   R6, R6, #2
             RET
;==========================================================
WAIT_SCL_H   ADD   R6, R6, #-1
             STR   R0, R6, #0
SCL_LOW      LDI   R0, SCL_BUS_ADDR
             BRz   SCL_LOW
             LDR   R0, R6, #0
             ADD   R6, R6, #1
             RET
WAIT_SCL_L   ADD   R6, R6, #-1
             STR   R0, R6, #0
SCL_HIGH     LDI   R0, SCL_BUS_ADDR
             BRp   SCL_HIGH
             LDR   R0, R6, #0
             ADD   R6, R6, #1
             RET
;==========================================================
MASK         .FILL x0001
             .FILL x0002
             .FILL x0004
             .FILL x0008
             .FILL x0010
             .FILL x0020
             .FILL x0040
             .FILL x0080
SDAER_ADDR   .FILL x7E0A
SDADR_ADDR   .FILL x7E0C
SDA_BUS_ADDR .FILL x7E0E
SCLER_ADDR   .FILL x7E10
SCL_BUS_ADDR .FILL x7E12
ONE          .FILL x0001
ZERO         .FILL x0000
             .END