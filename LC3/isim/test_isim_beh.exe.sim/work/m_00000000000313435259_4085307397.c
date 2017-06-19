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
static const char *ng0 = "F:/CS/OSH/final_HW/BCI_FPGA/LC3/KEYBOARD.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static int ng6[] = {4, 0};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t24[8];
    char t80[8];
    char t116[8];
    char t119[8];
    char t127[8];
    char t130[8];
    char t157[8];
    char t165[8];
    char t195[8];
    char t196[8];
    char t215[8];
    char t223[8];
    char t253[8];
    char t254[8];
    char t273[8];
    char t281[8];
    char t313[8];
    char t314[8];
    char t333[8];
    char t341[8];
    char t374[8];
    char t375[8];
    char t376[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
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
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
    char *t129;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t214;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    char *t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    char *t271;
    char *t272;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    char *t295;
    char *t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    int t305;
    int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    char *t315;
    char *t316;
    char *t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    char *t330;
    char *t331;
    char *t332;
    char *t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    char *t345;
    char *t346;
    char *t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    char *t355;
    char *t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    int t365;
    int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    char *t373;
    char *t377;
    char *t378;
    char *t379;
    char *t380;
    char *t381;
    char *t382;
    unsigned int t383;
    int t384;
    char *t385;
    unsigned int t386;
    int t387;
    int t388;
    char *t389;
    unsigned int t390;
    int t391;
    int t392;
    unsigned int t393;
    int t394;
    unsigned int t395;
    unsigned int t396;
    int t397;
    int t398;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);

LAB12:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t22) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t12 = (t22 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t15 = (t9 | t10);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB19;

LAB20:
LAB21:    memset(t11, 0, 8);
    t21 = (t22 + 4);
    t54 = *((unsigned int *)t21);
    t55 = (~(t54));
    t56 = *((unsigned int *)t22);
    t57 = (t56 & t55);
    t58 = (t57 & 31U);
    if (t58 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t21) != 0)
        goto LAB24;

LAB25:    t26 = (t0 + 2568);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t24, 0, 8);
    t29 = (t24 + 4);
    t30 = (t28 + 4);
    t59 = *((unsigned int *)t28);
    t60 = (t59 >> 15);
    t61 = (t60 & 1);
    *((unsigned int *)t24) = t61;
    t62 = *((unsigned int *)t30);
    t63 = (t62 >> 15);
    t64 = (t63 & 1);
    *((unsigned int *)t29) = t64;
    memset(t23, 0, 8);
    t33 = (t24 + 4);
    t65 = *((unsigned int *)t33);
    t66 = (~(t65));
    t67 = *((unsigned int *)t24);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t33) == 0)
        goto LAB26;

LAB28:    t37 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t37) = 1;

LAB29:    t70 = (t23 + 4);
    t71 = (t24 + 4);
    t72 = *((unsigned int *)t24);
    t73 = (~(t72));
    *((unsigned int *)t23) = t73;
    *((unsigned int *)t70) = 0;
    if (*((unsigned int *)t71) != 0)
        goto LAB31;

LAB30:    t78 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t78 & 1U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 1U);
    t81 = *((unsigned int *)t11);
    t82 = *((unsigned int *)t23);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t11 + 4);
    t85 = (t23 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB32;

LAB33:
LAB34:    t110 = (t80 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t80);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB35;

LAB36:
LAB37:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 32767U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 32767U);
    t21 = (t0 + 2568);
    t25 = (t0 + 2568);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    t29 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t22, t23, t24, ((int*)(t27)), 2, t28, 32, 1, t29, 32, 1);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    t37 = (t24 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    t41 = *((unsigned int *)t24);
    t42 = (t41 + 0);
    t43 = *((unsigned int *)t22);
    t44 = *((unsigned int *)t23);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t21, t11, t42, *((unsigned int *)t23), t46, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(50, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t11, t12, 2, t13, 32, 1);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t14);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB17;

LAB18:    goto LAB15;

LAB17:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB18;

