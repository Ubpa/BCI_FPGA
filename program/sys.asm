                .ORIG  x0000
                TRAP   x25; illegal trap
                .BLKW  x001C
                .FILL  x0200; x1D 显示值
                .FILL  x0223; x1E 左移
                .FILL  x022C; x1F 右移
                .FILL  x025B; x20 读键盘
                .FILL  x0266; x21 读开关
                .FILL  x0272; x22 显示字符
                .FILL  x0284; x23 输出四个字符
                .FILL  x0299; x24 提示输入开关
                .FILL  x02A9; x25 停机
                .FILL  x02B9; x26 输出字符串
                .FILL  x02DB; x27 睡眠
                .FILL  x02E8; x28 i2c start
                .FILL  x02F7; x29 i2c send byte
                .FILL  x0315; x2A i2c wait ack
                .FILL  x031F; x2B i2c read byte
                .FILL  x0338; x2C i2c stop
                .FILL  x0349; x2D i2c nack
                .FILL  x0357; x2E i2c master ack
                .BLKW  x01D1
; x1D 显示值
; R0 == data
                ADD   R6, R6, #-4
				STR   R1, R6, #0
				STR   R2, R6, #1
				STR   R3, R6, #2
				STR   R7, R6, #3
				ADD   R2, R0, #0
                AND   R3, R3, #0
                ADD   R3, R3, #4
x1D_LOOP	    ADD   R3, R3, #-1
				BRn   x1D_LOOP_END
                ADD   R1, R3, R3
                ADD   R1, R1, R1; R1 = 4 * R3
                ADD   R0, R2, #0
                TRAP  x1F; 右移
                LD    R1, MASK_4
                AND   R0, R0, R1
                ADD   R1, R0, #-10
                BRn   x1D_NUM
                LD    R0, ASCII_A
                ADD   R0, R0, R1
                BR    x1D_ASCII_DONE
x1D_NUM         LD    R1, ASCII_0
                ADD   R0, R0, R1
x1D_ASCII_DONE  ADD   R1, R3, #0
				TRAP  x22; 显示字符
                BR    x1D_LOOP
x1D_LOOP_END	LDR   R1, R6, #0
				LDR   R2, R6, #1
				LDR   R3, R6, #2
				LDR   R7, R6, #3
				ADD   R6, R6, #4
				RET
MASK_4          .FILL x000F
ASCII_A         .FILL x0041
ASCII_0         .FILL x0030
; x1E 左移
; R0 == data
; R1 == n(<16) bits
                NOT   R1, R1
                ADD   R1, R1, #1
                ADD   R1, R1, #8
				ADD   R1, R1, #8; 循环 16 - n 次
x1E_LOOP	    ADD   R1, R1, #-1
                BRn   x1E_LOOP_END
                ADD   R0, R0, R0
                BR    x1E_LOOP
x1E_LOOP_END    RET
; x1F 右移
; R0 == data
; R1 == n(<16) bits
                ADD   R6, R6, -5
                STR   R1, R6, #0
                STR   R2, R6, #1
                STR   R3, R6, #2
                STR   R4, R6, #3
                STR   R5, R6, #4
                AND   R5, R5, #0; result
                NOT   R1, R1
                ADD   R1, R1, #1; R1 == - n
                ADD   R3, R1, #8
				ADD   R3, R3, #8; 循环 16 - n 次
                LEA   R2, MASK_1
                ADD   R2, R2, #15
x1F_LOOP        ADD   R3, R3, #-1
                BRn   x1F_LOOP_END
                LDR   R4, R2, #0
                AND   R4, R0, R4
                BRz   x1F_ADD_DONE
                ADD   R4, R2, R1
                LDR   R4, R4, #0
                ADD   R5, R5, R4
x1F_ADD_DONE    ADD   R2, R2, #-1
                BR    x1F_LOOP
x1F_LOOP_END    ADD   R0, R5, #0
                LDR   R1, R6, #0
                LDR   R2, R6, #1
                LDR   R3, R6, #2
                LDR   R4, R6, #3
                LDR   R5, R6, #4
                ADD   R6, R6, #5
                RET
