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
static const char *ng0 = "E:/DES/rxd1.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {255U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};



static void Initial_20_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t43[8];
    char t59[8];
    char t67[8];
    char t109[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 6384);
    *((int *)t2) = 1;
    t3 = (t0 + 5848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(32, ng0);

LAB15:    xsi_set_current_line(33, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:    goto LAB14;

LAB16:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(45, ng0);

LAB22:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 3848);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t14 = (t12 + 4);
    t23 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t23);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB26;

LAB23:    if (t25 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t4) = 1;

LAB26:    memset(t31, 0, 8);
    t30 = (t4 + 4);
    t28 = *((unsigned int *)t30);
    t32 = (~(t28));
    t33 = *((unsigned int *)t4);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t30) != 0)
        goto LAB29;

LAB30:    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB31;

LAB32:    memcpy(t67, t31, 8);

LAB33:    t99 = (t67 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t67);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB68;

LAB65:    if (t19 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t4) = 1;

LAB68:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB107;

LAB104:    if (t19 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t4) = 1;

LAB107:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(96, ng0);

LAB120:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB123:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB110:
LAB71:
LAB47:    goto LAB21;

LAB25:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB29:    t36 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB30;

LAB31:    t41 = (t0 + 1528U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t41 + 4);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t41);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB37;

LAB34:    if (t55 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t43) = 1;

LAB37:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t60) != 0)
        goto LAB40;

LAB41:    t68 = *((unsigned int *)t31);
    t69 = *((unsigned int *)t59);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t31 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t59) = 1;
    goto LAB41;

LAB40:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB41;

LAB42:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t31 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t31);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t91 = (t84 & t86);
    t92 = (t88 & t90);
    t93 = (~(t91));
    t94 = (~(t92));
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t94);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t93);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t94);
    goto LAB44;

LAB45:    xsi_set_current_line(47, ng0);

LAB48:    xsi_set_current_line(48, ng0);
    t105 = (t0 + 2248);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = ((char*)((ng1)));
    memset(t109, 0, 8);
    t110 = (t107 + 4);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t110);
    t120 = *((unsigned int *)t111);
    t121 = (t119 | t120);
    t122 = (~(t121));
    t123 = (t118 & t122);
    if (t123 != 0)
        goto LAB52;

LAB49:    if (t121 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t109) = 1;

LAB52:    t125 = (t109 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t109);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(50, ng0);

LAB56:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB60;

LAB57:    if (t19 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t4) = 1;

LAB60:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 0LL);

LAB63:
LAB55:    goto LAB47;

LAB51:    t124 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(48, ng0);
    t131 = ((char*)((ng3)));
    t132 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t132, t131, 0, 0, 2, 0LL);
    goto LAB55;

LAB59:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(52, ng0);

LAB64:    xsi_set_current_line(53, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 0LL);
    goto LAB63;

LAB67:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(63, ng0);

LAB72:    xsi_set_current_line(64, ng0);
    t29 = (t0 + 4008);
    t30 = (t29 + 56U);
    t36 = *((char **)t30);
    t37 = ((char*)((ng8)));
    memset(t31, 0, 8);
    t41 = (t36 + 4);
    t42 = (t37 + 4);
    t28 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t37);
    t33 = (t28 ^ t32);
    t34 = *((unsigned int *)t41);
    t35 = *((unsigned int *)t42);
    t38 = (t34 ^ t35);
    t39 = (t33 | t38);
    t40 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t42);
    t47 = (t40 | t46);
    t48 = (~(t47));
    t49 = (t39 & t48);
    if (t49 != 0)
        goto LAB76;

LAB73:    if (t47 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t31) = 1;

LAB76:    t45 = (t31 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t31);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 0LL);

LAB79:    goto LAB71;

LAB75:    t44 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(65, ng0);

