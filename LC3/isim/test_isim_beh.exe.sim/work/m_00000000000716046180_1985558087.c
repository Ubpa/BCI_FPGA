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
static const char *ng0 = "F:/CS/OSH/final_HW/BCI_FPGA/LC3/test.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {7U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {1U, 1U};
static unsigned int ng6[] = {0U, 1U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {1, 0};



static void NetDecl_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3U);

LAB1:    return;
}

static void NetDecl_31_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3U);

LAB1:    return;
}

static void NetDecl_32_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 4, t3, 4, t4, 4);
    t2 = (t0 + 7224);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 3U);
    t18 = (t0 + 6984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_34_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_35_4(char *t0)
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

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5728);
    xsi_process_wait(t2, 500LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 3368);
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
    t24 = (t0 + 3368);
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

static void Initial_37_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_49_6(char *t0)
{
    char t6[8];
    char t13[8];
    char t14[8];
    char t17[8];
    char t36[8];
    char t37[8];
    char t40[8];
    char t47[8];
    char t66[8];
    char t67[8];
    char t70[8];
    char t77[8];
    char t98[8];
    char t108[8];
    char t109[8];
    char t131[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    int t140;

LAB0:    t1 = (t0 + 6416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 7000);
    *((int *)t2) = 1;
    t3 = (t0 + 6448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB5:    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    memset(t14, 0, 8);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t17);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t14 + 4);
    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB12;

LAB13:    t104 = *((unsigned int *)t14);
    t105 = (~(t104));
    t106 = *((unsigned int *)t32);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t32) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t14) > 0)
        goto LAB18;

LAB19:    memcpy(t13, t108, 8);

LAB20:    t130 = (t0 + 3048);
    t132 = (t0 + 3048);
    t133 = (t132 + 72U);
    t134 = *((char **)t133);
    t135 = (t0 + 4008);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    xsi_vlog_generic_convert_bit_index(t131, t134, 2, t137, 32, 1);
    t138 = (t131 + 4);
    t139 = *((unsigned int *)t138);
    t140 = (!(t139));
    if (t140 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB10:    t31 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t38 = (t0 + 1688U);
    t39 = *((char **)t38);
    t38 = (t0 + 1648U);
    t41 = (t38 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 4008);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_get_index_select_value(t40, 1, t39, t42, 2, t45, 32, 1);
    t46 = ((char*)((ng5)));
    memset(t47, 0, 8);
    if (*((unsigned int *)t40) != *((unsigned int *)t46))
        goto LAB23;

LAB21:    t48 = (t40 + 4);
    t49 = (t46 + 4);
    if (*((unsigned int *)t48) != *((unsigned int *)t49))
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB23:    memset(t37, 0, 8);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t47);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t50) != 0)
        goto LAB26;

LAB27:    t57 = (t37 + 4);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t57);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB28;

LAB29:    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t57) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t37) > 0)
        goto LAB34;

LAB35:    memcpy(t36, t66, 8);

LAB36:    goto LAB13;

LAB14:    t110 = (t0 + 3528);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memset(t109, 0, 8);
    t113 = (t112 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t113) != 0)
        goto LAB55;

LAB56:    t120 = (t109 + 4);
    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t120);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB57;

LAB58:    t125 = *((unsigned int *)t109);
    t126 = (~(t125));
    t127 = *((unsigned int *)t120);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t120) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t109) > 0)
        goto LAB63;

LAB64:    memcpy(t108, t129, 8);

LAB65:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t13, 1, t36, 1, t108, 1);
    goto LAB20;

LAB18:    memcpy(t13, t36, 8);
    goto LAB20;

LAB24:    *((unsigned int *)t37) = 1;
    goto LAB27;

LAB26:    t56 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB27;

LAB28:    t61 = ((char*)((ng6)));
    goto LAB29;

LAB30:    t68 = (t0 + 1688U);
    t69 = *((char **)t68);
    t68 = (t0 + 1648U);
    t71 = (t68 + 72U);
    t72 = *((char **)t71);
    t73 = (t0 + 4008);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_get_index_select_value(t70, 1, t69, t72, 2, t75, 32, 1);
    t76 = ((char*)((ng6)));
    memset(t77, 0, 8);
    if (*((unsigned int *)t70) != *((unsigned int *)t76))
        goto LAB39;

LAB37:    t78 = (t70 + 4);
    t79 = (t76 + 4);
    if (*((unsigned int *)t78) != *((unsigned int *)t79))
        goto LAB39;

LAB38:    *((unsigned int *)t77) = 1;

LAB39:    memset(t67, 0, 8);
    t80 = (t77 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t77);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t80) != 0)
        goto LAB42;

LAB43:    t87 = (t67 + 4);
    t88 = *((unsigned int *)t67);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB44;

LAB45:    t92 = *((unsigned int *)t67);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t87) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t67) > 0)
        goto LAB50;

LAB51:    memcpy(t66, t98, 8);

LAB52:    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t36, 1, t61, 1, t66, 1);
    goto LAB36;

LAB34:    memcpy(t36, t61, 8);
    goto LAB36;

LAB40:    *((unsigned int *)t67) = 1;
    goto LAB43;

LAB42:    t86 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB43;

LAB44:    t91 = ((char*)((ng7)));
    goto LAB45;

LAB46:    t96 = (t0 + 1688U);
    t97 = *((char **)t96);
    t96 = (t0 + 1648U);
    t99 = (t96 + 72U);
    t100 = *((char **)t99);
    t101 = (t0 + 4008);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    xsi_vlog_generic_get_index_select_value(t98, 1, t97, t100, 2, t103, 32, 1);
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t66, 1, t91, 1, t98, 1);
    goto LAB52;

LAB50:    memcpy(t66, t91, 8);
    goto LAB52;

LAB53:    *((unsigned int *)t109) = 1;
    goto LAB56;

LAB55:    t119 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB56;

LAB57:    t124 = ((char*)((ng8)));
    goto LAB58;

LAB59:    t129 = ((char*)((ng7)));
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t108, 1, t124, 1, t129, 1);
    goto LAB65;

LAB63:    memcpy(t108, t124, 8);
    goto LAB65;

LAB66:    xsi_vlogvar_wait_assign_value(t130, t13, 0, *((unsigned int *)t131), 1, 0LL);
    goto LAB67;

}

static void Cont_57_7(char *t0)
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

LAB0:    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7288);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 7016);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000716046180_1985558087_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)NetDecl_31_1,(void *)NetDecl_32_2,(void *)Initial_34_3,(void *)Always_35_4,(void *)Initial_37_5,(void *)Always_49_6,(void *)Cont_57_7};
	xsi_register_didat("work_m_00000000000716046180_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000000716046180_1985558087.didat");
	xsi_register_executes(pe);
}
