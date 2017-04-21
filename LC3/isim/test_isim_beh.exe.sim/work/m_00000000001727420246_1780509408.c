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
static const char *ng0 = "E:/CS/OSH/final_HW/BCI_FPGA/LC3/TXD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {868U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {1, 0};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 4800);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t25);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t3 + 4);
    t31 = (t25 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB10;

LAB11:
LAB12:    t58 = (t0 + 8736);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 1U;
    t64 = t63;
    t65 = (t26 + 4);
    t66 = *((unsigned int *)t26);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 8576);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t3 + 4);
    t41 = (t25 + 4);
    t42 = *((unsigned int *)t3);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB12;

}

static void Initial_32_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_36_2(char *t0)
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

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 8592);
    *((int *)t2) = 1;
    t3 = (t0 + 7048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 2160U);
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

LAB13:    xsi_set_current_line(41, ng0);

LAB16:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

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

LAB12:    xsi_set_current_line(37, ng0);

LAB15:    xsi_set_current_line(38, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_54_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 8608);
    *((int *)t2) = 1;
    t3 = (t0 + 7296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 2160U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t6 + 4);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    *((unsigned int *)t6) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t5, 0, 8);
    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t25) != 0)
        goto LAB14;

LAB15:    t32 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    t37 = *((unsigned int *)t5);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t32) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t5) > 0)
        goto LAB22;

LAB23:    memcpy(t4, t43, 8);

LAB24:    t44 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t44, t4, 0, 0, 3, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    *((unsigned int *)t5) = 1;
    goto LAB15;

LAB14:    t31 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB15;

LAB16:    t36 = ((char*)((ng2)));
    goto LAB17;

LAB18:    t41 = (t0 + 5600);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t4, 3, t36, 3, t43, 3);
    goto LAB24;

LAB22:    memcpy(t4, t36, 8);
    goto LAB24;

}

static void Always_58_4(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char t41[8];
    char t42[8];
    char t60[8];
    char t61[8];
    char t66[8];
    char t85[8];
    char t86[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;

LAB0:    t1 = (t0 + 7512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 8624);
    *((int *)t2) = 1;
    t3 = (t0 + 7544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 2160U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t6 + 4);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    *((unsigned int *)t6) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t5, 0, 8);
    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t25) != 0)
        goto LAB14;

LAB15:    t32 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    t37 = *((unsigned int *)t5);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t32) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t5) > 0)
        goto LAB22;

LAB23:    memcpy(t4, t41, 8);

LAB24:    t153 = (t0 + 4160);
    xsi_vlogvar_assign_value(t153, t4, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    *((unsigned int *)t5) = 1;
    goto LAB15;

LAB14:    t31 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB15;

LAB16:    t36 = ((char*)((ng2)));
    goto LAB17;

LAB18:    t43 = (t0 + 3120U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t44 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t44);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t43) != 0)
        goto LAB27;

LAB28:    t51 = (t42 + 4);
    t52 = *((unsigned int *)t42);
    t53 = *((unsigned int *)t51);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB29;

LAB30:    t56 = *((unsigned int *)t42);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t51) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t42) > 0)
        goto LAB35;

LAB36:    memcpy(t41, t60, 8);

LAB37:    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t4, 1, t36, 1, t41, 1);
    goto LAB24;

LAB22:    memcpy(t4, t36, 8);
    goto LAB24;

LAB25:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB27:    t50 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB29:    t55 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t62 = (t0 + 5440);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng4)));
    memset(t66, 0, 8);
    t67 = (t64 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB41;

LAB38:    if (t78 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t66) = 1;

LAB41:    t82 = (t0 + 2960U);
    t83 = *((char **)t82);
    t82 = ((char*)((ng5)));
    t84 = ((char*)((ng6)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_minus(t85, 32, t82, 16, t84, 32);
    memset(t86, 0, 8);
    t87 = (t83 + 4);
    t88 = (t85 + 4);
    t89 = *((unsigned int *)t83);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = *((unsigned int *)t87);
    t93 = *((unsigned int *)t88);
    t94 = (t92 ^ t93);
    t95 = (t91 | t94);
    t96 = *((unsigned int *)t87);
    t97 = *((unsigned int *)t88);
    t98 = (t96 | t97);
    t99 = (~(t98));
    t100 = (t95 & t99);
    if (t100 != 0)
        goto LAB45;

LAB42:    if (t98 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t86) = 1;

LAB45:    t103 = *((unsigned int *)t66);
    t104 = *((unsigned int *)t86);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t66 + 4);
    t107 = (t86 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB46;

LAB47:
LAB48:    memset(t61, 0, 8);
    t134 = (t102 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t102);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t134) != 0)
        goto LAB51;

LAB52:    t141 = (t61 + 4);
    t142 = *((unsigned int *)t61);
    t143 = *((unsigned int *)t141);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB53;

LAB54:    t146 = *((unsigned int *)t61);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (t147 || t148);
    if (t149 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t141) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t61) > 0)
        goto LAB59;

