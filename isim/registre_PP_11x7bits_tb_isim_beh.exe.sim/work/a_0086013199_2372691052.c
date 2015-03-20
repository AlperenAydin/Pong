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
static const char *ng0 = "/fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/registre_PP_11x7bits_tb.vhd";



static void work_a_0086013199_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1484);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1484);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0086013199_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1040U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(93, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_0086013199_2372691052_p_2(char *t0)
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

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 2244);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (70 * 1000LL);
    t7 = (t0 + 2244);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0086013199_2372691052_p_3(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int64 t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int64 t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int64 t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int64 t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    int64 t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    int64 t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int64 t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;

LAB0:    xsi_set_current_line(99, ng0);

LAB3:    t1 = (t0 + 4276);
    t3 = (t0 + 2280);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 11U);
    xsi_driver_first_trans_delta(t3, 0U, 11U, 0LL);
    t8 = (10 * 1000LL);
    t9 = (t0 + 4287);
    t11 = (t0 + 2280);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 11U);
    xsi_driver_subsequent_trans_delta(t11, 0U, 11U, t8);
    t16 = (20 * 1000LL);
    t17 = (t0 + 4298);
    t19 = (t0 + 2280);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 11U);
    xsi_driver_subsequent_trans_delta(t19, 0U, 11U, t16);
    t24 = (30 * 1000LL);
    t25 = (t0 + 4309);
    t27 = (t0 + 2280);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    memcpy(t31, t25, 11U);
    xsi_driver_subsequent_trans_delta(t27, 0U, 11U, t24);
    t32 = (40 * 1000LL);
    t33 = (t0 + 4320);
    t35 = (t0 + 2280);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 32U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 11U);
    xsi_driver_subsequent_trans_delta(t35, 0U, 11U, t32);
    t40 = (50 * 1000LL);
    t41 = (t0 + 4331);
    t43 = (t0 + 2280);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 11U);
    xsi_driver_subsequent_trans_delta(t43, 0U, 11U, t40);
    t48 = (60 * 1000LL);
    t49 = (t0 + 4342);
    t51 = (t0 + 2280);
    t52 = (t51 + 32U);
    t53 = *((char **)t52);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    memcpy(t55, t49, 11U);
    xsi_driver_subsequent_trans_delta(t51, 0U, 11U, t48);
    t56 = (70 * 1000LL);
    t57 = (t0 + 4353);
    t59 = (t0 + 2280);
    t60 = (t59 + 32U);
    t61 = *((char **)t60);
    t62 = (t61 + 32U);
    t63 = *((char **)t62);
    memcpy(t63, t57, 11U);
    xsi_driver_subsequent_trans_delta(t59, 0U, 11U, t56);
    t64 = (80 * 1000LL);
    t65 = (t0 + 4364);
    t67 = (t0 + 2280);
    t68 = (t67 + 32U);
    t69 = *((char **)t68);
    t70 = (t69 + 32U);
    t71 = *((char **)t70);
    memcpy(t71, t65, 11U);
    xsi_driver_subsequent_trans_delta(t67, 0U, 11U, t64);
    t72 = (90 * 1000LL);
    t73 = (t0 + 4375);
    t75 = (t0 + 2280);
    t76 = (t75 + 32U);
    t77 = *((char **)t76);
    t78 = (t77 + 32U);
    t79 = *((char **)t78);
    memcpy(t79, t73, 11U);
    xsi_driver_subsequent_trans_delta(t75, 0U, 11U, t72);
    t80 = (100 * 1000LL);
    t81 = (t0 + 4386);
    t83 = (t0 + 2280);
    t84 = (t83 + 32U);
    t85 = *((char **)t84);
    t86 = (t85 + 32U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 11U);
    xsi_driver_subsequent_trans_delta(t83, 0U, 11U, t80);
    t88 = (110 * 1000LL);
    t89 = (t0 + 4397);
    t91 = (t0 + 2280);
    t92 = (t91 + 32U);
    t93 = *((char **)t92);
    t94 = (t93 + 32U);
    t95 = *((char **)t94);
    memcpy(t95, t89, 11U);
    xsi_driver_subsequent_trans_delta(t91, 0U, 11U, t88);
    t96 = (120 * 1000LL);
    t97 = (t0 + 4408);
    t99 = (t0 + 2280);
    t100 = (t99 + 32U);
    t101 = *((char **)t100);
    t102 = (t101 + 32U);
    t103 = *((char **)t102);
    memcpy(t103, t97, 11U);
    xsi_driver_subsequent_trans_delta(t99, 0U, 11U, t96);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0086013199_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0086013199_2372691052_p_0,(void *)work_a_0086013199_2372691052_p_1,(void *)work_a_0086013199_2372691052_p_2,(void *)work_a_0086013199_2372691052_p_3};
	xsi_register_didat("work_a_0086013199_2372691052", "isim/registre_PP_11x7bits_tb_isim_beh.exe.sim/work/a_0086013199_2372691052.didat");
	xsi_register_executes(pe);
}
