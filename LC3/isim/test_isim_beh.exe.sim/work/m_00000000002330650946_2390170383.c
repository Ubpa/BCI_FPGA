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
static const char *ng0 = "E:/CS/OSH/final_HW/BCI_FPGA/LC3/G_MEMORY.v";
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
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static int ng14[] = {0, 0};
static int ng15[] = {1, 0};



static void Cont_42_0(char *t0)
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

LAB0:    t1 = (t0 + 10368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
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

LAB16:    t45 = (t0 + 11808);
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
    t58 = (t0 + 11680);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 9288);
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

LAB21:    t38 = (t0 + 5848U);
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

static void Initial_46_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 9128);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 9288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_51_2(char *t0)
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

LAB0:    t1 = (t0 + 10864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 11696);
    *((int *)t2) = 1;
    t3 = (t0 + 10896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
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

LAB6:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 16, 0LL);
    goto LAB8;

}

static void Cont_56_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t35[8];
    char t40[8];
    char t41[8];
    char t43[8];
    char t72[8];
    char t77[8];
    char t78[8];
    char t80[8];
    char t109[8];
    char t114[8];
    char t115[8];
    char t117[8];
    char t146[8];
    char t151[8];
    char t152[8];
    char t154[8];
    char t183[8];
    char t188[8];
    char t189[8];
    char t191[8];
    char t220[8];
    char t225[8];
    char t226[8];
    char t228[8];
    char t257[8];
    char t262[8];
    char t263[8];
    char t265[8];
    char t294[8];
    char t299[8];
    char t300[8];
    char t302[8];
    char t329[8];
    char t336[8];
    char t337[8];
    char t340[8];
    char t369[8];
    char t374[8];
    char t375[8];
    char t377[8];
    char t404[8];
    char t411[8];
    char t412[8];
    char t415[8];
    char t444[8];
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
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
    char *t59;
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
    char *t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t79;
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
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t116;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t153;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t190;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t227;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t264;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
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
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t292;
    char *t293;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t301;
    char *t303;
    char *t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t338;
    char *t339;
    char *t341;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
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
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    char *t367;
    char *t368;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    char *t376;
    char *t378;
    char *t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    char *t392;
    char *t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    char *t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    char *t405;
    char *t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    char *t413;
    char *t414;
    char *t416;
    char *t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    char *t430;
    char *t431;
    unsigned int t432;
    unsigned int t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    char *t437;
    char *t438;
    unsigned int t439;
    unsigned int t440;
    unsigned int t441;
    char *t442;
    char *t443;
    unsigned int t445;
    unsigned int t446;
    unsigned int t447;
    unsigned int t448;
    char *t449;
    char *t450;
    char *t451;
    char *t452;
    char *t453;
    unsigned int t454;
    unsigned int t455;
    char *t456;
    unsigned int t457;
    unsigned int t458;
    char *t459;
    unsigned int t460;
    unsigned int t461;
    char *t462;

LAB0:    t1 = (t0 + 11112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6008U);
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

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t449 = (t0 + 11872);
    t450 = (t449 + 56U);
    t451 = *((char **)t450);
    t452 = (t451 + 56U);
    t453 = *((char **)t452);
    memset(t453, 0, 8);
    t454 = 65535U;
    t455 = t454;
    t456 = (t3 + 4);
    t457 = *((unsigned int *)t3);
    t454 = (t454 & t457);
    t458 = *((unsigned int *)t456);
    t455 = (t455 & t458);
    t459 = (t453 + 4);
    t460 = *((unsigned int *)t453);
    *((unsigned int *)t453) = (t460 | t454);
    t461 = *((unsigned int *)t459);
    *((unsigned int *)t459) = (t461 | t455);
    xsi_driver_vfirst_trans(t449, 0, 15);
    t462 = (t0 + 11712);
    *((int *)t462) = 1;

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

LAB12:    t33 = (t0 + 4408U);
    t34 = *((char **)t33);
    memcpy(t35, t34, 8);
    goto LAB13;

LAB14:    t33 = (t0 + 6008U);
    t42 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t33 + 4);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t33);
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
        goto LAB24;

LAB21:    if (t55 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t43) = 1;

