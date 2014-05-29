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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//psf/Home/HDL/workspace/file_handling/tb.vhd";
extern char *STD_TEXTIO;



static void work_a_3671711236_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2244U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2620);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2144);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2620);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2144);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3671711236_2372691052_p_1(char *t0)
{
    char t5[16];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int64 t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2388U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1500U);
    t3 = (t0 + 4933);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 8;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (8 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1564U);
    t3 = (t0 + 4941);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(70, ng0);

LAB4:    t2 = (t0 + 1500U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1500U);
    std_textio_file_close(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1564U);
    std_textio_file_close(t2);
    xsi_set_current_line(101, ng0);

LAB34:    *((char **)t1) = &&LAB35;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2288);
    t4 = (t0 + 1500U);
    t6 = (t0 + 1668U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2288);
    t3 = (t0 + 1668U);
    t4 = (t0 + 1832U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t0 + 4764U);
    std_textio_read14(STD_TEXTIO, t2, t3, t7, t6);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4950);
    *((int *)t2) = 1;
    t3 = (t0 + 4954);
    *((int *)t3) = 4;
    t8 = 1;
    t12 = 4;

LAB8:    if (t8 <= t12)
        goto LAB9;

LAB11:    xsi_set_current_line(84, ng0);
    t21 = (10 * 1000LL);
    t2 = (t0 + 2288);
    xsi_process_wait(t2, t21);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB6:;
LAB9:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1832U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t6 = (t0 + 4950);
    t13 = *((int *)t6);
    t14 = (t13 - 1);
    t9 = (t14 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t6));
    t15 = (1U * t9);
    t16 = (0 + t15);
    t17 = (t7 + t16);
    t10 = *((unsigned char *)t17);
    t18 = (t0 + 1312U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((unsigned char *)t18) = t10;
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1312U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)48);
    if (t11 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4950);
    t13 = *((int *)t2);
    t14 = (4 - t13);
    t20 = (t14 - 3);
    t9 = (t20 * -1);
    t15 = (1 * t9);
    t16 = (0U + t15);
    t3 = (t0 + 2656);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t17 = *((char **)t7);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t3, t16, 1, 0LL);

LAB13:
LAB10:    t2 = (t0 + 4950);
    t8 = *((int *)t2);
    t3 = (t0 + 4954);
    t12 = *((int *)t3);
    if (t8 == t12)
        goto LAB11;

LAB15:    t13 = (t8 + 1);
    t8 = t13;
    t4 = (t0 + 4950);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4950);
    t13 = *((int *)t2);
    t14 = (4 - t13);
    t20 = (t14 - 3);
    t9 = (t20 * -1);
    t15 = (1 * t9);
    t16 = (0U + t15);
    t4 = (t0 + 2656);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t17 = (t7 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, t16, 1, 0LL);
    goto LAB13;

LAB16:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4958);
    *((int *)t2) = 0;
    t3 = (t0 + 4962);
    *((int *)t3) = 3;
    t8 = 0;
    t12 = 3;

LAB20:    if (t8 <= t12)
        goto LAB21;

LAB23:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2288);
    t3 = (t0 + 1708U);
    t4 = (t0 + 1916U);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    memcpy(t28, t7, 4U);
    t6 = (t0 + 4780U);
    std_textio_write7(STD_TEXTIO, t2, t3, t28, t6, (unsigned char)0, 0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2288);
    t3 = (t0 + 1564U);
    t4 = (t0 + 1708U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(95, ng0);
    t21 = (10 * 1000LL);
    t2 = (t0 + 2288);
    xsi_process_wait(t2, t21);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 868U);
    t6 = *((char **)t4);
    t4 = (t0 + 4958);
    t13 = *((int *)t4);
    t14 = (t13 - 3);
    t9 = (t14 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t4));
    t15 = (1U * t9);
    t16 = (0 + t15);
    t7 = (t6 + t16);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1916U);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t3 = (t0 + 4958);
    t13 = *((int *)t3);
    t14 = (4 - t13);
    t20 = (t14 - 1);
    t9 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, t14);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t6 = (t4 + t16);
    *((unsigned char *)t6) = (unsigned char)49;

LAB25:
LAB22:    t2 = (t0 + 4958);
    t8 = *((int *)t2);
    t3 = (t0 + 4962);
    t12 = *((int *)t3);
    if (t8 == t12)
        goto LAB23;

LAB27:    t13 = (t8 + 1);
    t8 = t13;
    t4 = (t0 + 4958);
    *((int *)t4) = t8;
    goto LAB20;

LAB24:    xsi_set_current_line(88, ng0);
    t17 = (t0 + 1916U);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t18 = (t0 + 4958);
    t20 = *((int *)t18);
    t22 = (4 - t20);
    t23 = (t22 - 1);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, t22);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t27 = (t19 + t26);
    *((unsigned char *)t27) = (unsigned char)48;
    goto LAB25;

LAB28:    goto LAB4;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    goto LAB2;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

}


extern void work_a_3671711236_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3671711236_2372691052_p_0,(void *)work_a_3671711236_2372691052_p_1};
	xsi_register_didat("work_a_3671711236_2372691052", "isim/tb_isim_beh.exe.sim/work/a_3671711236_2372691052.didat");
	xsi_register_executes(pe);
}
