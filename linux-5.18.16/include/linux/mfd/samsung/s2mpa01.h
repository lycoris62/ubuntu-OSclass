/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2013 Samsung Electronics Co., Ltd
 *		http://www.samsung.com
 */

#ifndef __LINUX_MFD_S2MPA01_H
#define __LINUX_MFD_S2MPA01_H

/* S2MPA01 registers */
enum s2mpa01_reg {
	S2MPA01_REG_ID,
	S2MPA01_REG_INT1,
	S2MPA01_REG_INT2,
	S2MPA01_REG_INT3,
	S2MPA01_REG_INT1M,
	S2MPA01_REG_INT2M,
	S2MPA01_REG_INT3M,
	S2MPA01_REG_ST1,
	S2MPA01_REG_ST2,
	S2MPA01_REG_PWRONSRC,
	S2MPA01_REG_OFFSRC,
	S2MPA01_REG_RTC_BUF,
	S2MPA01_REG_CTRL1,
	S2MPA01_REG_ETC_TEST,
	S2MPA01_REG_RSVD1,
	S2MPA01_REG_BU_CHG,
	S2MPA01_REG_RAMP1,
	S2MPA01_REG_RAMP2,
	S2MPA01_REG_LDO_DSCH1,
	S2MPA01_REG_LDO_DSCH2,
	S2MPA01_REG_LDO_DSCH3,
	S2MPA01_REG_LDO_DSCH4,
	S2MPA01_REG_OTP_ADRL,
	S2MPA01_REG_OTP_ADRH,
	S2MPA01_REG_OTP_DATA,
	S2MPA01_REG_MON1SEL,
	S2MPA01_REG_MON2SEL,
	S2MPA01_REG_LEE,
	S2MPA01_REG_RSVD2,
	S2MPA01_REG_RSVD3,
	S2MPA01_REG_RSVD4,
	S2MPA01_REG_RSVD5,
	S2MPA01_REG_RSVD6,
	S2MPA01_REG_TOP_RSVD,
	S2MPA01_REG_DVS_SEL,
	S2MPA01_REG_DVS_PTR,
	S2MPA01_REG_DVS_DATA,
	S2MPA01_REG_RSVD_NO,
	S2MPA01_REG_UVLO,
	S2MPA01_REG_LEE_NO,
	S2MPA01_REG_B1CTRL1,
	S2MPA01_REG_B1CTRL2,
	S2MPA01_REG_B2CTRL1,
	S2MPA01_REG_B2CTRL2,
	S2MPA01_REG_B3CTRL1,
	S2MPA01_REG_B3CTRL2,
	S2MPA01_REG_B4CTRL1,
	S2MPA01_REG_B4CTRL2,
	S2MPA01_REG_B5CTRL1,
	S2MPA01_REG_B5CTRL2,
	S2MPA01_REG_B5CTRL3,
	S2MPA01_REG_B5CTRL4,
	S2MPA01_REG_B5CTRL5,
	S2MPA01_REG_B5CTRL6,
	S2MPA01_REG_B6CTRL1,
	S2MPA01_REG_B6CTRL2,
	S2MPA01_REG_B7CTRL1,
	S2MPA01_REG_B7CTRL2,
	S2MPA01_REG_B8CTRL1,
	S2MPA01_REG_B8CTRL2,
	S2MPA01_REG_B9CTRL1,
	S2MPA01_REG_B9CTRL2,
	S2MPA01_REG_B10CTRL1,
	S2MPA01_REG_B10CTRL2,
	S2MPA01_REG_L1CTRL,
	S2MPA01_REG_L2CTRL,
	S2MPA01_REG_L3CTRL,
	S2MPA01_REG_L4CTRL,
	S2MPA01_REG_L5CTRL,
	S2MPA01_REG_L6CTRL,
	S2MPA01_REG_L7CTRL,
	S2MPA01_REG_L8CTRL,
	S2MPA01_REG_L9CTRL,
	S2MPA01_REG_L10CTRL,
	S2MPA01_REG_L11CTRL,
	S2MPA01_REG_L12CTRL,
	S2MPA01_REG_L13CTRL,
	S2MPA01_REG_L14CTRL,
	S2MPA01_REG_L15CTRL,
	S2MPA01_REG_L16CTRL,
	S2MPA01_REG_L17CTRL,
	S2MPA01_REG_L18CTRL,
	S2MPA01_REG_L19CTRL,
	S2MPA01_REG_L20CTRL,
	S2MPA01_REG_L21CTRL,
	S2MPA01_REG_L22CTRL,
	S2MPA01_REG_L23CTRL,
	S2MPA01_REG_L24CTRL,
	S2MPA01_REG_L25CTRL,
	S2MPA01_REG_L26CTRL,