LAB24:    memset(t41, 0, 8);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t66 = (t41 + 4);
    t67 = *((unsigned int *)t41);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB29;

LAB30:    t73 = *((unsigned int *)t41);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t66) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t77, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 23, t35, 23, t40, 23);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t65 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB28;

LAB29:    t70 = (t0 + 4728U);
    t71 = *((char **)t70);
    memcpy(t72, t71, 8);
    goto LAB30;

LAB31:    t70 = (t0 + 6008U);
    t79 = *((char **)t70);
    t70 = ((char*)((ng4)));
    memset(t80, 0, 8);
    t81 = (t79 + 4);
    t82 = (t70 + 4);
    t83 = *((unsigned int *)t79);
    t84 = *((unsigned int *)t70);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = (t85 | t88);
    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t92 = (t90 | t91);
    t93 = (~(t92));
    t94 = (t89 & t93);
    if (t94 != 0)
        goto LAB41;

LAB38:    if (t92 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t80) = 1;

LAB41:    memset(t78, 0, 8);
    t96 = (t80 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t80);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t96) != 0)
        goto LAB44;

LAB45:    t103 = (t78 + 4);
    t104 = *((unsigned int *)t78);
    t105 = *((unsigned int *)t103);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB46;

LAB47:    t110 = *((unsigned int *)t78);
    t111 = (~(t110));
    t112 = *((unsigned int *)t103);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t103) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t78) > 0)
        goto LAB52;

LAB53:    memcpy(t77, t114, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 23, t72, 23, t77, 23);
    goto LAB37;

LAB35:    memcpy(t40, t72, 8);
    goto LAB37;

LAB40:    t95 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t78) = 1;
    goto LAB45;

LAB44:    t102 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB45;

LAB46:    t107 = (t0 + 4568U);
    t108 = *((char **)t107);
    memcpy(t109, t108, 8);
    goto LAB47;

LAB48:    t107 = (t0 + 6008U);
    t116 = *((char **)t107);
    t107 = ((char*)((ng5)));
    memset(t117, 0, 8);
    t118 = (t116 + 4);
    t119 = (t107 + 4);
    t120 = *((unsigned int *)t116);
    t121 = *((unsigned int *)t107);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t118);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = (t122 | t125);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t119);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB58;

LAB55:    if (t129 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t117) = 1;

LAB58:    memset(t115, 0, 8);
    t133 = (t117 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t117);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t133) != 0)
        goto LAB61;

LAB62:    t140 = (t115 + 4);
    t141 = *((unsigned int *)t115);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB63;

LAB64:    t147 = *((unsigned int *)t115);
    t148 = (~(t147));
    t149 = *((unsigned int *)t140);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t140) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t115) > 0)
        goto LAB69;

LAB70:    memcpy(t114, t151, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t77, 23, t109, 23, t114, 23);
    goto LAB54;

LAB52:    memcpy(t77, t109, 8);
    goto LAB54;

LAB57:    t132 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t115) = 1;
    goto LAB62;

LAB61:    t139 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB62;

LAB63:    t144 = (t0 + 4888U);
    t145 = *((char **)t144);
    memcpy(t146, t145, 8);
    goto LAB64;

LAB65:    t144 = (t0 + 6008U);
    t153 = *((char **)t144);
    t144 = ((char*)((ng6)));
    memset(t154, 0, 8);
    t155 = (t153 + 4);
    t156 = (t144 + 4);
    t157 = *((unsigned int *)t153);
    t158 = *((unsigned int *)t144);
    t159 = (t157 ^ t158);
    t160 = *((unsigned int *)t155);
    t161 = *((unsigned int *)t156);
    t162 = (t160 ^ t161);
    t163 = (t159 | t162);
    t164 = *((unsigned int *)t155);
    t165 = *((unsigned int *)t156);
    t166 = (t164 | t165);
    t167 = (~(t166));
    t168 = (t163 & t167);
    if (t168 != 0)
        goto LAB75;

LAB72:    if (t166 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t154) = 1;

LAB75:    memset(t152, 0, 8);
    t170 = (t154 + 4);
    t171 = *((unsigned int *)t170);
    t172 = (~(t171));
    t173 = *((unsigned int *)t154);
    t174 = (t173 & t172);
    t175 = (t174 & 1U);
    if (t175 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t170) != 0)
        goto LAB78;