LAB19:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t22) = (t18 | t19);
    t13 = (t3 + 4);
    t14 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t31 = (~(t20));
    t34 = *((unsigned int *)t13);
    t38 = (~(t34));
    t41 = *((unsigned int *)t4);
    t43 = (~(t41));
    t44 = *((unsigned int *)t14);
    t47 = (~(t44));
    t32 = (t31 & t38);
    t35 = (t43 & t47);
    t48 = (~(t32));
    t49 = (~(t35));
    t50 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t50 & t48);
    t51 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB21;

LAB22:    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB24:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB31:    t74 = *((unsigned int *)t23);
    t75 = *((unsigned int *)t71);
    *((unsigned int *)t23) = (t74 | t75);
    t76 = *((unsigned int *)t70);
    t77 = *((unsigned int *)t71);
    *((unsigned int *)t70) = (t76 | t77);
    goto LAB30;

LAB32:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t11 + 4);
    t95 = (t23 + 4);
    t96 = *((unsigned int *)t11);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t23);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t36 = (t97 & t99);
    t39 = (t101 & t103);
    t104 = (~(t36));
    t105 = (~(t39));
    t106 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t106 & t104);
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    t108 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t108 & t104);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & t105);
    goto LAB34;

LAB35:    xsi_set_current_line(54, ng0);

LAB38:    xsi_set_current_line(55, ng0);
    t117 = (t0 + 1848U);
    t118 = *((char **)t117);
    memset(t119, 0, 8);
    t117 = (t119 + 4);
    t120 = (t118 + 4);
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 0);
    t123 = (t122 & 1);
    *((unsigned int *)t119) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 >> 0);
    t126 = (t125 & 1);
    *((unsigned int *)t117) = t126;
    t128 = (t0 + 1848U);
    t129 = *((char **)t128);
    memset(t130, 0, 8);
    t128 = (t130 + 4);
    t131 = (t129 + 4);
    t132 = *((unsigned int *)t129);
    t133 = (t132 >> 0);
    t134 = (t133 & 1);
    *((unsigned int *)t130) = t134;
    t135 = *((unsigned int *)t131);
    t136 = (t135 >> 0);
    t137 = (t136 & 1);
    *((unsigned int *)t128) = t137;
    memset(t127, 0, 8);
    t138 = (t130 + 4);
    t139 = *((unsigned int *)t138);
    t140 = (~(t139));
    t141 = *((unsigned int *)t130);
    t142 = (t141 & t140);
    t143 = (t142 & 1U);
    if (t143 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t138) == 0)
        goto LAB39;

LAB41:    t144 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t144) = 1;

LAB42:    t145 = (t127 + 4);
    t146 = (t130 + 4);
    t147 = *((unsigned int *)t130);
    t148 = (~(t147));
    *((unsigned int *)t127) = t148;
    *((unsigned int *)t145) = 0;
    if (*((unsigned int *)t146) != 0)
        goto LAB44;

LAB43:    t153 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t153 & 1U);
    t154 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t154 & 1U);
    t155 = (t0 + 1848U);
    t156 = *((char **)t155);
    memset(t157, 0, 8);
    t155 = (t157 + 4);
    t158 = (t156 + 4);
    t159 = *((unsigned int *)t156);
    t160 = (t159 >> 1);
    t161 = (t160 & 1);
    *((unsigned int *)t157) = t161;
    t162 = *((unsigned int *)t158);
    t163 = (t162 >> 1);
    t164 = (t163 & 1);
    *((unsigned int *)t155) = t164;
    t166 = *((unsigned int *)t127);
    t167 = *((unsigned int *)t157);
    t168 = (t166 & t167);
    *((unsigned int *)t165) = t168;
    t169 = (t127 + 4);
    t170 = (t157 + 4);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t169);
    t173 = *((unsigned int *)t170);
    t174 = (t172 | t173);
    *((unsigned int *)t171) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 != 0);
    if (t176 == 1)
        goto LAB45;

