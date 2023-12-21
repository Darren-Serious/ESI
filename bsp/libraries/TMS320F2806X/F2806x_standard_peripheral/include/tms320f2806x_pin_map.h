/*
 * tms320f2806x_pin_map.h
 *
 *  Created on: Dec 20, 2023
 *      Author: darren
 */

#ifndef __TMS320F2806X_PIN_MAP_H__
#define __TMS320F2806X_PIN_MAP_H__

//*****************************************************************************
// 0x0003 = MUX register value
// 0x000C = GMUX register value
// 0xFF00 = Shift amount within mux registers
//*****************************************************************************

#define GPIO_0_GPIO0                    0x0000U
#define GPIO_0_EPWM1_A                  0x0001U

#define GPIO_1_GPIO1                    0x0200U
#define GPIO_1_EPWM1_B                  0x0201U
#define GPIO_1_COMP2_OUT                0x0203U

#define GPIO_2_GPIO2                    0x0400U
#define GPIO_2_EPWM2_A                  0x0401U

#define GPIO_3_GPIO3                    0x0600U
#define GPIO_3_EPWM2_B                  0x0601U
#define GPIO_3_SPI_SOMIA                0x0602U
#define GPIO_3_COMP2_OUT                0x0603U

#define GPIO_4_GPIO4                    0x0800U
#define GPIO_4_EPWM3_A                  0x0801U

#define GPIO_5_GPIO5                    0x0A00U
#define GPIO_5_EPWM3_B                  0x0A01U
#define GPIO_5_SPI_SIMOA                0x0A02U
#define GPIO_5_ECAP1                    0x0A03U

#define GPIO_6_GPIO6                    0x0C00U
#define GPIO_6_EPWM4_A                  0x0C01U
#define GPIO_6_EPWM_SYNCI               0x0C02U
#define GPIO_6_EPWM_SYNCO               0x0C03U

#define GPIO_7_GPIO7                    0x0E00U
#define GPIO_7_EPWM4_B                  0x0E01U
#define GPIO_7_SCI_RXD_A                0x0E02U
#define GPIO_7_ECAP2                    0x0E03U

#define GPIO_8_GPIO8                    0x1000U
#define GPIO_8_EPWM5_A                  0x1001U
#define GPIO_8_ADCSOCAO                 0x1003U

#define GPIO_9_GPIO9                    0x1200U
#define GPIO_9_EPWM5_B                  0x1201U
#define GPIO_9_SCI_TXD_B                0x1202U
#define GPIO_9_ECAP1                    0x1203U

#define GPIO_10_GPIO10                  0x1400U
#define GPIO_10_EPWM6_A                 0x1401U
#define GPIO_10_ADCSOCBO                0x1403U

#define GPIO_11_GPIO11                  0x1600U
#define GPIO_11_EPWM6_B                 0x1601U
#define GPIO_11_SCI_RTX_B               0x1602U
#define GPIO_11_ECAP1                   0x1603U

#define GPIO_12_GPIO12                  0x1800U
#define GPIO_12_TZ1                     0x1801U
#define GPIO_12_SCI_TXD_A               0x1802U
#define GPIO_12_SPI_SIMO_B              0x1803U

#define GPIO_13_GPIO13                  0x1A00U
#define GPIO_13_TZ2                     0x1A01U
#define GPIO_13_SPI_SOMI_B              0x1A03U

#define GPIO_14_GPIO14                  0x1C00U
#define GPIO_14_TZ3                     0x1C01U
#define GPIO_14_SCI_TXD_B               0x1C02U
#define GPIO_14_SPI_CLK_B               0x1C03U

#define GPIO_15_GPIO15                  0x1E00U
#define GPIO_15_ECAP2                   0x1E01U
#define GPIO_15_SCI_RXD_B               0x1E02U
#define GPIO_15_SPI_STE_B               0x1E03U

