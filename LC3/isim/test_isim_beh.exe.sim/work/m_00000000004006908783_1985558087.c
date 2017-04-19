/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/CS/OSH/final_HW/BCI_FPGA/LC3/test.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 1U};
static unsigned int ng3[] = {0U, 1U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4184);
    xsi_process_wait(t2, 500LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2728);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_32_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_43_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t27[8];
    char t28[8];
    char t31[8];
    char t50[8];
    char t51[8];
    char t54[8];
    char t79[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5440);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    memset(t5, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t16) != 0)
        goto LAB7;

LAB8:    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB9;

LAB10:    t75 = *((unsigned int *)t5);
    t76 = (~(t75));
    t77 = *((unsigned int *)t23);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t79, 8);

LAB17:    t100 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t100, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB8;

LAB9:    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t29))
        goto LAB20;

LAB18:    t32 = (t30 + 4);
    t33 = (t29 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t33))
        goto LAB20;

LAB19:    *((unsigned int *)t31) = 1;

LAB20:    memset(t28, 0, 8);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t34) != 0)
        goto LAB23;

LAB24:    t41 = (t28 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB25;

LAB26:    t46 = *((unsigned int *)t28);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t41) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t28) > 0)
        goto LAB31;

LAB32:    memcpy(t27, t50, 8);

LAB33:    goto LAB10;

LAB11:    t73 = (t0 + 2888);
    t81 = (t73 + 56U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t83 = (t82 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t83) != 0)
        goto LAB52;

LAB53:    t90 = (t80 + 4);
    t91 = *((unsigned int *)t80);
    t92 = *((unsigned int *)t90);
    t93 = (t91 || t92);
    if (t93 > 0)
        goto LAB54;

LAB55:    t95 = *((unsigned int *)t80);
    t96 = (~(t95));
    t97 = *((unsigned int *)t90);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t90) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t80) > 0)
        goto LAB60;

LAB61:    memcpy(t79, t99, 8);

LAB62:    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 1, t27, 1, t79, 1);
    goto LAB17;

LAB15:    memcpy(t4, t27, 8);
    goto LAB17;

LAB21:    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB23:    t40 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB24;

LAB25:    t45 = ((char*)((ng3)));
    goto LAB26;

LAB27:    t52 = (t0 + 1208U);
    t53 = *((char **)t52);
    t52 = ((char*)((ng3)));
    memset(t54, 0, 8);
    if (*((unsigned int *)t53) != *((unsigned int *)t52))
        goto LAB36;

LAB34:    t55 = (t53 + 4);
    t56 = (t52 + 4);
    if (*((unsigned int *)t55) != *((unsigned int *)t56))
        goto LAB36;

LAB35:    *((unsigned int *)t54) = 1;

LAB36:    memset(t51, 0, 8);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t57) != 0)
        goto LAB39;

LAB40:    t64 = (t51 + 4);
    t65 = *((unsigned int *)t51);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB41;

LAB42:    t69 = *((unsigned int *)t51);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t64) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t51) > 0)
        goto LAB47;

LAB48:    memcpy(t50, t74, 8);

LAB49:    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t27, 1, t45, 1, t50, 1);
    goto LAB33;

LAB31:    memcpy(t27, t45, 8);
    goto LAB33;

LAB37:    *((unsigned int *)t51) = 1;
    goto LAB40;

LAB39:    t63 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB40;

LAB41:    t68 = ((char*)((ng4)));
    goto LAB42;

LAB43:    t73 = (t0 + 1208U);
    t74 = *((char **)t73);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t50, 1, t68, 1, t74, 1);
    goto LAB49;

LAB47:    memcpy(t50, t68, 8);
    goto LAB49;

LAB50:    *((unsigned int *)t80) = 1;
    goto LAB53;

LAB52:    t89 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB53;

LAB54:    t94 = ((char*)((ng5)));
    goto LAB55;

LAB56:    t99 = ((char*)((ng4)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t79, 1, t94, 1, t99, 1);
    goto LAB62;

LAB60:    memcpy(t79, t94, 8);
    goto LAB62;

}

static void Cont_50_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5456);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000004006908783_1985558087_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_30_1,(void *)Initial_32_2,(void *)Always_43_3,(void *)Cont_50_4};
	xsi_register_didat("work_m_00000000004006908783_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000004006908783_1985558087.didat");
	xsi_register_executes(pe);
}
