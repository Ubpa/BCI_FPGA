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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000347779030_0886308060_init();
    work_m_00000000003423240464_1608899886_init();
    work_m_00000000002725949089_3508565487_init();
    work_m_00000000003277169324_2625529924_init();
    work_m_00000000000898570182_2098114829_init();
    work_m_00000000002281988272_2796325778_init();
    work_m_00000000001004016040_3868918985_init();
    work_m_00000000000313435259_4085307397_init();
    work_m_00000000004244840725_0956320635_init();
    work_m_00000000003951567052_4169846304_init();
    work_m_00000000004039665239_4185052599_init();
    work_m_00000000002223014957_3363979213_init();
    work_m_00000000002632170844_1856837202_init();
    work_m_00000000001727420246_1780509408_init();
    work_m_00000000003852670928_3865191691_init();
    work_m_00000000003495391981_2902111669_init();
    work_m_00000000001485947209_2390170383_init();
    work_m_00000000000211752123_3144791079_init();
    work_m_00000000002567709179_1836228330_init();
    work_m_00000000001415076943_4020927633_init();
    work_m_00000000000149809781_0524465965_init();
    work_m_00000000004006908783_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004006908783_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