#define GPIO_16_GPIO16                  0x0004U
#define GPIO_16_SPI_SIMO_A              0x0005U
#define GPIO_16_TZ2                     0x0007U

#define GPIO_17_GPIO17                  0x0204U
#define GPIO_17_SPI_SOMI_A              0x0205U
#define GPIO_17_TZ3                     0x0207U

#define GPIO_18_GPIO18                  0x0404U
#define GPIO_18_SPI_CLK_A               0x0405U
#define GPIO_18_SCI_TXD_B               0x0406U
#define GPIO_18_XCLKOUT                 0x0407U

#define GPIO_19_GPIO19                  0x0604U // XCLKIN
#define GPIO_19_SPI_STE_A               0x0605U
#define GPIO_19_SCI_RXD_B               0x0606U
#define GPIO_19_ECAP1                   0x0607U

#define GPIO_20_GPIO20                  0x0804U
#define GPIO_20_EQEP1_A                 0x0805U
#define GPIO_20_MDXA                    0x0806U
#define GPIO_20_COMP1_OUT               0x0807U

#define GPIO_21_GPIO21                  0x0A04U
#define GPIO_21_EQEP1_B                 0x0A05U
#define GPIO_21_MDRA                    0x0A06U
#define GPIO_21_COMP2_OUT               0x0A07U

#define GPIO_22_GPIO22                  0x0C04U
#define GPIO_22_EQEP1_S                 0x0C05U
#define GPIO_22_MCLKXA                  0x0C06u
#define GPIO_22_SCI_TXD_B               0x0C07U

#define GPIO_23_GPIO23                  0x0E04U
#define GPIO_23_EQEP1_I                 0x0E05U
#define GPIO_23_MFSXA                   0x0E06U
#define GPIO_23_SCI_RXD_B               0x0E07U

#define GPIO_24_GPIO24                  0x1004U
#define GPIO_24_ECAP1                   0x1005U
#define GPIO_24_EQEP2_A                 0x1006U
#define GPIO_24_SPI_SIMO_B              0x1007U

#define GPIO_25_GPIO25                  0x1204U
#define GPIO_25_ECAP2                   0x1205U
#define GPIO_25_EQEP2_B                 0x1206U
#define GPIO_25_SPI_SOMI_B              0x1207U

#define GPIO_26_GPIO26                  0x1404U
#define GPIO_26_ECAP3                   0x1405U
#define GPIO_26_EQEP2_I                 0x1406U
#define GPIO_26_SPI_CLK_B               0x1407U

#define GPIO_27_GPIO27                  0x1604U
#define GPIO_27_HRCAP2                  0x1605U
#define GPIO_27_EQEP2_S                 0x1606U
#define GPIO_27_SPI_STE_B               0x1607U

#define GPIO_28_GPIO28                  0x1804U
#define GPIO_28_SCI_RXD_A               0x1805U
#define GPIO_28_SDA_A                   0x1806U
#define GPIO_28_TZ2                     0x1807U

#define GPIO_29_GPIO29                  0x1A04U
#define GPIO_29_SCI_TXD_A               0x1A05U
#define GPIO_29_SCL_A                   0x1A06U
#define GPIO_29_TZ3                     0x1A07U

#define GPIO_30_GPIO30                  0x1C04U
#define GPIO_30_CAN_RX_A                0x1C05U
#define GPIO_30_EQEP2_I                 0x1C06U
#define GPIO_30_EPWM7_A                 0x1C07U

#define GPIO_31_GPIO31                  0x1E04U
#define GPIO_31_CAN_TX_A                0x1E05U
#define GPIO_31_EQEP2_S                 0x1E06U
#define GPIO_31_EPWM8_A                 0x1E07U

#define GPIO_32_GPIO32                  0x0008U
#define GPIO_32_SDA_A                   0x0009U
#define GPIO_32_EPWM_SYNCI              0x000AU
#define GPIO_32_ADCSOCAO                0x000BU

