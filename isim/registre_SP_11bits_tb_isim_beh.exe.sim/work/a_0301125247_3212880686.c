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
static const char *ng0 = "/fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/registre_SP_11bits.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0301125247_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned char t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1924);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 752U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t6 = (t0 + 3598);
    *((int *)t6) = 0;
    t7 = (t0 + 3602);
    *((int *)t7) = 9;
    t8 = 0;
    t9 = 9;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1976);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t10 = (t7 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_delta(t1, 10U, 1, 0LL);
    goto LAB6;

LAB9:    xsi_set_current_line(40, ng0);
    t10 = (t0 + 960U);
    t11 = *((char **)t10);
    t10 = (t0 + 3598);
    t12 = *((int *)t10);
    t13 = (t12 - 10);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(10, 0, -1, *((int *)t10));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t17 = (t11 + t16);
    t18 = *((unsigned char *)t17);
    t19 = (t0 + 3598);
    t20 = *((int *)t19);
    t21 = (t20 + 1);
    t22 = (t21 - 10);
    t23 = (t22 * -1);
    t24 = (1 * t23);
    t25 = (0U + t24);
    t26 = (t0 + 1976);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = t18;
    xsi_driver_first_trans_delta(t26, t25, 1, 0LL);

LAB10:    t1 = (t0 + 3598);
    t8 = *((int *)t1);
    t2 = (t0 + 3602);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB11;

LAB12:    t12 = (t8 + 1);
    t8 = t12;
    t6 = (t0 + 3598);
    *((int *)t6) = t8;
    goto LAB8;

}

static void work_a_0301125247_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 2012);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 1932);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0301125247_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0301125247_3212880686_p_0,(void *)work_a_0301125247_3212880686_p_1};
	xsi_register_didat("work_a_0301125247_3212880686", "isim/registre_SP_11bits_tb_isim_beh.exe.sim/work/a_0301125247_3212880686.didat");
	xsi_register_executes(pe);
}
