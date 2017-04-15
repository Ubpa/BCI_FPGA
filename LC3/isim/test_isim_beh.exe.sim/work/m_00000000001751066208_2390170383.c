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
static const char *ng0 = "E:/CS/OSH/final_HW/fpga/LC3/G_MEMORY.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 65535U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {0, 0};
static int ng13[] = {1, 0};



static void Cont_41_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t24[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 9088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2808U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t45 = (t0 + 10528);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 65535U;
    t51 = t50;
    t52 = (t3 + 4);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 15);
    t58 = (t0 + 10400);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 8008);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t25 = (t0 + 2968U);
    t26 = *((char **)t25);
    memset(t24, 0, 8);
    t25 = (t26 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB20:    t33 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB21;

LAB22:    t40 = *((unsigned int *)t24);
    t41 = (~(t40));
    t42 = *((unsigned int *)t33);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t24) > 0)
        goto LAB27;

LAB28:    memcpy(t23, t44, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t18, 16, t23, 16);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB19:    t32 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB20;

LAB21:    t38 = (t0 + 5208U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng1)));
    xsi_vlogtype_concat(t37, 16, 16, 2U, t38, 8, t39, 8);
    goto LAB22;

LAB23:    t44 = ((char*)((ng2)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t23, 16, t37, 16, t44, 16);
    goto LAB29;

LAB27:    memcpy(t23, t37, 8);
    goto LAB29;

}

static void Initial_45_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 7848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 8008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_50_2(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 9584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 10416);
    *((int *)t2) = 1;
    t3 = (t0 + 9616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 16, 0LL);
    goto LAB8;

}

static void Cont_55_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t75[8];
    char t76[8];
    char t78[8];
    char t111[8];
    char t112[8];
    char t114[8];
    char t147[8];
    char t148[8];
    char t150[8];
    char t183[8];
    char t184[8];
    char t186[8];
    char t219[8];
    char t220[8];
    char t222[8];
    char t255[8];
    char t256[8];
    char t258[8];
    char t285[8];
    char t292[8];
    char t293[8];
    char t296[8];
    char t329[8];
    char t330[8];
    char t332[8];
    char t359[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
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
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t185;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t221;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
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
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t257;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t294;
    char *t295;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    char *t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t331;
    char *t333;
    char *t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    char *t347;
    char *t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;
    char *t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    char *t360;
    char *t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    char *t366;
    char *t367;
    char *t368;
    char *t369;
    char *t370;
    char *t371;
    unsigned int t372;
    unsigned int t373;
    char *t374;
    unsigned int t375;
    unsigned int t376;
    char *t377;
    unsigned int t378;
    unsigned int t379;
    char *t380;

LAB0:    t1 = (t0 + 9832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t367 = (t0 + 10592);
    t368 = (t367 + 56U);
    t369 = *((char **)t368);
    t370 = (t369 + 56U);
    t371 = *((char **)t370);
    memset(t371, 0, 8);
    t372 = 65535U;
    t373 = t372;
    t374 = (t3 + 4);
    t375 = *((unsigned int *)t3);
    t372 = (t372 & t375);
    t376 = *((unsigned int *)t374);
    t373 = (t373 & t376);
    t377 = (t371 + 4);
    t378 = *((unsigned int *)t371);
    *((unsigned int *)t371) = (t378 | t372);
    t379 = *((unsigned int *)t377);
    *((unsigned int *)t377) = (t379 | t373);
    xsi_driver_vfirst_trans(t367, 0, 15);
    t380 = (t0 + 10432);
    *((int *)t380) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 4088U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 5368U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t75, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 16, t34, 16, t39, 16);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 4408U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = (t0 + 5368U);
    t77 = *((char **)t69);
    t69 = ((char*)((ng4)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t69 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t69);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB41;

LAB38:    if (t90 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t78) = 1;

LAB41:    memset(t76, 0, 8);
    t94 = (t78 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t78);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t94) != 0)
        goto LAB44;

LAB45:    t101 = (t76 + 4);
    t102 = *((unsigned int *)t76);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB46;

LAB47:    t107 = *((unsigned int *)t76);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t101) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t76) > 0)
        goto LAB52;