	S2MPA01_REG_LDO_OVCB1,
	S2MPA01_REG_LDO_OVCB2,
	S2MPA01_REG_LDO_OVCB3,
	S2MPA01_REG_LDO_OVCB4,

};

/* S2MPA01 regulator ids */
enum s2mpa01_regulators {
	S2MPA01_LDO1,
	S2MPA01_LDO2,
	S2MPA01_LDO3,
	S2MPA01_LDO4,
	S2MPA01_LDO5,
	S2MPA01_LDO6,
	S2MPA01_LDO7,
	S2MPA01_LDO8,
	S2MPA01_LDO9,
	S2MPA01_LDO10,
	S2MPA01_LDO11,
	S2MPA01_LDO12,
	S2MPA01_LDO13,
	S2MPA01_LDO14,
	S2MPA01_LDO15,
	S2MPA01_LDO16,
	S2MPA01_LDO17,
	S2MPA01_LDO18,
	S2MPA01_LDO19,
	S2MPA01_LDO20,
	S2MPA01_LDO21,
	S2MPA01_LDO22,
	S2MPA01_LDO23,
	S2MPA01_LDO24,
	S2MPA01_LDO25,
	S2MPA01_LDO26,

	S2MPA01_BUCK1,
	S2MPA01_BUCK2,
	S2MPA01_BUCK3,
	S2MPA01_BUCK4,
	S2MPA01_BUCK5,
	S2MPA01_BUCK6,
	S2MPA01_BUCK7,
	S2MPA01_BUCK8,
	S2MPA01_BUCK9,
	S2MPA01_BUCK10,

	S2MPA01_REGULATOR_MAX,
};

#define S2MPA01_LDO_VSEL_MASK	0x3F
#define S2MPA01_BUCK_VSEL_MASK	0xFF
#define S2MPA01_ENABLE_MASK	(0x03 << S2MPA01_ENABLE_SHIFT)
#define S2MPA01_ENABLE_SHIFT	0x06
#define S2MPA01_LDO_N_VOLTAGES	(S2MPA01_LDO_VSEL_MASK + 1)
#define S2MPA01_BUCK_N_VOLTAGES (S2MPA01_BUCK_VSEL_MASK + 1)

#define S2MPA01_RAMP_DELAY	12500	/* uV/us */

#define S2MPA01_BUCK16_RAMP_SHIFT	4
#define S2MPA01_BUCK24_RAMP_SHIFT	6
#define S2MPA01_BUCK3_RAMP_SHIFT	4
#define S2MPA01_BUCK5_RAMP_SHIFT	6
#define S2MPA01_BUCK7_RAMP_SHIFT	2
#define S2MPA01_BUCK8910_RAMP_SHIFT	0

#define S2MPA01_BUCK1_RAMP_EN_SHIFT	3
#define S2MPA01_BUCK2_RAMP_EN_SHIFT	2
#define S2MPA01_BUCK3_RAMP_EN_SHIFT	1
#define S2MPA01_BUCK4_RAMP_EN_SHIFT	0
#define S2MPA01_PMIC_EN_SHIFT	6

#endif /*__LINUX_MFD_S2MPA01_H */