LAB60:    memcpy(t60, t152, 8);

LAB61:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t41, 1, t55, 1, t60, 1);
    goto LAB37;

LAB35:    memcpy(t41, t55, 8);
    goto LAB37;

LAB40:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB41;

LAB44:    t101 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB45;

LAB46:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t66 + 4);
    t117 = (t86 + 4);
    t118 = *((unsigned int *)t66);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t86);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB48;

LAB49:    *((unsigned int *)t61) = 1;
    goto LAB52;

LAB51:    t140 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB52;

LAB53:    t145 = ((char*)((ng2)));
    goto LAB54;

LAB55:    t150 = (t0 + 4160);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t60, 1, t145, 1, t152, 1);
    goto LAB61;

LAB59:    memcpy(t60, t145, 8);
    goto LAB61;

}

static void Always_65_5(char *t0)
{
    char t9[8];
    char t10[8];
    char t32[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 8640);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 5440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);
    t11 = (t0 + 4160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB23:    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB24;

LAB25:    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t21) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t10) > 0)
        goto LAB30;

LAB31:    memcpy(t9, t30, 8);

LAB32:    t31 = (t0 + 5600);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5600);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 5120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t32, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    t27 = (t24 | t26);
    t28 = (~(t27));
    t29 = (t23 & t28);
    if (t29 != 0)
        goto LAB36;

LAB33:    if (t27 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t32) = 1;

LAB36:    memset(t10, 0, 8);
    t14 = (t32 + 4);
    t33 = *((unsigned int *)t14);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t14) != 0)
        goto LAB39;

LAB40:    t21 = (t10 + 4);
    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB41;

LAB42:    t58 = *((unsigned int *)t10);
    t59 = (~(t58));
    t60 = *((unsigned int *)t21);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t21) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t10) > 0)
        goto LAB47;

LAB48:    memcpy(t9, t62, 8);

LAB49:    t63 = (t0 + 5600);
    xsi_vlogvar_assign_value(t63, t9, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 4000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB66:    t12 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB67;

LAB68:    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t12) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t10) > 0)
        goto LAB73;

LAB74:    memcpy(t9, t14, 8);

LAB75:    t20 = (t0 + 5600);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 4000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t7) != 0)
        goto LAB78;

LAB79:    t12 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB80;

LAB81:    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t12) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t10) > 0)
        goto LAB86;

LAB87:    memcpy(t9, t14, 8);

LAB88:    t20 = (t0 + 5600);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 3);
    goto LAB19;

LAB20:    *((unsigned int *)t10) = 1;
    goto LAB23;

LAB22:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB23;

LAB24:    t25 = ((char*)((ng3)));
    goto LAB25;

LAB26:    t30 = ((char*)((ng2)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t9, 3, t25, 3, t30, 3);
    goto LAB32;

LAB30:    memcpy(t9, t25, 8);
    goto LAB32;

LAB35:    t13 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB39:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB40;

LAB41:    t25 = (t0 + 2480U);
    t30 = *((char **)t25);
    memset(t42, 0, 8);
    t25 = (t30 + 4);
    t43 = *((unsigned int *)t25);
    t44 = (~(t43));
    t45 = *((unsigned int *)t30);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t25) != 0)
        goto LAB52;

LAB53:    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB54;

LAB55:    t53 = *((unsigned int *)t42);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t48) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t42) > 0)
        goto LAB60;

LAB61:    memcpy(t41, t57, 8);

LAB62:    goto LAB42;