LAB53:    memcpy(t75, t111, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 16, t70, 16, t75, 16);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t76) = 1;
    goto LAB45;

LAB44:    t100 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB45;

LAB46:    t105 = (t0 + 4248U);
    t106 = *((char **)t105);
    goto LAB47;

LAB48:    t105 = (t0 + 5368U);
    t113 = *((char **)t105);
    t105 = ((char*)((ng5)));
    memset(t114, 0, 8);
    t115 = (t113 + 4);
    t116 = (t105 + 4);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t105);
    t119 = (t117 ^ t118);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = (t119 | t122);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t116);
    t126 = (t124 | t125);
    t127 = (~(t126));
    t128 = (t123 & t127);
    if (t128 != 0)
        goto LAB58;

LAB55:    if (t126 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t114) = 1;

LAB58:    memset(t112, 0, 8);
    t130 = (t114 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t130) != 0)
        goto LAB61;

LAB62:    t137 = (t112 + 4);
    t138 = *((unsigned int *)t112);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB63;

LAB64:    t143 = *((unsigned int *)t112);
    t144 = (~(t143));
    t145 = *((unsigned int *)t137);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t137) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t112) > 0)
        goto LAB69;

LAB70:    memcpy(t111, t147, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t75, 16, t106, 16, t111, 16);
    goto LAB54;

LAB52:    memcpy(t75, t106, 8);
    goto LAB54;

LAB57:    t129 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t112) = 1;
    goto LAB62;

LAB61:    t136 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB63:    t141 = (t0 + 4568U);
    t142 = *((char **)t141);
    goto LAB64;

LAB65:    t141 = (t0 + 5368U);
    t149 = *((char **)t141);
    t141 = ((char*)((ng6)));
    memset(t150, 0, 8);
    t151 = (t149 + 4);
    t152 = (t141 + 4);
    t153 = *((unsigned int *)t149);
    t154 = *((unsigned int *)t141);
    t155 = (t153 ^ t154);
    t156 = *((unsigned int *)t151);
    t157 = *((unsigned int *)t152);
    t158 = (t156 ^ t157);
    t159 = (t155 | t158);
    t160 = *((unsigned int *)t151);
    t161 = *((unsigned int *)t152);
    t162 = (t160 | t161);
    t163 = (~(t162));
    t164 = (t159 & t163);
    if (t164 != 0)
        goto LAB75;

LAB72:    if (t162 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t150) = 1;

LAB75:    memset(t148, 0, 8);
    t166 = (t150 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t150);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t166) != 0)
        goto LAB78;

LAB79:    t173 = (t148 + 4);
    t174 = *((unsigned int *)t148);
    t175 = *((unsigned int *)t173);
    t176 = (t174 || t175);
    if (t176 > 0)
        goto LAB80;

LAB81:    t179 = *((unsigned int *)t148);
    t180 = (~(t179));
    t181 = *((unsigned int *)t173);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t173) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t148) > 0)
        goto LAB86;

LAB87:    memcpy(t147, t183, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t111, 16, t142, 16, t147, 16);
    goto LAB71;

LAB69:    memcpy(t111, t142, 8);
    goto LAB71;

LAB74:    t165 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t148) = 1;
    goto LAB79;

LAB78:    t172 = (t148 + 4);
    *((unsigned int *)t148) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB79;

LAB80:    t177 = (t0 + 5048U);
    t178 = *((char **)t177);
    goto LAB81;

LAB82:    t177 = (t0 + 5368U);
    t185 = *((char **)t177);
    t177 = ((char*)((ng7)));
    memset(t186, 0, 8);
    t187 = (t185 + 4);
    t188 = (t177 + 4);
    t189 = *((unsigned int *)t185);
    t190 = *((unsigned int *)t177);
    t191 = (t189 ^ t190);
    t192 = *((unsigned int *)t187);
    t193 = *((unsigned int *)t188);
    t194 = (t192 ^ t193);
    t195 = (t191 | t194);
    t196 = *((unsigned int *)t187);
    t197 = *((unsigned int *)t188);
    t198 = (t196 | t197);
    t199 = (~(t198));
    t200 = (t195 & t199);
    if (t200 != 0)
        goto LAB92;