LAB46:
LAB47:    t197 = (t0 + 1848U);
    t198 = *((char **)t197);
    memset(t196, 0, 8);
    t197 = (t196 + 4);
    t199 = (t198 + 4);
    t200 = *((unsigned int *)t198);
    t201 = (t200 >> 0);
    *((unsigned int *)t196) = t201;
    t202 = *((unsigned int *)t199);
    t203 = (t202 >> 0);
    *((unsigned int *)t197) = t203;
    t204 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t204 & 3U);
    t205 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t205 & 3U);
    memset(t195, 0, 8);
    t206 = (t196 + 4);
    t207 = *((unsigned int *)t206);
    t208 = (~(t207));
    t209 = *((unsigned int *)t196);
    t210 = (t209 & t208);
    t211 = (t210 & 3U);
    if (t211 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t206) == 0)
        goto LAB48;

LAB50:    t212 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t212) = 1;

LAB51:    t213 = (t0 + 1848U);
    t214 = *((char **)t213);
    memset(t215, 0, 8);
    t213 = (t215 + 4);
    t216 = (t214 + 4);
    t217 = *((unsigned int *)t214);
    t218 = (t217 >> 2);
    t219 = (t218 & 1);
    *((unsigned int *)t215) = t219;
    t220 = *((unsigned int *)t216);
    t221 = (t220 >> 2);
    t222 = (t221 & 1);
    *((unsigned int *)t213) = t222;
    t224 = *((unsigned int *)t195);
    t225 = *((unsigned int *)t215);
    t226 = (t224 & t225);
    *((unsigned int *)t223) = t226;
    t227 = (t195 + 4);
    t228 = (t215 + 4);
    t229 = (t223 + 4);
    t230 = *((unsigned int *)t227);
    t231 = *((unsigned int *)t228);
    t232 = (t230 | t231);
    *((unsigned int *)t229) = t232;
    t233 = *((unsigned int *)t229);
    t234 = (t233 != 0);
    if (t234 == 1)
        goto LAB52;

LAB53:
LAB54:    t255 = (t0 + 1848U);
    t256 = *((char **)t255);
    memset(t254, 0, 8);
    t255 = (t254 + 4);
    t257 = (t256 + 4);
    t258 = *((unsigned int *)t256);
    t259 = (t258 >> 0);
    *((unsigned int *)t254) = t259;
    t260 = *((unsigned int *)t257);
    t261 = (t260 >> 0);
    *((unsigned int *)t255) = t261;
    t262 = *((unsigned int *)t254);
    *((unsigned int *)t254) = (t262 & 7U);
    t263 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t263 & 7U);
    memset(t253, 0, 8);
    t264 = (t254 + 4);
    t265 = *((unsigned int *)t264);
    t266 = (~(t265));
    t267 = *((unsigned int *)t254);
    t268 = (t267 & t266);
    t269 = (t268 & 7U);
    if (t269 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t264) == 0)
        goto LAB55;

LAB57:    t270 = (t253 + 4);
    *((unsigned int *)t253) = 1;
    *((unsigned int *)t270) = 1;

LAB58:    t271 = (t0 + 1848U);
    t272 = *((char **)t271);
    memset(t273, 0, 8);
    t271 = (t273 + 4);
    t274 = (t272 + 4);
    t275 = *((unsigned int *)t272);
    t276 = (t275 >> 3);
    t277 = (t276 & 1);
    *((unsigned int *)t273) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 >> 3);
    t280 = (t279 & 1);
    *((unsigned int *)t271) = t280;
    t282 = *((unsigned int *)t253);
    t283 = *((unsigned int *)t273);
    t284 = (t282 & t283);
    *((unsigned int *)t281) = t284;
    t285 = (t253 + 4);
    t286 = (t273 + 4);
    t287 = (t281 + 4);
    t288 = *((unsigned int *)t285);
    t289 = *((unsigned int *)t286);
    t290 = (t288 | t289);
    *((unsigned int *)t287) = t290;
    t291 = *((unsigned int *)t287);
    t292 = (t291 != 0);
    if (t292 == 1)
        goto LAB59;