LAB79:    t177 = (t152 + 4);
    t178 = *((unsigned int *)t152);
    t179 = *((unsigned int *)t177);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB80;

LAB81:    t184 = *((unsigned int *)t152);
    t185 = (~(t184));
    t186 = *((unsigned int *)t177);
    t187 = (t185 || t186);
    if (t187 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t177) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t152) > 0)
        goto LAB86;

LAB87:    memcpy(t151, t188, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t114, 23, t146, 23, t151, 23);
    goto LAB71;

LAB69:    memcpy(t114, t146, 8);
    goto LAB71;

LAB74:    t169 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t152) = 1;
    goto LAB79;

LAB78:    t176 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB79;

LAB80:    t181 = (t0 + 5528U);
    t182 = *((char **)t181);
    memcpy(t183, t182, 8);
    goto LAB81;

LAB82:    t181 = (t0 + 6008U);
    t190 = *((char **)t181);
    t181 = ((char*)((ng7)));
    memset(t191, 0, 8);
    t192 = (t190 + 4);
    t193 = (t181 + 4);
    t194 = *((unsigned int *)t190);
    t195 = *((unsigned int *)t181);
    t196 = (t194 ^ t195);
    t197 = *((unsigned int *)t192);
    t198 = *((unsigned int *)t193);
    t199 = (t197 ^ t198);
    t200 = (t196 | t199);
    t201 = *((unsigned int *)t192);
    t202 = *((unsigned int *)t193);
    t203 = (t201 | t202);
    t204 = (~(t203));
    t205 = (t200 & t204);
    if (t205 != 0)
        goto LAB92;

LAB89:    if (t203 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t191) = 1;

LAB92:    memset(t189, 0, 8);
    t207 = (t191 + 4);
    t208 = *((unsigned int *)t207);
    t209 = (~(t208));
    t210 = *((unsigned int *)t191);
    t211 = (t210 & t209);
    t212 = (t211 & 1U);
    if (t212 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t207) != 0)
        goto LAB95;

LAB96:    t214 = (t189 + 4);
    t215 = *((unsigned int *)t189);
    t216 = *((unsigned int *)t214);
    t217 = (t215 || t216);
    if (t217 > 0)
        goto LAB97;

LAB98:    t221 = *((unsigned int *)t189);
    t222 = (~(t221));
    t223 = *((unsigned int *)t214);
    t224 = (t222 || t223);
    if (t224 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t214) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t189) > 0)
        goto LAB103;

LAB104:    memcpy(t188, t225, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t151, 23, t183, 23, t188, 23);
    goto LAB88;

LAB86:    memcpy(t151, t183, 8);
    goto LAB88;

LAB91:    t206 = (t191 + 4);
    *((unsigned int *)t191) = 1;
    *((unsigned int *)t206) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t189) = 1;
    goto LAB96;

LAB95:    t213 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t213) = 1;
    goto LAB96;

LAB97:    t218 = (t0 + 3448U);
    t219 = *((char **)t218);
    memcpy(t220, t219, 8);
    goto LAB98;

LAB99:    t218 = (t0 + 6008U);
    t227 = *((char **)t218);
    t218 = ((char*)((ng8)));
    memset(t228, 0, 8);
    t229 = (t227 + 4);
    t230 = (t218 + 4);
    t231 = *((unsigned int *)t227);
    t232 = *((unsigned int *)t218);
    t233 = (t231 ^ t232);
    t234 = *((unsigned int *)t229);
    t235 = *((unsigned int *)t230);
    t236 = (t234 ^ t235);
    t237 = (t233 | t236);
    t238 = *((unsigned int *)t229);
    t239 = *((unsigned int *)t230);
    t240 = (t238 | t239);
    t241 = (~(t240));
    t242 = (t237 & t241);
    if (t242 != 0)
        goto LAB109;

LAB106:    if (t240 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t228) = 1;

LAB109:    memset(t226, 0, 8);
    t244 = (t228 + 4);
    t245 = *((unsigned int *)t244);
    t246 = (~(t245));
    t247 = *((unsigned int *)t228);
    t248 = (t247 & t246);
    t249 = (t248 & 1U);
    if (t249 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t244) != 0)
        goto LAB112;