MASK_1          .FILL x0001
                .FILL x0002
                .FILL x0004
                .FILL x0008
                .FILL x0010
                .FILL x0020
                .FILL x0040
                .FILL x0080
                .FILL x0100
                .FILL x0200
                .FILL x0400
                .FILL x0800
                .FILL x1000
                .FILL x2000
                .FILL x4000
                .FILL x8000
; x20 读键盘
                ADD   R6, R6, #-1
                STR   R1, R6, #0
                LD    R1, KBSR_ADDR
LOOP0           LDR   R0, R1, #0
                BRzp  LOOP0
                LD    R0, KBDR_ADDR
                LDR   R0, R0, #0
                LDR   R1, R6, #0
                ADD   R6, R6, #1
                RET
KBDR_ADDR       .FILL x7E02
; x21 读开关
                ADD   R6, R6, #-1
                STR   R7, R6, #0
LOOP2           TRAP  x20
                ADD   R0, R0, #-1
                BRnp  LOOP2
                LD    R0, SW_ADDR
                LDR   R0, R0, #0
                LDR   R7, R6, #0
                ADD   R6, R6, #1
                RET
SW_ADDR         .FILL x7E08
KBSR_ADDR       .FILL x7E00
; x22 显示字符
; R0 == 字符
; R1 == 位置
                ADD   R6, R6, #-1
                STR   R2, R6, #0
                LD    R2, P
LOOP3           ADD   R1, R1, #-1
                BRn   LOOP4
                ADD   R0, R0, R2
                BR    LOOP3
LOOP4           LD    R1, DSR_ADDR
                LDR   R1, R1, #0
                BRzp  LOOP4
                LD    R1, DDR_ADDR
                STR   R0, R1, #0
                LDR   R2, R6, #0
                ADD   R6, R6, #1
                RET
P               .FILL x4000
DSR_ADDR        .FILL x7E04
DDR_ADDR        .FILL x7E06
; x23 输出四个字符
; R0 == 四个字符的起始地址
                ADD   R6, R6, #-4
                STR   R1, R6, #0
                STR   R2, R6, #1
                STR   R3, R6, #2
                STR   R7, R6, #3
                ADD   R2, R0, #0
                AND   R3, R3, #0
                ADD   R3, R3, #4
LOOP5           ADD   R3, R3, #-1
                BRn   LOOP5_END
                LDR   R0, R2, #0
                ADD   R1, R3, #0
                TRAP  x22; 显示字符
                ADD   R2, R2, #1
                BR    LOOP5
LOOP5_END       LDR   R1, R6, #0
                LDR   R2, R6, #1
                LDR   R3, R6, #2
                LDR   R7, R6, #3
                ADD   R6, R6, #4
                RET
; x24 提示输入开关
                ADD   R6, R6, #-2
                STR   R1, R6, #0
                STR   R7, R6, #1
                LEA   R0, IN_STR
                TRAP  x23; 输出字符串
                TRAP  x21; 读开关
                AND   R1, R1, #0; 位置
                TRAP  x22; 显示字符
                LDR   R1, R6, #0
                LDR   R7, R6, #1
                ADD   R6, R6, #2
                RET
IN_STR          .FILL #105; 'i'
                .FILL #110; 'n'
                .FILL #61;  '='
                .FILL #0
; x25 停机
                ADD   R6, R6, #-2
                STR   R0, R6, #0
                STR   R7, R6, #1
                LEA   R0, HALT_STR
                TRAP  x23; 输出字符串
LOOP6           TRAP  x20; 读键盘
                ADD   R0, R0, #-1
                BRnp  LOOP6
                LDR   R0, R6, #0
                LDR   R7, R6, #1
                ADD   R6, R6, #2
                RET
HALT_STR        .FILL #72; 'H'
                .FILL #65; 'A'
                .FILL #76; 'L'
                .FILL #84; 'T'
; x26 输出字符串
                ADD   R6, R6, #-4
                STR   R1, R6, #0
                STR   R2, R6, #1
                STR   R3, R6, #2
                STR   R7, R6, #3
                ADD   R1, R0, #0
                ADD   R6, R6, #-4
LOOP7           ADD   R0, R6, #0
                AND   R2, R2, #0
                STR   R2, R0, #0
                STR   R2, R0, #1
                STR   R2, R0, #2
                STR   R2, R0, #3
                ADD   R2, R2, #4
