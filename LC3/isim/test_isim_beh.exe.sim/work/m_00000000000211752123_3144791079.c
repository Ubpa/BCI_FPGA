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
static const char *ng0 = "E:/CS/OSH/final_HW/fpga/LC3/CONTROLSTORE.v";
static const char *ng1 = "MicroI_ROM.v";
static unsigned int ng2[] = {18U, 0U};



static void Initial_42_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7528);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 7528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 7528);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 7528);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 50, t3, t7, t10, 2, 1, t11, 6, 2);
    t12 = (t0 + 7368);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 50);

LAB1:    return;
}

static void Cont_48_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;

LAB0:    t1 = (t0 + 8696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 7368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 1);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t10 = (t0 + 11536);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_bit_copy(t14, 0, t4, 1, 1);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t15 = (t0 + 11472);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t4, 2, 1);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t20 = (t0 + 11408);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t24, 0, t4, 3, 2);
    xsi_driver_vfirst_trans(t20, 0, 1);
    t25 = (t0 + 11344);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_bit_copy(t29, 0, t4, 5, 1);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t30 = (t0 + 11280);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_bit_copy(t34, 0, t4, 6, 2);
    xsi_driver_vfirst_trans(t30, 0, 1);
    t35 = (t0 + 11216);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_bit_copy(t39, 0, t4, 8, 1);
    xsi_driver_vfirst_trans(t35, 0, 0);
    t40 = (t0 + 11152);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_bit_copy(t44, 0, t4, 9, 2);
    xsi_driver_vfirst_trans(t40, 0, 1);
    t45 = (t0 + 11088);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_bit_copy(t49, 0, t4, 11, 2);
    xsi_driver_vfirst_trans(t45, 0, 1);
    t50 = (t0 + 11024);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_bit_copy(t54, 0, t4, 13, 1);
    xsi_driver_vfirst_trans(t50, 0, 0);
    t55 = (t0 + 10960);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_bit_copy(t59, 0, t4, 14, 2);
    xsi_driver_vfirst_trans(t55, 0, 1);
    t60 = (t0 + 10896);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_bit_copy(t64, 0, t4, 16, 2);
    xsi_driver_vfirst_trans(t60, 0, 1);
    t65 = (t0 + 10832);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_bit_copy(t69, 0, t4, 18, 2);
    xsi_driver_vfirst_trans(t65, 0, 1);
    t70 = (t0 + 10768);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_bit_copy(t74, 0, t4, 20, 1);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t75 = (t0 + 10704);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_bit_copy(t79, 0, t4, 21, 1);
    xsi_driver_vfirst_trans(t75, 0, 0);
    t80 = (t0 + 10640);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    xsi_vlog_bit_copy(t84, 0, t4, 22, 1);
    xsi_driver_vfirst_trans(t80, 0, 0);
    t85 = (t0 + 10576);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    xsi_vlog_bit_copy(t89, 0, t4, 23, 1);
    xsi_driver_vfirst_trans(t85, 0, 0);
    t90 = (t0 + 10512);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    xsi_vlog_bit_copy(t94, 0, t4, 24, 1);
    xsi_driver_vfirst_trans(t90, 0, 0);
    t95 = (t0 + 10448);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    xsi_vlog_bit_copy(t99, 0, t4, 25, 1);
    xsi_driver_vfirst_trans(t95, 0, 0);
    t100 = (t0 + 10384);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    xsi_vlog_bit_copy(t104, 0, t4, 26, 1);
    xsi_driver_vfirst_trans(t100, 0, 0);
    t105 = (t0 + 10320);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    xsi_vlog_bit_copy(t109, 0, t4, 27, 1);
    xsi_driver_vfirst_trans(t105, 0, 0);
    t110 = (t0 + 10256);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    xsi_vlog_bit_copy(t114, 0, t4, 28, 1);
    xsi_driver_vfirst_trans(t110, 0, 0);
    t115 = (t0 + 10192);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    xsi_vlog_bit_copy(t119, 0, t4, 29, 1);
    xsi_driver_vfirst_trans(t115, 0, 0);
    t120 = (t0 + 10128);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    xsi_vlog_bit_copy(t124, 0, t4, 30, 1);
    xsi_driver_vfirst_trans(t120, 0, 0);
    t125 = (t0 + 10064);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    xsi_vlog_bit_copy(t129, 0, t4, 31, 1);
    xsi_driver_vfirst_trans(t125, 0, 0);
    t130 = (t0 + 10000);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    xsi_vlog_bit_copy(t134, 0, t4, 32, 1);
    xsi_driver_vfirst_trans(t130, 0, 0);
    t135 = (t0 + 9936);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    xsi_vlog_bit_copy(t139, 0, t4, 33, 1);
    xsi_driver_vfirst_trans(t135, 0, 0);
    t140 = (t0 + 9872);
    t141 = (t140 + 56U);
    t142 = *((char **)t141);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    xsi_vlog_bit_copy(t144, 0, t4, 34, 1);
    xsi_driver_vfirst_trans(t140, 0, 0);
    t145 = (t0 + 9808);
    t146 = (t145 + 56U);
    t147 = *((char **)t146);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    xsi_vlog_bit_copy(t149, 0, t4, 35, 1);
    xsi_driver_vfirst_trans(t145, 0, 0);
    t150 = (t0 + 9744);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    t153 = (t152 + 56U);
    t154 = *((char **)t153);
    xsi_vlog_bit_copy(t154, 0, t4, 36, 1);
    xsi_driver_vfirst_trans(t150, 0, 0);
    t155 = (t0 + 9680);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    xsi_vlog_bit_copy(t159, 0, t4, 37, 1);
    xsi_driver_vfirst_trans(t155, 0, 0);
    t160 = (t0 + 9616);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    xsi_vlog_bit_copy(t164, 0, t4, 38, 1);
    xsi_driver_vfirst_trans(t160, 0, 0);
    t165 = (t0 + 9552);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    t168 = (t167 + 56U);
    t169 = *((char **)t168);
    xsi_vlog_bit_copy(t169, 0, t4, 39, 1);
    xsi_driver_vfirst_trans(t165, 0, 0);
    t170 = (t0 + 9488);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    t173 = (t172 + 56U);
    t174 = *((char **)t173);
    xsi_vlog_bit_copy(t174, 0, t4, 40, 6);
    xsi_driver_vfirst_trans(t170, 0, 5);
    t175 = (t0 + 9424);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t178 = (t177 + 56U);
    t179 = *((char **)t178);
    xsi_vlog_bit_copy(t179, 0, t4, 46, 3);
    xsi_driver_vfirst_trans(t175, 0, 2);
    t180 = (t0 + 9360);
    t181 = (t180 + 56U);
    t182 = *((char **)t181);
    t183 = (t182 + 56U);
    t184 = *((char **)t183);
    xsi_vlog_bit_copy(t184, 0, t4, 49, 1);
    xsi_driver_vfirst_trans(t180, 0, 0);
    t185 = (t0 + 9264);
    *((int *)t185) = 1;

LAB1:    return;
}

static void Always_54_2(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 8944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 9280);
    *((int *)t2) = 1;
    t3 = (t0 + 8976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 7528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 7528);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 7528);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 50, t6, t10, t13, 2, 1, t15, 6, 2);
    t14 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 50, 0LL);
    goto LAB2;

}


extern void work_m_00000000000211752123_3144791079_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Cont_48_1,(void *)Always_54_2};
	xsi_register_didat("work_m_00000000000211752123_3144791079", "isim/test_isim_beh.exe.sim/work/m_00000000000211752123_3144791079.didat");
	xsi_register_executes(pe);
}
