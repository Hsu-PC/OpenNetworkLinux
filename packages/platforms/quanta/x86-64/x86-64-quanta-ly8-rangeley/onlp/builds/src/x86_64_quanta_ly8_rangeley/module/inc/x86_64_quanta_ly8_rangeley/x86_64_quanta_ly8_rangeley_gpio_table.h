#ifndef __X86_64_QUANTA_LY8_RANGELEY_GPIO_TABLE_H__
#define __X86_64_QUANTA_LY8_RANGELEY_GPIO_TABLE_H__

/*
 * defined within platform/quanta_switch.c
 * Quanta Switch Platform driver
 */
#define QUANTA_LY8_PCA953x_GPIO(P1, P2)	            (P1*8+P2)

#define QUANTA_LY8_PCA9554_GPIO_SIZE	            0x08
#define QUANTA_LY8_PCA9555_GPIO_SIZE	            0x10
#define QUANTA_LY8_PCA9698_GPIO_SIZE	            0x28

#define QUANTA_LY8_I2C_GPIO_CPU_BASE	            0x40

#define QUANTA_LY8_CPU_BOARD_GPIO_BASE              (QUANTA_LY8_I2C_GPIO_CPU_BASE)
#define QUANTA_LY8_CPU_BOARD_SYS_P1                 (QUANTA_LY8_CPU_BOARD_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,2))
#define QUANTA_LY8_CPU_BOARD_SYS_P2                 (QUANTA_LY8_CPU_BOARD_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,3))

#define QUANTA_LY8_I2C_GPIO_BASE	                0x80

#define QUANTA_LY8_PCA9698INT_GPIO_BASE			    (QUANTA_LY8_I2C_GPIO_BASE)
#define QUANTA_LY8_PCA9698INT_GPIO_SIZE			    QUANTA_LY8_PCA9554_GPIO_SIZE

#define QUANTA_LY8_FAN_GPIO_BASE					(QUANTA_LY8_PCA9698INT_GPIO_BASE + QUANTA_LY8_PCA9698INT_GPIO_SIZE)
#define QUANTA_LY8_FAN_GPIO_SIZE					QUANTA_LY8_PCA9555_GPIO_SIZE
#define QUANTA_LY8_FAN_PRSNT_N_1					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_FAN_PRSNT_N_2					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,5))
#define QUANTA_LY8_FAN_PRSNT_N_3					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,6))
#define QUANTA_LY8_FAN_BF_DET1						(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_FAN_BF_DET2						(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,1))
#define QUANTA_LY8_FAN_BF_DET3						(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,2))
#define QUANTA_LY8_FAN_FAIL_LED_1					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_FAN_FAIL_LED_2					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,5))
#define QUANTA_LY8_FAN_FAIL_LED_3					(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,6))

#define QUANTA_LY8_QSFP_EN_GPIO_BASE				(QUANTA_LY8_FAN_GPIO_BASE + QUANTA_LY8_FAN_GPIO_SIZE)
#define QUANTA_LY8_QSFP_EN_GPIO_SIZE				QUANTA_LY8_PCA9555_GPIO_SIZE
#define QUANTA_LY8_QSFP_EN_GPIO_P3V3_PW_GD			(QUANTA_LY8_QSFP_EN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_QSFP_EN_GPIO_P3V3_PW_EN			(QUANTA_LY8_QSFP_EN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,5))
#define QUANTA_LY8_QSFP_EN_GPIO_QDB_PRSNT			(QUANTA_LY8_QSFP_EN_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,6))

#define QUANTA_LY8_PCA9698_1_GPIO_BASE				(QUANTA_LY8_QSFP_EN_GPIO_BASE + QUANTA_LY8_QSFP_EN_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_1_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_2_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_3_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_4_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_5_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_6_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_7_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_1_GPIO_SFP_8_PRSNT_N	    (QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_PCA9698_2_GPIO_BASE				(QUANTA_LY8_PCA9698_1_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_9_PRSNT_N	    (QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_10_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_11_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_12_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_13_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_14_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_15_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_2_GPIO_SFP_16_PRSNT_N	(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_PCA9698_3_GPIO_BASE				(QUANTA_LY8_PCA9698_2_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_17_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_18_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_19_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_20_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_21_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_22_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_23_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_3_GPIO_SFP_24_PRSNT_N	(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_PCA9698_4_GPIO_BASE				(QUANTA_LY8_PCA9698_3_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_25_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_26_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_27_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_28_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_29_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_30_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_31_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_4_GPIO_SFP_32_PRSNT_N	(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_PCA9698_5_GPIO_BASE				(QUANTA_LY8_PCA9698_4_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_33_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_34_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_35_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_36_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_37_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_38_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_39_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_5_GPIO_SFP_40_PRSNT_N	(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_PCA9698_6_GPIO_BASE				(QUANTA_LY8_PCA9698_5_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_41_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_42_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_43_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_44_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_45_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,0))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_46_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(2,4))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_47_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,0))
#define QUANTA_LY8_PCA9698_6_GPIO_SFP_48_PRSNT_N	(QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(3,4))