LAB113:    t251 = (t226 + 4);
    t252 = *((unsigned int *)t226);
    t253 = *((unsigned int *)t251);
    t254 = (t252 || t253);
    if (t254 > 0)
        goto LAB114;

LAB115:    t258 = *((unsigned int *)t226);
    t259 = (~(t258));
    t260 = *((unsigned int *)t251);
    t261 = (t259 || t260);
    if (t261 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t251) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t226) > 0)
        goto LAB120;

LAB121:    memcpy(t225, t262, 8);

LAB122:    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t188, 23, t220, 23, t225, 23);
    goto LAB105;

LAB103:    memcpy(t188, t220, 8);
    goto LAB105;

LAB108:    t243 = (t228 + 4);
    *((unsigned int *)t228) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t226) = 1;
    goto LAB113;

LAB112:    t250 = (t226 + 4);
    *((unsigned int *)t226) = 1;
    *((unsigned int *)t250) = 1;
    goto LAB113;

LAB114:    t255 = (t0 + 5048U);
    t256 = *((char **)t255);
    memcpy(t257, t256, 8);
    goto LAB115;

LAB116:    t255 = (t0 + 6008U);
    t264 = *((char **)t255);
    t255 = ((char*)((ng9)));
    memset(t265, 0, 8);
    t266 = (t264 + 4);
    t267 = (t255 + 4);
    t268 = *((unsigned int *)t264);
    t269 = *((unsigned int *)t255);
    t270 = (t268 ^ t269);
    t271 = *((unsigned int *)t266);
    t272 = *((unsigned int *)t267);
    t273 = (t271 ^ t272);
    t274 = (t270 | t273);
    t275 = *((unsigned int *)t266);
    t276 = *((unsigned int *)t267);
    t277 = (t275 | t276);
    t278 = (~(t277));
    t279 = (t274 & t278);
    if (t279 != 0)
        goto LAB126;

LAB123:    if (t277 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t265) = 1;

LAB126:    memset(t263, 0, 8);
    t281 = (t265 + 4);
    t282 = *((unsigned int *)t281);
    t283 = (~(t282));
    t284 = *((unsigned int *)t265);
    t285 = (t284 & t283);
    t286 = (t285 & 1U);
    if (t286 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t281) != 0)
        goto LAB129;

LAB130:    t288 = (t263 + 4);
    t289 = *((unsigned int *)t263);
    t290 = *((unsigned int *)t288);
    t291 = (t289 || t290);
    if (t291 > 0)
        goto LAB131;

LAB132:    t295 = *((unsigned int *)t263);
    t296 = (~(t295));
    t297 = *((unsigned int *)t288);
    t298 = (t296 || t297);
    if (t298 > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t288) > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t263) > 0)
        goto LAB137;

LAB138:    memcpy(t262, t299, 8);

LAB139:    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t225, 23, t257, 23, t262, 23);
    goto LAB122;

LAB120:    memcpy(t225, t257, 8);
    goto LAB122;

LAB125:    t280 = (t265 + 4);
    *((unsigned int *)t265) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t263) = 1;
    goto LAB130;

LAB129:    t287 = (t263 + 4);
    *((unsigned int *)t263) = 1;
    *((unsigned int *)t287) = 1;
    goto LAB130;

LAB131:    t292 = (t0 + 5208U);
    t293 = *((char **)t292);
    memcpy(t294, t293, 8);
    goto LAB132;

LAB133:    t292 = (t0 + 6008U);
    t301 = *((char **)t292);
    t292 = ((char*)((ng10)));
    memset(t302, 0, 8);
    t303 = (t301 + 4);
    t304 = (t292 + 4);
    t305 = *((unsigned int *)t301);
    t306 = *((unsigned int *)t292);
    t307 = (t305 ^ t306);
    t308 = *((unsigned int *)t303);
    t309 = *((unsigned int *)t304);
    t310 = (t308 ^ t309);
    t311 = (t307 | t310);
    t312 = *((unsigned int *)t303);
    t313 = *((unsigned int *)t304);
    t314 = (t312 | t313);
    t315 = (~(t314));
    t316 = (t311 & t315);
    if (t316 != 0)
        goto LAB143;

