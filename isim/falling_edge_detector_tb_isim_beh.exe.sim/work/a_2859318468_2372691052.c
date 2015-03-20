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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/falling_edge_detector_tb.vhd";



static void work_a_2859318468_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1492U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 948U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1392);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 948U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1392);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2859318468_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 948U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 1000);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(89, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_2859318468_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int64 t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int64 t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int64 t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int64 t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int64 t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 2016);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (10 * 1000LL);
    t7 = (t0 + 2016);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);
    t12 = (20 * 1000LL);
    t13 = (t0 + 2016);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t12);
    t18 = (30 * 1000LL);
    t19 = (t0 + 2016);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t19, 0U, 1, t18);
    t24 = (40 * 1000LL);
    t25 = (t0 + 2016);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t25, 0U, 1, t24);
    t30 = (50 * 1000LL);
    t31 = (t0 + 2016);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t31, 0U, 1, t30);
    t36 = (60 * 1000LL);
    t37 = (t0 + 2016);
    t38 = (t37 + 32U);
    t39 = *((char **)t38);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t37, 0U, 1, t36);
    t42 = (70 * 1000LL);
    t43 = (t0 + 2016);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    *((unsigned char *)t47) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t43, 0U, 1, t42);
    t48 = (80 * 1000LL);
    t49 = (t0 + 2016);
    t50 = (t49 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 32U);
    t53 = *((char **)t52);
    *((unsigned char *)t53) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t49, 0U, 1, t48);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2859318468_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2859318468_2372691052_p_0,(void *)work_a_2859318468_2372691052_p_1,(void *)work_a_2859318468_2372691052_p_2};
	xsi_register_didat("work_a_2859318468_2372691052", "isim/falling_edge_detector_tb_isim_beh.exe.sim/work/a_2859318468_2372691052.didat");
	xsi_register_executes(pe);
}