#define GPIO_33_GPIO33                  0x0208U
#define GPIO_33_SCL_A                   0x0209U
#define GPIO_33_EPWM_SYNCO              0x020AU
#define GPIO_33_ADCSOCBO                0x020BU

#define GPIO_34_GPIO34                  0x0408U
#define GPIO_34_COMP2_OUT               0x0409U
#define GPIO_34_COMP3_OUT               0x040BU

#define GPIO_35_GPIO35                  0x0608U // TDI

#define GPIO_36_GPIO36                  0x0808U // TMS

#define GPIO_37_GPIO37                  0x0A08U // TDO

#define GPIO_38_GPIO38                  0x0C08U // XCLKIN // TCK

#define GPIO_39_GPIO39                  0x0E08U

#define GPIO_40_GPIO40                  0x1008U
#define GPIO_40_EPWM7A                  0x1009U
#define GPIO_40_SCI_TXD_B               0x100AU

#define GPIO_41_GPIO41                  0x1208U
#define GPIO_41_EPWM7B                  0x1209U
#define GPIO_41_SCI_RXD_B               0x120AU

#define GPIO_42_GPIO42                  0x1408U
#define GPIO_42_EPWM8_A                 0x1409U
#define GPIO_42_TZ1                     0x140AU
#define GPIO_42_COMP1_OUT               0x140BU

#define GPIO_43_GPIO43                  0x1608U
#define GPIO_43_EPWM8_B                 0x1609U
#define GPIO_43_TZ2                     0x160AU
#define GPIO_43_COMP2_OUT               0x160BU

#define GPIO_44_GPIO44                  0x1808U
#define GPIO_44_MFSRA                   0x1809U
#define GPIO_44_SCI_RXD_B               0x180AU
#define GPIO_44_EPWM7_B                 0x180BU

#define GPIO_50_GPIO50                  0x040CU
#define GPIO_50_EQEP1_A                 0x040DU
#define GPIO_50_MDXA                    0x040EU
#define GPIO_50_TZ1                     0x040FU

#define GPIO_51_GPIO51                  0x060CU
#define GPIO_51_EQEP1_B                 0x060DU
#define GPIO_51_MDRA                    0x060EU
#define GPIO_51_TZ2                     0x060FU

#define GPIO_52_GPIO52                  0x080CU
#define GPIO_52_EQEP1_S                 0x080DU
#define GPIO_52_MCLKXA                  0x080EU
#define GPIO_52_TZ3                     0x080FU

#define GPIO_53_GPIO53                  0x0A0CU
#define GPIO_53_EQEP1_I                 0x0A0DU
#define GPIO_53_MFSXA                   0x0A0EU

#define GPIO_54_GPIO54                  0x0C0CU
#define GPIO_54_SPI_SIMO_A              0x0C0DU
#define GPIO_54_EQEP2_A                 0x0C0EU
#define GPIO_54_HRCAP1                  0x0C0FU

#define GPIO_55_GPIO55                  0x0E0CU
#define GPIO_55_SPI_SOMI_A              0x0E0DU
#define GPIO_55_EQEP2_B                 0x0E0EU
#define GPIO_55_HRCAP2                  0x0E0FU

#define GPIO_56_GPIO56                  0x100CU
#define GPIO_56_SPI_CLK_A               0x100DU
#define GPIO_56_EQWP2_I                 0x100EU
#define GPIO_56_HRCAP3                  0x100FU

#define GPIO_57_GPIO57                  0x120CU
#define GPIO_57_SPI_STE_A               0x120DU
#define GPIO_57_EQEP2_S                 0x120EU
#define GPIO_57_HRCAP4                  0x120FU

#define GPIO_58_GPIO58                  0x140CU
#define GPIO_58_MCLKRA                  0x140DU
#define GPIO_58_SCI_TXD_B               0x140EU
#define GPIO_58_EPWM7_A                 0x140FU

#endif /* __TMS320F2806X_PIN_MAP_H__ */
