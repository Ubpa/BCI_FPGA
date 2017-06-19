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
static const char *ng0 = "F:/CS/OSH/final_HW/BCI_FPGA/LC3/MEMORY.v";
static const char *ng1 = "MEMORY_INIT.v";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};



static void Initial_29_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2408);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t11[8];
    char t39[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t12) == 0)
        goto LAB10;

LAB12:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;

LAB13:    t20 = (t11 + 4);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    *((unsigned int *)t11) = t23;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB14:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 1U);
    t30 = (t11 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(38, ng0);

LAB20:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 2408);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1208U);
    t30 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t11, t39, t12, t20, 2, 1, t30, 16, 2);
    t21 = (t11 + 4);
    t6 = *((unsigned int *)t21);
    t48 = (!(t6));
    t36 = (t39 + 4);
    t7 = *((unsigned int *)t36);
    t49 = (!(t7));
    t50 = (t48 && t49);
    if (t50 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB15:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t11) = (t24 | t25);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t26 | t27);
    goto LAB14;

LAB16:    xsi_set_current_line(33, ng0);

LAB19:    xsi_set_current_line(35, ng0);
    t36 = (t0 + 2408);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 2408);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2408);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 1208U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_array_select_value(t39, 16, t38, t42, t45, 2, 1, t47, 16, 2);
    t46 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t46, t39, 0, 0, 16, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB21:    t8 = *((unsigned int *)t11);
    t9 = *((unsigned int *)t39);
    t51 = (t8 - t9);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t39), t52, 0LL);
    goto LAB22;

}


extern void work_m_00000000000898570182_2098114829_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000000898570182_2098114829", "isim/test_isim_beh.exe.sim/work/m_00000000000898570182_2098114829.didat");
	xsi_register_executes(pe);
}