LAB140:    if (t314 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t302) = 1;

LAB143:    memset(t300, 0, 8);
    t318 = (t302 + 4);
    t319 = *((unsigned int *)t318);
    t320 = (~(t319));
    t321 = *((unsigned int *)t302);
    t322 = (t321 & t320);
    t323 = (t322 & 1U);
    if (t323 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t318) != 0)
        goto LAB146;

LAB147:    t325 = (t300 + 4);
    t326 = *((unsigned int *)t300);
    t327 = *((unsigned int *)t325);
    t328 = (t326 || t327);
    if (t328 > 0)
        goto LAB148;

LAB149:    t332 = *((unsigned int *)t300);
    t333 = (~(t332));
    t334 = *((unsigned int *)t325);
    t335 = (t333 || t334);
    if (t335 > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t325) > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t300) > 0)
        goto LAB154;

LAB155:    memcpy(t299, t336, 8);

LAB156:    goto LAB134;

LAB135:    xsi_vlog_unsigned_bit_combine(t262, 23, t294, 23, t299, 23);
    goto LAB139;

LAB137:    memcpy(t262, t294, 8);
    goto LAB139;

LAB142:    t317 = (t302 + 4);
    *((unsigned int *)t302) = 1;
    *((unsigned int *)t317) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t300) = 1;
    goto LAB147;

LAB146:    t324 = (t300 + 4);
    *((unsigned int *)t300) = 1;
    *((unsigned int *)t324) = 1;
    goto LAB147;

LAB148:    t330 = (t0 + 1208U);
    t331 = *((char **)t330);
    t330 = ((char*)((ng3)));
    xsi_vlogtype_concat(t329, 23, 23, 2U, t330, 15, t331, 8);
    goto LAB149;

LAB150:    t338 = (t0 + 6008U);
    t339 = *((char **)t338);
    t338 = ((char*)((ng11)));
    memset(t340, 0, 8);
    t341 = (t339 + 4);
    t342 = (t338 + 4);
    t343 = *((unsigned int *)t339);
    t344 = *((unsigned int *)t338);
    t345 = (t343 ^ t344);
    t346 = *((unsigned int *)t341);
    t347 = *((unsigned int *)t342);
    t348 = (t346 ^ t347);
    t349 = (t345 | t348);
    t350 = *((unsigned int *)t341);
    t351 = *((unsigned int *)t342);
    t352 = (t350 | t351);
    t353 = (~(t352));
    t354 = (t349 & t353);
    if (t354 != 0)
        goto LAB160;

LAB157:    if (t352 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t340) = 1;

LAB160:    memset(t337, 0, 8);
    t356 = (t340 + 4);
    t357 = *((unsigned int *)t356);
    t358 = (~(t357));
    t359 = *((unsigned int *)t340);
    t360 = (t359 & t358);
    t361 = (t360 & 1U);
    if (t361 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t356) != 0)
        goto LAB163;

LAB164:    t363 = (t337 + 4);
    t364 = *((unsigned int *)t337);
    t365 = *((unsigned int *)t363);
    t366 = (t364 || t365);
    if (t366 > 0)
        goto LAB165;

LAB166:    t370 = *((unsigned int *)t337);
    t371 = (~(t370));
    t372 = *((unsigned int *)t363);
    t373 = (t371 || t372);
    if (t373 > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t363) > 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t337) > 0)
        goto LAB171;

LAB172:    memcpy(t336, t374, 8);

LAB173:    goto LAB151;

LAB152:    xsi_vlog_unsigned_bit_combine(t299, 23, t329, 23, t336, 23);
    goto LAB156;

LAB154:    memcpy(t299, t329, 8);
    goto LAB156;

LAB159:    t355 = (t340 + 4);
    *((unsigned int *)t340) = 1;
    *((unsigned int *)t355) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t337) = 1;
    goto LAB164;

LAB163:    t362 = (t337 + 4);
    *((unsigned int *)t337) = 1;
    *((unsigned int *)t362) = 1;
    goto LAB164;

LAB165:    t367 = (t0 + 5368U);
    t368 = *((char **)t367);
    memcpy(t369, t368, 8);
    goto LAB166;