LAB60:
LAB61:    t315 = (t0 + 1848U);
    t316 = *((char **)t315);
    memset(t314, 0, 8);
    t315 = (t314 + 4);
    t317 = (t316 + 4);
    t318 = *((unsigned int *)t316);
    t319 = (t318 >> 0);
    *((unsigned int *)t314) = t319;
    t320 = *((unsigned int *)t317);
    t321 = (t320 >> 0);
    *((unsigned int *)t315) = t321;
    t322 = *((unsigned int *)t314);
    *((unsigned int *)t314) = (t322 & 15U);
    t323 = *((unsigned int *)t315);
    *((unsigned int *)t315) = (t323 & 15U);
    memset(t313, 0, 8);
    t324 = (t314 + 4);
    t325 = *((unsigned int *)t324);
    t326 = (~(t325));
    t327 = *((unsigned int *)t314);
    t328 = (t327 & t326);
    t329 = (t328 & 15U);
    if (t329 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t324) == 0)
        goto LAB62;

LAB64:    t330 = (t313 + 4);
    *((unsigned int *)t313) = 1;
    *((unsigned int *)t330) = 1;

LAB65:    t331 = (t0 + 1848U);
    t332 = *((char **)t331);
    memset(t333, 0, 8);
    t331 = (t333 + 4);
    t334 = (t332 + 4);
    t335 = *((unsigned int *)t332);
    t336 = (t335 >> 4);
    t337 = (t336 & 1);
    *((unsigned int *)t333) = t337;
    t338 = *((unsigned int *)t334);
    t339 = (t338 >> 4);
    t340 = (t339 & 1);
    *((unsigned int *)t331) = t340;
    t342 = *((unsigned int *)t313);
    t343 = *((unsigned int *)t333);
    t344 = (t342 & t343);
    *((unsigned int *)t341) = t344;
    t345 = (t313 + 4);
    t346 = (t333 + 4);
    t347 = (t341 + 4);
    t348 = *((unsigned int *)t345);
    t349 = *((unsigned int *)t346);
    t350 = (t348 | t349);
    *((unsigned int *)t347) = t350;
    t351 = *((unsigned int *)t347);
    t352 = (t351 != 0);
    if (t352 == 1)
        goto LAB66;

LAB67:
LAB68:    xsi_vlogtype_concat(t116, 5, 5, 5U, t341, 1, t281, 1, t223, 1, t165, 1, t119, 1);
    t373 = (t0 + 2408);
    t377 = (t0 + 2408);
    t378 = (t377 + 72U);
    t379 = *((char **)t378);
    t380 = ((char*)((ng6)));
    t381 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t374, t375, t376, ((int*)(t379)), 2, t380, 32, 1, t381, 32, 1);
    t382 = (t374 + 4);
    t383 = *((unsigned int *)t382);
    t384 = (!(t383));
    t385 = (t375 + 4);
    t386 = *((unsigned int *)t385);
    t387 = (!(t386));
    t388 = (t384 && t387);
    t389 = (t376 + 4);
    t390 = *((unsigned int *)t389);
    t391 = (!(t390));
    t392 = (t388 && t391);
    if (t392 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t11, t12, 2, t13, 32, 1);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t14);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB71;

LAB72:    goto LAB37;

LAB39:    *((unsigned int *)t127) = 1;
    goto LAB42;

LAB44:    t149 = *((unsigned int *)t127);
    t150 = *((unsigned int *)t146);
    *((unsigned int *)t127) = (t149 | t150);
    t151 = *((unsigned int *)t145);
    t152 = *((unsigned int *)t146);
    *((unsigned int *)t145) = (t151 | t152);
    goto LAB43;

LAB45:    t177 = *((unsigned int *)t165);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t165) = (t177 | t178);
    t179 = (t127 + 4);
    t180 = (t157 + 4);
    t181 = *((unsigned int *)t127);
    t182 = (~(t181));
    t183 = *((unsigned int *)t179);
    t184 = (~(t183));
    t185 = *((unsigned int *)t157);
    t186 = (~(t185));
    t187 = *((unsigned int *)t180);
    t188 = (~(t187));
    t40 = (t182 & t184);
    t42 = (t186 & t188);
    t189 = (~(t40));
    t190 = (~(t42));
    t191 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t191 & t189);
    t192 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t192 & t190);
    t193 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t193 & t189);
    t194 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t194 & t190);
    goto LAB47;

