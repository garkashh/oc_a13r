/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _MT_GPUFREQ_CORE_H_
#define _MT_GPUFREQ_CORE_H_

/**************************************************
 * MT6768/MT6767 : GPU DVFS OPP table Setting
 **************************************************/
#define SEG_GPU_DVFS_FREQ0			(800000)	/* KHz */
#define SEG_GPU_DVFS_FREQ1			(775000)	/* KHz */
#define SEG_GPU_DVFS_FREQ2			(750000)	/* KHz */
#define SEG_GPU_DVFS_FREQ3			(725000)	/* KHz */
#define SEG_GPU_DVFS_FREQ4			(700000)	/* KHz */
#define SEG_GPU_DVFS_FREQ5			(675000)	/* KHz */
#define SEG_GPU_DVFS_FREQ6			(650000)	/* KHz */
#define SEG_GPU_DVFS_FREQ7			(625000)	/* KHz */
#define SEG_GPU_DVFS_FREQ8			(600000)	/* KHz */
#define SEG_GPU_DVFS_FREQ9			(575000)	/* KHz */
#define SEG_GPU_DVFS_FREQ10			(550000)	/* KHz */
#define SEG_GPU_DVFS_FREQ11			(525000)	/* KHz */
#define SEG_GPU_DVFS_FREQ12			(500000)	/* KHz */
#define SEG_GPU_DVFS_FREQ13			(475000)	/* KHz */
#define SEG_GPU_DVFS_FREQ14			(450000)	/* KHz */
#define SEG_GPU_DVFS_FREQ15			(423000)	/* KHz */
#define SEG_GPU_DVFS_FREQ16			(396000)	/* KHz */
#define SEG_GPU_DVFS_FREQ17			(369000)	/* KHz */
#define SEG_GPU_DVFS_FREQ18			(343000)	/* KHz */
#define SEG_GPU_DVFS_FREQ19			(316000)	/* KHz */
#define SEG_GPU_DVFS_FREQ20			(315000)	/* KHz */
#define SEG_GPU_DVFS_FREQ21			(313000)	/* KHz */
#define SEG_GPU_DVFS_FREQ22			(311000)	/* KHz */
#define SEG_GPU_DVFS_FREQ23			(309000)	/* KHz */
#define SEG_GPU_DVFS_FREQ24			(307000)	/* KHz */
#define SEG_GPU_DVFS_FREQ25			(305000)	/* KHz */
#define SEG_GPU_DVFS_FREQ26			(303000)	/* KHz */
#define SEG_GPU_DVFS_FREQ27			(301000)	/* KHz */
#define SEG_GPU_DVFS_FREQ28			(300000)	/* KHz */
#define SEG_GPU_DVFS_FREQ29			(299000)	/* KHz */
#define SEG_GPU_DVFS_FREQ30			(297000)	/* KHz */
#define SEG_GPU_DVFS_FREQ31			(295000)	/* KHz */
#define SEG_GPU_DVFS_FREQ32			(294000)	/* KHz */
#define SEG_GPU_DVFS_FREQ33			(293000)	/* KHz */
#define SEG_GPU_DVFS_FREQ34			(292000)	/* KHz */
#define SEG_GPU_DVFS_FREQ35			(290000)	/* KHz */
#define SEG_GPU_DVFS_FREQ36			(287000)	/* KHz */
#define SEG_GPU_DVFS_FREQ37			(285000)	/* KHz */
#define SEG_GPU_DVFS_FREQ38			(284000)	/* KHz */
#define SEG_GPU_DVFS_FREQ39			(280000)	/* KHz */

#define SEG_GPU_DVFS_VOLT0		(110000)	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT1		(107500)	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT2		(105000)	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT3		(102500)	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT4		(100000)	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT5		(97500) 	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT6		(95000) 	/* mV x 100 */
#define SEG_GPU_DVFS_VOLT7		(92500)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT8		(90000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT9		(87500)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT10		(85000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT11		(82500)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT12		(80000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT13		(77500)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT14		(75000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT15		(73375)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT16		(72125)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT17		(71875)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT18		(70625)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT19		(69000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT20		(68750)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT21		(67500)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT22		(67250)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT23		(66625)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT24		(66000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT25		(65375)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT26		(64750)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT27		(64125)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT28		(63875)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT29		(63375)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT30		(63750)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT31		(63425)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT32		(63000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT33		(62775)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT34		(62475)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT35		(62250)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT36		(62125)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT37		(62000)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT38		(61875)		/* mV x 100 */
#define SEG_GPU_DVFS_VOLT39		(61250)		/* mV x 100 */