LAB167:    t367 = (t0 + 6008U);
    t376 = *((char **)t367);
    t367 = ((char*)((ng12)));
    memset(t377, 0, 8);
    t378 = (t376 + 4);
    t379 = (t367 + 4);
    t380 = *((unsigned int *)t376);
    t381 = *((unsigned int *)t367);
    t382 = (t380 ^ t381);
    t383 = *((unsigned int *)t378);
    t384 = *((unsigned int *)t379);
    t385 = (t383 ^ t384);
    t386 = (t382 | t385);
    t387 = *((unsigned int *)t378);
    t388 = *((unsigned int *)t379);
    t389 = (t387 | t388);
    t390 = (~(t389));
    t391 = (t386 & t390);
    if (t391 != 0)
        goto LAB177;

LAB174:    if (t389 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t377) = 1;

LAB177:    memset(t375, 0, 8);
    t393 = (t377 + 4);
    t394 = *((unsigned int *)t393);
    t395 = (~(t394));
    t396 = *((unsigned int *)t377);
    t397 = (t396 & t395);
    t398 = (t397 & 1U);
    if (t398 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t393) != 0)
        goto LAB180;

LAB181:    t400 = (t375 + 4);
    t401 = *((unsigned int *)t375);
    t402 = *((unsigned int *)t400);
    t403 = (t401 || t402);
    if (t403 > 0)
        goto LAB182;

LAB183:    t407 = *((unsigned int *)t375);
    t408 = (~(t407));
    t409 = *((unsigned int *)t400);
    t410 = (t408 || t409);
    if (t410 > 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t400) > 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t375) > 0)
        goto LAB188;

LAB189:    memcpy(t374, t411, 8);

LAB190:    goto LAB168;

LAB169:    xsi_vlog_unsigned_bit_combine(t336, 23, t369, 23, t374, 23);
    goto LAB173;

LAB171:    memcpy(t336, t369, 8);
    goto LAB173;

LAB176:    t392 = (t377 + 4);
    *((unsigned int *)t377) = 1;
    *((unsigned int *)t392) = 1;
    goto LAB177;

LAB178:    *((unsigned int *)t375) = 1;
    goto LAB181;

LAB180:    t399 = (t375 + 4);
    *((unsigned int *)t375) = 1;
    *((unsigned int *)t399) = 1;
    goto LAB181;

LAB182:    t405 = (t0 + 1368U);
    t406 = *((char **)t405);
    t405 = ((char*)((ng3)));
    xsi_vlogtype_concat(t404, 23, 16, 2U, t405, 15, t406, 1);
    goto LAB183;

LAB184:    t413 = (t0 + 6008U);
    t414 = *((char **)t413);
    t413 = ((char*)((ng13)));
    memset(t415, 0, 8);
    t416 = (t414 + 4);
    t417 = (t413 + 4);
    t418 = *((unsigned int *)t414);
    t419 = *((unsigned int *)t413);
    t420 = (t418 ^ t419);
    t421 = *((unsigned int *)t416);
    t422 = *((unsigned int *)t417);
    t423 = (t421 ^ t422);
    t424 = (t420 | t423);
    t425 = *((unsigned int *)t416);
    t426 = *((unsigned int *)t417);
    t427 = (t425 | t426);
    t428 = (~(t427));
    t429 = (t424 & t428);
    if (t429 != 0)
        goto LAB194;

LAB191:    if (t427 != 0)
        goto LAB193;

LAB192:    *((unsigned int *)t415) = 1;

LAB194:    memset(t412, 0, 8);
    t431 = (t415 + 4);
    t432 = *((unsigned int *)t431);
    t433 = (~(t432));
    t434 = *((unsigned int *)t415);
    t435 = (t434 & t433);
    t436 = (t435 & 1U);
    if (t436 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t431) != 0)
        goto LAB197;

LAB198:    t438 = (t412 + 4);
    t439 = *((unsigned int *)t412);
    t440 = *((unsigned int *)t438);
    t441 = (t439 || t440);
    if (t441 > 0)
        goto LAB199;

LAB200:    t445 = *((unsigned int *)t412);
    t446 = (~(t445));
    t447 = *((unsigned int *)t438);
    t448 = (t446 || t447);
    if (t448 > 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t438) > 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t412) > 0)
        goto LAB205;