LAB89:    if (t198 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t186) = 1;

LAB92:    memset(t184, 0, 8);
    t202 = (t186 + 4);
    t203 = *((unsigned int *)t202);
    t204 = (~(t203));
    t205 = *((unsigned int *)t186);
    t206 = (t205 & t204);
    t207 = (t206 & 1U);
    if (t207 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t202) != 0)
        goto LAB95;

LAB96:    t209 = (t184 + 4);
    t210 = *((unsigned int *)t184);
    t211 = *((unsigned int *)t209);
    t212 = (t210 || t211);
    if (t212 > 0)
        goto LAB97;

LAB98:    t215 = *((unsigned int *)t184);
    t216 = (~(t215));
    t217 = *((unsigned int *)t209);
    t218 = (t216 || t217);
    if (t218 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t209) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t184) > 0)
        goto LAB103;

LAB104:    memcpy(t183, t219, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t147, 16, t178, 16, t183, 16);
    goto LAB88;

LAB86:    memcpy(t147, t178, 8);
    goto LAB88;

LAB91:    t201 = (t186 + 4);
    *((unsigned int *)t186) = 1;
    *((unsigned int *)t201) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t184) = 1;
    goto LAB96;

LAB95:    t208 = (t184 + 4);
    *((unsigned int *)t184) = 1;
    *((unsigned int *)t208) = 1;
    goto LAB96;

LAB97:    t213 = (t0 + 3288U);
    t214 = *((char **)t213);
    goto LAB98;

LAB99:    t213 = (t0 + 5368U);
    t221 = *((char **)t213);
    t213 = ((char*)((ng8)));
    memset(t222, 0, 8);
    t223 = (t221 + 4);
    t224 = (t213 + 4);
    t225 = *((unsigned int *)t221);
    t226 = *((unsigned int *)t213);
    t227 = (t225 ^ t226);
    t228 = *((unsigned int *)t223);
    t229 = *((unsigned int *)t224);
    t230 = (t228 ^ t229);
    t231 = (t227 | t230);
    t232 = *((unsigned int *)t223);
    t233 = *((unsigned int *)t224);
    t234 = (t232 | t233);
    t235 = (~(t234));
    t236 = (t231 & t235);
    if (t236 != 0)
        goto LAB109;

LAB106:    if (t234 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t222) = 1;

LAB109:    memset(t220, 0, 8);
    t238 = (t222 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t222);
    t242 = (t241 & t240);
    t243 = (t242 & 1U);
    if (t243 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t238) != 0)
        goto LAB112;

LAB113:    t245 = (t220 + 4);
    t246 = *((unsigned int *)t220);
    t247 = *((unsigned int *)t245);
    t248 = (t246 || t247);
    if (t248 > 0)
        goto LAB114;

LAB115:    t251 = *((unsigned int *)t220);
    t252 = (~(t251));
    t253 = *((unsigned int *)t245);
    t254 = (t252 || t253);
    if (t254 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t245) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t220) > 0)
        goto LAB120;

LAB121:    memcpy(t219, t255, 8);

LAB122:    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t183, 16, t214, 16, t219, 16);
    goto LAB105;

LAB103:    memcpy(t183, t214, 8);
    goto LAB105;

LAB108:    t237 = (t222 + 4);
    *((unsigned int *)t222) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t220) = 1;
    goto LAB113;

LAB112:    t244 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB113;

LAB114:    t249 = (t0 + 4728U);
    t250 = *((char **)t249);
    goto LAB115;

LAB116:    t249 = (t0 + 5368U);
    t257 = *((char **)t249);
    t249 = ((char*)((ng9)));
    memset(t258, 0, 8);
    t259 = (t257 + 4);
    t260 = (t249 + 4);
    t261 = *((unsigned int *)t257);
    t262 = *((unsigned int *)t249);
    t263 = (t261 ^ t262);
    t264 = *((unsigned int *)t259);
    t265 = *((unsigned int *)t260);
    t266 = (t264 ^ t265);
    t267 = (t263 | t266);
    t268 = *((unsigned int *)t259);
    t269 = *((unsigned int *)t260);
    t270 = (t268 | t269);
    t271 = (~(t270));
    t272 = (t267 & t271);
    if (t272 != 0)
        goto LAB126;