#define QUANTA_LY8_LED_GPIO_BASE                    (QUANTA_LY8_PCA9698_6_GPIO_BASE + QUANTA_LY8_PCA9698_GPIO_SIZE)
#define QUANTA_LY8_LED_GPIO_SIZE                    QUANTA_LY8_PCA9555_GPIO_SIZE

#define QUANTA_LY8_QSFP_GPIO_BASE					(QUANTA_LY8_LED_GPIO_BASE + QUANTA_LY8_LED_GPIO_SIZE)
#define QUANTA_LY8_QSFP_GPIO_SIZE					QUANTA_LY8_PCA9555_GPIO_SIZE
#define QUANTA_LY8_QSFP_GPIO_PRSNT_49_N			    (QUANTA_LY8_QSFP_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,2))
#define QUANTA_LY8_QSFP_GPIO_PRSNT_50_N			    (QUANTA_LY8_QSFP_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,6))
#define QUANTA_LY8_QSFP_GPIO_PRSNT_51_N			    (QUANTA_LY8_QSFP_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,2))
#define QUANTA_LY8_QSFP_GPIO_PRSNT_52_N			    (QUANTA_LY8_QSFP_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,6))

#define QUANTA_LY8_QSFP_QDB_GPIO_BASE				(QUANTA_LY8_QSFP_GPIO_BASE + QUANTA_LY8_QSFP_GPIO_SIZE)
#define QUANTA_LY8_QSFP_QDB_GPIO_SIZE				QUANTA_LY8_PCA9555_GPIO_SIZE
#define QUANTA_LY8_QSFP_QDB_GPIO_PRSNT_69_N		    (QUANTA_LY8_QSFP_QDB_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,2))
#define QUANTA_LY8_QSFP_QDB_GPIO_PRSNT_70_N		    (QUANTA_LY8_QSFP_QDB_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,6))
#define QUANTA_LY8_QSFP_QDB_GPIO_MOD_EN_N			(QUANTA_LY8_QSFP_QDB_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,0))

#define QUANTA_LY8_PSU_GPIO_BASE					(QUANTA_LY8_QSFP_QDB_GPIO_BASE + QUANTA_LY8_QSFP_QDB_GPIO_SIZE)
#define QUANTA_LY8_PSU_GPIO_SIZE					QUANTA_LY8_PCA9555_GPIO_SIZE
#define QUANTA_LY8_PSU_GPIO_PSU1_PRSNT_N			(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,0))
#define QUANTA_LY8_PSU_GPIO_PSU1_PWRGD				(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,1))
#define QUANTA_LY8_PSU_GPIO_PSU2_PRSNT_N			(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,3))
#define QUANTA_LY8_PSU_GPIO_PSU2_PWRGD				(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(0,4))
#define QUANTA_LY8_PSU_GPIO_PSU1_GREEN_R			(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,2))
#define QUANTA_LY8_PSU_GPIO_PSU1_RED_R				(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,3))
#define QUANTA_LY8_PSU_GPIO_PSU2_GREEN_R			(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,4))
#define QUANTA_LY8_PSU_GPIO_PSU2_RED_R				(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,5))
#define QUANTA_LY8_PSU_GPIO_FAN_GREEN_R			    (QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,6))
#define QUANTA_LY8_PSU_GPIO_FAN_RED_R				(QUANTA_LY8_PSU_GPIO_BASE + QUANTA_LY8_PCA953x_GPIO(1,7))

#endif /* __X86_64_QUANTA_LY8_RANGELEY_GPIO_TABLE_H__ */