LAB43:    t62 = ((char*)((ng7)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t9, 3, t41, 3, t62, 3);
    goto LAB49;

LAB47:    memcpy(t9, t41, 8);
    goto LAB49;

LAB50:    *((unsigned int *)t42) = 1;
    goto LAB53;

LAB52:    t31 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB53;

LAB54:    t52 = ((char*)((ng9)));
    goto LAB55;

LAB56:    t57 = ((char*)((ng4)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t41, 3, t52, 3, t57, 3);
    goto LAB62;

LAB60:    memcpy(t41, t52, 8);
    goto LAB62;

LAB63:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB65:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB67:    t13 = ((char*)((ng4)));
    goto LAB68;

LAB69:    t14 = ((char*)((ng10)));
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t9, 3, t13, 3, t14, 3);
    goto LAB75;

LAB73:    memcpy(t9, t13, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t10) = 1;
    goto LAB79;

LAB78:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB79;

LAB80:    t13 = ((char*)((ng2)));
    goto LAB81;

LAB82:    t14 = ((char*)((ng10)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t9, 3, t13, 3, t14, 3);
    goto LAB88;

LAB86:    memcpy(t9, t13, 8);
    goto LAB88;

}

static void Always_76_6(char *t0)
{
    char t4[8];
    char t32[8];
    char t33[8];
    char t37[8];
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
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;

LAB0:    t1 = (t0 + 8008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8656);
    *((int *)t2) = 1;
    t3 = (t0 + 8040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2160U);
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

LAB13:    xsi_set_current_line(87, ng0);

LAB19:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB20:    t6 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB33:
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

LAB12:    xsi_set_current_line(78, ng0);

LAB15:    xsi_set_current_line(79, ng0);
    t29 = ((char*)((ng11)));
    t30 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:    goto LAB14;

LAB16:    xsi_set_current_line(83, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB18;

LAB21:    xsi_set_current_line(89, ng0);
    t12 = ((char*)((ng11)));
    t13 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB33;

LAB23:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB33;

LAB25:    xsi_set_current_line(91, ng0);

LAB34:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2000U);
    t6 = *((char **)t3);
    t3 = (t0 + 1960U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 5120);
    t23 = (t14 + 56U);
    t29 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t13, 2, t29, 3, 2);
    t30 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t30, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 3, t12, 32);
    t13 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t33, 0, 8);
    t13 = (t6 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB38;

LAB35:    if (t19 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t33) = 1;

LAB38:    memset(t32, 0, 8);
    t29 = (t33 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t33);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t29) != 0)
        goto LAB41;

LAB42:    t34 = (t32 + 4);
    t28 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t34);
    t36 = (t28 || t35);
    if (t36 > 0)
        goto LAB43;

LAB44:    t58 = *((unsigned int *)t32);
    t59 = (~(t58));
    t60 = *((unsigned int *)t34);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t34) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t32) > 0)
        goto LAB49;

LAB50:    memcpy(t4, t64, 8);

LAB51:    t65 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t65, t4, 0, 0, 1, 0LL);
    goto LAB33;

LAB27:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 5280);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB33;

LAB29:    xsi_set_current_line(97, ng0);

LAB58:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB37:    t23 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t32) = 1;
    goto LAB42;

LAB41:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB42;

LAB43:    t38 = (t0 + 5280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t37, 0, 8);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t41) == 0)
        goto LAB52;

LAB54:    t47 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t47) = 1;

LAB55:    t48 = (t37 + 4);
    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = (~(t50));
    *((unsigned int *)t37) = t51;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB57;

LAB56:    t56 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t56 & 1U);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & 1U);
    goto LAB44;

LAB45:    t62 = (t0 + 5280);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t4, 1, t37, 1, t64, 1);
    goto LAB51;

LAB49:    memcpy(t4, t37, 8);
    goto LAB51;

LAB52:    *((unsigned int *)t37) = 1;
    goto LAB55;

LAB57:    t52 = *((unsigned int *)t37);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t37) = (t52 | t53);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t54 | t55);
    goto LAB56;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng5)));
    t3 = (t0 + 8800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}


extern void work_m_00000000001727420246_1780509408_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Initial_32_1,(void *)Always_36_2,(void *)Always_54_3,(void *)Always_58_4,(void *)Always_65_5,(void *)Always_76_6,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001727420246_1780509408", "isim/test_isim_beh.exe.sim/work/m_00000000001727420246_1780509408.didat");
	xsi_register_executes(pe);
}