LAB206:    memcpy(t411, t442, 8);

LAB207:    goto LAB185;

LAB186:    xsi_vlog_unsigned_bit_combine(t374, 23, t404, 23, t411, 23);
    goto LAB190;

LAB188:    memcpy(t374, t404, 8);
    goto LAB190;

LAB193:    t430 = (t415 + 4);
    *((unsigned int *)t415) = 1;
    *((unsigned int *)t430) = 1;
    goto LAB194;

LAB195:    *((unsigned int *)t412) = 1;
    goto LAB198;

LAB197:    t437 = (t412 + 4);
    *((unsigned int *)t412) = 1;
    *((unsigned int *)t437) = 1;
    goto LAB198;

LAB199:    t442 = (t0 + 5688U);
    t443 = *((char **)t442);
    memcpy(t444, t443, 8);
    goto LAB200;

LAB201:    t442 = ((char*)((ng2)));
    goto LAB202;

LAB203:    xsi_vlog_unsigned_bit_combine(t411, 23, t444, 23, t442, 23);
    goto LAB207;

LAB205:    memcpy(t411, t444, 8);
    goto LAB207;

}

static void Always_86_4(char *t0)
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
    char t129[8];
    char t173[8];
    char t174[8];
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
    char *t128;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;

LAB0:    t1 = (t0 + 11360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 11728);
    *((int *)t2) = 1;
    t3 = (t0 + 11392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
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

LAB13:    xsi_set_current_line(93, ng0);
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

LAB20:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 8968);
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
        goto LAB100;

LAB98:    if (*((unsigned int *)t6) == 0)
        goto LAB97;

LAB99:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB100:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB102;

LAB101:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 7768U);
    t29 = *((char **)t23);
    t23 = (t0 + 6168U);
    t30 = *((char **)t23);
    memset(t31, 0, 8);
    t23 = (t30 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t30);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB106;

LAB104:    if (*((unsigned int *)t23) == 0)
        goto LAB103;

LAB105:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;

LAB106:    t42 = (t31 + 4);
    t43 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    *((unsigned int *)t31) = t35;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB108;

LAB107:    t41 = *((unsigned int *)t31);
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
        goto LAB109;

LAB110:
LAB111:    t76 = *((unsigned int *)t4);
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
        goto LAB112;

LAB113:
LAB114:    t91 = (t33 + 4);
    t112 = *((unsigned int *)t91);
    t115 = (~(t112));
    t116 = *((unsigned int *)t33);
    t117 = (t116 & t115);
    t119 = (t117 != 0);
    if (t119 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB117:
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

LAB12:    xsi_set_current_line(87, ng0);

LAB15:    xsi_set_current_line(88, ng0);
    t29 = ((char*)((ng14)));
    t30 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
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
LAB18:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 16, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(93, ng0);

LAB22:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 6168U);
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

LAB35:    t186 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t186, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB25:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB26;

LAB27:    t14 = (t0 + 7768U);
    t23 = *((char **)t14);
    goto LAB28;

LAB29:    t14 = (t0 + 6328U);
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

LAB40:    t42 = (t0 + 7928U);
    t43 = *((char **)t42);
    goto LAB41;

LAB42:    t42 = (t0 + 6488U);
    t50 = *((char **)t42);
    t42 = (t0 + 6648U);
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

LAB56:    t90 = (t0 + 8088U);
    t91 = *((char **)t90);
    goto LAB57;

LAB58:    t90 = (t0 + 6808U);
    t98 = *((char **)t90);
    t90 = (t0 + 6968U);
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
LAB67:    t127 = (t0 + 7128U);
    t128 = *((char **)t127);
    t130 = *((unsigned int *)t100);
    t131 = *((unsigned int *)t128);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t127 = (t100 + 4);
    t133 = (t128 + 4);
    t134 = (t129 + 4);
    t135 = *((unsigned int *)t127);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB68;

LAB69:
LAB70:    memset(t97, 0, 8);
    t156 = (t129 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t129);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t156) != 0)
        goto LAB73;

LAB74:    t163 = (t97 + 4);
    t164 = *((unsigned int *)t97);
    t165 = *((unsigned int *)t163);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB75;