LAB123:    if (t270 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t258) = 1;

LAB126:    memset(t256, 0, 8);
    t274 = (t258 + 4);
    t275 = *((unsigned int *)t274);
    t276 = (~(t275));
    t277 = *((unsigned int *)t258);
    t278 = (t277 & t276);
    t279 = (t278 & 1U);
    if (t279 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t274) != 0)
        goto LAB129;

LAB130:    t281 = (t256 + 4);
    t282 = *((unsigned int *)t256);
    t283 = *((unsigned int *)t281);
    t284 = (t282 || t283);
    if (t284 > 0)
        goto LAB131;

LAB132:    t288 = *((unsigned int *)t256);
    t289 = (~(t288));
    t290 = *((unsigned int *)t281);
    t291 = (t289 || t290);
    if (t291 > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t281) > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t256) > 0)
        goto LAB137;

LAB138:    memcpy(t255, t292, 8);

LAB139:    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t219, 16, t250, 16, t255, 16);
    goto LAB122;

LAB120:    memcpy(t219, t250, 8);
    goto LAB122;

LAB125:    t273 = (t258 + 4);
    *((unsigned int *)t258) = 1;
    *((unsigned int *)t273) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t256) = 1;
    goto LAB130;

LAB129:    t280 = (t256 + 4);
    *((unsigned int *)t256) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB130;

LAB131:    t286 = (t0 + 1208U);
    t287 = *((char **)t286);
    t286 = ((char*)((ng3)));
    xsi_vlogtype_concat(t285, 16, 16, 2U, t286, 15, t287, 1);
    goto LAB132;

LAB133:    t294 = (t0 + 5368U);
    t295 = *((char **)t294);
    t294 = ((char*)((ng10)));
    memset(t296, 0, 8);
    t297 = (t295 + 4);
    t298 = (t294 + 4);
    t299 = *((unsigned int *)t295);
    t300 = *((unsigned int *)t294);
    t301 = (t299 ^ t300);
    t302 = *((unsigned int *)t297);
    t303 = *((unsigned int *)t298);
    t304 = (t302 ^ t303);
    t305 = (t301 | t304);
    t306 = *((unsigned int *)t297);
    t307 = *((unsigned int *)t298);
    t308 = (t306 | t307);
    t309 = (~(t308));
    t310 = (t305 & t309);
    if (t310 != 0)
        goto LAB143;

LAB140:    if (t308 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t296) = 1;

LAB143:    memset(t293, 0, 8);
    t312 = (t296 + 4);
    t313 = *((unsigned int *)t312);
    t314 = (~(t313));
    t315 = *((unsigned int *)t296);
    t316 = (t315 & t314);
    t317 = (t316 & 1U);
    if (t317 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t312) != 0)
        goto LAB146;

LAB147:    t319 = (t293 + 4);
    t320 = *((unsigned int *)t293);
    t321 = *((unsigned int *)t319);
    t322 = (t320 || t321);
    if (t322 > 0)
        goto LAB148;

LAB149:    t325 = *((unsigned int *)t293);
    t326 = (~(t325));
    t327 = *((unsigned int *)t319);
    t328 = (t326 || t327);
    if (t328 > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t319) > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t293) > 0)
        goto LAB154;

LAB155:    memcpy(t292, t329, 8);

LAB156:    goto LAB134;

LAB135:    xsi_vlog_unsigned_bit_combine(t255, 16, t285, 16, t292, 16);
    goto LAB139;

LAB137:    memcpy(t255, t285, 8);
    goto LAB139;

LAB142:    t311 = (t296 + 4);
    *((unsigned int *)t296) = 1;
    *((unsigned int *)t311) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t293) = 1;
    goto LAB147;

LAB146:    t318 = (t293 + 4);
    *((unsigned int *)t293) = 1;
    *((unsigned int *)t318) = 1;
    goto LAB147;