LOOP8           ADD   R2, R2, #-1
                BRn   LOOP8_END
                LDR   R3, R1, #0
                BRz   LOOP8_END
                STR   R3, R0, #0
                ADD   R0, R0, #1
                ADD   R1, R1, #1
                BR    LOOP8
LOOP8_END       ADD   R0, R6, #0
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
; x27 睡眠
                ADD   R6, R6, #-1
                STR   R1, R6, #0
LOOP9           ADD   R0, R0, #-1
                BRn   LOOP9_END
                LD    R1, MILLISEC
LOOP10          ADD   R1, R1, #-1
                BRn   LOOP10_END
                BR    LOOP10
LOOP10_END      BR    LOOP9
LOOP9_END       LDR    R1, R6, #0
                ADD   R6, R6, #1
                RET
MILLISEC        .FILL x11C0
; x28 i2c start
                ADD   R6, R6, #-1
                STR   R0, R6, #0
LOOP11             LDI   R0, SDA_BUS_ADDR
                BRz   LOOP11
                LDI   R0, SCL_BUS_ADDR
                BRz   LOOP11
                ; SDA_BUS == SCL_BUS == H
                LD    R0, ONE
                STI   R0, SDAER_ADDR; en SDA
                LD    R0, ZERO
                STI   R0, SDADR_ADDR; SDA_BUS <= L
                ;STI   R0, SDAER_ADDR; dis SDA;;;;;;;;;;;;;;引起毛刺-------------------------------------del line
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
                LD    R1, ONE                  ;;;;;;;;;;;;;start 处已经获取 SDA 的掌控权
                STI   R1, SDAER_ADDR; en SDA;;;;;;;;;;;;;
                LEA   R1, MASK_1
                AND   R3, R3, #0; R3 : i
                ADD   R3, R3, #8
LOOP12          ADD   R3, R3, #-1
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
LOOP12_END      JSR   WAIT_SCL_L
                LD    R1, ZERO
                STI   R1, SDAER_ADDR; dis SDA;;;;;;;;;;;;;; 释放 SDL 掌控权
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
                ;STI   R1, SDADR_ADDR; SDA_BUS <= H;;;;;自动到高
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
                LEA   R1, MASK_1
                AND   R3, R3, #0; R3 : i
                ADD   R3, R3, #8
LOOP13          ADD   R3, R3, #-1
                BRn   LOOP13_END
                JSR   WAIT_SCL_H
                LDI   R2, SDA_BUS_ADDR
                BRz   ADD_DONE
                ADD   R2, R1, R3
                LDR   R2, R2, #0
                ADD   R0, R0, R2
ADD_DONE        JSR   WAIT_SCL_L
                BR    LOOP13
LOOP13_END      LDR   R1, R6, #0
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
;x2E i2c master ack
                ADD   R6, R6, #-2
                STR   R0, R6, #0
                STR   R7, R6, #1
                LD    R0, ONE
                STI   R0, SDAER_ADDR; en SDA
                LD    R0, ZERO
                STI   R0, SDADR_ADDR; SDA <= L
                JSR   WAIT_SCL_H
                JSR   WAIT_SCL_L
                LD    R0, ZERO
                STI   R0, SDAER_ADDR; dis SDA
                LDR   R0, R6, #0
                LDR   R7, R6, #1
                ADD   R6, R6, #2
                RET
;==========================================================
WAIT_SCL_H      ADD   R6, R6, #-1
                STR   R0, R6, #0
SCL_LOW         LDI   R0, SCL_BUS_ADDR
                BRz   SCL_LOW
                LDR   R0, R6, #0
                ADD   R6, R6, #1
                RET
WAIT_SCL_L      ADD   R6, R6, #-1
                STR   R0, R6, #0
SCL_HIGH        LDI   R0, SCL_BUS_ADDR
                BRp   SCL_HIGH
                LDR   R0, R6, #0
                ADD   R6, R6, #1
                RET
;==========================================================
SDAER_ADDR      .FILL x7E0A
SDADR_ADDR      .FILL x7E0C
SDA_BUS_ADDR    .FILL x7E0E
SCLER_ADDR      .FILL x7E10
SCL_BUS_ADDR    .FILL x7E12
ONE             .FILL x0001
ZERO            .FILL x0000
                .END