LAB48:    *((unsigned int *)t195) = 1;
    goto LAB51;

LAB52:    t235 = *((unsigned int *)t223);
    t236 = *((unsigned int *)t229);
    *((unsigned int *)t223) = (t235 | t236);
    t237 = (t195 + 4);
    t238 = (t215 + 4);
    t239 = *((unsigned int *)t195);
    t240 = (~(t239));
    t241 = *((unsigned int *)t237);
    t242 = (~(t241));
    t243 = *((unsigned int *)t215);
    t244 = (~(t243));
    t245 = *((unsigned int *)t238);
    t246 = (~(t245));
    t45 = (t240 & t242);
    t46 = (t244 & t246);
    t247 = (~(t45));
    t248 = (~(t46));
    t249 = *((unsigned int *)t229);
    *((unsigned int *)t229) = (t249 & t247);
    t250 = *((unsigned int *)t229);
    *((unsigned int *)t229) = (t250 & t248);
    t251 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t251 & t247);
    t252 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t252 & t248);
    goto LAB54;

LAB55:    *((unsigned int *)t253) = 1;
    goto LAB58;

LAB59:    t293 = *((unsigned int *)t281);
    t294 = *((unsigned int *)t287);
    *((unsigned int *)t281) = (t293 | t294);
    t295 = (t253 + 4);
    t296 = (t273 + 4);
    t297 = *((unsigned int *)t253);
    t298 = (~(t297));
    t299 = *((unsigned int *)t295);
    t300 = (~(t299));
    t301 = *((unsigned int *)t273);
    t302 = (~(t301));
    t303 = *((unsigned int *)t296);
    t304 = (~(t303));
    t305 = (t298 & t300);
    t306 = (t302 & t304);
    t307 = (~(t305));
    t308 = (~(t306));
    t309 = *((unsigned int *)t287);
    *((unsigned int *)t287) = (t309 & t307);
    t310 = *((unsigned int *)t287);
    *((unsigned int *)t287) = (t310 & t308);
    t311 = *((unsigned int *)t281);
    *((unsigned int *)t281) = (t311 & t307);
    t312 = *((unsigned int *)t281);
    *((unsigned int *)t281) = (t312 & t308);
    goto LAB61;

LAB62:    *((unsigned int *)t313) = 1;
    goto LAB65;

LAB66:    t353 = *((unsigned int *)t341);
    t354 = *((unsigned int *)t347);
    *((unsigned int *)t341) = (t353 | t354);
    t355 = (t313 + 4);
    t356 = (t333 + 4);
    t357 = *((unsigned int *)t313);
    t358 = (~(t357));
    t359 = *((unsigned int *)t355);
    t360 = (~(t359));
    t361 = *((unsigned int *)t333);
    t362 = (~(t361));
    t363 = *((unsigned int *)t356);
    t364 = (~(t363));
    t365 = (t358 & t360);
    t366 = (t362 & t364);
    t367 = (~(t365));
    t368 = (~(t366));
    t369 = *((unsigned int *)t347);
    *((unsigned int *)t347) = (t369 & t367);
    t370 = *((unsigned int *)t347);
    *((unsigned int *)t347) = (t370 & t368);
    t371 = *((unsigned int *)t341);
    *((unsigned int *)t341) = (t371 & t367);
    t372 = *((unsigned int *)t341);
    *((unsigned int *)t341) = (t372 & t368);
    goto LAB68;

LAB69:    t393 = *((unsigned int *)t376);
    t394 = (t393 + 0);
    t395 = *((unsigned int *)t374);
    t396 = *((unsigned int *)t375);
    t397 = (t395 - t396);
    t398 = (t397 + 1);
    xsi_vlogvar_wait_assign_value(t373, t116, t394, *((unsigned int *)t375), t398, 0LL);
    goto LAB70;

LAB71:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB72;

}


extern void work_m_00000000000313435259_4085307397_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000000313435259_4085307397", "isim/test_isim_beh.exe.sim/work/m_00000000000313435259_4085307397.didat");
	xsi_register_executes(pe);
}