#define SEG_GPU_DVFS_VSRAM0		(115000)	/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM1		(105000)	/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM2		(102500)	/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM3		(100000)	/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM4		(97500)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM5		(95000)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM6		(92500)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM7		(90000)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM8		(89375)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM9		(88125)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM10		(86875)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM11	(85625)		/* mV x 100 */
#define SEG_GPU_DVFS_VSRAM12	(85000)		/* mV x 100 */

#define FIXED_VSRAM_VOLT			(85000)		/* mV x 100 */
#define FIXED_VSRAM_VOLT_THSRESHOLD	(75000)		/* mV x 100 */

/**************************************************
 * PMIC Setting
 **************************************************/
#define VGPU_MAX_VOLT		(SEG_GPU_DVFS_VOLT0)
#define VSRAM_GPU_MAX_VOLT	(SEG_GPU_DVFS_VSRAM0)
#define DELAY_FACTOR		(625)
#define BUCK_DIFF_MAX		(25000)		/* mV x 100 */
#define BUCK_DIFF_MIN		(10000)		/* mV x 100 */
#define NUM_OF_OPP_IDX		(40)

/**************************************************
 * efuse Setting
 **************************************************/
#define GPUFREQ_EFUSE_INDEX			(8)
#define EFUSE_MFG_SPD_BOND_SHIFT		(8)
#define EFUSE_MFG_SPD_BOND_MASK			(0xF)
#define FUNC_CODE_EFUSE_INDEX			(22)

/**************************************************
 * Clock Setting
 **************************************************/
#define POST_DIV_2_MAX_FREQ			(1900000)
#define POST_DIV_2_MIN_FREQ			(750000)
#define POST_DIV_4_MAX_FREQ			(950000)
#define POST_DIV_4_MIN_FREQ			(375000)
#define POST_DIV_8_MAX_FREQ			(475000)
#define POST_DIV_8_MIN_FREQ			(187500)
#define POST_DIV_16_MAX_FREQ			(237500)
#define POST_DIV_16_MIN_FREQ			(93750)
#define POST_DIV_MASK				(0x70000000)
#define POST_DIV_SHIFT				(24)
#define TO_MHz_HEAD				(100)
#define TO_MHz_TAIL				(10)
#define ROUNDING_VALUE				(5)
#define DDS_SHIFT				(14)
#define GPUPLL_FIN				(26)
#define GPUPLL_CON1				(g_apmixed_base + 0x24C)

/**************************************************
 * Reference Power Setting
 **************************************************/
#define GPU_ACT_REF_POWER			(1285)		/* mW  */
#define GPU_ACT_REF_FREQ			(900000)	/* KHz */
#define GPU_ACT_REF_VOLT			(90000)		/* mV x 100 */
#define GPU_DVFS_PTPOD_DISABLE_VOLT	(80000)		/* mV x 100 */
#define GPU_DVFS_PTPOD_DISABLE_VSRAM_VOLT (90000)

/**************************************************
 * Log Setting
 **************************************************/
#define GPUFERQ_TAG				"[GPU/DVFS]"
#define gpufreq_pr_err(fmt, args...)		pr_err(GPUFERQ_TAG"[ERROR]"fmt, ##args)
#define gpufreq_pr_warn(fmt, args...)		pr_warn(GPUFERQ_TAG"[WARNING]"fmt, ##args)
#define gpufreq_pr_info(fmt, args...)		pr_info(GPUFERQ_TAG"[INFO]"fmt, ##args)
#define gpufreq_pr_debug(fmt, args...)		pr_debug(GPUFERQ_TAG"[DEBUG]"fmt, ##args)

/**************************************************
 * Condition Setting
 **************************************************/
#define MT_GPUFREQ_STATIC_PWR_READY2USE
#define MT_GPUFREQ_LOW_BATT_VOLT_PROTECT
#define MT_GPUFREQ_BATT_PERCENT_PROTECT /* todo: disable it */
#define MT_GPUFREQ_BATT_OC_PROTECT
#define MT_GPUFREQ_DYNAMIC_POWER_TABLE_UPDATE

/**************************************************
 * Battery Over Current Protect
 **************************************************/
#ifdef MT_GPUFREQ_BATT_OC_PROTECT
#define MT_GPUFREQ_BATT_OC_LIMIT_FREQ		(485000)	/* KHz */
#endif

/**************************************************
 * Battery Percentage Protect
 **************************************************/