LAB148:    t323 = (t0 + 4888U);
    t324 = *((char **)t323);
    goto LAB149;

LAB150:    t323 = (t0 + 5368U);
    t331 = *((char **)t323);
    t323 = ((char*)((ng11)));
    memset(t332, 0, 8);
    t333 = (t331 + 4);
    t334 = (t323 + 4);
    t335 = *((unsigned int *)t331);
    t336 = *((unsigned int *)t323);
    t337 = (t335 ^ t336);
    t338 = *((unsigned int *)t333);
    t339 = *((unsigned int *)t334);
    t340 = (t338 ^ t339);
    t341 = (t337 | t340);
    t342 = *((unsigned int *)t333);
    t343 = *((unsigned int *)t334);
    t344 = (t342 | t343);
    t345 = (~(t344));
    t346 = (t341 & t345);
    if (t346 != 0)
        goto LAB160;

LAB157:    if (t344 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t332) = 1;

LAB160:    memset(t330, 0, 8);
    t348 = (t332 + 4);
    t349 = *((unsigned int *)t348);
    t350 = (~(t349));
    t351 = *((unsigned int *)t332);
    t352 = (t351 & t350);
    t353 = (t352 & 1U);
    if (t353 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t348) != 0)
        goto LAB163;

LAB164:    t355 = (t330 + 4);
    t356 = *((unsigned int *)t330);
    t357 = *((unsigned int *)t355);
    t358 = (t356 || t357);
    if (t358 > 0)
        goto LAB165;

LAB166:    t362 = *((unsigned int *)t330);
    t363 = (~(t362));
    t364 = *((unsigned int *)t355);
    t365 = (t363 || t364);
    if (t365 > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t355) > 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t330) > 0)
        goto LAB171;

LAB172:    memcpy(t329, t366, 8);

LAB173:    goto LAB151;

LAB152:    xsi_vlog_unsigned_bit_combine(t292, 16, t324, 16, t329, 16);
    goto LAB156;

LAB154:    memcpy(t292, t324, 8);
    goto LAB156;

LAB159:    t347 = (t332 + 4);
    *((unsigned int *)t332) = 1;
    *((unsigned int *)t347) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t330) = 1;
    goto LAB164;

LAB163:    t354 = (t330 + 4);
    *((unsigned int *)t330) = 1;
    *((unsigned int *)t354) = 1;
    goto LAB164;

LAB165:    t360 = (t0 + 1368U);
    t361 = *((char **)t360);
    t360 = ((char*)((ng3)));
    xsi_vlogtype_concat(t359, 16, 16, 2U, t360, 15, t361, 1);
    goto LAB166;

LAB167:    t366 = ((char*)((ng2)));
    goto LAB168;

LAB169:    xsi_vlog_unsigned_bit_combine(t329, 16, t359, 16, t366, 16);
    goto LAB173;

LAB171:    memcpy(t329, t359, 8);
    goto LAB173;

}

static void Always_81_4(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t48[8];
    char t49[8];
    char t52[8];
    char t96[8];
    char t97[8];
    char t100[8];
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;

LAB0:    t1 = (t0 + 10080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 10448);
    *((int *)t2) = 1;
    t3 = (t0 + 10112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 2488U);
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

LAB13:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 7688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t6) == 0)
        goto LAB81;

LAB83:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB84:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB86;

LAB85:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 6648U);
    t29 = *((char **)t23);
    t23 = (t0 + 5528U);
    t30 = *((char **)t23);
    memset(t31, 0, 8);
    t23 = (t30 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t30);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB90;

LAB88:    if (*((unsigned int *)t23) == 0)
        goto LAB87;

LAB89:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;

LAB90:    t42 = (t31 + 4);
    t43 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    *((unsigned int *)t31) = t35;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB92;

LAB91:    t41 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t41 & 1U);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 & 1U);
    t45 = *((unsigned int *)t29);
    t46 = *((unsigned int *)t31);
    t47 = (t45 | t46);
    *((unsigned int *)t32) = t47;
    t50 = (t29 + 4);
    t51 = (t31 + 4);
    t56 = (t32 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t56) = t55;
    t58 = *((unsigned int *)t56);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB93;