LAB76:    t169 = *((unsigned int *)t97);
    t170 = (~(t169));
    t171 = *((unsigned int *)t163);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t163) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t97) > 0)
        goto LAB81;

LAB82:    memcpy(t96, t173, 8);

LAB83:    goto LAB59;

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

LAB68:    t140 = *((unsigned int *)t129);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t129) = (t140 | t141);
    t142 = (t100 + 4);
    t143 = (t128 + 4);
    t144 = *((unsigned int *)t142);
    t145 = (~(t144));
    t146 = *((unsigned int *)t100);
    t147 = (t146 & t145);
    t148 = *((unsigned int *)t143);
    t149 = (~(t148));
    t150 = *((unsigned int *)t128);
    t151 = (t150 & t149);
    t152 = (~(t147));
    t153 = (~(t151));
    t154 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t154 & t152);
    t155 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t155 & t153);
    goto LAB70;

LAB71:    *((unsigned int *)t97) = 1;
    goto LAB74;

LAB73:    t162 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB74;

LAB75:    t167 = (t0 + 8248U);
    t168 = *((char **)t167);
    goto LAB76;

LAB77:    t167 = (t0 + 7288U);
    t175 = *((char **)t167);
    memset(t174, 0, 8);
    t167 = (t175 + 4);
    t176 = *((unsigned int *)t167);
    t177 = (~(t176));
    t178 = *((unsigned int *)t175);
    t179 = (t178 & t177);
    t180 = (t179 & 1U);
    if (t180 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t167) != 0)
        goto LAB86;

LAB87:    t182 = (t174 + 4);
    t183 = *((unsigned int *)t174);
    t184 = *((unsigned int *)t182);
    t185 = (t183 || t184);
    if (t185 > 0)
        goto LAB88;

LAB89:    t188 = *((unsigned int *)t174);
    t189 = (~(t188));
    t190 = *((unsigned int *)t182);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t182) > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t174) > 0)
        goto LAB94;

LAB95:    memcpy(t173, t192, 8);

LAB96:    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t96, 1, t168, 1, t173, 1);
    goto LAB83;

LAB81:    memcpy(t96, t168, 8);
    goto LAB83;

LAB84:    *((unsigned int *)t174) = 1;
    goto LAB87;

LAB86:    t181 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t181) = 1;
    goto LAB87;

LAB88:    t186 = (t0 + 8408U);
    t187 = *((char **)t186);
    goto LAB89;

LAB90:    t186 = (t0 + 8568U);
    t192 = *((char **)t186);
    goto LAB91;

LAB92:    xsi_vlog_unsigned_bit_combine(t173, 1, t187, 1, t192, 1);
    goto LAB96;

LAB94:    memcpy(t173, t187, 8);
    goto LAB96;

LAB97:    *((unsigned int *)t4) = 1;
    goto LAB100;

LAB102:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB101;

LAB103:    *((unsigned int *)t31) = 1;
    goto LAB106;

LAB108:    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t31) = (t36 | t37);
    t39 = *((unsigned int *)t42);
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t39 | t40);
    goto LAB107;

LAB109:    t60 = *((unsigned int *)t32);
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
    goto LAB111;

LAB112:    t87 = *((unsigned int *)t33);
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
    goto LAB114;

LAB115:    xsi_set_current_line(103, ng0);

LAB118:    xsi_set_current_line(105, ng0);
    t98 = (t0 + 4248U);
    t99 = *((char **)t98);
    t98 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t98, t99, 0, 0, 16, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6008U);
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
        goto LAB122;

LAB119:    if (t19 != 0)
        goto LAB121;

LAB120:    *((unsigned int *)t4) = 1;

LAB122:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB123;

LAB124:
LAB125:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB117;

LAB121:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB122;

LAB123:    xsi_set_current_line(107, ng0);
    t14 = ((char*)((ng15)));
    t23 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 1, 0LL);
    goto LAB125;

}


extern void work_m_00000000002330650946_2390170383_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Initial_46_1,(void *)Always_51_2,(void *)Cont_56_3,(void *)Always_86_4};
	xsi_register_didat("work_m_00000000002330650946_2390170383", "isim/test_isim_beh.exe.sim/work/m_00000000002330650946_2390170383.didat");
	xsi_register_executes(pe);
}