#ifdef MT_GPUFREQ_BATT_PERCENT_PROTECT
#define MT_GPUFREQ_BATT_PERCENT_LIMIT_FREQ	(485000)	/* KHz */
#endif

/**************************************************
 * Low Battery Volume Protect
 **************************************************/
#ifdef MT_GPUFREQ_LOW_BATT_VOLT_PROTECT
#define MT_GPUFREQ_LOW_BATT_VOLT_LIMIT_FREQ	(485000)	/* KHz */
#endif

/**************************************************
 * Proc Node Definition
 **************************************************/
#ifdef CONFIG_PROC_FS
#define PROC_FOPS_RW(name)	\
	static int mt_ ## name ## _proc_open(struct inode *inode, struct file *file)	\
	{	\
		return single_open(file, mt_ ## name ## _proc_show, PDE_DATA(inode));	\
	}	\
	static const struct file_operations mt_ ## name ## _proc_fops = {	\
		.owner = THIS_MODULE,	\
		.open = mt_ ## name ## _proc_open,	\
		.read = seq_read,	\
		.llseek = seq_lseek,	\
		.release = single_release,	\
		.write = mt_ ## name ## _proc_write,	\
	}
#define PROC_FOPS_RO(name)	\
	static int mt_ ## name ## _proc_open(struct inode *inode, struct file *file)	\
	{	\
		return single_open(file, mt_ ## name ## _proc_show, PDE_DATA(inode));	\
	}	\
	static const struct file_operations mt_ ## name ## _proc_fops =	\
	{	\
		.owner = THIS_MODULE,	\
		.open = mt_ ## name ## _proc_open,	\
		.read = seq_read,	\
		.llseek = seq_lseek,	\
		.release = single_release,	\
	}
#define PROC_ENTRY(name) \
	{__stringify(name), &mt_ ## name ## _proc_fops}
#endif

/**************************************************
 * Operation Definition
 **************************************************/
#define VOLT_NORMALIZATION(volt)		((volt % 625) ? (volt - (volt % 625) + 625) : volt)
#ifndef MIN
#define MIN(x, y)						(((x) < (y)) ? (x) : (y))
#endif
#define GPUOP(khz, volt, vsram)	\
	{	\
		.gpufreq_khz = khz,	\
		.gpufreq_volt = volt,	\
		.gpufreq_vsram = vsram,	\
	}

/**************************************************
 * Enumerations
 **************************************************/
enum g_segment_id_enum {
	MT6767_SEGMENT = 1,
	MT6768_SEGMENT,
	MT6769_SEGMENT,
	MT6769T_SEGMENT,
	MT6769Z_SEGMENT,
};
enum g_post_divider_power_enum  {
	POST_DIV2 = 1,
	POST_DIV4,
	POST_DIV8,
	POST_DIV16,
};
enum g_clock_source_enum  {
	CLOCK_MAIN = 0,
	CLOCK_SUB,
};
enum g_limited_idx_enum {
	IDX_THERMAL_PROTECT_LIMITED = 0,
	IDX_LOW_BATT_LIMITED,
	IDX_BATT_PERCENT_LIMITED,
	IDX_BATT_OC_LIMITED,
	IDX_PBM_LIMITED,
	NUMBER_OF_LIMITED_IDX,
};
enum g_volt_switch_enum {
	VOLT_FALLING = 0,
	VOLT_RISING,
};

/**************************************************
 * Structures
 **************************************************/
struct g_opp_table_info {
	unsigned int gpufreq_khz;
	unsigned int gpufreq_volt;
	unsigned int gpufreq_vsram;
};
struct g_clk_info {
	struct clk *clk_mux;		/* main clock for mfg setting */
	struct clk *clk_main_parent;	/* substitution clock for mfg transient mux setting */
	struct clk *clk_sub_parent;	/* substitution clock for mfg transient parent setting */
	struct clk *subsys_mfg_cg;	/* clock gating */
	struct clk *mtcmos_mfg_async;	/* */
	struct clk *mtcmos_mfg;		/* dependent on mtcmos_mfg_async */
	struct clk *mtcmos_mfg_core0;	/* dependent on mtcmos_mfg */
	struct clk *mtcmos_mfg_core1;	/* dependent on mtcmos_mfg */
};
struct g_pmic_info {
	struct regulator *reg_vgpu;
	struct regulator *reg_vsram_gpu;
};

/**************************************************
 * External functions declaration
 **************************************************/
extern bool mtk_get_gpu_loading(unsigned int *pLoading);
extern unsigned int mt_get_ckgen_freq(unsigned int);

#endif /* _MT_GPUFREQ_CORE_H_ */