LAB94:
LAB95:    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t32);
    t78 = (t76 & t77);
    *((unsigned int *)t33) = t78;
    t66 = (t4 + 4);
    t79 = (t32 + 4);
    t85 = (t33 + 4);
    t80 = *((unsigned int *)t66);
    t81 = *((unsigned int *)t79);
    t82 = (t80 | t81);
    *((unsigned int *)t85) = t82;
    t83 = *((unsigned int *)t85);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB96;

LAB97:
LAB98:    t91 = (t33 + 4);
    t112 = *((unsigned int *)t91);
    t115 = (~(t112));
    t116 = *((unsigned int *)t33);
    t117 = (t116 & t115);
    t119 = (t117 != 0);
    if (t119 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB101:
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

LAB12:    xsi_set_current_line(82, ng0);

LAB15:    xsi_set_current_line(83, ng0);
    t29 = ((char*)((ng12)));
    t30 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 16, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(88, ng0);

LAB22:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 5528U);
    t6 = *((char **)t5);
    memset(t31, 0, 8);
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB26:    t13 = (t31 + 4);
    t20 = *((unsigned int *)t31);
    t21 = *((unsigned int *)t13);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB27;

LAB28:    t24 = *((unsigned int *)t31);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t13) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t31) > 0)
        goto LAB33;

LAB34:    memcpy(t4, t32, 8);

LAB35:    t138 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t138, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB25:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB26;

LAB27:    t14 = (t0 + 6648U);
    t23 = *((char **)t14);
    goto LAB28;

LAB29:    t14 = (t0 + 5688U);
    t29 = *((char **)t14);
    memset(t33, 0, 8);
    t14 = (t29 + 4);
    t28 = *((unsigned int *)t14);
    t34 = (~(t28));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t14) != 0)
        goto LAB38;

LAB39:    t38 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB40;

LAB41:    t44 = *((unsigned int *)t33);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t38) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t33) > 0)
        goto LAB46;

LAB47:    memcpy(t32, t48, 8);

LAB48:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t4, 1, t23, 1, t32, 1);
    goto LAB35;

LAB33:    memcpy(t4, t23, 8);
    goto LAB35;

LAB36:    *((unsigned int *)t33) = 1;
    goto LAB39;

LAB38:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB40:    t42 = (t0 + 6808U);
    t43 = *((char **)t42);
    goto LAB41;

LAB42:    t42 = (t0 + 5848U);
    t50 = *((char **)t42);
    t42 = (t0 + 6008U);
    t51 = *((char **)t42);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t42 = (t50 + 4);
    t56 = (t51 + 4);
    t57 = (t52 + 4);
    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB49;

LAB50:
LAB51:    memset(t49, 0, 8);
    t79 = (t52 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t52);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t79) != 0)
        goto LAB54;

LAB55:    t86 = (t49 + 4);
    t87 = *((unsigned int *)t49);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB56;

LAB57:    t92 = *((unsigned int *)t49);
    t93 = (~(t92));
    t94 = *((unsigned int *)t86);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t86) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t49) > 0)
        goto LAB62;

LAB63:    memcpy(t48, t96, 8);

LAB64:    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t32, 1, t43, 1, t48, 1);
    goto LAB48;

LAB46:    memcpy(t32, t43, 8);
    goto LAB48;

LAB49:    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t52) = (t63 | t64);
    t65 = (t50 + 4);
    t66 = (t51 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    t70 = (t69 & t68);
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t73 = *((unsigned int *)t51);
    t74 = (t73 & t72);
    t75 = (~(t70));
    t76 = (~(t74));
    t77 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t77 & t75);
    t78 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t78 & t76);
    goto LAB51;

LAB52:    *((unsigned int *)t49) = 1;
    goto LAB55;

LAB54:    t85 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB55;

LAB56:    t90 = (t0 + 6968U);
    t91 = *((char **)t90);
    goto LAB57;