LAB80:    xsi_set_current_line(66, ng0);
    t58 = (t0 + 4168);
    t60 = (t58 + 56U);
    t66 = *((char **)t60);
    t71 = ((char*)((ng9)));
    memset(t43, 0, 8);
    t72 = (t66 + 4);
    t73 = (t71 + 4);
    t55 = *((unsigned int *)t66);
    t56 = *((unsigned int *)t71);
    t57 = (t55 ^ t56);
    t61 = *((unsigned int *)t72);
    t62 = *((unsigned int *)t73);
    t63 = (t61 ^ t62);
    t64 = (t57 | t63);
    t65 = *((unsigned int *)t72);
    t68 = *((unsigned int *)t73);
    t69 = (t65 | t68);
    t70 = (~(t69));
    t74 = (t64 & t70);
    if (t74 != 0)
        goto LAB84;

LAB81:    if (t69 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t43) = 1;

LAB84:    t82 = (t43 + 4);
    t75 = *((unsigned int *)t82);
    t76 = (~(t75));
    t77 = *((unsigned int *)t43);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(74, ng0);

LAB96:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB100;

LAB97:    if (t19 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t4) = 1;

LAB100:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB103:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t6 = (t31 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 127U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 127U);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t14, 1, t31, 7);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);

LAB87:    goto LAB79;

LAB83:    t81 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(67, ng0);

LAB88:    xsi_set_current_line(68, ng0);
    t99 = (t0 + 1688U);
    t105 = *((char **)t99);
    t99 = ((char*)((ng1)));
    memset(t59, 0, 8);
    t106 = (t105 + 4);
    t107 = (t99 + 4);
    t80 = *((unsigned int *)t105);
    t83 = *((unsigned int *)t99);
    t84 = (t80 ^ t83);
    t85 = *((unsigned int *)t106);
    t86 = *((unsigned int *)t107);
    t87 = (t85 ^ t86);
    t88 = (t84 | t87);
    t89 = *((unsigned int *)t106);
    t90 = *((unsigned int *)t107);
    t93 = (t89 | t90);
    t94 = (~(t93));
    t95 = (t88 & t94);
    if (t95 != 0)
        goto LAB92;

LAB89:    if (t93 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t59) = 1;

LAB92:    t110 = (t59 + 4);
    t96 = *((unsigned int *)t110);
    t97 = (~(t96));
    t98 = *((unsigned int *)t59);
    t100 = (t98 & t97);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB95:    goto LAB87;

LAB91:    t108 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(69, ng0);
    t111 = ((char*)((ng6)));
    t124 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t124, t111, 0, 0, 2, 0LL);
    goto LAB95;

LAB99:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(75, ng0);
    t14 = (t0 + 4648);
    t23 = (t14 + 56U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t29, 1, t30, 32);
    t36 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t36, t31, 0, 0, 1, 0LL);
    goto LAB103;

LAB106:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(86, ng0);

LAB111:    xsi_set_current_line(87, ng0);

LAB112:    xsi_set_current_line(88, ng0);
    t29 = ((char*)((ng6)));
    t30 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t3 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB116;

LAB113:    if (t19 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t4) = 1;

LAB116:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB119:    goto LAB110;

LAB115:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(90, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB119;

LAB121:    xsi_set_current_line(97, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB123;

}

static void Always_105_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6400);
    *((int *)t2) = 1;
    t3 = (t0 + 6096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB16:    t6 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB35:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(108, ng0);

LAB15:    xsi_set_current_line(109, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(119, ng0);
    t12 = (t0 + 4488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 8, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 4488);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB35;

}


extern void work_m_00000000002759966796_1157195825_init()
{
	static char *pe[] = {(void *)Initial_20_0,(void *)Always_29_1,(void *)Always_105_2};
	xsi_register_didat("work_m_00000000002759966796_1157195825", "isim/test_isim_beh.exe.sim/work/m_00000000002759966796_1157195825.didat");
	xsi_register_executes(pe);
}