LAB58:    t90 = (t0 + 6168U);
    t98 = *((char **)t90);
    t90 = (t0 + 6328U);
    t99 = *((char **)t90);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t90 = (t98 + 4);
    t104 = (t99 + 4);
    t105 = (t100 + 4);
    t106 = *((unsigned int *)t90);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t97, 0, 8);
    t127 = (t100 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t100);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t127) != 0)
        goto LAB70;

LAB71:    t134 = (t97 + 4);
    t135 = *((unsigned int *)t97);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB72;

LAB73:    t140 = *((unsigned int *)t97);
    t141 = (~(t140));
    t142 = *((unsigned int *)t134);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t134) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t97) > 0)
        goto LAB78;

LAB79:    memcpy(t96, t144, 8);

LAB80:    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t48, 1, t91, 1, t96, 1);
    goto LAB64;

LAB62:    memcpy(t48, t91, 8);
    goto LAB64;

LAB65:    t111 = *((unsigned int *)t100);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t100) = (t111 | t112);
    t113 = (t98 + 4);
    t114 = (t99 + 4);
    t115 = *((unsigned int *)t113);
    t116 = (~(t115));
    t117 = *((unsigned int *)t98);
    t118 = (t117 & t116);
    t119 = *((unsigned int *)t114);
    t120 = (~(t119));
    t121 = *((unsigned int *)t99);
    t122 = (t121 & t120);
    t123 = (~(t118));
    t124 = (~(t122));
    t125 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t125 & t123);
    t126 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t126 & t124);
    goto LAB67;

LAB68:    *((unsigned int *)t97) = 1;
    goto LAB71;

LAB70:    t133 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB71;

LAB72:    t138 = (t0 + 7128U);
    t139 = *((char **)t138);
    goto LAB73;

LAB74:    t138 = (t0 + 7288U);
    t144 = *((char **)t138);
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t96, 1, t139, 1, t144, 1);
    goto LAB80;

LAB78:    memcpy(t96, t139, 8);
    goto LAB80;

LAB81:    *((unsigned int *)t4) = 1;
    goto LAB84;

LAB86:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB85;

LAB87:    *((unsigned int *)t31) = 1;
    goto LAB90;

LAB92:    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t31) = (t36 | t37);
    t39 = *((unsigned int *)t42);
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t39 | t40);
    goto LAB91;

LAB93:    t60 = *((unsigned int *)t32);
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t32) = (t60 | t61);
    t57 = (t29 + 4);
    t65 = (t31 + 4);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t29);
    t70 = (t64 & t63);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t31);
    t74 = (t69 & t68);
    t71 = (~(t70));
    t72 = (~(t74));
    t73 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t73 & t71);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t72);
    goto LAB95;

LAB96:    t87 = *((unsigned int *)t33);
    t88 = *((unsigned int *)t85);
    *((unsigned int *)t33) = (t87 | t88);
    t86 = (t4 + 4);
    t90 = (t32 + 4);
    t89 = *((unsigned int *)t4);
    t92 = (~(t89));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = *((unsigned int *)t32);
    t101 = (~(t95));
    t102 = *((unsigned int *)t90);
    t103 = (~(t102));
    t118 = (t92 & t94);
    t122 = (t101 & t103);
    t106 = (~(t118));
    t107 = (~(t122));
    t108 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t108 & t106);
    t109 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t109 & t107);
    t110 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t110 & t106);
    t111 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t111 & t107);
    goto LAB98;

LAB99:    xsi_set_current_line(97, ng0);

LAB102:    xsi_set_current_line(99, ng0);
    t98 = (t0 + 3928U);
    t99 = *((char **)t98);
    t98 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t98, t99, 0, 0, 16, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB106;

LAB103:    if (t19 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t4) = 1;

LAB106:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB107;

LAB108:
LAB109:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB101;

LAB105:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(101, ng0);
    t14 = ((char*)((ng13)));
    t23 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 1, 0LL);
    goto LAB109;

}


extern void work_m_00000000001751066208_2390170383_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Initial_45_1,(void *)Always_50_2,(void *)Cont_55_3,(void *)Always_81_4};
	xsi_register_didat("work_m_00000000001751066208_2390170383", "isim/test_isim_beh.exe.sim/work/m_00000000001751066208_2390170383.didat");
	xsi_register_executes(pe);
}
