//  ----------------------------------------------------------------------------
//          ATMEL Microcontroller Software Support  -  ROUSSET  -
//  ----------------------------------------------------------------------------
//  Copyright (c) 2008, Atmel Corporation
// 
//  All rights reserved.
// 
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
// 
//  - Redistributions of source code must retain the above copyright notice,
//  this list of conditions and the disclaimer below.
// 
//  Atmel's name may not be used to endorse or promote products derived from
//  this software without specific prior written permission. 
//  
//  DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
//  DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
//  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//  ----------------------------------------------------------------------------
// File Name           : AT91CAP9_UMC.h
// Object              : AT91CAP9_UMC definitions
// Generated           : AT91 SW Application Group  02/27/2009 (11:31:16)
// 
// CVS Reference       : /AT91CAP9_UMC.pl/1.12/Fri Feb 27 08:48:33 2009//
// CVS Reference       : /SYS_AT91CAP9_UMC.pl/1.3/Tue Jun 10 12:36:58 2008//
// CVS Reference       : /HECC_6143A.pl/1.1/Thu Apr 10 15:39:17 2008//
// CVS Reference       : /HBCRAMC1_XXXX.pl/1.1/Wed Jun 14 07:59:13 2006//
// CVS Reference       : /DDRSDRC_XXXX.pl/1.3/Thu Jun 28 14:41:16 2007//
// CVS Reference       : /HSMC3_6105A.pl/1.5/Tue Apr 29 07:35:24 2008//
// CVS Reference       : /HMATRIX1_CAP9.pl/1.2/Wed Jun 14 08:02:21 2006//
// CVS Reference       : /CCR_CAP9.pl/1.4/Fri Feb 27 09:44:32 2009//
// CVS Reference       : /PDC_6074C.pl/1.2/Thu Feb  3 09:02:11 2005//
// CVS Reference       : /DBGU_6059D.pl/1.1/Mon Jan 31 13:54:41 2005//
// CVS Reference       : /AIC_6075A.pl/1.1/Mon Jul 12 17:04:01 2004//
// CVS Reference       : /PIO_6057A.pl/1.2/Thu Feb  3 10:29:42 2005//
// CVS Reference       : /PMC_CAP9.pl/1.4/Thu Oct  9 07:51:35 2008//
// CVS Reference       : /RSTC_6098A.pl/1.4/Thu Oct  9 07:51:36 2008//
// CVS Reference       : /SHDWC_6122A.pl/1.3/Wed Oct  6 14:16:58 2004//
// CVS Reference       : /RTTC_6081A.pl/1.2/Thu Nov  4 13:57:22 2004//
// CVS Reference       : /PITC_6079A.pl/1.2/Thu Nov  4 13:56:22 2004//
// CVS Reference       : /WDTC_6080A.pl/1.3/Thu Nov  4 13:58:52 2004//
// CVS Reference       : /UDP_6ept_puon.pl/1.1/Wed Aug 30 14:20:53 2006//
// CVS Reference       : /UDPHS_SAM9_8ept6dma4iso.pl/1.4/Thu Aug 28 13:40:53 2008//
// CVS Reference       : /TC_6082A.pl/1.8/Thu Oct  9 07:51:40 2008//
// CVS Reference       : /MCI_6101E.pl/1.3/Mon Feb 23 13:17:40 2009//
// CVS Reference       : /TWI_6061B.pl/1.3/Thu Oct  9 07:51:40 2008//
// CVS Reference       : /US_6089J.pl/1.3/Thu Oct  9 07:51:41 2008//
// CVS Reference       : /SSC_6078B.pl/1.3/Thu Oct  9 07:51:38 2008//
// CVS Reference       : /AC97C_XXXX.pl/1.3/Tue Feb 22 17:08:27 2005//
// CVS Reference       : /SPI_6088D.pl/1.3/Fri May 20 14:23:02 2005//
// CVS Reference       : /CAN_6019B.pl/1.1/Mon Jan 31 13:54:30 2005//
// CVS Reference       : /AES_6149A.pl/1.12/Wed Nov  2 14:17:53 2005//
// CVS Reference       : /DES3_6150A.pl/1.1/Mon Jan 17 13:30:33 2005//
// CVS Reference       : /PWM_6044D.pl/1.2/Tue May 10 12:39:09 2005//
// CVS Reference       : /EMACB_6119A.pl/1.6/Wed Jul 13 15:25:00 2005//
// CVS Reference       : /ADC_6051H.pl/1.1/Wed Apr  9 15:15:20 2008//
// CVS Reference       : /ISI_xxxxx.pl/1.6/Thu Oct  9 07:51:33 2008//
// CVS Reference       : /LCDC_6063A.pl/1.6/Mon Feb 23 13:17:39 2009//
// CVS Reference       : /HDMA_CAP9.pl/1.1/Mon Feb 23 13:14:04 2009//
// CVS Reference       : /UHP_6127A.pl/1.1/Wed Feb 23 16:03:17 2005//
//  ----------------------------------------------------------------------------

#ifndef AT91CAP9_UMC_H
#define AT91CAP9_UMC_H

#ifndef __ASSEMBLY__
typedef volatile unsigned int AT91_REG;// Hardware register definition
#define AT91_CAST(a) (a)
#else
#define AT91_CAST(a)
#endif

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Error Correction Code controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_ECC {
	AT91_REG	 ECC_CR; 	// TOTO ECC reset register
	AT91_REG	 ECC_MR; 	//  ECC Page size register
	AT91_REG	 ECC_SR1; 	//  ECC Status1 register
	AT91_REG	 ECC_PR0; 	//  ECC Parity register 0
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 ECC_SR2; 	//  ECC Status2 register
	AT91_REG	 Reserved1[57]; 	// 
	AT91_REG	 ECC_VR; 	//  ECC Version register
} AT91S_ECC, *AT91PS_ECC;
#else
#define ECC_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (ECC_CR) TOTO ECC reset register
#define ECC_MR          (AT91_CAST(AT91_REG *) 	0x00000004) // (ECC_MR)  ECC Page size register
#define ECC_SR1         (AT91_CAST(AT91_REG *) 	0x00000008) // (ECC_SR1)  ECC Status1 register
#define ECC_PR0         (AT91_CAST(AT91_REG *) 	0x0000000C) // (ECC_PR0)  ECC Parity register 0
#define ECC_SR2         (AT91_CAST(AT91_REG *) 	0x00000014) // (ECC_SR2)  ECC Status2 register
#define ECC_VR          (AT91_CAST(AT91_REG *) 	0x000000FC) // (ECC_VR)  ECC Version register

#endif
// -------- ECC_CR : (ECC Offset: 0x0) ECC reset register -------- 
#define AT91C_ECC_RST         (0x1 <<  0) // (ECC) ECC reset parity
// -------- ECC_MR : (ECC Offset: 0x4) ECC page size register -------- 
#define AT91C_ECC_PAGE_SIZE   (0x3 <<  0) // (ECC) Nand Flash page size
// -------- ECC_SR1 : (ECC Offset: 0x8) ECC status1 register -------- 
#define AT91C_ECC_RECERR      (0x1 <<  0) // (ECC) ECC error
#define AT91C_ECC_ECCERR      (0x1 <<  1) // (ECC) ECC single error
#define AT91C_ECC_MULERR      (0x1 <<  2) // (ECC) ECC_MULERR
// -------- ECC_PR0 : (ECC Offset: 0xc) ECC parity register 0 -------- 
#define AT91C_ECC_BITADDR     (0xF <<  0) // (ECC) Bit address error
#define AT91C_ECC_WORDADDR    (0xFFF <<  4) // (ECC) address of the failing bit
// -------- ECC_SR2 : (ECC Offset: 0x14) ECC status register -------- 
// -------- ECC_VR : (ECC Offset: 0xfc) ECC version register -------- 
#define AT91C_ECC_VR          (0xF <<  0) // (ECC) ECC version register

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Busr Cellular RAM Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_BCRAMC {
	AT91_REG	 BCRAMC_CR; 	// BCRAM Controller Configuration Register
	AT91_REG	 BCRAMC_TPR; 	// BCRAM Controller Timing Parameter Register
	AT91_REG	 BCRAMC_HSR; 	// BCRAM Controller High Speed Register
	AT91_REG	 BCRAMC_LPR; 	// BCRAM Controller Low Power Register
	AT91_REG	 BCRAMC_MDR; 	// BCRAM Memory Device Register
	AT91_REG	 Reserved0[54]; 	// 
	AT91_REG	 BCRAMC_PADDSR; 	// BCRAM PADDR Size Register
	AT91_REG	 BCRAMC_IPNR1; 	// BCRAM IP Name Register 1
	AT91_REG	 BCRAMC_IPNR2; 	// BCRAM IP Name Register 2
	AT91_REG	 BCRAMC_IPFR; 	// BCRAM IP Features Register
	AT91_REG	 BCRAMC_VR; 	// BCRAM Version Register
} AT91S_BCRAMC, *AT91PS_BCRAMC;
#else
#define BCRAMC_CR       (AT91_CAST(AT91_REG *) 	0x00000000) // (BCRAMC_CR) BCRAM Controller Configuration Register
#define BCRAMC_TPR      (AT91_CAST(AT91_REG *) 	0x00000004) // (BCRAMC_TPR) BCRAM Controller Timing Parameter Register
#define BCRAMC_HSR      (AT91_CAST(AT91_REG *) 	0x00000008) // (BCRAMC_HSR) BCRAM Controller High Speed Register
#define BCRAMC_LPR      (AT91_CAST(AT91_REG *) 	0x0000000C) // (BCRAMC_LPR) BCRAM Controller Low Power Register
#define BCRAMC_MDR      (AT91_CAST(AT91_REG *) 	0x00000010) // (BCRAMC_MDR) BCRAM Memory Device Register
#define BCRAMC_PADDSR   (AT91_CAST(AT91_REG *) 	0x000000EC) // (BCRAMC_PADDSR) BCRAM PADDR Size Register
#define BCRAMC_IPNR1    (AT91_CAST(AT91_REG *) 	0x000000F0) // (BCRAMC_IPNR1) BCRAM IP Name Register 1
#define BCRAMC_IPNR2    (AT91_CAST(AT91_REG *) 	0x000000F4) // (BCRAMC_IPNR2) BCRAM IP Name Register 2
#define BCRAMC_IPFR     (AT91_CAST(AT91_REG *) 	0x000000F8) // (BCRAMC_IPFR) BCRAM IP Features Register
#define BCRAMC_VR       (AT91_CAST(AT91_REG *) 	0x000000FC) // (BCRAMC_VR) BCRAM Version Register

#endif
// -------- BCRAMC_CR : (BCRAMC Offset: 0x0) BCRAM Controller Configuration Register -------- 
#define AT91C_BCRAMC_EN       (0x1 <<  0) // (BCRAMC) Enable
#define AT91C_BCRAMC_CAS      (0x7 <<  4) // (BCRAMC) CAS Latency
#define 	AT91C_BCRAMC_CAS_2                    (0x2 <<  4) // (BCRAMC) 2 cycles Latency for Cellular RAM v1.0/1.5/2.0
#define 	AT91C_BCRAMC_CAS_3                    (0x3 <<  4) // (BCRAMC) 3 cycles Latency for Cellular RAM v1.0/1.5/2.0
#define 	AT91C_BCRAMC_CAS_4                    (0x4 <<  4) // (BCRAMC) 4 cycles Latency for Cellular RAM v1.5/2.0
#define 	AT91C_BCRAMC_CAS_5                    (0x5 <<  4) // (BCRAMC) 5 cycles Latency for Cellular RAM v1.5/2.0
#define 	AT91C_BCRAMC_CAS_6                    (0x6 <<  4) // (BCRAMC) 6 cycles Latency for Cellular RAM v1.5/2.0
#define AT91C_BCRAMC_DBW      (0x1 <<  8) // (BCRAMC) Data Bus Width
#define 	AT91C_BCRAMC_DBW_32_BITS              (0x0 <<  8) // (BCRAMC) 32 Bits datas bus
#define 	AT91C_BCRAMC_DBW_16_BITS              (0x1 <<  8) // (BCRAMC) 16 Bits datas bus
#define AT91C_BCRAM_NWIR      (0x3 << 12) // (BCRAMC) Number Of Words in Row
#define 	AT91C_BCRAM_NWIR_64                   (0x0 << 12) // (BCRAMC) 64 Words in Row
#define 	AT91C_BCRAM_NWIR_128                  (0x1 << 12) // (BCRAMC) 128 Words in Row
#define 	AT91C_BCRAM_NWIR_256                  (0x2 << 12) // (BCRAMC) 256 Words in Row
#define 	AT91C_BCRAM_NWIR_512                  (0x3 << 12) // (BCRAMC) 512 Words in Row
#define AT91C_BCRAM_ADMX      (0x1 << 16) // (BCRAMC) ADDR / DATA Mux
#define 	AT91C_BCRAM_ADMX_NO_MUX               (0x0 << 16) // (BCRAMC) No ADD/DATA Mux for Cellular RAM v1.0/1.5/2.0
#define 	AT91C_BCRAM_ADMX_MUX                  (0x1 << 16) // (BCRAMC) ADD/DATA Mux Only for Cellular RAM v2.0
#define AT91C_BCRAM_DS        (0x3 << 20) // (BCRAMC) Drive Strength
#define 	AT91C_BCRAM_DS_FULL_DRIVE           (0x0 << 20) // (BCRAMC) Full Cellular RAM Drive
#define 	AT91C_BCRAM_DS_HALF_DRIVE           (0x1 << 20) // (BCRAMC) Half Cellular RAM Drive
#define 	AT91C_BCRAM_DS_QUARTER_DRIVE        (0x2 << 20) // (BCRAMC) Quarter Cellular RAM Drive
#define AT91C_BCRAM_VFLAT     (0x1 << 24) // (BCRAMC) Variable or Fixed Latency
#define 	AT91C_BCRAM_VFLAT_VARIABLE             (0x0 << 24) // (BCRAMC) Variable Latency
#define 	AT91C_BCRAM_VFLAT_FIXED                (0x1 << 24) // (BCRAMC) Fixed Latency
// -------- BCRAMC_TPR : (BCRAMC Offset: 0x4) BCRAMC Timing Parameter Register -------- 
#define AT91C_BCRAMC_TCW      (0xF <<  0) // (BCRAMC) Chip Enable to End of Write
#define 	AT91C_BCRAMC_TCW_0                    (0x0) // (BCRAMC) Value :  0
#define 	AT91C_BCRAMC_TCW_1                    (0x1) // (BCRAMC) Value :  1
#define 	AT91C_BCRAMC_TCW_2                    (0x2) // (BCRAMC) Value :  2
#define 	AT91C_BCRAMC_TCW_3                    (0x3) // (BCRAMC) Value :  3
#define 	AT91C_BCRAMC_TCW_4                    (0x4) // (BCRAMC) Value :  4
#define 	AT91C_BCRAMC_TCW_5                    (0x5) // (BCRAMC) Value :  5
#define 	AT91C_BCRAMC_TCW_6                    (0x6) // (BCRAMC) Value :  6
#define 	AT91C_BCRAMC_TCW_7                    (0x7) // (BCRAMC) Value :  7
#define 	AT91C_BCRAMC_TCW_8                    (0x8) // (BCRAMC) Value :  8
#define 	AT91C_BCRAMC_TCW_9                    (0x9) // (BCRAMC) Value :  9
#define 	AT91C_BCRAMC_TCW_10                   (0xA) // (BCRAMC) Value : 10
#define 	AT91C_BCRAMC_TCW_11                   (0xB) // (BCRAMC) Value : 11
#define 	AT91C_BCRAMC_TCW_12                   (0xC) // (BCRAMC) Value : 12
#define 	AT91C_BCRAMC_TCW_13                   (0xD) // (BCRAMC) Value : 13
#define 	AT91C_BCRAMC_TCW_14                   (0xE) // (BCRAMC) Value : 14
#define 	AT91C_BCRAMC_TCW_15                   (0xF) // (BCRAMC) Value : 15
#define AT91C_BCRAMC_TCRES    (0x3 <<  4) // (BCRAMC) CRE Setup
#define 	AT91C_BCRAMC_TCRES_0                    (0x0 <<  4) // (BCRAMC) Value :  0
#define 	AT91C_BCRAMC_TCRES_1                    (0x1 <<  4) // (BCRAMC) Value :  1
#define 	AT91C_BCRAMC_TCRES_2                    (0x2 <<  4) // (BCRAMC) Value :  2
#define 	AT91C_BCRAMC_TCRES_3                    (0x3 <<  4) // (BCRAMC) Value :  3
#define AT91C_BCRAMC_TCKA     (0xF <<  8) // (BCRAMC) WE High to CLK Valid
#define 	AT91C_BCRAMC_TCKA_0                    (0x0 <<  8) // (BCRAMC) Value :  0
#define 	AT91C_BCRAMC_TCKA_1                    (0x1 <<  8) // (BCRAMC) Value :  1
#define 	AT91C_BCRAMC_TCKA_2                    (0x2 <<  8) // (BCRAMC) Value :  2
#define 	AT91C_BCRAMC_TCKA_3                    (0x3 <<  8) // (BCRAMC) Value :  3
#define 	AT91C_BCRAMC_TCKA_4                    (0x4 <<  8) // (BCRAMC) Value :  4
#define 	AT91C_BCRAMC_TCKA_5                    (0x5 <<  8) // (BCRAMC) Value :  5
#define 	AT91C_BCRAMC_TCKA_6                    (0x6 <<  8) // (BCRAMC) Value :  6
#define 	AT91C_BCRAMC_TCKA_7                    (0x7 <<  8) // (BCRAMC) Value :  7
#define 	AT91C_BCRAMC_TCKA_8                    (0x8 <<  8) // (BCRAMC) Value :  8
#define 	AT91C_BCRAMC_TCKA_9                    (0x9 <<  8) // (BCRAMC) Value :  9
#define 	AT91C_BCRAMC_TCKA_10                   (0xA <<  8) // (BCRAMC) Value : 10
#define 	AT91C_BCRAMC_TCKA_11                   (0xB <<  8) // (BCRAMC) Value : 11
#define 	AT91C_BCRAMC_TCKA_12                   (0xC <<  8) // (BCRAMC) Value : 12
#define 	AT91C_BCRAMC_TCKA_13                   (0xD <<  8) // (BCRAMC) Value : 13
#define 	AT91C_BCRAMC_TCKA_14                   (0xE <<  8) // (BCRAMC) Value : 14
#define 	AT91C_BCRAMC_TCKA_15                   (0xF <<  8) // (BCRAMC) Value : 15
// -------- BCRAMC_HSR : (BCRAMC Offset: 0x8) BCRAM Controller High Speed Register -------- 
#define AT91C_BCRAMC_DA       (0x1 <<  0) // (BCRAMC) Decode Cycle Enable Bit
#define 	AT91C_BCRAMC_DA_DISABLE              (0x0) // (BCRAMC) Disable Decode Cycle
#define 	AT91C_BCRAMC_DA_ENABLE               (0x1) // (BCRAMC) Enable Decode Cycle
// -------- BCRAMC_LPR : (BCRAMC Offset: 0xc) BCRAM Controller Low-power Register -------- 
#define AT91C_BCRAMC_PAR      (0x7 <<  0) // (BCRAMC) Partial Array Refresh
#define 	AT91C_BCRAMC_PAR_FULL                 (0x0) // (BCRAMC) Full Refresh
#define 	AT91C_BCRAMC_PAR_PARTIAL_BOTTOM_HALF  (0x1) // (BCRAMC) Partial Bottom Half Refresh
#define 	AT91C_BCRAMC_PAR_PARTIAL_BOTTOM_QUARTER (0x2) // (BCRAMC) Partial Bottom Quarter Refresh
#define 	AT91C_BCRAMC_PAR_PARTIAL_BOTTOM_EIGTH (0x3) // (BCRAMC) Partial Bottom eigth Refresh
#define 	AT91C_BCRAMC_PAR_NONE                 (0x4) // (BCRAMC) Not Refreshed
#define 	AT91C_BCRAMC_PAR_PARTIAL_TOP_HALF     (0x5) // (BCRAMC) Partial Top Half Refresh
#define 	AT91C_BCRAMC_PAR_PARTIAL_TOP_QUARTER  (0x6) // (BCRAMC) Partial Top Quarter Refresh
#define 	AT91C_BCRAMC_PAR_PARTIAL_TOP_EIGTH    (0x7) // (BCRAMC) Partial Top eigth Refresh
#define AT91C_BCRAMC_TCR      (0x3 <<  4) // (BCRAMC) Temperature Compensated Self Refresh
#define 	AT91C_BCRAMC_TCR_85C                  (0x0 <<  4) // (BCRAMC) +85C Temperature
#define 	AT91C_BCRAMC_TCR_INTERNAL_OR_70C      (0x1 <<  4) // (BCRAMC) Internal Sensor or +70C Temperature
#define 	AT91C_BCRAMC_TCR_45C                  (0x2 <<  4) // (BCRAMC) +45C Temperature
#define 	AT91C_BCRAMC_TCR_15C                  (0x3 <<  4) // (BCRAMC) +15C Temperature
#define AT91C_BCRAMC_LPCB     (0x3 <<  8) // (BCRAMC) Low-power Command Bit
#define 	AT91C_BCRAMC_LPCB_DISABLE              (0x0 <<  8) // (BCRAMC) Disable Low Power Features
#define 	AT91C_BCRAMC_LPCB_STANDBY              (0x1 <<  8) // (BCRAMC) Enable Cellular RAM Standby Mode
#define 	AT91C_BCRAMC_LPCB_DEEP_POWER_DOWN      (0x2 <<  8) // (BCRAMC) Enable Cellular RAM Deep Power Down Mode
// -------- BCRAMC_MDR : (BCRAMC Offset: 0x10) BCRAM Controller Memory Device Register -------- 
#define AT91C_BCRAMC_MD       (0x3 <<  0) // (BCRAMC) Memory Device Type
#define 	AT91C_BCRAMC_MD_BCRAM_V10            (0x0) // (BCRAMC) Busrt Cellular RAM v1.0
#define 	AT91C_BCRAMC_MD_BCRAM_V15            (0x1) // (BCRAMC) Busrt Cellular RAM v1.5
#define 	AT91C_BCRAMC_MD_BCRAM_V20            (0x2) // (BCRAMC) Busrt Cellular RAM v2.0

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR DDR/SDRAM Controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SDDRC {
	AT91_REG	 SDDRC_MR; 	// 
	AT91_REG	 SDDRC_RTR; 	// 
	AT91_REG	 SDDRC_CR; 	// 
	AT91_REG	 SDDRC_T0PR; 	// 
	AT91_REG	 SDDRC_T1PR; 	// 
	AT91_REG	 SDDRC_HS; 	// 
	AT91_REG	 SDDRC_LPR; 	// 
	AT91_REG	 SDDRC_MDR; 	// 
	AT91_REG	 Reserved0[55]; 	// 
	AT91_REG	 SDDRC_VERSION; 	// 
} AT91S_SDDRC, *AT91PS_SDDRC;
#else
#define SDDRC_MR        (AT91_CAST(AT91_REG *) 	0x00000000) // (SDDRC_MR) 
#define SDDRC_RTR       (AT91_CAST(AT91_REG *) 	0x00000004) // (SDDRC_RTR) 
#define SDDRC_CR        (AT91_CAST(AT91_REG *) 	0x00000008) // (SDDRC_CR) 
#define SDDRC_T0PR      (AT91_CAST(AT91_REG *) 	0x0000000C) // (SDDRC_T0PR) 
#define SDDRC_T1PR      (AT91_CAST(AT91_REG *) 	0x00000010) // (SDDRC_T1PR) 
#define SDDRC_HS        (AT91_CAST(AT91_REG *) 	0x00000014) // (SDDRC_HS) 
#define SDDRC_LPR       (AT91_CAST(AT91_REG *) 	0x00000018) // (SDDRC_LPR) 
#define SDDRC_MDR       (AT91_CAST(AT91_REG *) 	0x0000001C) // (SDDRC_MDR) 
#define SDDRC_VERSION   (AT91_CAST(AT91_REG *) 	0x000000FC) // (SDDRC_VERSION) 

#endif
// -------- SDDRC_MR : (SDDRC Offset: 0x0)  -------- 
#define AT91C_MODE            (0xF <<  0) // (SDDRC) 
#define 	AT91C_MODE_NORMAL_CMD           (0x0) // (SDDRC) Normal Mode
#define 	AT91C_MODE_NOP_CMD              (0x1) // (SDDRC) Issue a NOP Command at every access
#define 	AT91C_MODE_PRCGALL_CMD          (0x2) // (SDDRC) Issue a All Banks Precharge Command at every access
#define 	AT91C_MODE_LMR_CMD              (0x3) // (SDDRC) Issue a Load Mode Register at every access
#define 	AT91C_MODE_RFSH_CMD             (0x4) // (SDDRC) Issue a Refresh
#define 	AT91C_MODE_EXT_LMR_CMD          (0x5) // (SDDRC) Issue an Extended Load Mode Register
#define 	AT91C_MODE_DEEP_CMD             (0x6) // (SDDRC) Enter Deep Power Mode
// -------- SDDRC_RTR : (SDDRC Offset: 0x4)  -------- 
#define AT91C_COUNT           (0xFFF <<  0) // (SDDRC) 
// -------- SDDRC_CR : (SDDRC Offset: 0x8)  -------- 
#define AT91C_NC              (0x3 <<  0) // (SDDRC) 
#define 	AT91C_NC_DDR9_SDR8            (0x0) // (SDDRC) DDR 9 Bits | SDR 8 Bits
#define 	AT91C_NC_DDR10_SDR9           (0x1) // (SDDRC) DDR 10 Bits | SDR 9 Bits
#define 	AT91C_NC_DDR11_SDR10          (0x2) // (SDDRC) DDR 11 Bits | SDR 10 Bits
#define 	AT91C_NC_DDR12_SDR11          (0x3) // (SDDRC) DDR 12 Bits | SDR 11 Bits
#define AT91C_NR              (0x3 <<  2) // (SDDRC) 
#define 	AT91C_NR_11                   (0x0 <<  2) // (SDDRC) 11 Bits
#define 	AT91C_NR_12                   (0x1 <<  2) // (SDDRC) 12 Bits
#define 	AT91C_NR_13                   (0x2 <<  2) // (SDDRC) 13 Bits
#define 	AT91C_NR_14                   (0x3 <<  2) // (SDDRC) 14 Bits
#define AT91C_CAS             (0x7 <<  4) // (SDDRC) 
#define 	AT91C_CAS_2                    (0x2 <<  4) // (SDDRC) 2 cycles
#define 	AT91C_CAS_3                    (0x3 <<  4) // (SDDRC) 3 cycles
#define AT91C_DLL             (0x1 <<  7) // (SDDRC) 
#define 	AT91C_DLL_RESET_DISABLED       (0x0 <<  7) // (SDDRC) Disable DLL reset
#define 	AT91C_DLL_RESET_ENABLED        (0x1 <<  7) // (SDDRC) Enable DLL reset
#define AT91C_DIC_DS          (0x1 <<  8) // (SDDRC) 
// -------- SDDRC_T0PR : (SDDRC Offset: 0xc)  -------- 
#define AT91C_TRAS            (0xF <<  0) // (SDDRC) 
#define 	AT91C_TRAS_0                    (0x0) // (SDDRC) Value :  0
#define 	AT91C_TRAS_1                    (0x1) // (SDDRC) Value :  1
#define 	AT91C_TRAS_2                    (0x2) // (SDDRC) Value :  2
#define 	AT91C_TRAS_3                    (0x3) // (SDDRC) Value :  3
#define 	AT91C_TRAS_4                    (0x4) // (SDDRC) Value :  4
#define 	AT91C_TRAS_5                    (0x5) // (SDDRC) Value :  5
#define 	AT91C_TRAS_6                    (0x6) // (SDDRC) Value :  6
#define 	AT91C_TRAS_7                    (0x7) // (SDDRC) Value :  7
#define 	AT91C_TRAS_8                    (0x8) // (SDDRC) Value :  8
#define 	AT91C_TRAS_9                    (0x9) // (SDDRC) Value :  9
#define 	AT91C_TRAS_10                   (0xA) // (SDDRC) Value : 10
#define 	AT91C_TRAS_11                   (0xB) // (SDDRC) Value : 11
#define 	AT91C_TRAS_12                   (0xC) // (SDDRC) Value : 12
#define 	AT91C_TRAS_13                   (0xD) // (SDDRC) Value : 13
#define 	AT91C_TRAS_14                   (0xE) // (SDDRC) Value : 14
#define 	AT91C_TRAS_15                   (0xF) // (SDDRC) Value : 15
#define AT91C_TRCD            (0xF <<  4) // (SDDRC) 
#define 	AT91C_TRCD_0                    (0x0 <<  4) // (SDDRC) Value :  0
#define 	AT91C_TRCD_1                    (0x1 <<  4) // (SDDRC) Value :  1
#define 	AT91C_TRCD_2                    (0x2 <<  4) // (SDDRC) Value :  2
#define 	AT91C_TRCD_3                    (0x3 <<  4) // (SDDRC) Value :  3
#define 	AT91C_TRCD_4                    (0x4 <<  4) // (SDDRC) Value :  4
#define 	AT91C_TRCD_5                    (0x5 <<  4) // (SDDRC) Value :  5
#define 	AT91C_TRCD_6                    (0x6 <<  4) // (SDDRC) Value :  6
#define 	AT91C_TRCD_7                    (0x7 <<  4) // (SDDRC) Value :  7
#define 	AT91C_TRCD_8                    (0x8 <<  4) // (SDDRC) Value :  8
#define 	AT91C_TRCD_9                    (0x9 <<  4) // (SDDRC) Value :  9
#define 	AT91C_TRCD_10                   (0xA <<  4) // (SDDRC) Value : 10
#define 	AT91C_TRCD_11                   (0xB <<  4) // (SDDRC) Value : 11
#define 	AT91C_TRCD_12                   (0xC <<  4) // (SDDRC) Value : 12
#define 	AT91C_TRCD_13                   (0xD <<  4) // (SDDRC) Value : 13
#define 	AT91C_TRCD_14                   (0xE <<  4) // (SDDRC) Value : 14
#define 	AT91C_TRCD_15                   (0xF <<  4) // (SDDRC) Value : 15
#define AT91C_TWR             (0xF <<  8) // (SDDRC) 
#define 	AT91C_TWR_0                    (0x0 <<  8) // (SDDRC) Value :  0
#define 	AT91C_TWR_1                    (0x1 <<  8) // (SDDRC) Value :  1
#define 	AT91C_TWR_2                    (0x2 <<  8) // (SDDRC) Value :  2
#define 	AT91C_TWR_3                    (0x3 <<  8) // (SDDRC) Value :  3
#define 	AT91C_TWR_4                    (0x4 <<  8) // (SDDRC) Value :  4
#define 	AT91C_TWR_5                    (0x5 <<  8) // (SDDRC) Value :  5
#define 	AT91C_TWR_6                    (0x6 <<  8) // (SDDRC) Value :  6
#define 	AT91C_TWR_7                    (0x7 <<  8) // (SDDRC) Value :  7
#define 	AT91C_TWR_8                    (0x8 <<  8) // (SDDRC) Value :  8
#define 	AT91C_TWR_9                    (0x9 <<  8) // (SDDRC) Value :  9
#define 	AT91C_TWR_10                   (0xA <<  8) // (SDDRC) Value : 10
#define 	AT91C_TWR_11                   (0xB <<  8) // (SDDRC) Value : 11
#define 	AT91C_TWR_12                   (0xC <<  8) // (SDDRC) Value : 12
#define 	AT91C_TWR_13                   (0xD <<  8) // (SDDRC) Value : 13
#define 	AT91C_TWR_14                   (0xE <<  8) // (SDDRC) Value : 14
#define 	AT91C_TWR_15                   (0xF <<  8) // (SDDRC) Value : 15
#define AT91C_TRC             (0xF << 12) // (SDDRC) 
#define 	AT91C_TRC_0                    (0x0 << 12) // (SDDRC) Value :  0
#define 	AT91C_TRC_1                    (0x1 << 12) // (SDDRC) Value :  1
#define 	AT91C_TRC_2                    (0x2 << 12) // (SDDRC) Value :  2
#define 	AT91C_TRC_3                    (0x3 << 12) // (SDDRC) Value :  3
#define 	AT91C_TRC_4                    (0x4 << 12) // (SDDRC) Value :  4
#define 	AT91C_TRC_5                    (0x5 << 12) // (SDDRC) Value :  5
#define 	AT91C_TRC_6                    (0x6 << 12) // (SDDRC) Value :  6
#define 	AT91C_TRC_7                    (0x7 << 12) // (SDDRC) Value :  7
#define 	AT91C_TRC_8                    (0x8 << 12) // (SDDRC) Value :  8
#define 	AT91C_TRC_9                    (0x9 << 12) // (SDDRC) Value :  9
#define 	AT91C_TRC_10                   (0xA << 12) // (SDDRC) Value : 10
#define 	AT91C_TRC_11                   (0xB << 12) // (SDDRC) Value : 11
#define 	AT91C_TRC_12                   (0xC << 12) // (SDDRC) Value : 12
#define 	AT91C_TRC_13                   (0xD << 12) // (SDDRC) Value : 13
#define 	AT91C_TRC_14                   (0xE << 12) // (SDDRC) Value : 14
#define 	AT91C_TRC_15                   (0xF << 12) // (SDDRC) Value : 15
#define AT91C_TRP             (0xF << 16) // (SDDRC) 
#define 	AT91C_TRP_0                    (0x0 << 16) // (SDDRC) Value :  0
#define 	AT91C_TRP_1                    (0x1 << 16) // (SDDRC) Value :  1
#define 	AT91C_TRP_2                    (0x2 << 16) // (SDDRC) Value :  2
#define 	AT91C_TRP_3                    (0x3 << 16) // (SDDRC) Value :  3
#define 	AT91C_TRP_4                    (0x4 << 16) // (SDDRC) Value :  4
#define 	AT91C_TRP_5                    (0x5 << 16) // (SDDRC) Value :  5
#define 	AT91C_TRP_6                    (0x6 << 16) // (SDDRC) Value :  6
#define 	AT91C_TRP_7                    (0x7 << 16) // (SDDRC) Value :  7
#define 	AT91C_TRP_8                    (0x8 << 16) // (SDDRC) Value :  8
#define 	AT91C_TRP_9                    (0x9 << 16) // (SDDRC) Value :  9
#define 	AT91C_TRP_10                   (0xA << 16) // (SDDRC) Value : 10
#define 	AT91C_TRP_11                   (0xB << 16) // (SDDRC) Value : 11
#define 	AT91C_TRP_12                   (0xC << 16) // (SDDRC) Value : 12
#define 	AT91C_TRP_13                   (0xD << 16) // (SDDRC) Value : 13
#define 	AT91C_TRP_14                   (0xE << 16) // (SDDRC) Value : 14
#define 	AT91C_TRP_15                   (0xF << 16) // (SDDRC) Value : 15
#define AT91C_TRRD            (0xF << 20) // (SDDRC) 
#define 	AT91C_TRRD_0                    (0x0 << 20) // (SDDRC) Value :  0
#define 	AT91C_TRRD_1                    (0x1 << 20) // (SDDRC) Value :  1
#define 	AT91C_TRRD_2                    (0x2 << 20) // (SDDRC) Value :  2
#define 	AT91C_TRRD_3                    (0x3 << 20) // (SDDRC) Value :  3
#define 	AT91C_TRRD_4                    (0x4 << 20) // (SDDRC) Value :  4
#define 	AT91C_TRRD_5                    (0x5 << 20) // (SDDRC) Value :  5
#define 	AT91C_TRRD_6                    (0x6 << 20) // (SDDRC) Value :  6
#define 	AT91C_TRRD_7                    (0x7 << 20) // (SDDRC) Value :  7
#define 	AT91C_TRRD_8                    (0x8 << 20) // (SDDRC) Value :  8
#define 	AT91C_TRRD_9                    (0x9 << 20) // (SDDRC) Value :  9
#define 	AT91C_TRRD_10                   (0xA << 20) // (SDDRC) Value : 10
#define 	AT91C_TRRD_11                   (0xB << 20) // (SDDRC) Value : 11
#define 	AT91C_TRRD_12                   (0xC << 20) // (SDDRC) Value : 12
#define 	AT91C_TRRD_13                   (0xD << 20) // (SDDRC) Value : 13
#define 	AT91C_TRRD_14                   (0xE << 20) // (SDDRC) Value : 14
#define 	AT91C_TRRD_15                   (0xF << 20) // (SDDRC) Value : 15
#define AT91C_TWTR            (0x1 << 24) // (SDDRC) 
#define 	AT91C_TWTR_0                    (0x0 << 24) // (SDDRC) Value :  0
#define 	AT91C_TWTR_1                    (0x1 << 24) // (SDDRC) Value :  1
#define AT91C_TMRD            (0xF << 28) // (SDDRC) 
#define 	AT91C_TMRD_0                    (0x0 << 28) // (SDDRC) Value :  0
#define 	AT91C_TMRD_1                    (0x1 << 28) // (SDDRC) Value :  1
#define 	AT91C_TMRD_2                    (0x2 << 28) // (SDDRC) Value :  2
#define 	AT91C_TMRD_3                    (0x3 << 28) // (SDDRC) Value :  3
#define 	AT91C_TMRD_4                    (0x4 << 28) // (SDDRC) Value :  4
#define 	AT91C_TMRD_5                    (0x5 << 28) // (SDDRC) Value :  5
#define 	AT91C_TMRD_6                    (0x6 << 28) // (SDDRC) Value :  6
#define 	AT91C_TMRD_7                    (0x7 << 28) // (SDDRC) Value :  7
#define 	AT91C_TMRD_8                    (0x8 << 28) // (SDDRC) Value :  8
#define 	AT91C_TMRD_9                    (0x9 << 28) // (SDDRC) Value :  9
#define 	AT91C_TMRD_10                   (0xA << 28) // (SDDRC) Value : 10
#define 	AT91C_TMRD_11                   (0xB << 28) // (SDDRC) Value : 11
#define 	AT91C_TMRD_12                   (0xC << 28) // (SDDRC) Value : 12
#define 	AT91C_TMRD_13                   (0xD << 28) // (SDDRC) Value : 13
#define 	AT91C_TMRD_14                   (0xE << 28) // (SDDRC) Value : 14
#define 	AT91C_TMRD_15                   (0xF << 28) // (SDDRC) Value : 15
// -------- SDDRC_T1PR : (SDDRC Offset: 0x10)  -------- 
#define AT91C_TRFC            (0x1F <<  0) // (SDDRC) 
#define 	AT91C_TRFC_0                    (0x0) // (SDDRC) Value :  0
#define 	AT91C_TRFC_1                    (0x1) // (SDDRC) Value :  1
#define 	AT91C_TRFC_2                    (0x2) // (SDDRC) Value :  2
#define 	AT91C_TRFC_3                    (0x3) // (SDDRC) Value :  3
#define 	AT91C_TRFC_4                    (0x4) // (SDDRC) Value :  4
#define 	AT91C_TRFC_5                    (0x5) // (SDDRC) Value :  5
#define 	AT91C_TRFC_6                    (0x6) // (SDDRC) Value :  6
#define 	AT91C_TRFC_7                    (0x7) // (SDDRC) Value :  7
#define 	AT91C_TRFC_8                    (0x8) // (SDDRC) Value :  8
#define 	AT91C_TRFC_9                    (0x9) // (SDDRC) Value :  9
#define 	AT91C_TRFC_10                   (0xA) // (SDDRC) Value : 10
#define 	AT91C_TRFC_11                   (0xB) // (SDDRC) Value : 11
#define 	AT91C_TRFC_12                   (0xC) // (SDDRC) Value : 12
#define 	AT91C_TRFC_13                   (0xD) // (SDDRC) Value : 13
#define 	AT91C_TRFC_14                   (0xE) // (SDDRC) Value : 14
#define 	AT91C_TRFC_15                   (0xF) // (SDDRC) Value : 15
#define 	AT91C_TRFC_16                   (0x10) // (SDDRC) Value : 16
#define 	AT91C_TRFC_17                   (0x11) // (SDDRC) Value : 17
#define 	AT91C_TRFC_18                   (0x12) // (SDDRC) Value : 18
#define 	AT91C_TRFC_19                   (0x13) // (SDDRC) Value : 19
#define 	AT91C_TRFC_20                   (0x14) // (SDDRC) Value : 20
#define 	AT91C_TRFC_21                   (0x15) // (SDDRC) Value : 21
#define 	AT91C_TRFC_22                   (0x16) // (SDDRC) Value : 22
#define 	AT91C_TRFC_23                   (0x17) // (SDDRC) Value : 23
#define 	AT91C_TRFC_24                   (0x18) // (SDDRC) Value : 24
#define 	AT91C_TRFC_25                   (0x19) // (SDDRC) Value : 25
#define 	AT91C_TRFC_26                   (0x1A) // (SDDRC) Value : 26
#define 	AT91C_TRFC_27                   (0x1B) // (SDDRC) Value : 27
#define 	AT91C_TRFC_28                   (0x1C) // (SDDRC) Value : 28
#define 	AT91C_TRFC_29                   (0x1D) // (SDDRC) Value : 29
#define 	AT91C_TRFC_30                   (0x1E) // (SDDRC) Value : 30
#define 	AT91C_TRFC_31                   (0x1F) // (SDDRC) Value : 31
#define AT91C_TXSNR           (0xFF <<  8) // (SDDRC) 
#define 	AT91C_TXSNR_0                    (0x0 <<  8) // (SDDRC) Value :  0
#define 	AT91C_TXSNR_1                    (0x1 <<  8) // (SDDRC) Value :  1
#define 	AT91C_TXSNR_2                    (0x2 <<  8) // (SDDRC) Value :  2
#define 	AT91C_TXSNR_3                    (0x3 <<  8) // (SDDRC) Value :  3
#define 	AT91C_TXSNR_4                    (0x4 <<  8) // (SDDRC) Value :  4
#define 	AT91C_TXSNR_5                    (0x5 <<  8) // (SDDRC) Value :  5
#define 	AT91C_TXSNR_6                    (0x6 <<  8) // (SDDRC) Value :  6
#define 	AT91C_TXSNR_7                    (0x7 <<  8) // (SDDRC) Value :  7
#define 	AT91C_TXSNR_8                    (0x8 <<  8) // (SDDRC) Value :  8
#define 	AT91C_TXSNR_9                    (0x9 <<  8) // (SDDRC) Value :  9
#define 	AT91C_TXSNR_10                   (0xA <<  8) // (SDDRC) Value : 10
#define 	AT91C_TXSNR_11                   (0xB <<  8) // (SDDRC) Value : 11
#define 	AT91C_TXSNR_12                   (0xC <<  8) // (SDDRC) Value : 12
#define 	AT91C_TXSNR_13                   (0xD <<  8) // (SDDRC) Value : 13
#define 	AT91C_TXSNR_14                   (0xE <<  8) // (SDDRC) Value : 14
#define 	AT91C_TXSNR_15                   (0xF <<  8) // (SDDRC) Value : 15
#define AT91C_TXSRD           (0xFF << 16) // (SDDRC) 
#define 	AT91C_TXSRD_0                    (0x0 << 16) // (SDDRC) Value :  0
#define 	AT91C_TXSRD_1                    (0x1 << 16) // (SDDRC) Value :  1
#define 	AT91C_TXSRD_2                    (0x2 << 16) // (SDDRC) Value :  2
#define 	AT91C_TXSRD_3                    (0x3 << 16) // (SDDRC) Value :  3
#define 	AT91C_TXSRD_4                    (0x4 << 16) // (SDDRC) Value :  4
#define 	AT91C_TXSRD_5                    (0x5 << 16) // (SDDRC) Value :  5
#define 	AT91C_TXSRD_6                    (0x6 << 16) // (SDDRC) Value :  6
#define 	AT91C_TXSRD_7                    (0x7 << 16) // (SDDRC) Value :  7
#define 	AT91C_TXSRD_8                    (0x8 << 16) // (SDDRC) Value :  8
#define 	AT91C_TXSRD_9                    (0x9 << 16) // (SDDRC) Value :  9
#define 	AT91C_TXSRD_10                   (0xA << 16) // (SDDRC) Value : 10
#define 	AT91C_TXSRD_11                   (0xB << 16) // (SDDRC) Value : 11
#define 	AT91C_TXSRD_12                   (0xC << 16) // (SDDRC) Value : 12
#define 	AT91C_TXSRD_13                   (0xD << 16) // (SDDRC) Value : 13
#define 	AT91C_TXSRD_14                   (0xE << 16) // (SDDRC) Value : 14
#define 	AT91C_TXSRD_15                   (0xF << 16) // (SDDRC) Value : 15
#define AT91C_TXP             (0xF << 24) // (SDDRC) 
#define 	AT91C_TXP_0                    (0x0 << 24) // (SDDRC) Value :  0
#define 	AT91C_TXP_1                    (0x1 << 24) // (SDDRC) Value :  1
#define 	AT91C_TXP_2                    (0x2 << 24) // (SDDRC) Value :  2
#define 	AT91C_TXP_3                    (0x3 << 24) // (SDDRC) Value :  3
#define 	AT91C_TXP_4                    (0x4 << 24) // (SDDRC) Value :  4
#define 	AT91C_TXP_5                    (0x5 << 24) // (SDDRC) Value :  5
#define 	AT91C_TXP_6                    (0x6 << 24) // (SDDRC) Value :  6
#define 	AT91C_TXP_7                    (0x7 << 24) // (SDDRC) Value :  7
#define 	AT91C_TXP_8                    (0x8 << 24) // (SDDRC) Value :  8
#define 	AT91C_TXP_9                    (0x9 << 24) // (SDDRC) Value :  9
#define 	AT91C_TXP_10                   (0xA << 24) // (SDDRC) Value : 10
#define 	AT91C_TXP_11                   (0xB << 24) // (SDDRC) Value : 11
#define 	AT91C_TXP_12                   (0xC << 24) // (SDDRC) Value : 12
#define 	AT91C_TXP_13                   (0xD << 24) // (SDDRC) Value : 13
#define 	AT91C_TXP_14                   (0xE << 24) // (SDDRC) Value : 14
#define 	AT91C_TXP_15                   (0xF << 24) // (SDDRC) Value : 15
// -------- SDDRC_HS : (SDDRC Offset: 0x14)  -------- 
#define AT91C_DA              (0x1 <<  0) // (SDDRC) 
#define AT91C_OVL             (0x1 <<  1) // (SDDRC) 
// -------- SDDRC_LPR : (SDDRC Offset: 0x18)  -------- 
#define AT91C_LPCB            (0x3 <<  0) // (SDDRC) 
#define AT91C_PASR            (0x7 <<  4) // (SDDRC) 
#define AT91C_LP_TRC          (0x3 <<  8) // (SDDRC) 
#define AT91C_DS              (0x3 << 10) // (SDDRC) 
#define AT91C_TIMEOUT         (0x3 << 12) // (SDDRC) 
// -------- SDDRC_MDR : (SDDRC Offset: 0x1c)  -------- 
#define AT91C_MD              (0x3 <<  0) // (SDDRC) 
#define 	AT91C_MD_SDR_SDRAM            (0x0) // (SDDRC) SDR_SDRAM
#define 	AT91C_MD_LP_SDR_SDRAM         (0x1) // (SDDRC) Low Power SDR_SDRAM
#define 	AT91C_MD_DDR_SDRAM            (0x2) // (SDDRC) DDR_SDRAM
#define 	AT91C_MD_LP_DDR_SDRAM         (0x3) // (SDDRC) Low Power DDR_SDRAM
#define AT91C_B16MODE         (0x1 <<  4) // (SDDRC) 
#define 	AT91C_B16MODE_32_BITS              (0x0 <<  4) // (SDDRC) 32 Bits datas bus
#define 	AT91C_B16MODE_16_BITS              (0x1 <<  4) // (SDDRC) 16 Bits datas bus

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Static Memory Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SMC {
	AT91_REG	 SMC_SETUP0; 	//  Setup Register for CS 0
	AT91_REG	 SMC_PULSE0; 	//  Pulse Register for CS 0
	AT91_REG	 SMC_CYCLE0; 	//  Cycle Register for CS 0
	AT91_REG	 SMC_CTRL0; 	//  Control Register for CS 0
	AT91_REG	 SMC_SETUP1; 	//  Setup Register for CS 1
	AT91_REG	 SMC_PULSE1; 	//  Pulse Register for CS 1
	AT91_REG	 SMC_CYCLE1; 	//  Cycle Register for CS 1
	AT91_REG	 SMC_CTRL1; 	//  Control Register for CS 1
	AT91_REG	 SMC_SETUP2; 	//  Setup Register for CS 2
	AT91_REG	 SMC_PULSE2; 	//  Pulse Register for CS 2
	AT91_REG	 SMC_CYCLE2; 	//  Cycle Register for CS 2
	AT91_REG	 SMC_CTRL2; 	//  Control Register for CS 2
	AT91_REG	 SMC_SETUP3; 	//  Setup Register for CS 3
	AT91_REG	 SMC_PULSE3; 	//  Pulse Register for CS 3
	AT91_REG	 SMC_CYCLE3; 	//  Cycle Register for CS 3
	AT91_REG	 SMC_CTRL3; 	//  Control Register for CS 3
	AT91_REG	 SMC_SETUP4; 	//  Setup Register for CS 4
	AT91_REG	 SMC_PULSE4; 	//  Pulse Register for CS 4
	AT91_REG	 SMC_CYCLE4; 	//  Cycle Register for CS 4
	AT91_REG	 SMC_CTRL4; 	//  Control Register for CS 4
	AT91_REG	 SMC_SETUP5; 	//  Setup Register for CS 5
	AT91_REG	 SMC_PULSE5; 	//  Pulse Register for CS 5
	AT91_REG	 SMC_CYCLE5; 	//  Cycle Register for CS 5
	AT91_REG	 SMC_CTRL5; 	//  Control Register for CS 5
	AT91_REG	 SMC_SETUP6; 	//  Setup Register for CS 6
	AT91_REG	 SMC_PULSE6; 	//  Pulse Register for CS 6
	AT91_REG	 SMC_CYCLE6; 	//  Cycle Register for CS 6
	AT91_REG	 SMC_CTRL6; 	//  Control Register for CS 6
	AT91_REG	 SMC_SETUP7; 	//  Setup Register for CS 7
	AT91_REG	 SMC_PULSE7; 	//  Pulse Register for CS 7
	AT91_REG	 SMC_CYCLE7; 	//  Cycle Register for CS 7
	AT91_REG	 SMC_CTRL7; 	//  Control Register for CS 7
} AT91S_SMC, *AT91PS_SMC;
#else
#define SETUP0          (AT91_CAST(AT91_REG *) 	0x00000000) // (SETUP0)  Setup Register for CS 0
#define PULSE0          (AT91_CAST(AT91_REG *) 	0x00000004) // (PULSE0)  Pulse Register for CS 0
#define CYCLE0          (AT91_CAST(AT91_REG *) 	0x00000008) // (CYCLE0)  Cycle Register for CS 0
#define CTRL0           (AT91_CAST(AT91_REG *) 	0x0000000C) // (CTRL0)  Control Register for CS 0
#define SETUP1          (AT91_CAST(AT91_REG *) 	0x00000010) // (SETUP1)  Setup Register for CS 1
#define PULSE1          (AT91_CAST(AT91_REG *) 	0x00000014) // (PULSE1)  Pulse Register for CS 1
#define CYCLE1          (AT91_CAST(AT91_REG *) 	0x00000018) // (CYCLE1)  Cycle Register for CS 1
#define CTRL1           (AT91_CAST(AT91_REG *) 	0x0000001C) // (CTRL1)  Control Register for CS 1
#define SETUP2          (AT91_CAST(AT91_REG *) 	0x00000020) // (SETUP2)  Setup Register for CS 2
#define PULSE2          (AT91_CAST(AT91_REG *) 	0x00000024) // (PULSE2)  Pulse Register for CS 2
#define CYCLE2          (AT91_CAST(AT91_REG *) 	0x00000028) // (CYCLE2)  Cycle Register for CS 2
#define CTRL2           (AT91_CAST(AT91_REG *) 	0x0000002C) // (CTRL2)  Control Register for CS 2
#define SETUP3          (AT91_CAST(AT91_REG *) 	0x00000030) // (SETUP3)  Setup Register for CS 3
#define PULSE3          (AT91_CAST(AT91_REG *) 	0x00000034) // (PULSE3)  Pulse Register for CS 3
#define CYCLE3          (AT91_CAST(AT91_REG *) 	0x00000038) // (CYCLE3)  Cycle Register for CS 3
#define CTRL3           (AT91_CAST(AT91_REG *) 	0x0000003C) // (CTRL3)  Control Register for CS 3
#define SETUP4          (AT91_CAST(AT91_REG *) 	0x00000040) // (SETUP4)  Setup Register for CS 4
#define PULSE4          (AT91_CAST(AT91_REG *) 	0x00000044) // (PULSE4)  Pulse Register for CS 4
#define CYCLE4          (AT91_CAST(AT91_REG *) 	0x00000048) // (CYCLE4)  Cycle Register for CS 4
#define CTRL4           (AT91_CAST(AT91_REG *) 	0x0000004C) // (CTRL4)  Control Register for CS 4
#define SETUP5          (AT91_CAST(AT91_REG *) 	0x00000050) // (SETUP5)  Setup Register for CS 5
#define PULSE5          (AT91_CAST(AT91_REG *) 	0x00000054) // (PULSE5)  Pulse Register for CS 5
#define CYCLE5          (AT91_CAST(AT91_REG *) 	0x00000058) // (CYCLE5)  Cycle Register for CS 5
#define CTRL5           (AT91_CAST(AT91_REG *) 	0x0000005C) // (CTRL5)  Control Register for CS 5
#define SETUP6          (AT91_CAST(AT91_REG *) 	0x00000060) // (SETUP6)  Setup Register for CS 6
#define PULSE6          (AT91_CAST(AT91_REG *) 	0x00000064) // (PULSE6)  Pulse Register for CS 6
#define CYCLE6          (AT91_CAST(AT91_REG *) 	0x00000068) // (CYCLE6)  Cycle Register for CS 6
#define CTRL6           (AT91_CAST(AT91_REG *) 	0x0000006C) // (CTRL6)  Control Register for CS 6
#define SETUP7          (AT91_CAST(AT91_REG *) 	0x00000070) // (SETUP7)  Setup Register for CS 7
#define PULSE7          (AT91_CAST(AT91_REG *) 	0x00000074) // (PULSE7)  Pulse Register for CS 7
#define CYCLE7          (AT91_CAST(AT91_REG *) 	0x00000078) // (CYCLE7)  Cycle Register for CS 7
#define CTRL7           (AT91_CAST(AT91_REG *) 	0x0000007C) // (CTRL7)  Control Register for CS 7

#endif
// -------- SMC_SETUP : (SMC Offset: 0x0) Setup Register for CS x -------- 
#define AT91C_SMC_NWESETUP    (0x3F <<  0) // (SMC) NWE Setup Length
#define AT91C_SMC_NCSSETUPWR  (0x3F <<  8) // (SMC) NCS Setup Length in WRite Access
#define AT91C_SMC_NRDSETUP    (0x3F << 16) // (SMC) NRD Setup Length
#define AT91C_SMC_NCSSETUPRD  (0x3F << 24) // (SMC) NCS Setup Length in ReaD Access
// -------- SMC_PULSE : (SMC Offset: 0x4) Pulse Register for CS x -------- 
#define AT91C_SMC_NWEPULSE    (0x7F <<  0) // (SMC) NWE Pulse Length
#define AT91C_SMC_NCSPULSEWR  (0x7F <<  8) // (SMC) NCS Pulse Length in WRite Access
#define AT91C_SMC_NRDPULSE    (0x7F << 16) // (SMC) NRD Pulse Length
#define AT91C_SMC_NCSPULSERD  (0x7F << 24) // (SMC) NCS Pulse Length in ReaD Access
// -------- SMC_CYC : (SMC Offset: 0x8) Cycle Register for CS x -------- 
#define AT91C_SMC_NWECYCLE    (0x1FF <<  0) // (SMC) Total Write Cycle Length
#define AT91C_SMC_NRDCYCLE    (0x1FF << 16) // (SMC) Total Read Cycle Length
// -------- SMC_CTRL : (SMC Offset: 0xc) Control Register for CS x -------- 
#define AT91C_SMC_READMODE    (0x1 <<  0) // (SMC) Read Mode
#define AT91C_SMC_WRITEMODE   (0x1 <<  1) // (SMC) Write Mode
#define AT91C_SMC_NWAITM      (0x3 <<  4) // (SMC) NWAIT Mode
#define 	AT91C_SMC_NWAITM_NWAIT_DISABLE        (0x0 <<  4) // (SMC) External NWAIT disabled.
#define 	AT91C_SMC_NWAITM_NWAIT_ENABLE_FROZEN  (0x2 <<  4) // (SMC) External NWAIT enabled in frozen mode.
#define 	AT91C_SMC_NWAITM_NWAIT_ENABLE_READY   (0x3 <<  4) // (SMC) External NWAIT enabled in ready mode.
#define AT91C_SMC_BAT         (0x1 <<  8) // (SMC) Byte Access Type
#define 	AT91C_SMC_BAT_BYTE_SELECT          (0x0 <<  8) // (SMC) Write controled by ncs, nbs0, nbs1, nbs2, nbs3. Read controled by ncs, nrd, nbs0, nbs1, nbs2, nbs3.
#define 	AT91C_SMC_BAT_BYTE_WRITE           (0x1 <<  8) // (SMC) Write controled by ncs, nwe0, nwe1, nwe2, nwe3. Read controled by ncs and nrd.
#define AT91C_SMC_DBW         (0x3 << 12) // (SMC) Data Bus Width
#define 	AT91C_SMC_DBW_WIDTH_EIGTH_BITS     (0x0 << 12) // (SMC) 8 bits.
#define 	AT91C_SMC_DBW_WIDTH_SIXTEEN_BITS   (0x1 << 12) // (SMC) 16 bits.
#define 	AT91C_SMC_DBW_WIDTH_THIRTY_TWO_BITS (0x2 << 12) // (SMC) 32 bits.
#define AT91C_SMC_TDF         (0xF << 16) // (SMC) Data Float Time.
#define AT91C_SMC_TDFEN       (0x1 << 20) // (SMC) TDF Enabled.
#define AT91C_SMC_PMEN        (0x1 << 24) // (SMC) Page Mode Enabled.
#define AT91C_SMC_PS          (0x3 << 28) // (SMC) Page Size
#define 	AT91C_SMC_PS_SIZE_FOUR_BYTES      (0x0 << 28) // (SMC) 4 bytes.
#define 	AT91C_SMC_PS_SIZE_EIGHT_BYTES     (0x1 << 28) // (SMC) 8 bytes.
#define 	AT91C_SMC_PS_SIZE_SIXTEEN_BYTES   (0x2 << 28) // (SMC) 16 bytes.
#define 	AT91C_SMC_PS_SIZE_THIRTY_TWO_BYTES (0x3 << 28) // (SMC) 32 bytes.
// -------- SMC_SETUP : (SMC Offset: 0x10) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x14) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x18) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x1c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x20) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x24) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x28) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x2c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x30) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x34) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x38) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x3c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x40) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x44) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x48) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x4c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x50) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x54) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x58) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x5c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x60) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x64) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x68) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x6c) Control Register for CS x -------- 
// -------- SMC_SETUP : (SMC Offset: 0x70) Setup Register for CS x -------- 
// -------- SMC_PULSE : (SMC Offset: 0x74) Pulse Register for CS x -------- 
// -------- SMC_CYC : (SMC Offset: 0x78) Cycle Register for CS x -------- 
// -------- SMC_CTRL : (SMC Offset: 0x7c) Control Register for CS x -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Slave Priority Registers
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_MATRIX_PRS {
	AT91_REG	 MATRIX_PRAS; 	//  Slave Priority Registers A for Slave
	AT91_REG	 MATRIX_PRBS; 	//  Slave Priority Registers B for Slave
} AT91S_MATRIX_PRS, *AT91PS_MATRIX_PRS;
#else
#define MATRIX_PRAS     (AT91_CAST(AT91_REG *) 	0x00000000) // (MATRIX_PRAS)  Slave Priority Registers A for Slave
#define MATRIX_PRBS     (AT91_CAST(AT91_REG *) 	0x00000004) // (MATRIX_PRBS)  Slave Priority Registers B for Slave

#endif

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR AHB Matrix Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_MATRIX {
	AT91_REG	 MATRIX_MCFG[12]; 	//  Master Configuration Register 
	AT91_REG	 Reserved0[4]; 	// 
	AT91_REG	 MATRIX_SCFG[9]; 	//  Slave Configuration Register 
	AT91_REG	 Reserved1[7]; 	// 
	AT91S_MATRIX_PRS	 MATRIX_PRS[9]; 	//  Slave Priority Registers
	AT91_REG	 Reserved2[14]; 	// 
	AT91_REG	 MATRIX_MRCR; 	//  Master Remp Control Register 
} AT91S_MATRIX, *AT91PS_MATRIX;
#else
#define MATRIX_MCFG     (AT91_CAST(AT91_REG *) 	0x00000000) // (MATRIX_MCFG)  Master Configuration Register 
#define MATRIX_SCFG     (AT91_CAST(AT91_REG *) 	0x00000040) // (MATRIX_SCFG)  Slave Configuration Register 
#define MATRIX_MRCR     (AT91_CAST(AT91_REG *) 	0x00000100) // (MATRIX_MRCR)  Master Remp Control Register 

#endif
// -------- MATRIX_MCFG : (MATRIX Offset: 0x0) Master Configuration Register rom -------- 
#define AT91C_MATRIX_ULBT     (0x7 <<  0) // (MATRIX) Undefined Length Burst Type
// -------- MATRIX_SCFG : (MATRIX Offset: 0x40) Slave Configuration Register -------- 
#define AT91C_MATRIX_SLOT_CYCLE (0xFF <<  0) // (MATRIX) Maximum Number of Allowed Cycles for a Burst
#define AT91C_MATRIX_DEFMSTR_TYPE (0x3 << 16) // (MATRIX) Default Master Type
#define 	AT91C_MATRIX_DEFMSTR_TYPE_NO_DEFMSTR           (0x0 << 16) // (MATRIX) No Default Master. At the end of current slave access, if no other master request is pending, the slave is deconnected from all masters. This results in having a one cycle latency for the first transfer of a burst.
#define 	AT91C_MATRIX_DEFMSTR_TYPE_LAST_DEFMSTR         (0x1 << 16) // (MATRIX) Last Default Master. At the end of current slave access, if no other master request is pending, the slave stay connected with the last master having accessed it. This results in not having the one cycle latency when the last master re-trying access on the slave.
#define 	AT91C_MATRIX_DEFMSTR_TYPE_FIXED_DEFMSTR        (0x2 << 16) // (MATRIX) Fixed Default Master. At the end of current slave access, if no other master request is pending, the slave connects with fixed which number is in FIXED_DEFMSTR field. This results in not having the one cycle latency when the fixed master re-trying access on the slave.
#define AT91C_MATRIX_FIXED_DEFMSTR (0x7 << 18) // (MATRIX) Fixed Index of Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_ARM926I              (0x0 << 18) // (MATRIX) ARM926EJ-S Instruction Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_ARM926D              (0x1 << 18) // (MATRIX) ARM926EJ-S Data Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_PDC                  (0x2 << 18) // (MATRIX) PDC Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_LCDC                 (0x3 << 18) // (MATRIX) LCDC Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_2DGC                 (0x4 << 18) // (MATRIX) 2DGC Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_ISI                  (0x5 << 18) // (MATRIX) ISI Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_DMA                  (0x6 << 18) // (MATRIX) DMA Controller Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_EMAC                 (0x7 << 18) // (MATRIX) EMAC Master is Default Master
#define 	AT91C_MATRIX_FIXED_DEFMSTR_USB                  (0x8 << 18) // (MATRIX) USB Master is Default Master
#define AT91C_MATRIX_ARBT     (0x3 << 24) // (MATRIX) Arbitration Type
// -------- MATRIX_MRCR : (MATRIX Offset: 0x100) MRCR Register -------- 
#define AT91C_MATRIX_RCA926I  (0x1 <<  0) // (MATRIX) Remap Command Bit for ARM926EJ-S Instruction
#define AT91C_MATRIX_RCA926D  (0x1 <<  1) // (MATRIX) Remap Command Bit for ARM926EJ-S Data
#define AT91C_MATRIX_RCB2     (0x1 <<  2) // (MATRIX) Remap Command Bit for PDC
#define AT91C_MATRIX_RCB3     (0x1 <<  3) // (MATRIX) Remap Command Bit for LCD
#define AT91C_MATRIX_RCB4     (0x1 <<  4) // (MATRIX) Remap Command Bit for 2DGC
#define AT91C_MATRIX_RCB5     (0x1 <<  5) // (MATRIX) Remap Command Bit for ISI
#define AT91C_MATRIX_RCB6     (0x1 <<  6) // (MATRIX) Remap Command Bit for DMA
#define AT91C_MATRIX_RCB7     (0x1 <<  7) // (MATRIX) Remap Command Bit for EMAC
#define AT91C_MATRIX_RCB8     (0x1 <<  8) // (MATRIX) Remap Command Bit for USB
#define AT91C_MATRIX_RCB9     (0x1 <<  9) // (MATRIX) Remap Command Bit for USB
#define AT91C_MATRIX_RCB10    (0x1 << 10) // (MATRIX) Remap Command Bit for USB
#define AT91C_MATRIX_RCB11    (0x1 << 11) // (MATRIX) Remap Command Bit for USB

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR AHB CCFG Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_CCFG {
	AT91_REG	 CCFG_RAM; 	//  Slave 0 (Ram) Special Function Register
	AT91_REG	 CCFG_MPBS0; 	//  Slave 1 (MP Block Slave 0) Special Function Register
	AT91_REG	 CCFG_UDPHS; 	//  Slave 2 (AHB Periphs) Special Function Register
	AT91_REG	 CCFG_MPBS1; 	//  Slave 3 (MP Block Slave 1) Special Function Register
	AT91_REG	 CCFG_EBICSA; 	//  EBI Chip Select Assignement Register
	AT91_REG	 CCFG_HDDRC2; 	//  Slave 5 (DDRC Port 2) Special Function Register
	AT91_REG	 CCFG_HDDRC3; 	//  Slave 6 (DDRC Port 3) Special Function Register
	AT91_REG	 CCFG_MPBS2; 	//  Slave 7 (MP Block Slave 2) Special Function Register
	AT91_REG	 CCFG_MPBS3; 	//  Slave 7 (MP Block Slave 3) Special Function Register
	AT91_REG	 CCFG_BRIDGE; 	//  Slave 8 (APB Bridge) Special Function Register
	AT91_REG	 Reserved0[49]; 	// 
	AT91_REG	 CCFG_MATRIXVERSION; 	//  Version Register
} AT91S_CCFG, *AT91PS_CCFG;
#else
#define CCFG_RAM        (AT91_CAST(AT91_REG *) 	0x00000000) // (CCFG_RAM)  Slave 0 (Ram) Special Function Register
#define CCFG_MPBS0      (AT91_CAST(AT91_REG *) 	0x00000004) // (CCFG_MPBS0)  Slave 1 (MP Block Slave 0) Special Function Register
#define CCFG_UDPHS      (AT91_CAST(AT91_REG *) 	0x00000008) // (CCFG_UDPHS)  Slave 2 (AHB Periphs) Special Function Register
#define CCFG_MPBS1      (AT91_CAST(AT91_REG *) 	0x0000000C) // (CCFG_MPBS1)  Slave 3 (MP Block Slave 1) Special Function Register
#define CCFG_EBICSA     (AT91_CAST(AT91_REG *) 	0x00000010) // (CCFG_EBICSA)  EBI Chip Select Assignement Register
#define CCFG_HDDRC2     (AT91_CAST(AT91_REG *) 	0x00000014) // (CCFG_HDDRC2)  Slave 5 (DDRC Port 2) Special Function Register
#define CCFG_HDDRC3     (AT91_CAST(AT91_REG *) 	0x00000018) // (CCFG_HDDRC3)  Slave 6 (DDRC Port 3) Special Function Register
#define CCFG_MPBS2      (AT91_CAST(AT91_REG *) 	0x0000001C) // (CCFG_MPBS2)  Slave 7 (MP Block Slave 2) Special Function Register
#define CCFG_MPBS3      (AT91_CAST(AT91_REG *) 	0x00000020) // (CCFG_MPBS3)  Slave 7 (MP Block Slave 3) Special Function Register
#define CCFG_BRIDGE     (AT91_CAST(AT91_REG *) 	0x00000024) // (CCFG_BRIDGE)  Slave 8 (APB Bridge) Special Function Register
#define CCFG_MATRIXVERSION (AT91_CAST(AT91_REG *) 	0x000000EC) // (CCFG_MATRIXVERSION)  Version Register

#endif
// -------- CCFG_UDPHS : (CCFG Offset: 0x8) UDPHS Configuration -------- 
#define AT91C_CCFG_UDPHS_UDP_SELECT (0x1 << 31) // (CCFG) UDPHS or UDP Selection
#define 	AT91C_CCFG_UDPHS_UDP_SELECT_UDPHS                (0x0 << 31) // (CCFG) UDPHS Selected.
#define 	AT91C_CCFG_UDPHS_UDP_SELECT_UDP                  (0x1 << 31) // (CCFG) UDP Selected.
// -------- CCFG_EBICSA : (CCFG Offset: 0x10) EBI Chip Select Assignement Register -------- 
#define AT91C_EBI_CS1A        (0x1 <<  1) // (CCFG) Chip Select 1 Assignment
#define 	AT91C_EBI_CS1A_SMC                  (0x0 <<  1) // (CCFG) Chip Select 1 is assigned to the Static Memory Controller.
#define 	AT91C_EBI_CS1A_BCRAMC               (0x1 <<  1) // (CCFG) Chip Select 1 is assigned to the BCRAM Controller.
#define AT91C_EBI_CS3A        (0x1 <<  3) // (CCFG) Chip Select 3 Assignment
#define 	AT91C_EBI_CS3A_SMC                  (0x0 <<  3) // (CCFG) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC.
#define 	AT91C_EBI_CS3A_SM                   (0x1 <<  3) // (CCFG) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated.
#define AT91C_EBI_CS4A        (0x1 <<  4) // (CCFG) Chip Select 4 Assignment
#define 	AT91C_EBI_CS4A_SMC                  (0x0 <<  4) // (CCFG) Chip Select 4 is only assigned to the Static Memory Controller and NCS4 behaves as defined by the SMC.
#define 	AT91C_EBI_CS4A_CF                   (0x1 <<  4) // (CCFG) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is activated.
#define AT91C_EBI_CS5A        (0x1 <<  5) // (CCFG) Chip Select 5 Assignment
#define 	AT91C_EBI_CS5A_SMC                  (0x0 <<  5) // (CCFG) Chip Select 5 is only assigned to the Static Memory Controller and NCS5 behaves as defined by the SMC
#define 	AT91C_EBI_CS5A_CF                   (0x1 <<  5) // (CCFG) Chip Select 5 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is activated.
#define AT91C_EBI_DBPUC       (0x1 <<  8) // (CCFG) Data Bus Pull-up Configuration
#define AT91C_EBI_DDRPUC      (0x1 <<  9) // (CCFG) DDDR DQS Pull-up Configuration
#define AT91C_EBI_OSALLN1     (0x1 << 16) // (CCFG) All EBI Output Strength Configuration bit 1
#define AT91C_EBI_OSALLN0     (0x1 << 17) // (CCFG) All EBI Output Strength Configuration bit 0
#define AT91C_EBI_OSDATA      (0x3 << 18) // (CCFG) EBI DATA Output Strength Configuration
#define AT91C_EBI_OSSCDK      (0x3 << 20) // (CCFG) EBI SCDK Output Strength Configuration
#define AT91C_EBI_OSADDR      (0x3 << 22) // (CCFG) EBI ADDR Output Strength Configuration
#define AT91C_EBI_OSMODE      (0x1 << 30) // (CCFG) EBI Output Strength Mode
#define 	AT91C_EBI_OSMODE_ALLPADS              (0x0 << 30) // (CCFG) EBI pads output strength are controlled by bits EBI_OSALLN0 and EBI_ OSALLN1
#define 	AT91C_EBI_OSMODE_GROUPPADS            (0x1 << 30) // (CCFG) EBI pads output strength are controlled by fields EBI_OSDATA, EBI_OSSDCK, EBI_OSADDR
// -------- CCFG_BRIDGE : (CCFG Offset: 0x24) BRIDGE Configuration -------- 
#define AT91C_CCFG_AES_TDES_SELECT (0x1 << 31) // (CCFG) AES or TDES Selection
#define 	AT91C_CCFG_AES_TDES_SELECT_AES                  (0x0 << 31) // (CCFG) AES Selected.
#define 	AT91C_CCFG_AES_TDES_SELECT_TDES                 (0x1 << 31) // (CCFG) TDES Selected.

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Peripheral DMA Controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PDC {
	AT91_REG	 PDC_RPR; 	// Receive Pointer Register
	AT91_REG	 PDC_RCR; 	// Receive Counter Register
	AT91_REG	 PDC_TPR; 	// Transmit Pointer Register
	AT91_REG	 PDC_TCR; 	// Transmit Counter Register
	AT91_REG	 PDC_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 PDC_RNCR; 	// Receive Next Counter Register
	AT91_REG	 PDC_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 PDC_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 PDC_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 PDC_PTSR; 	// PDC Transfer Status Register
} AT91S_PDC, *AT91PS_PDC;
#else
#define PDC_RPR         (AT91_CAST(AT91_REG *) 	0x00000000) // (PDC_RPR) Receive Pointer Register
#define PDC_RCR         (AT91_CAST(AT91_REG *) 	0x00000004) // (PDC_RCR) Receive Counter Register
#define PDC_TPR         (AT91_CAST(AT91_REG *) 	0x00000008) // (PDC_TPR) Transmit Pointer Register
#define PDC_TCR         (AT91_CAST(AT91_REG *) 	0x0000000C) // (PDC_TCR) Transmit Counter Register
#define PDC_RNPR        (AT91_CAST(AT91_REG *) 	0x00000010) // (PDC_RNPR) Receive Next Pointer Register
#define PDC_RNCR        (AT91_CAST(AT91_REG *) 	0x00000014) // (PDC_RNCR) Receive Next Counter Register
#define PDC_TNPR        (AT91_CAST(AT91_REG *) 	0x00000018) // (PDC_TNPR) Transmit Next Pointer Register
#define PDC_TNCR        (AT91_CAST(AT91_REG *) 	0x0000001C) // (PDC_TNCR) Transmit Next Counter Register
#define PDC_PTCR        (AT91_CAST(AT91_REG *) 	0x00000020) // (PDC_PTCR) PDC Transfer Control Register
#define PDC_PTSR        (AT91_CAST(AT91_REG *) 	0x00000024) // (PDC_PTSR) PDC Transfer Status Register

#endif
// -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register -------- 
#define AT91C_PDC_RXTEN       (0x1 <<  0) // (PDC) Receiver Transfer Enable
#define AT91C_PDC_RXTDIS      (0x1 <<  1) // (PDC) Receiver Transfer Disable
#define AT91C_PDC_TXTEN       (0x1 <<  8) // (PDC) Transmitter Transfer Enable
#define AT91C_PDC_TXTDIS      (0x1 <<  9) // (PDC) Transmitter Transfer Disable
// -------- PDC_PTSR : (PDC Offset: 0x24) PDC Transfer Status Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Debug Unit
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_DBGU {
	AT91_REG	 DBGU_CR; 	// Control Register
	AT91_REG	 DBGU_MR; 	// Mode Register
	AT91_REG	 DBGU_IER; 	// Interrupt Enable Register
	AT91_REG	 DBGU_IDR; 	// Interrupt Disable Register
	AT91_REG	 DBGU_IMR; 	// Interrupt Mask Register
	AT91_REG	 DBGU_CSR; 	// Channel Status Register
	AT91_REG	 DBGU_RHR; 	// Receiver Holding Register
	AT91_REG	 DBGU_THR; 	// Transmitter Holding Register
	AT91_REG	 DBGU_BRGR; 	// Baud Rate Generator Register
	AT91_REG	 Reserved0[7]; 	// 
	AT91_REG	 DBGU_CIDR; 	// Chip ID Register
	AT91_REG	 DBGU_EXID; 	// Chip ID Extension Register
	AT91_REG	 DBGU_FNTR; 	// Force NTRST Register
	AT91_REG	 Reserved1[45]; 	// 
	AT91_REG	 DBGU_RPR; 	// Receive Pointer Register
	AT91_REG	 DBGU_RCR; 	// Receive Counter Register
	AT91_REG	 DBGU_TPR; 	// Transmit Pointer Register
	AT91_REG	 DBGU_TCR; 	// Transmit Counter Register
	AT91_REG	 DBGU_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 DBGU_RNCR; 	// Receive Next Counter Register
	AT91_REG	 DBGU_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 DBGU_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 DBGU_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 DBGU_PTSR; 	// PDC Transfer Status Register
} AT91S_DBGU, *AT91PS_DBGU;
#else
#define DBGU_CR         (AT91_CAST(AT91_REG *) 	0x00000000) // (DBGU_CR) Control Register
#define DBGU_MR         (AT91_CAST(AT91_REG *) 	0x00000004) // (DBGU_MR) Mode Register
#define DBGU_IER        (AT91_CAST(AT91_REG *) 	0x00000008) // (DBGU_IER) Interrupt Enable Register
#define DBGU_IDR        (AT91_CAST(AT91_REG *) 	0x0000000C) // (DBGU_IDR) Interrupt Disable Register
#define DBGU_IMR        (AT91_CAST(AT91_REG *) 	0x00000010) // (DBGU_IMR) Interrupt Mask Register
#define DBGU_CSR        (AT91_CAST(AT91_REG *) 	0x00000014) // (DBGU_CSR) Channel Status Register
#define DBGU_RHR        (AT91_CAST(AT91_REG *) 	0x00000018) // (DBGU_RHR) Receiver Holding Register
#define DBGU_THR        (AT91_CAST(AT91_REG *) 	0x0000001C) // (DBGU_THR) Transmitter Holding Register
#define DBGU_BRGR       (AT91_CAST(AT91_REG *) 	0x00000020) // (DBGU_BRGR) Baud Rate Generator Register
#define DBGU_CIDR       (AT91_CAST(AT91_REG *) 	0x00000040) // (DBGU_CIDR) Chip ID Register
#define DBGU_EXID       (AT91_CAST(AT91_REG *) 	0x00000044) // (DBGU_EXID) Chip ID Extension Register
#define DBGU_FNTR       (AT91_CAST(AT91_REG *) 	0x00000048) // (DBGU_FNTR) Force NTRST Register

#endif
// -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register -------- 
#define AT91C_US_RSTRX        (0x1 <<  2) // (DBGU) Reset Receiver
#define AT91C_US_RSTTX        (0x1 <<  3) // (DBGU) Reset Transmitter
#define AT91C_US_RXEN         (0x1 <<  4) // (DBGU) Receiver Enable
#define AT91C_US_RXDIS        (0x1 <<  5) // (DBGU) Receiver Disable
#define AT91C_US_TXEN         (0x1 <<  6) // (DBGU) Transmitter Enable
#define AT91C_US_TXDIS        (0x1 <<  7) // (DBGU) Transmitter Disable
#define AT91C_US_RSTSTA       (0x1 <<  8) // (DBGU) Reset Status Bits
// -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register -------- 
#define AT91C_US_PAR          (0x7 <<  9) // (DBGU) Parity type
#define 	AT91C_US_PAR_EVEN                 (0x0 <<  9) // (DBGU) Even Parity
#define 	AT91C_US_PAR_ODD                  (0x1 <<  9) // (DBGU) Odd Parity
#define 	AT91C_US_PAR_SPACE                (0x2 <<  9) // (DBGU) Parity forced to 0 (Space)
#define 	AT91C_US_PAR_MARK                 (0x3 <<  9) // (DBGU) Parity forced to 1 (Mark)
#define 	AT91C_US_PAR_NONE                 (0x4 <<  9) // (DBGU) No Parity
#define 	AT91C_US_PAR_MULTI_DROP           (0x6 <<  9) // (DBGU) Multi-drop mode
#define AT91C_US_CHMODE       (0x3 << 14) // (DBGU) Channel Mode
#define 	AT91C_US_CHMODE_NORMAL               (0x0 << 14) // (DBGU) Normal Mode: The USART channel operates as an RX/TX USART.
#define 	AT91C_US_CHMODE_AUTO                 (0x1 << 14) // (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin.
#define 	AT91C_US_CHMODE_LOCAL                (0x2 << 14) // (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
#define 	AT91C_US_CHMODE_REMOTE               (0x3 << 14) // (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin.
// -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
#define AT91C_US_RXRDY        (0x1 <<  0) // (DBGU) RXRDY Interrupt
#define AT91C_US_TXRDY        (0x1 <<  1) // (DBGU) TXRDY Interrupt
#define AT91C_US_ENDRX        (0x1 <<  3) // (DBGU) End of Receive Transfer Interrupt
#define AT91C_US_ENDTX        (0x1 <<  4) // (DBGU) End of Transmit Interrupt
#define AT91C_US_OVRE         (0x1 <<  5) // (DBGU) Overrun Interrupt
#define AT91C_US_FRAME        (0x1 <<  6) // (DBGU) Framing Error Interrupt
#define AT91C_US_PARE         (0x1 <<  7) // (DBGU) Parity Error Interrupt
#define AT91C_US_TXEMPTY      (0x1 <<  9) // (DBGU) TXEMPTY Interrupt
#define AT91C_US_TXBUFE       (0x1 << 11) // (DBGU) TXBUFE Interrupt
#define AT91C_US_RXBUFF       (0x1 << 12) // (DBGU) RXBUFF Interrupt
#define AT91C_US_COMM_TX      (0x1 << 30) // (DBGU) COMM_TX Interrupt
#define AT91C_US_COMM_RX      (0x1 << 31) // (DBGU) COMM_RX Interrupt
// -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register -------- 
// -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register -------- 
#define AT91C_US_FORCE_NTRST  (0x1 <<  0) // (DBGU) Force NTRST in JTAG

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Advanced Interrupt Controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_AIC {
	AT91_REG	 AIC_SMR[32]; 	// Source Mode Register
	AT91_REG	 AIC_SVR[32]; 	// Source Vector Register
	AT91_REG	 AIC_IVR; 	// IRQ Vector Register
	AT91_REG	 AIC_FVR; 	// FIQ Vector Register
	AT91_REG	 AIC_ISR; 	// Interrupt Status Register
	AT91_REG	 AIC_IPR; 	// Interrupt Pending Register
	AT91_REG	 AIC_IMR; 	// Interrupt Mask Register
	AT91_REG	 AIC_CISR; 	// Core Interrupt Status Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 AIC_IECR; 	// Interrupt Enable Command Register
	AT91_REG	 AIC_IDCR; 	// Interrupt Disable Command Register
	AT91_REG	 AIC_ICCR; 	// Interrupt Clear Command Register
	AT91_REG	 AIC_ISCR; 	// Interrupt Set Command Register
	AT91_REG	 AIC_EOICR; 	// End of Interrupt Command Register
	AT91_REG	 AIC_SPU; 	// Spurious Vector Register
	AT91_REG	 AIC_DCR; 	// Debug Control Register (Protect)
	AT91_REG	 Reserved1[1]; 	// 
	AT91_REG	 AIC_FFER; 	// Fast Forcing Enable Register
	AT91_REG	 AIC_FFDR; 	// Fast Forcing Disable Register
	AT91_REG	 AIC_FFSR; 	// Fast Forcing Status Register
} AT91S_AIC, *AT91PS_AIC;
#else
#define AIC_SMR         (AT91_CAST(AT91_REG *) 	0x00000000) // (AIC_SMR) Source Mode Register
#define AIC_SVR         (AT91_CAST(AT91_REG *) 	0x00000080) // (AIC_SVR) Source Vector Register
#define AIC_IVR         (AT91_CAST(AT91_REG *) 	0x00000100) // (AIC_IVR) IRQ Vector Register
#define AIC_FVR         (AT91_CAST(AT91_REG *) 	0x00000104) // (AIC_FVR) FIQ Vector Register
#define AIC_ISR         (AT91_CAST(AT91_REG *) 	0x00000108) // (AIC_ISR) Interrupt Status Register
#define AIC_IPR         (AT91_CAST(AT91_REG *) 	0x0000010C) // (AIC_IPR) Interrupt Pending Register
#define AIC_IMR         (AT91_CAST(AT91_REG *) 	0x00000110) // (AIC_IMR) Interrupt Mask Register
#define AIC_CISR        (AT91_CAST(AT91_REG *) 	0x00000114) // (AIC_CISR) Core Interrupt Status Register
#define AIC_IECR        (AT91_CAST(AT91_REG *) 	0x00000120) // (AIC_IECR) Interrupt Enable Command Register
#define AIC_IDCR        (AT91_CAST(AT91_REG *) 	0x00000124) // (AIC_IDCR) Interrupt Disable Command Register
#define AIC_ICCR        (AT91_CAST(AT91_REG *) 	0x00000128) // (AIC_ICCR) Interrupt Clear Command Register
#define AIC_ISCR        (AT91_CAST(AT91_REG *) 	0x0000012C) // (AIC_ISCR) Interrupt Set Command Register
#define AIC_EOICR       (AT91_CAST(AT91_REG *) 	0x00000130) // (AIC_EOICR) End of Interrupt Command Register
#define AIC_SPU         (AT91_CAST(AT91_REG *) 	0x00000134) // (AIC_SPU) Spurious Vector Register
#define AIC_DCR         (AT91_CAST(AT91_REG *) 	0x00000138) // (AIC_DCR) Debug Control Register (Protect)
#define AIC_FFER        (AT91_CAST(AT91_REG *) 	0x00000140) // (AIC_FFER) Fast Forcing Enable Register
#define AIC_FFDR        (AT91_CAST(AT91_REG *) 	0x00000144) // (AIC_FFDR) Fast Forcing Disable Register
#define AIC_FFSR        (AT91_CAST(AT91_REG *) 	0x00000148) // (AIC_FFSR) Fast Forcing Status Register

#endif
// -------- AIC_SMR : (AIC Offset: 0x0) Control Register -------- 
#define AT91C_AIC_PRIOR       (0x7 <<  0) // (AIC) Priority Level
#define 	AT91C_AIC_PRIOR_LOWEST               (0x0) // (AIC) Lowest priority level
#define 	AT91C_AIC_PRIOR_HIGHEST              (0x7) // (AIC) Highest priority level
#define AT91C_AIC_SRCTYPE     (0x3 <<  5) // (AIC) Interrupt Source Type
#define 	AT91C_AIC_SRCTYPE_INT_LEVEL_SENSITIVE  (0x0 <<  5) // (AIC) Internal Sources Code Label Level Sensitive
#define 	AT91C_AIC_SRCTYPE_INT_EDGE_TRIGGERED   (0x1 <<  5) // (AIC) Internal Sources Code Label Edge triggered
#define 	AT91C_AIC_SRCTYPE_EXT_HIGH_LEVEL       (0x2 <<  5) // (AIC) External Sources Code Label High-level Sensitive
#define 	AT91C_AIC_SRCTYPE_EXT_POSITIVE_EDGE    (0x3 <<  5) // (AIC) External Sources Code Label Positive Edge triggered
// -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
#define AT91C_AIC_NFIQ        (0x1 <<  0) // (AIC) NFIQ Status
#define AT91C_AIC_NIRQ        (0x1 <<  1) // (AIC) NIRQ Status
// -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register (Protect) -------- 
#define AT91C_AIC_DCR_PROT    (0x1 <<  0) // (AIC) Protection Mode
#define AT91C_AIC_DCR_GMSK    (0x1 <<  1) // (AIC) General Mask

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PIO {
	AT91_REG	 PIO_PER; 	// PIO Enable Register
	AT91_REG	 PIO_PDR; 	// PIO Disable Register
	AT91_REG	 PIO_PSR; 	// PIO Status Register
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 PIO_OER; 	// Output Enable Register
	AT91_REG	 PIO_ODR; 	// Output Disable Registerr
	AT91_REG	 PIO_OSR; 	// Output Status Register
	AT91_REG	 Reserved1[1]; 	// 
	AT91_REG	 PIO_IFER; 	// Input Filter Enable Register
	AT91_REG	 PIO_IFDR; 	// Input Filter Disable Register
	AT91_REG	 PIO_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved2[1]; 	// 
	AT91_REG	 PIO_SODR; 	// Set Output Data Register
	AT91_REG	 PIO_CODR; 	// Clear Output Data Register
	AT91_REG	 PIO_ODSR; 	// Output Data Status Register
	AT91_REG	 PIO_PDSR; 	// Pin Data Status Register
	AT91_REG	 PIO_IER; 	// Interrupt Enable Register
	AT91_REG	 PIO_IDR; 	// Interrupt Disable Register
	AT91_REG	 PIO_IMR; 	// Interrupt Mask Register
	AT91_REG	 PIO_ISR; 	// Interrupt Status Register
	AT91_REG	 PIO_MDER; 	// Multi-driver Enable Register
	AT91_REG	 PIO_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 PIO_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved3[1]; 	// 
	AT91_REG	 PIO_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 PIO_PPUER; 	// Pull-up Enable Register
	AT91_REG	 PIO_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved4[1]; 	// 
	AT91_REG	 PIO_ASR; 	// Select A Register
	AT91_REG	 PIO_BSR; 	// Select B Register
	AT91_REG	 PIO_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved5[9]; 	// 
	AT91_REG	 PIO_OWER; 	// Output Write Enable Register
	AT91_REG	 PIO_OWDR; 	// Output Write Disable Register
	AT91_REG	 PIO_OWSR; 	// Output Write Status Register
} AT91S_PIO, *AT91PS_PIO;
#else
#define PIO_PER         (AT91_CAST(AT91_REG *) 	0x00000000) // (PIO_PER) PIO Enable Register
#define PIO_PDR         (AT91_CAST(AT91_REG *) 	0x00000004) // (PIO_PDR) PIO Disable Register
#define PIO_PSR         (AT91_CAST(AT91_REG *) 	0x00000008) // (PIO_PSR) PIO Status Register
#define PIO_OER         (AT91_CAST(AT91_REG *) 	0x00000010) // (PIO_OER) Output Enable Register
#define PIO_ODR         (AT91_CAST(AT91_REG *) 	0x00000014) // (PIO_ODR) Output Disable Registerr
#define PIO_OSR         (AT91_CAST(AT91_REG *) 	0x00000018) // (PIO_OSR) Output Status Register
#define PIO_IFER        (AT91_CAST(AT91_REG *) 	0x00000020) // (PIO_IFER) Input Filter Enable Register
#define PIO_IFDR        (AT91_CAST(AT91_REG *) 	0x00000024) // (PIO_IFDR) Input Filter Disable Register
#define PIO_IFSR        (AT91_CAST(AT91_REG *) 	0x00000028) // (PIO_IFSR) Input Filter Status Register
#define PIO_SODR        (AT91_CAST(AT91_REG *) 	0x00000030) // (PIO_SODR) Set Output Data Register
#define PIO_CODR        (AT91_CAST(AT91_REG *) 	0x00000034) // (PIO_CODR) Clear Output Data Register
#define PIO_ODSR        (AT91_CAST(AT91_REG *) 	0x00000038) // (PIO_ODSR) Output Data Status Register
#define PIO_PDSR        (AT91_CAST(AT91_REG *) 	0x0000003C) // (PIO_PDSR) Pin Data Status Register
#define PIO_IER         (AT91_CAST(AT91_REG *) 	0x00000040) // (PIO_IER) Interrupt Enable Register
#define PIO_IDR         (AT91_CAST(AT91_REG *) 	0x00000044) // (PIO_IDR) Interrupt Disable Register
#define PIO_IMR         (AT91_CAST(AT91_REG *) 	0x00000048) // (PIO_IMR) Interrupt Mask Register
#define PIO_ISR         (AT91_CAST(AT91_REG *) 	0x0000004C) // (PIO_ISR) Interrupt Status Register
#define PIO_MDER        (AT91_CAST(AT91_REG *) 	0x00000050) // (PIO_MDER) Multi-driver Enable Register
#define PIO_MDDR        (AT91_CAST(AT91_REG *) 	0x00000054) // (PIO_MDDR) Multi-driver Disable Register
#define PIO_MDSR        (AT91_CAST(AT91_REG *) 	0x00000058) // (PIO_MDSR) Multi-driver Status Register
#define PIO_PPUDR       (AT91_CAST(AT91_REG *) 	0x00000060) // (PIO_PPUDR) Pull-up Disable Register
#define PIO_PPUER       (AT91_CAST(AT91_REG *) 	0x00000064) // (PIO_PPUER) Pull-up Enable Register
#define PIO_PPUSR       (AT91_CAST(AT91_REG *) 	0x00000068) // (PIO_PPUSR) Pull-up Status Register
#define PIO_ASR         (AT91_CAST(AT91_REG *) 	0x00000070) // (PIO_ASR) Select A Register
#define PIO_BSR         (AT91_CAST(AT91_REG *) 	0x00000074) // (PIO_BSR) Select B Register
#define PIO_ABSR        (AT91_CAST(AT91_REG *) 	0x00000078) // (PIO_ABSR) AB Select Status Register
#define PIO_OWER        (AT91_CAST(AT91_REG *) 	0x000000A0) // (PIO_OWER) Output Write Enable Register
#define PIO_OWDR        (AT91_CAST(AT91_REG *) 	0x000000A4) // (PIO_OWDR) Output Write Disable Register
#define PIO_OWSR        (AT91_CAST(AT91_REG *) 	0x000000A8) // (PIO_OWSR) Output Write Status Register

#endif

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Clock Generator Controler
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_CKGR {
	AT91_REG	 CKGR_UCKR; 	// UTMI Clock Configuration Register
	AT91_REG	 CKGR_MOR; 	// Main Oscillator Register
	AT91_REG	 CKGR_MCFR; 	// Main Clock  Frequency Register
	AT91_REG	 CKGR_PLLAR; 	// PLL A Register
	AT91_REG	 CKGR_PLLBR; 	// PLL B Register
} AT91S_CKGR, *AT91PS_CKGR;
#else
#define CKGR_UCKR       (AT91_CAST(AT91_REG *) 	0x00000000) // (CKGR_UCKR) UTMI Clock Configuration Register
#define CKGR_MOR        (AT91_CAST(AT91_REG *) 	0x00000004) // (CKGR_MOR) Main Oscillator Register
#define CKGR_MCFR       (AT91_CAST(AT91_REG *) 	0x00000008) // (CKGR_MCFR) Main Clock  Frequency Register
#define CKGR_PLLAR      (AT91_CAST(AT91_REG *) 	0x0000000C) // (CKGR_PLLAR) PLL A Register
#define CKGR_PLLBR      (AT91_CAST(AT91_REG *) 	0x00000010) // (CKGR_PLLBR) PLL B Register

#endif
// -------- CKGR_UCKR : (CKGR Offset: 0x0) UTMI Clock Configuration Register -------- 
#define AT91C_CKGR_UPLLEN     (0x1 << 16) // (CKGR) UTMI PLL Enable
#define 	AT91C_CKGR_UPLLEN_DISABLED             (0x0 << 16) // (CKGR) The UTMI PLL is disabled
#define 	AT91C_CKGR_UPLLEN_ENABLED              (0x1 << 16) // (CKGR) The UTMI PLL is enabled
#define AT91C_CKGR_PLLCOUNT   (0xF << 20) // (CKGR) UTMI Oscillator Start-up Time
#define AT91C_CKGR_BIASEN     (0x1 << 24) // (CKGR) UTMI BIAS Enable
#define 	AT91C_CKGR_BIASEN_DISABLED             (0x0 << 24) // (CKGR) The UTMI BIAS is disabled
#define 	AT91C_CKGR_BIASEN_ENABLED              (0x1 << 24) // (CKGR) The UTMI BIAS is enabled
#define AT91C_CKGR_BIASCOUNT  (0xF << 28) // (CKGR) UTMI BIAS Start-up Time
// -------- CKGR_MOR : (CKGR Offset: 0x4) Main Oscillator Register -------- 
#define AT91C_CKGR_MOSCEN     (0x1 <<  0) // (CKGR) Main Oscillator Enable
#define AT91C_CKGR_OSCBYPASS  (0x1 <<  1) // (CKGR) Main Oscillator Bypass
#define AT91C_CKGR_OSCOUNT    (0xFF <<  8) // (CKGR) Main Oscillator Start-up Time
// -------- CKGR_MCFR : (CKGR Offset: 0x8) Main Clock Frequency Register -------- 
#define AT91C_CKGR_MAINF      (0xFFFF <<  0) // (CKGR) Main Clock Frequency
#define AT91C_CKGR_MAINRDY    (0x1 << 16) // (CKGR) Main Clock Ready
// -------- CKGR_PLLAR : (CKGR Offset: 0xc) PLL A Register -------- 
#define AT91C_CKGR_DIVA       (0xFF <<  0) // (CKGR) Divider A Selected
#define 	AT91C_CKGR_DIVA_0                    (0x0) // (CKGR) Divider A output is 0
#define 	AT91C_CKGR_DIVA_BYPASS               (0x1) // (CKGR) Divider A is bypassed
#define AT91C_CKGR_PLLACOUNT  (0x3F <<  8) // (CKGR) PLL A Counter
#define AT91C_CKGR_OUTA       (0x3 << 14) // (CKGR) PLL A Output Frequency Range
#define 	AT91C_CKGR_OUTA_0                    (0x0 << 14) // (CKGR) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_1                    (0x1 << 14) // (CKGR) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_2                    (0x2 << 14) // (CKGR) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_3                    (0x3 << 14) // (CKGR) Please refer to the PLLA datasheet
#define AT91C_CKGR_MULA       (0x7FF << 16) // (CKGR) PLL A Multiplier
#define AT91C_CKGR_SRCA       (0x1 << 29) // (CKGR) 
// -------- CKGR_PLLBR : (CKGR Offset: 0x10) PLL B Register -------- 
#define AT91C_CKGR_DIVB       (0xFF <<  0) // (CKGR) Divider B Selected
#define 	AT91C_CKGR_DIVB_0                    (0x0) // (CKGR) Divider B output is 0
#define 	AT91C_CKGR_DIVB_BYPASS               (0x1) // (CKGR) Divider B is bypassed
#define AT91C_CKGR_PLLBCOUNT  (0x3F <<  8) // (CKGR) PLL B Counter
#define AT91C_CKGR_OUTB       (0x3 << 14) // (CKGR) PLL B Output Frequency Range
#define 	AT91C_CKGR_OUTB_0                    (0x0 << 14) // (CKGR) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_1                    (0x1 << 14) // (CKGR) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_2                    (0x2 << 14) // (CKGR) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_3                    (0x3 << 14) // (CKGR) Please refer to the PLLB datasheet
#define AT91C_CKGR_MULB       (0x7FF << 16) // (CKGR) PLL B Multiplier
#define AT91C_CKGR_USBDIV     (0x3 << 28) // (CKGR) Divider for USB Clocks
#define 	AT91C_CKGR_USBDIV_0                    (0x0 << 28) // (CKGR) Divider output is PLL clock output
#define 	AT91C_CKGR_USBDIV_1                    (0x1 << 28) // (CKGR) Divider output is PLL clock output divided by 2
#define 	AT91C_CKGR_USBDIV_2                    (0x2 << 28) // (CKGR) Divider output is PLL clock output divided by 4

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Power Management Controler
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PMC {
	AT91_REG	 PMC_SCER; 	// System Clock Enable Register
	AT91_REG	 PMC_SCDR; 	// System Clock Disable Register
	AT91_REG	 PMC_SCSR; 	// System Clock Status Register
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 PMC_PCER; 	// Peripheral Clock Enable Register
	AT91_REG	 PMC_PCDR; 	// Peripheral Clock Disable Register
	AT91_REG	 PMC_PCSR; 	// Peripheral Clock Status Register
	AT91_REG	 PMC_UCKR; 	// UTMI Clock Configuration Register
	AT91_REG	 PMC_MOR; 	// Main Oscillator Register
	AT91_REG	 PMC_MCFR; 	// Main Clock  Frequency Register
	AT91_REG	 PMC_PLLAR; 	// PLL A Register
	AT91_REG	 PMC_PLLBR; 	// PLL B Register
	AT91_REG	 PMC_MCKR; 	// Master Clock Register
	AT91_REG	 Reserved1[3]; 	// 
	AT91_REG	 PMC_PCKR[8]; 	// Programmable Clock Register
	AT91_REG	 PMC_IER; 	// Interrupt Enable Register
	AT91_REG	 PMC_IDR; 	// Interrupt Disable Register
	AT91_REG	 PMC_SR; 	// Status Register
	AT91_REG	 PMC_IMR; 	// Interrupt Mask Register
} AT91S_PMC, *AT91PS_PMC;
#else
#define PMC_SCER        (AT91_CAST(AT91_REG *) 	0x00000000) // (PMC_SCER) System Clock Enable Register
#define PMC_SCDR        (AT91_CAST(AT91_REG *) 	0x00000004) // (PMC_SCDR) System Clock Disable Register
#define PMC_SCSR        (AT91_CAST(AT91_REG *) 	0x00000008) // (PMC_SCSR) System Clock Status Register
#define PMC_PCER        (AT91_CAST(AT91_REG *) 	0x00000010) // (PMC_PCER) Peripheral Clock Enable Register
#define PMC_PCDR        (AT91_CAST(AT91_REG *) 	0x00000014) // (PMC_PCDR) Peripheral Clock Disable Register
#define PMC_PCSR        (AT91_CAST(AT91_REG *) 	0x00000018) // (PMC_PCSR) Peripheral Clock Status Register
#define PMC_MCKR        (AT91_CAST(AT91_REG *) 	0x00000030) // (PMC_MCKR) Master Clock Register
#define PMC_PCKR        (AT91_CAST(AT91_REG *) 	0x00000040) // (PMC_PCKR) Programmable Clock Register
#define PMC_IER         (AT91_CAST(AT91_REG *) 	0x00000060) // (PMC_IER) Interrupt Enable Register
#define PMC_IDR         (AT91_CAST(AT91_REG *) 	0x00000064) // (PMC_IDR) Interrupt Disable Register
#define PMC_SR          (AT91_CAST(AT91_REG *) 	0x00000068) // (PMC_SR) Status Register
#define PMC_IMR         (AT91_CAST(AT91_REG *) 	0x0000006C) // (PMC_IMR) Interrupt Mask Register

#endif
// -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
#define AT91C_PMC_PCK         (0x1 <<  0) // (PMC) Processor Clock
#define AT91C_PMC_DDR         (0x1 <<  2) // (PMC) DDR controller Clock
#define AT91C_PMC_OTG         (0x1 <<  5) // (PMC) USB OTG Clock
#define AT91C_PMC_UHP         (0x1 <<  6) // (PMC) USB Host Port Clock
#define AT91C_PMC_UDP         (0x1 <<  7) // (PMC) USB Device Port Clock
#define AT91C_PMC_PCK0        (0x1 <<  8) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK1        (0x1 <<  9) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK2        (0x1 << 10) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK3        (0x1 << 11) // (PMC) Programmable Clock Output
// -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
// -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
// -------- CKGR_UCKR : (PMC Offset: 0x1c) UTMI Clock Configuration Register -------- 
// -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
// -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register -------- 
// -------- CKGR_PLLAR : (PMC Offset: 0x28) PLL A Register -------- 
// -------- CKGR_PLLBR : (PMC Offset: 0x2c) PLL B Register -------- 
// -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
#define AT91C_PMC_CSS         (0x3 <<  0) // (PMC) Programmable Clock Selection
#define 	AT91C_PMC_CSS_SLOW_CLK             (0x0) // (PMC) Slow Clock is selected
#define 	AT91C_PMC_CSS_MAIN_CLK             (0x1) // (PMC) Main Clock is selected
#define 	AT91C_PMC_CSS_PLLA_CLK             (0x2) // (PMC) Clock from PLL A is selected
#define 	AT91C_PMC_CSS_PLLB_CLK             (0x3) // (PMC) Clock from PLL B is selected
#define AT91C_PMC_PRES        (0x7 <<  2) // (PMC) Programmable Clock Prescaler
#define 	AT91C_PMC_PRES_CLK                  (0x0 <<  2) // (PMC) Selected clock
#define 	AT91C_PMC_PRES_CLK_2                (0x1 <<  2) // (PMC) Selected clock divided by 2
#define 	AT91C_PMC_PRES_CLK_4                (0x2 <<  2) // (PMC) Selected clock divided by 4
#define 	AT91C_PMC_PRES_CLK_8                (0x3 <<  2) // (PMC) Selected clock divided by 8
#define 	AT91C_PMC_PRES_CLK_16               (0x4 <<  2) // (PMC) Selected clock divided by 16
#define 	AT91C_PMC_PRES_CLK_32               (0x5 <<  2) // (PMC) Selected clock divided by 32
#define 	AT91C_PMC_PRES_CLK_64               (0x6 <<  2) // (PMC) Selected clock divided by 64
#define AT91C_PMC_MDIV        (0x3 <<  8) // (PMC) Master Clock Division
#define 	AT91C_PMC_MDIV_1                    (0x0 <<  8) // (PMC) The master clock and the processor clock are the same
#define 	AT91C_PMC_MDIV_2                    (0x1 <<  8) // (PMC) The processor clock is twice as fast as the master clock
#define 	AT91C_PMC_MDIV_4                    (0x2 <<  8) // (PMC) The processor clock is four times faster than the master clock
// -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
// -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
#define AT91C_PMC_MOSCS       (0x1 <<  0) // (PMC) MOSC Status/Enable/Disable/Mask
#define AT91C_PMC_LOCKA       (0x1 <<  1) // (PMC) PLL A Status/Enable/Disable/Mask
#define AT91C_PMC_LOCKB       (0x1 <<  2) // (PMC) PLL B Status/Enable/Disable/Mask
#define AT91C_PMC_MCKRDY      (0x1 <<  3) // (PMC) Master Clock Status/Enable/Disable/Mask
#define AT91C_PMC_LOCKU       (0x1 <<  6) // (PMC) PLL UTMI Status/Enable/Disable/Mask
#define AT91C_PMC_PCK0RDY     (0x1 <<  8) // (PMC) PCK0_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK1RDY     (0x1 <<  9) // (PMC) PCK1_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK2RDY     (0x1 << 10) // (PMC) PCK2_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK3RDY     (0x1 << 11) // (PMC) PCK3_RDY Status/Enable/Disable/Mask
// -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
// -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
// -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Reset Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_RSTC {
	AT91_REG	 RSTC_RCR; 	// Reset Control Register
	AT91_REG	 RSTC_RSR; 	// Reset Status Register
	AT91_REG	 RSTC_RMR; 	// Reset Mode Register
	AT91_REG	 Reserved0[60]; 	// 
	AT91_REG	 RSTC_VER; 	// Version Register
} AT91S_RSTC, *AT91PS_RSTC;
#else
#define RSTC_RCR        (AT91_CAST(AT91_REG *) 	0x00000000) // (RSTC_RCR) Reset Control Register
#define RSTC_RSR        (AT91_CAST(AT91_REG *) 	0x00000004) // (RSTC_RSR) Reset Status Register
#define RSTC_RMR        (AT91_CAST(AT91_REG *) 	0x00000008) // (RSTC_RMR) Reset Mode Register
#define RSTC_VER        (AT91_CAST(AT91_REG *) 	0x000000FC) // (RSTC_VER) Version Register

#endif
// -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register -------- 
#define AT91C_RSTC_PROCRST    (0x1 <<  0) // (RSTC) Processor Reset
#define AT91C_RSTC_ICERST     (0x1 <<  1) // (RSTC) ICE Interface Reset
#define AT91C_RSTC_PERRST     (0x1 <<  2) // (RSTC) Peripheral Reset
#define AT91C_RSTC_EXTRST     (0x1 <<  3) // (RSTC) External Reset
#define AT91C_RSTC_KEY        (0xFF << 24) // (RSTC) Password
// -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
#define AT91C_RSTC_URSTS      (0x1 <<  0) // (RSTC) User Reset Status
#define AT91C_RSTC_RSTTYP     (0x7 <<  8) // (RSTC) Reset Type
#define 	AT91C_RSTC_RSTTYP_GENERAL              (0x0 <<  8) // (RSTC) General reset. Both VDDCORE and VDDBU rising.
#define 	AT91C_RSTC_RSTTYP_WAKEUP               (0x1 <<  8) // (RSTC) WakeUp Reset. VDDCORE rising.
#define 	AT91C_RSTC_RSTTYP_WATCHDOG             (0x2 <<  8) // (RSTC) Watchdog Reset. Watchdog overflow occured.
#define 	AT91C_RSTC_RSTTYP_SOFTWARE             (0x3 <<  8) // (RSTC) Software Reset. Processor reset required by the software.
#define 	AT91C_RSTC_RSTTYP_USER                 (0x4 <<  8) // (RSTC) User Reset. NRST pin detected low.
#define AT91C_RSTC_NRSTL      (0x1 << 16) // (RSTC) NRST pin level
#define AT91C_RSTC_SRCMP      (0x1 << 17) // (RSTC) Software Reset Command in Progress.
// -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
#define AT91C_RSTC_URSTEN     (0x1 <<  0) // (RSTC) User Reset Enable
#define AT91C_RSTC_URSTIEN    (0x1 <<  4) // (RSTC) User Reset Interrupt Enable
#define AT91C_RSTC_ERSTL      (0xF <<  8) // (RSTC) User Reset Enable

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Shut Down Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SHDWC {
	AT91_REG	 SHDWC_SHCR; 	// Shut Down Control Register
	AT91_REG	 SHDWC_SHMR; 	// Shut Down Mode Register
	AT91_REG	 SHDWC_SHSR; 	// Shut Down Status Register
} AT91S_SHDWC, *AT91PS_SHDWC;
#else
#define SHDWC_SHCR      (AT91_CAST(AT91_REG *) 	0x00000000) // (SHDWC_SHCR) Shut Down Control Register
#define SHDWC_SHMR      (AT91_CAST(AT91_REG *) 	0x00000004) // (SHDWC_SHMR) Shut Down Mode Register
#define SHDWC_SHSR      (AT91_CAST(AT91_REG *) 	0x00000008) // (SHDWC_SHSR) Shut Down Status Register

#endif
// -------- SHDWC_SHCR : (SHDWC Offset: 0x0) Shut Down Control Register -------- 
#define AT91C_SHDWC_SHDW      (0x1 <<  0) // (SHDWC) Processor Reset
#define AT91C_SHDWC_KEY       (0xFF << 24) // (SHDWC) Shut down KEY Password
// -------- SHDWC_SHMR : (SHDWC Offset: 0x4) Shut Down Mode Register -------- 
#define AT91C_SHDWC_WKMODE0   (0x3 <<  0) // (SHDWC) Wake Up 0 Mode Selection
#define 	AT91C_SHDWC_WKMODE0_NONE                 (0x0) // (SHDWC) None. No detection is performed on the wake up input.
#define 	AT91C_SHDWC_WKMODE0_HIGH                 (0x1) // (SHDWC) High Level.
#define 	AT91C_SHDWC_WKMODE0_LOW                  (0x2) // (SHDWC) Low Level.
#define 	AT91C_SHDWC_WKMODE0_ANYLEVEL             (0x3) // (SHDWC) Any level change.
#define AT91C_SHDWC_CPTWK0    (0xF <<  4) // (SHDWC) Counter On Wake Up 0
#define AT91C_SHDWC_WKMODE1   (0x3 <<  8) // (SHDWC) Wake Up 1 Mode Selection
#define 	AT91C_SHDWC_WKMODE1_NONE                 (0x0 <<  8) // (SHDWC) None. No detection is performed on the wake up input.
#define 	AT91C_SHDWC_WKMODE1_HIGH                 (0x1 <<  8) // (SHDWC) High Level.
#define 	AT91C_SHDWC_WKMODE1_LOW                  (0x2 <<  8) // (SHDWC) Low Level.
#define 	AT91C_SHDWC_WKMODE1_ANYLEVEL             (0x3 <<  8) // (SHDWC) Any level change.
#define AT91C_SHDWC_CPTWK1    (0xF << 12) // (SHDWC) Counter On Wake Up 1
#define AT91C_SHDWC_RTTWKEN   (0x1 << 16) // (SHDWC) Real Time Timer Wake Up Enable
#define AT91C_SHDWC_RTCWKEN   (0x1 << 17) // (SHDWC) Real Time Clock Wake Up Enable
// -------- SHDWC_SHSR : (SHDWC Offset: 0x8) Shut Down Status Register -------- 
#define AT91C_SHDWC_WAKEUP0   (0x1 <<  0) // (SHDWC) Wake Up 0 Status
#define AT91C_SHDWC_WAKEUP1   (0x1 <<  1) // (SHDWC) Wake Up 1 Status
#define AT91C_SHDWC_FWKUP     (0x1 <<  2) // (SHDWC) Force Wake Up Status
#define AT91C_SHDWC_RTTWK     (0x1 << 16) // (SHDWC) Real Time Timer wake Up
#define AT91C_SHDWC_RTCWK     (0x1 << 17) // (SHDWC) Real Time Clock wake Up

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Real Time Timer Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_RTTC {
	AT91_REG	 RTTC_RTMR; 	// Real-time Mode Register
	AT91_REG	 RTTC_RTAR; 	// Real-time Alarm Register
	AT91_REG	 RTTC_RTVR; 	// Real-time Value Register
	AT91_REG	 RTTC_RTSR; 	// Real-time Status Register
} AT91S_RTTC, *AT91PS_RTTC;
#else
#define RTTC_RTMR       (AT91_CAST(AT91_REG *) 	0x00000000) // (RTTC_RTMR) Real-time Mode Register
#define RTTC_RTAR       (AT91_CAST(AT91_REG *) 	0x00000004) // (RTTC_RTAR) Real-time Alarm Register
#define RTTC_RTVR       (AT91_CAST(AT91_REG *) 	0x00000008) // (RTTC_RTVR) Real-time Value Register
#define RTTC_RTSR       (AT91_CAST(AT91_REG *) 	0x0000000C) // (RTTC_RTSR) Real-time Status Register

#endif
// -------- RTTC_RTMR : (RTTC Offset: 0x0) Real-time Mode Register -------- 
#define AT91C_RTTC_RTPRES     (0xFFFF <<  0) // (RTTC) Real-time Timer Prescaler Value
#define AT91C_RTTC_ALMIEN     (0x1 << 16) // (RTTC) Alarm Interrupt Enable
#define AT91C_RTTC_RTTINCIEN  (0x1 << 17) // (RTTC) Real Time Timer Increment Interrupt Enable
#define AT91C_RTTC_RTTRST     (0x1 << 18) // (RTTC) Real Time Timer Restart
// -------- RTTC_RTAR : (RTTC Offset: 0x4) Real-time Alarm Register -------- 
#define AT91C_RTTC_ALMV       (0x0 <<  0) // (RTTC) Alarm Value
// -------- RTTC_RTVR : (RTTC Offset: 0x8) Current Real-time Value Register -------- 
#define AT91C_RTTC_CRTV       (0x0 <<  0) // (RTTC) Current Real-time Value
// -------- RTTC_RTSR : (RTTC Offset: 0xc) Real-time Status Register -------- 
#define AT91C_RTTC_ALMS       (0x1 <<  0) // (RTTC) Real-time Alarm Status
#define AT91C_RTTC_RTTINC     (0x1 <<  1) // (RTTC) Real-time Timer Increment

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PITC {
	AT91_REG	 PITC_PIMR; 	// Period Interval Mode Register
	AT91_REG	 PITC_PISR; 	// Period Interval Status Register
	AT91_REG	 PITC_PIVR; 	// Period Interval Value Register
	AT91_REG	 PITC_PIIR; 	// Period Interval Image Register
} AT91S_PITC, *AT91PS_PITC;
#else
#define PITC_PIMR       (AT91_CAST(AT91_REG *) 	0x00000000) // (PITC_PIMR) Period Interval Mode Register
#define PITC_PISR       (AT91_CAST(AT91_REG *) 	0x00000004) // (PITC_PISR) Period Interval Status Register
#define PITC_PIVR       (AT91_CAST(AT91_REG *) 	0x00000008) // (PITC_PIVR) Period Interval Value Register
#define PITC_PIIR       (AT91_CAST(AT91_REG *) 	0x0000000C) // (PITC_PIIR) Period Interval Image Register

#endif
// -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register -------- 
#define AT91C_PITC_PIV        (0xFFFFF <<  0) // (PITC) Periodic Interval Value
#define AT91C_PITC_PITEN      (0x1 << 24) // (PITC) Periodic Interval Timer Enabled
#define AT91C_PITC_PITIEN     (0x1 << 25) // (PITC) Periodic Interval Timer Interrupt Enable
// -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register -------- 
#define AT91C_PITC_PITS       (0x1 <<  0) // (PITC) Periodic Interval Timer Status
// -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register -------- 
#define AT91C_PITC_CPIV       (0xFFFFF <<  0) // (PITC) Current Periodic Interval Value
#define AT91C_PITC_PICNT      (0xFFF << 20) // (PITC) Periodic Interval Counter
// -------- PITC_PIIR : (PITC Offset: 0xc) Periodic Interval Image Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_WDTC {
	AT91_REG	 WDTC_WDCR; 	// Watchdog Control Register
	AT91_REG	 WDTC_WDMR; 	// Watchdog Mode Register
	AT91_REG	 WDTC_WDSR; 	// Watchdog Status Register
} AT91S_WDTC, *AT91PS_WDTC;
#else
#define WDTC_WDCR       (AT91_CAST(AT91_REG *) 	0x00000000) // (WDTC_WDCR) Watchdog Control Register
#define WDTC_WDMR       (AT91_CAST(AT91_REG *) 	0x00000004) // (WDTC_WDMR) Watchdog Mode Register
#define WDTC_WDSR       (AT91_CAST(AT91_REG *) 	0x00000008) // (WDTC_WDSR) Watchdog Status Register

#endif
// -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register -------- 
#define AT91C_WDTC_WDRSTT     (0x1 <<  0) // (WDTC) Watchdog Restart
#define AT91C_WDTC_KEY        (0xFF << 24) // (WDTC) Watchdog KEY Password
// -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register -------- 
#define AT91C_WDTC_WDV        (0xFFF <<  0) // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDFIEN     (0x1 << 12) // (WDTC) Watchdog Fault Interrupt Enable
#define AT91C_WDTC_WDRSTEN    (0x1 << 13) // (WDTC) Watchdog Reset Enable
#define AT91C_WDTC_WDRPROC    (0x1 << 14) // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDDIS      (0x1 << 15) // (WDTC) Watchdog Disable
#define AT91C_WDTC_WDD        (0xFFF << 16) // (WDTC) Watchdog Delta Value
#define AT91C_WDTC_WDDBGHLT   (0x1 << 28) // (WDTC) Watchdog Debug Halt
#define AT91C_WDTC_WDIDLEHLT  (0x1 << 29) // (WDTC) Watchdog Idle Halt
// -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register -------- 
#define AT91C_WDTC_WDUNF      (0x1 <<  0) // (WDTC) Watchdog Underflow
#define AT91C_WDTC_WDERR      (0x1 <<  1) // (WDTC) Watchdog Error

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR USB Device Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UDP {
	AT91_REG	 UDP_NUM; 	// Frame Number Register
	AT91_REG	 UDP_GLBSTATE; 	// Global State Register
	AT91_REG	 UDP_FADDR; 	// Function Address Register
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 UDP_IER; 	// Interrupt Enable Register
	AT91_REG	 UDP_IDR; 	// Interrupt Disable Register
	AT91_REG	 UDP_IMR; 	// Interrupt Mask Register
	AT91_REG	 UDP_ISR; 	// Interrupt Status Register
	AT91_REG	 UDP_ICR; 	// Interrupt Clear Register
	AT91_REG	 Reserved1[1]; 	// 
	AT91_REG	 UDP_RSTEP; 	// Reset Endpoint Register
	AT91_REG	 Reserved2[1]; 	// 
	AT91_REG	 UDP_CSR[6]; 	// Endpoint Control and Status Register
	AT91_REG	 Reserved3[2]; 	// 
	AT91_REG	 UDP_FDR[6]; 	// Endpoint FIFO Data Register
	AT91_REG	 Reserved4[3]; 	// 
	AT91_REG	 UDP_TXVC; 	// Transceiver Control Register
} AT91S_UDP, *AT91PS_UDP;
#else
#define UDP_FRM_NUM     (AT91_CAST(AT91_REG *) 	0x00000000) // (UDP_FRM_NUM) Frame Number Register
#define UDP_GLBSTATE    (AT91_CAST(AT91_REG *) 	0x00000004) // (UDP_GLBSTATE) Global State Register
#define UDP_FADDR       (AT91_CAST(AT91_REG *) 	0x00000008) // (UDP_FADDR) Function Address Register
#define UDP_IER         (AT91_CAST(AT91_REG *) 	0x00000010) // (UDP_IER) Interrupt Enable Register
#define UDP_IDR         (AT91_CAST(AT91_REG *) 	0x00000014) // (UDP_IDR) Interrupt Disable Register
#define UDP_IMR         (AT91_CAST(AT91_REG *) 	0x00000018) // (UDP_IMR) Interrupt Mask Register
#define UDP_ISR         (AT91_CAST(AT91_REG *) 	0x0000001C) // (UDP_ISR) Interrupt Status Register
#define UDP_ICR         (AT91_CAST(AT91_REG *) 	0x00000020) // (UDP_ICR) Interrupt Clear Register
#define UDP_RSTEP       (AT91_CAST(AT91_REG *) 	0x00000028) // (UDP_RSTEP) Reset Endpoint Register
#define UDP_CSR         (AT91_CAST(AT91_REG *) 	0x00000030) // (UDP_CSR) Endpoint Control and Status Register
#define UDP_FDR         (AT91_CAST(AT91_REG *) 	0x00000050) // (UDP_FDR) Endpoint FIFO Data Register
#define UDP_TXVC        (AT91_CAST(AT91_REG *) 	0x00000074) // (UDP_TXVC) Transceiver Control Register

#endif
// -------- UDP_FRM_NUM : (UDP Offset: 0x0) USB Frame Number Register -------- 
#define AT91C_UDP_FRM_NUM     (0x7FF <<  0) // (UDP) Frame Number as Defined in the Packet Field Formats
#define AT91C_UDP_FRM_ERR     (0x1 << 16) // (UDP) Frame Error
#define AT91C_UDP_FRM_OK      (0x1 << 17) // (UDP) Frame OK
// -------- UDP_GLB_STATE : (UDP Offset: 0x4) USB Global State Register -------- 
#define AT91C_UDP_FADDEN      (0x1 <<  0) // (UDP) Function Address Enable
#define AT91C_UDP_CONFG       (0x1 <<  1) // (UDP) Configured
#define AT91C_UDP_ESR         (0x1 <<  2) // (UDP) Enable Send Resume
#define AT91C_UDP_RSMINPR     (0x1 <<  3) // (UDP) A Resume Has Been Sent to the Host
#define AT91C_UDP_RMWUPE      (0x1 <<  4) // (UDP) Remote Wake Up Enable
// -------- UDP_FADDR : (UDP Offset: 0x8) USB Function Address Register -------- 
#define AT91C_UDP_FADD        (0xFF <<  0) // (UDP) Function Address Value
#define AT91C_UDP_FEN         (0x1 <<  8) // (UDP) Function Enable
// -------- UDP_IER : (UDP Offset: 0x10) USB Interrupt Enable Register -------- 
#define AT91C_UDP_EPINT0      (0x1 <<  0) // (UDP) Endpoint 0 Interrupt
#define AT91C_UDP_EPINT1      (0x1 <<  1) // (UDP) Endpoint 0 Interrupt
#define AT91C_UDP_EPINT2      (0x1 <<  2) // (UDP) Endpoint 2 Interrupt
#define AT91C_UDP_EPINT3      (0x1 <<  3) // (UDP) Endpoint 3 Interrupt
#define AT91C_UDP_EPINT4      (0x1 <<  4) // (UDP) Endpoint 4 Interrupt
#define AT91C_UDP_EPINT5      (0x1 <<  5) // (UDP) Endpoint 5 Interrupt
#define AT91C_UDP_RXSUSP      (0x1 <<  8) // (UDP) USB Suspend Interrupt
#define AT91C_UDP_RXRSM       (0x1 <<  9) // (UDP) USB Resume Interrupt
#define AT91C_UDP_EXTRSM      (0x1 << 10) // (UDP) USB External Resume Interrupt
#define AT91C_UDP_SOFINT      (0x1 << 11) // (UDP) USB Start Of frame Interrupt
#define AT91C_UDP_WAKEUP      (0x1 << 13) // (UDP) USB Resume Interrupt
// -------- UDP_IDR : (UDP Offset: 0x14) USB Interrupt Disable Register -------- 
// -------- UDP_IMR : (UDP Offset: 0x18) USB Interrupt Mask Register -------- 
// -------- UDP_ISR : (UDP Offset: 0x1c) USB Interrupt Status Register -------- 
#define AT91C_UDP_ENDBUSRES   (0x1 << 12) // (UDP) USB End Of Bus Reset Interrupt
// -------- UDP_ICR : (UDP Offset: 0x20) USB Interrupt Clear Register -------- 
// -------- UDP_RST_EP : (UDP Offset: 0x28) USB Reset Endpoint Register -------- 
#define AT91C_UDP_EP0         (0x1 <<  0) // (UDP) Reset Endpoint 0
#define AT91C_UDP_EP1         (0x1 <<  1) // (UDP) Reset Endpoint 1
#define AT91C_UDP_EP2         (0x1 <<  2) // (UDP) Reset Endpoint 2
#define AT91C_UDP_EP3         (0x1 <<  3) // (UDP) Reset Endpoint 3
#define AT91C_UDP_EP4         (0x1 <<  4) // (UDP) Reset Endpoint 4
#define AT91C_UDP_EP5         (0x1 <<  5) // (UDP) Reset Endpoint 5
// -------- UDP_CSR : (UDP Offset: 0x30) USB Endpoint Control and Status Register -------- 
#define AT91C_UDP_TXCOMP      (0x1 <<  0) // (UDP) Generates an IN packet with data previously written in the DPR
#define AT91C_UDP_RX_DATA_BK0 (0x1 <<  1) // (UDP) Receive Data Bank 0
#define AT91C_UDP_RXSETUP     (0x1 <<  2) // (UDP) Sends STALL to the Host (Control endpoints)
#define AT91C_UDP_ISOERROR    (0x1 <<  3) // (UDP) Isochronous error (Isochronous endpoints)
#define AT91C_UDP_STALLSENT   (0x1 <<  3) // (UDP) Stall sent (Control, bulk, interrupt endpoints)
#define AT91C_UDP_TXPKTRDY    (0x1 <<  4) // (UDP) Transmit Packet Ready
#define AT91C_UDP_FORCESTALL  (0x1 <<  5) // (UDP) Force Stall (used by Control, Bulk and Isochronous endpoints).
#define AT91C_UDP_RX_DATA_BK1 (0x1 <<  6) // (UDP) Receive Data Bank 1 (only used by endpoints with ping-pong attributes).
#define AT91C_UDP_DIR         (0x1 <<  7) // (UDP) Transfer Direction
#define AT91C_UDP_EPTYPE      (0x7 <<  8) // (UDP) Endpoint type
#define 	AT91C_UDP_EPTYPE_CTRL                 (0x0 <<  8) // (UDP) Control
#define 	AT91C_UDP_EPTYPE_ISO_OUT              (0x1 <<  8) // (UDP) Isochronous OUT
#define 	AT91C_UDP_EPTYPE_BULK_OUT             (0x2 <<  8) // (UDP) Bulk OUT
#define 	AT91C_UDP_EPTYPE_INT_OUT              (0x3 <<  8) // (UDP) Interrupt OUT
#define 	AT91C_UDP_EPTYPE_ISO_IN               (0x5 <<  8) // (UDP) Isochronous IN
#define 	AT91C_UDP_EPTYPE_BULK_IN              (0x6 <<  8) // (UDP) Bulk IN
#define 	AT91C_UDP_EPTYPE_INT_IN               (0x7 <<  8) // (UDP) Interrupt IN
#define AT91C_UDP_DTGLE       (0x1 << 11) // (UDP) Data Toggle
#define AT91C_UDP_EPEDS       (0x1 << 15) // (UDP) Endpoint Enable Disable
#define AT91C_UDP_RXBYTECNT   (0x7FF << 16) // (UDP) Number Of Bytes Available in the FIFO
// -------- UDP_TXVC : (UDP Offset: 0x74) Transceiver Control Register -------- 
#define AT91C_UDP_TXVDIS      (0x1 <<  8) // (UDP) 
#define AT91C_UDP_PUON        (0x1 <<  9) // (UDP) Pull-up ON

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR UDPHS Enpoint FIFO data register
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UDPHS_EPTFIFO {
	AT91_REG	 UDPHS_READEPT0[16384]; 	// FIFO Endpoint Data Register 0
	AT91_REG	 UDPHS_READEPT1[16384]; 	// FIFO Endpoint Data Register 1
	AT91_REG	 UDPHS_READEPT2[16384]; 	// FIFO Endpoint Data Register 2
	AT91_REG	 UDPHS_READEPT3[16384]; 	// FIFO Endpoint Data Register 3
	AT91_REG	 UDPHS_READEPT4[16384]; 	// FIFO Endpoint Data Register 4
	AT91_REG	 UDPHS_READEPT5[16384]; 	// FIFO Endpoint Data Register 5
	AT91_REG	 UDPHS_READEPT6[16384]; 	// FIFO Endpoint Data Register 6
	AT91_REG	 UDPHS_READEPT7[16384]; 	// FIFO Endpoint Data Register 7
} AT91S_UDPHS_EPTFIFO, *AT91PS_UDPHS_EPTFIFO;
#else
#define UDPHS_READEPT0  (AT91_CAST(AT91_REG *) 	0x00000000) // (UDPHS_READEPT0) FIFO Endpoint Data Register 0
#define UDPHS_READEPT1  (AT91_CAST(AT91_REG *) 	0x00010000) // (UDPHS_READEPT1) FIFO Endpoint Data Register 1
#define UDPHS_READEPT2  (AT91_CAST(AT91_REG *) 	0x00020000) // (UDPHS_READEPT2) FIFO Endpoint Data Register 2
#define UDPHS_READEPT3  (AT91_CAST(AT91_REG *) 	0x00030000) // (UDPHS_READEPT3) FIFO Endpoint Data Register 3
#define UDPHS_READEPT4  (AT91_CAST(AT91_REG *) 	0x00040000) // (UDPHS_READEPT4) FIFO Endpoint Data Register 4
#define UDPHS_READEPT5  (AT91_CAST(AT91_REG *) 	0x00050000) // (UDPHS_READEPT5) FIFO Endpoint Data Register 5
#define UDPHS_READEPT6  (AT91_CAST(AT91_REG *) 	0x00060000) // (UDPHS_READEPT6) FIFO Endpoint Data Register 6
#define UDPHS_READEPT7  (AT91_CAST(AT91_REG *) 	0x00070000) // (UDPHS_READEPT7) FIFO Endpoint Data Register 7

#endif

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR UDPHS Endpoint struct
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UDPHS_EPT {
	AT91_REG	 UDPHS_EPTCFG; 	// UDPHS Endpoint Config Register
	AT91_REG	 UDPHS_EPTCTLENB; 	// UDPHS Endpoint Control Enable Register
	AT91_REG	 UDPHS_EPTCTLDIS; 	// UDPHS Endpoint Control Disable Register
	AT91_REG	 UDPHS_EPTCTL; 	// UDPHS Endpoint Control Register
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 UDPHS_EPTSETSTA; 	// UDPHS Endpoint Set Status Register
	AT91_REG	 UDPHS_EPTCLRSTA; 	// UDPHS Endpoint Clear Status Register
	AT91_REG	 UDPHS_EPTSTA; 	// UDPHS Endpoint Status Register
} AT91S_UDPHS_EPT, *AT91PS_UDPHS_EPT;
#else
#define UDPHS_EPTCFG    (AT91_CAST(AT91_REG *) 	0x00000000) // (UDPHS_EPTCFG) UDPHS Endpoint Config Register
#define UDPHS_EPTCTLENB (AT91_CAST(AT91_REG *) 	0x00000004) // (UDPHS_EPTCTLENB) UDPHS Endpoint Control Enable Register
#define UDPHS_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0x00000008) // (UDPHS_EPTCTLDIS) UDPHS Endpoint Control Disable Register
#define UDPHS_EPTCTL    (AT91_CAST(AT91_REG *) 	0x0000000C) // (UDPHS_EPTCTL) UDPHS Endpoint Control Register
#define UDPHS_EPTSETSTA (AT91_CAST(AT91_REG *) 	0x00000014) // (UDPHS_EPTSETSTA) UDPHS Endpoint Set Status Register
#define UDPHS_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0x00000018) // (UDPHS_EPTCLRSTA) UDPHS Endpoint Clear Status Register
#define UDPHS_EPTSTA    (AT91_CAST(AT91_REG *) 	0x0000001C) // (UDPHS_EPTSTA) UDPHS Endpoint Status Register

#endif
// -------- UDPHS_EPTCFG : (UDPHS_EPT Offset: 0x0) UDPHS Endpoint Config Register -------- 
#define AT91C_UDPHS_EPT_SIZE  (0x7 <<  0) // (UDPHS_EPT) Endpoint Size
#define 	AT91C_UDPHS_EPT_SIZE_8                    (0x0) // (UDPHS_EPT)    8 bytes
#define 	AT91C_UDPHS_EPT_SIZE_16                   (0x1) // (UDPHS_EPT)   16 bytes
#define 	AT91C_UDPHS_EPT_SIZE_32                   (0x2) // (UDPHS_EPT)   32 bytes
#define 	AT91C_UDPHS_EPT_SIZE_64                   (0x3) // (UDPHS_EPT)   64 bytes
#define 	AT91C_UDPHS_EPT_SIZE_128                  (0x4) // (UDPHS_EPT)  128 bytes
#define 	AT91C_UDPHS_EPT_SIZE_256                  (0x5) // (UDPHS_EPT)  256 bytes (if possible)
#define 	AT91C_UDPHS_EPT_SIZE_512                  (0x6) // (UDPHS_EPT)  512 bytes (if possible)
#define 	AT91C_UDPHS_EPT_SIZE_1024                 (0x7) // (UDPHS_EPT) 1024 bytes (if possible)
#define AT91C_UDPHS_EPT_DIR   (0x1 <<  3) // (UDPHS_EPT) Endpoint Direction 0:OUT, 1:IN
#define 	AT91C_UDPHS_EPT_DIR_OUT                  (0x0 <<  3) // (UDPHS_EPT) Direction OUT
#define 	AT91C_UDPHS_EPT_DIR_IN                   (0x1 <<  3) // (UDPHS_EPT) Direction IN
#define AT91C_UDPHS_EPT_TYPE  (0x3 <<  4) // (UDPHS_EPT) Endpoint Type
#define 	AT91C_UDPHS_EPT_TYPE_CTL_EPT              (0x0 <<  4) // (UDPHS_EPT) Control endpoint
#define 	AT91C_UDPHS_EPT_TYPE_ISO_EPT              (0x1 <<  4) // (UDPHS_EPT) Isochronous endpoint
#define 	AT91C_UDPHS_EPT_TYPE_BUL_EPT              (0x2 <<  4) // (UDPHS_EPT) Bulk endpoint
#define 	AT91C_UDPHS_EPT_TYPE_INT_EPT              (0x3 <<  4) // (UDPHS_EPT) Interrupt endpoint
#define AT91C_UDPHS_BK_NUMBER (0x3 <<  6) // (UDPHS_EPT) Number of Banks
#define 	AT91C_UDPHS_BK_NUMBER_0                    (0x0 <<  6) // (UDPHS_EPT) Zero Bank, the EndPoint is not mapped in memory
#define 	AT91C_UDPHS_BK_NUMBER_1                    (0x1 <<  6) // (UDPHS_EPT) One Bank (Bank0)
#define 	AT91C_UDPHS_BK_NUMBER_2                    (0x2 <<  6) // (UDPHS_EPT) Double bank (Ping-Pong : Bank0 / Bank1)
#define 	AT91C_UDPHS_BK_NUMBER_3                    (0x3 <<  6) // (UDPHS_EPT) Triple Bank (Bank0 / Bank1 / Bank2) (if possible)
#define AT91C_UDPHS_NB_TRANS  (0x3 <<  8) // (UDPHS_EPT) Number Of Transaction per Micro-Frame (High-Bandwidth iso only)
#define AT91C_UDPHS_EPT_MAPD  (0x1 << 31) // (UDPHS_EPT) Endpoint Mapped (read only
// -------- UDPHS_EPTCTLENB : (UDPHS_EPT Offset: 0x4) UDPHS Endpoint Control Enable Register -------- 
#define AT91C_UDPHS_EPT_ENABL (0x1 <<  0) // (UDPHS_EPT) Endpoint Enable
#define AT91C_UDPHS_AUTO_VALID (0x1 <<  1) // (UDPHS_EPT) Packet Auto-Valid Enable/Disable
#define AT91C_UDPHS_INTDIS_DMA (0x1 <<  3) // (UDPHS_EPT) Endpoint Interrupts DMA Request Enable/Disable
#define AT91C_UDPHS_NYET_DIS  (0x1 <<  4) // (UDPHS_EPT) NYET Enable/Disable
#define AT91C_UDPHS_DATAX_RX  (0x1 <<  6) // (UDPHS_EPT) DATAx Interrupt Enable/Disable
#define AT91C_UDPHS_MDATA_RX  (0x1 <<  7) // (UDPHS_EPT) MDATA Interrupt Enabled/Disable
#define AT91C_UDPHS_ERR_OVFLW (0x1 <<  8) // (UDPHS_EPT) OverFlow Error Interrupt Enable/Disable/Status
#define AT91C_UDPHS_RX_BK_RDY (0x1 <<  9) // (UDPHS_EPT) Received OUT Data
#define AT91C_UDPHS_TX_COMPLT (0x1 << 10) // (UDPHS_EPT) Transmitted IN Data Complete Interrupt Enable/Disable or Transmitted IN Data Complete (clear)
#define AT91C_UDPHS_ERR_TRANS (0x1 << 11) // (UDPHS_EPT) Transaction Error Interrupt Enable/Disable
#define AT91C_UDPHS_TX_PK_RDY (0x1 << 11) // (UDPHS_EPT) TX Packet Ready Interrupt Enable/Disable
#define AT91C_UDPHS_RX_SETUP  (0x1 << 12) // (UDPHS_EPT) Received SETUP Interrupt Enable/Disable
#define AT91C_UDPHS_ERR_FL_ISO (0x1 << 12) // (UDPHS_EPT) Error Flow Clear/Interrupt Enable/Disable
#define AT91C_UDPHS_STALL_SNT (0x1 << 13) // (UDPHS_EPT) Stall Sent Clear
#define AT91C_UDPHS_ERR_CRISO (0x1 << 13) // (UDPHS_EPT) CRC error / Error NB Trans / Interrupt Enable/Disable
#define AT91C_UDPHS_NAK_IN    (0x1 << 14) // (UDPHS_EPT) NAKIN ERROR FLUSH / Clear / Interrupt Enable/Disable
#define AT91C_UDPHS_NAK_OUT   (0x1 << 15) // (UDPHS_EPT) NAKOUT / Clear / Interrupt Enable/Disable
#define AT91C_UDPHS_BUSY_BANK (0x1 << 18) // (UDPHS_EPT) Busy Bank Interrupt Enable/Disable
#define AT91C_UDPHS_SHRT_PCKT (0x1 << 31) // (UDPHS_EPT) Short Packet / Interrupt Enable/Disable
// -------- UDPHS_EPTCTLDIS : (UDPHS_EPT Offset: 0x8) UDPHS Endpoint Control Disable Register -------- 
#define AT91C_UDPHS_EPT_DISABL (0x1 <<  0) // (UDPHS_EPT) Endpoint Disable
// -------- UDPHS_EPTCTL : (UDPHS_EPT Offset: 0xc) UDPHS Endpoint Control Register -------- 
// -------- UDPHS_EPTSETSTA : (UDPHS_EPT Offset: 0x14) UDPHS Endpoint Set Status Register -------- 
#define AT91C_UDPHS_FRCESTALL (0x1 <<  5) // (UDPHS_EPT) Stall Handshake Request Set/Clear/Status
#define AT91C_UDPHS_KILL_BANK (0x1 <<  9) // (UDPHS_EPT) KILL Bank
// -------- UDPHS_EPTCLRSTA : (UDPHS_EPT Offset: 0x18) UDPHS Endpoint Clear Status Register -------- 
#define AT91C_UDPHS_TOGGLESQ  (0x1 <<  6) // (UDPHS_EPT) Data Toggle Clear
// -------- UDPHS_EPTSTA : (UDPHS_EPT Offset: 0x1c) UDPHS Endpoint Status Register -------- 
#define AT91C_UDPHS_TOGGLESQ_STA (0x3 <<  6) // (UDPHS_EPT) Toggle Sequencing
#define 	AT91C_UDPHS_TOGGLESQ_STA_00                   (0x0 <<  6) // (UDPHS_EPT) Data0
#define 	AT91C_UDPHS_TOGGLESQ_STA_01                   (0x1 <<  6) // (UDPHS_EPT) Data1
#define 	AT91C_UDPHS_TOGGLESQ_STA_10                   (0x2 <<  6) // (UDPHS_EPT) Data2 (only for High-Bandwidth Isochronous EndPoint)
#define 	AT91C_UDPHS_TOGGLESQ_STA_11                   (0x3 <<  6) // (UDPHS_EPT) MData (only for High-Bandwidth Isochronous EndPoint)
#define AT91C_UDPHS_CONTROL_DIR (0x3 << 16) // (UDPHS_EPT) 
#define 	AT91C_UDPHS_CONTROL_DIR_00                   (0x0 << 16) // (UDPHS_EPT) Bank 0
#define 	AT91C_UDPHS_CONTROL_DIR_01                   (0x1 << 16) // (UDPHS_EPT) Bank 1
#define 	AT91C_UDPHS_CONTROL_DIR_10                   (0x2 << 16) // (UDPHS_EPT) Bank 2
#define 	AT91C_UDPHS_CONTROL_DIR_11                   (0x3 << 16) // (UDPHS_EPT) Invalid
#define AT91C_UDPHS_CURRENT_BANK (0x3 << 16) // (UDPHS_EPT) 
#define 	AT91C_UDPHS_CURRENT_BANK_00                   (0x0 << 16) // (UDPHS_EPT) Bank 0
#define 	AT91C_UDPHS_CURRENT_BANK_01                   (0x1 << 16) // (UDPHS_EPT) Bank 1
#define 	AT91C_UDPHS_CURRENT_BANK_10                   (0x2 << 16) // (UDPHS_EPT) Bank 2
#define 	AT91C_UDPHS_CURRENT_BANK_11                   (0x3 << 16) // (UDPHS_EPT) Invalid
#define AT91C_UDPHS_BUSY_BANK_STA (0x3 << 18) // (UDPHS_EPT) Busy Bank Number
#define 	AT91C_UDPHS_BUSY_BANK_STA_00                   (0x0 << 18) // (UDPHS_EPT) All banks are free
#define 	AT91C_UDPHS_BUSY_BANK_STA_01                   (0x1 << 18) // (UDPHS_EPT) 1 busy bank
#define 	AT91C_UDPHS_BUSY_BANK_STA_10                   (0x2 << 18) // (UDPHS_EPT) 2 busy banks
#define 	AT91C_UDPHS_BUSY_BANK_STA_11                   (0x3 << 18) // (UDPHS_EPT) 3 busy banks (if possible)
#define AT91C_UDPHS_BYTE_COUNT (0x7FF << 20) // (UDPHS_EPT) UDPHS Byte Count

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR UDPHS DMA struct
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UDPHS_DMA {
	AT91_REG	 UDPHS_DMANXTDSC; 	// UDPHS DMA Channel Next Descriptor Address
	AT91_REG	 UDPHS_DMAADDRESS; 	// UDPHS DMA Channel Address Register
	AT91_REG	 UDPHS_DMACONTROL; 	// UDPHS DMA Channel Control Register
	AT91_REG	 UDPHS_DMASTATUS; 	// UDPHS DMA Channel Status Register
} AT91S_UDPHS_DMA, *AT91PS_UDPHS_DMA;
#else
#define UDPHS_DMANXTDSC (AT91_CAST(AT91_REG *) 	0x00000000) // (UDPHS_DMANXTDSC) UDPHS DMA Channel Next Descriptor Address
#define UDPHS_DMAADDRESS (AT91_CAST(AT91_REG *) 	0x00000004) // (UDPHS_DMAADDRESS) UDPHS DMA Channel Address Register
#define UDPHS_DMACONTROL (AT91_CAST(AT91_REG *) 	0x00000008) // (UDPHS_DMACONTROL) UDPHS DMA Channel Control Register
#define UDPHS_DMASTATUS (AT91_CAST(AT91_REG *) 	0x0000000C) // (UDPHS_DMASTATUS) UDPHS DMA Channel Status Register

#endif
// -------- UDPHS_DMANXTDSC : (UDPHS_DMA Offset: 0x0) UDPHS DMA Next Descriptor Address Register -------- 
#define AT91C_UDPHS_NXT_DSC_ADD (0xFFFFFFF <<  4) // (UDPHS_DMA) next Channel Descriptor
// -------- UDPHS_DMAADDRESS : (UDPHS_DMA Offset: 0x4) UDPHS DMA Channel Address Register -------- 
#define AT91C_UDPHS_BUFF_ADD  (0x0 <<  0) // (UDPHS_DMA) starting address of a DMA Channel transfer
// -------- UDPHS_DMACONTROL : (UDPHS_DMA Offset: 0x8) UDPHS DMA Channel Control Register -------- 
#define AT91C_UDPHS_CHANN_ENB (0x1 <<  0) // (UDPHS_DMA) Channel Enabled
#define AT91C_UDPHS_LDNXT_DSC (0x1 <<  1) // (UDPHS_DMA) Load Next Channel Transfer Descriptor Enable
#define AT91C_UDPHS_END_TR_EN (0x1 <<  2) // (UDPHS_DMA) Buffer Close Input Enable
#define AT91C_UDPHS_END_B_EN  (0x1 <<  3) // (UDPHS_DMA) End of DMA Buffer Packet Validation
#define AT91C_UDPHS_END_TR_IT (0x1 <<  4) // (UDPHS_DMA) End Of Transfer Interrupt Enable
#define AT91C_UDPHS_END_BUFFIT (0x1 <<  5) // (UDPHS_DMA) End Of Channel Buffer Interrupt Enable
#define AT91C_UDPHS_DESC_LD_IT (0x1 <<  6) // (UDPHS_DMA) Descriptor Loaded Interrupt Enable
#define AT91C_UDPHS_BURST_LCK (0x1 <<  7) // (UDPHS_DMA) Burst Lock Enable
#define AT91C_UDPHS_BUFF_LENGTH (0xFFFF << 16) // (UDPHS_DMA) Buffer Byte Length (write only)
// -------- UDPHS_DMASTATUS : (UDPHS_DMA Offset: 0xc) UDPHS DMA Channelx Status Register -------- 
#define AT91C_UDPHS_CHANN_ACT (0x1 <<  1) // (UDPHS_DMA) 
#define AT91C_UDPHS_END_TR_ST (0x1 <<  4) // (UDPHS_DMA) 
#define AT91C_UDPHS_END_BF_ST (0x1 <<  5) // (UDPHS_DMA) 
#define AT91C_UDPHS_DESC_LDST (0x1 <<  6) // (UDPHS_DMA) 
#define AT91C_UDPHS_BUFF_COUNT (0xFFFF << 16) // (UDPHS_DMA) 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR UDPHS High Speed Device Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UDPHS {
	AT91_REG	 UDPHS_CTRL; 	// UDPHS Control Register
	AT91_REG	 UDPHS_FNUM; 	// UDPHS Frame Number Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 UDPHS_IEN; 	// UDPHS Interrupt Enable Register
	AT91_REG	 UDPHS_INTSTA; 	// UDPHS Interrupt Status Register
	AT91_REG	 UDPHS_CLRINT; 	// UDPHS Clear Interrupt Register
	AT91_REG	 UDPHS_EPTRST; 	// UDPHS Endpoints Reset Register
	AT91_REG	 Reserved1[44]; 	// 
	AT91_REG	 UDPHS_TSTSOFCNT; 	// UDPHS Test SOF Counter Register
	AT91_REG	 UDPHS_TSTCNTA; 	// UDPHS Test A Counter Register
	AT91_REG	 UDPHS_TSTCNTB; 	// UDPHS Test B Counter Register
	AT91_REG	 UDPHS_TSTMODREG; 	// UDPHS Test Mode Register
	AT91_REG	 UDPHS_TST; 	// UDPHS Test Register
	AT91_REG	 Reserved2[2]; 	// 
	AT91_REG	 UDPHS_RIPPADDRSIZE; 	// UDPHS PADDRSIZE Register
	AT91_REG	 UDPHS_RIPNAME1; 	// UDPHS Name1 Register
	AT91_REG	 UDPHS_RIPNAME2; 	// UDPHS Name2 Register
	AT91_REG	 UDPHS_IPFEATURES; 	// UDPHS Features Register
	AT91_REG	 UDPHS_IPVERSION; 	// UDPHS Version Register
	AT91S_UDPHS_EPT	 UDPHS_EPT[8]; 	// UDPHS Endpoint struct
	AT91_REG	 Reserved3[64]; 	// 
	AT91S_UDPHS_DMA	 UDPHS_DMA[6]; 	// UDPHS DMA channel struct (not use [0])
} AT91S_UDPHS, *AT91PS_UDPHS;
#else
#define UDPHS_CTRL      (AT91_CAST(AT91_REG *) 	0x00000000) // (UDPHS_CTRL) UDPHS Control Register
#define UDPHS_FNUM      (AT91_CAST(AT91_REG *) 	0x00000004) // (UDPHS_FNUM) UDPHS Frame Number Register
#define UDPHS_IEN       (AT91_CAST(AT91_REG *) 	0x00000010) // (UDPHS_IEN) UDPHS Interrupt Enable Register
#define UDPHS_INTSTA    (AT91_CAST(AT91_REG *) 	0x00000014) // (UDPHS_INTSTA) UDPHS Interrupt Status Register
#define UDPHS_CLRINT    (AT91_CAST(AT91_REG *) 	0x00000018) // (UDPHS_CLRINT) UDPHS Clear Interrupt Register
#define UDPHS_EPTRST    (AT91_CAST(AT91_REG *) 	0x0000001C) // (UDPHS_EPTRST) UDPHS Endpoints Reset Register
#define UDPHS_TSTSOFCNT (AT91_CAST(AT91_REG *) 	0x000000D0) // (UDPHS_TSTSOFCNT) UDPHS Test SOF Counter Register
#define UDPHS_TSTCNTA   (AT91_CAST(AT91_REG *) 	0x000000D4) // (UDPHS_TSTCNTA) UDPHS Test A Counter Register
#define UDPHS_TSTCNTB   (AT91_CAST(AT91_REG *) 	0x000000D8) // (UDPHS_TSTCNTB) UDPHS Test B Counter Register
#define UDPHS_TSTMODREG (AT91_CAST(AT91_REG *) 	0x000000DC) // (UDPHS_TSTMODREG) UDPHS Test Mode Register
#define UDPHS_TST       (AT91_CAST(AT91_REG *) 	0x000000E0) // (UDPHS_TST) UDPHS Test Register
#define UDPHS_RIPPADDRSIZE (AT91_CAST(AT91_REG *) 	0x000000EC) // (UDPHS_RIPPADDRSIZE) UDPHS PADDRSIZE Register
#define UDPHS_RIPNAME1  (AT91_CAST(AT91_REG *) 	0x000000F0) // (UDPHS_RIPNAME1) UDPHS Name1 Register
#define UDPHS_RIPNAME2  (AT91_CAST(AT91_REG *) 	0x000000F4) // (UDPHS_RIPNAME2) UDPHS Name2 Register
#define UDPHS_IPFEATURES (AT91_CAST(AT91_REG *) 	0x000000F8) // (UDPHS_IPFEATURES) UDPHS Features Register
#define UDPHS_IPVERSION (AT91_CAST(AT91_REG *) 	0x000000FC) // (UDPHS_IPVERSION) UDPHS Version Register

#endif
// -------- UDPHS_CTRL : (UDPHS Offset: 0x0) UDPHS Control Register -------- 
#define AT91C_UDPHS_DEV_ADDR  (0x7F <<  0) // (UDPHS) UDPHS Address
#define AT91C_UDPHS_FADDR_EN  (0x1 <<  7) // (UDPHS) Function Address Enable
#define AT91C_UDPHS_EN_UDPHS  (0x1 <<  8) // (UDPHS) UDPHS Enable
#define AT91C_UDPHS_DETACH    (0x1 <<  9) // (UDPHS) Detach Command
#define AT91C_UDPHS_REWAKEUP  (0x1 << 10) // (UDPHS) Send Remote Wake Up
#define AT91C_UDPHS_PULLD_DIS (0x1 << 11) // (UDPHS) PullDown Disable
// -------- UDPHS_FNUM : (UDPHS Offset: 0x4) UDPHS Frame Number Register -------- 
#define AT91C_UDPHS_MICRO_FRAME_NUM (0x7 <<  0) // (UDPHS) Micro Frame Number
#define AT91C_UDPHS_FRAME_NUMBER (0x7FF <<  3) // (UDPHS) Frame Number as defined in the Packet Field Formats
#define AT91C_UDPHS_FNUM_ERR  (0x1 << 31) // (UDPHS) Frame Number CRC Error
// -------- UDPHS_IEN : (UDPHS Offset: 0x10) UDPHS Interrupt Enable Register -------- 
#define AT91C_UDPHS_DET_SUSPD (0x1 <<  1) // (UDPHS) Suspend Interrupt Enable/Clear/Status
#define AT91C_UDPHS_MICRO_SOF (0x1 <<  2) // (UDPHS) Micro-SOF Interrupt Enable/Clear/Status
#define AT91C_UDPHS_IEN_SOF   (0x1 <<  3) // (UDPHS) SOF Interrupt Enable/Clear/Status
#define AT91C_UDPHS_ENDRESET  (0x1 <<  4) // (UDPHS) End Of Reset Interrupt Enable/Clear/Status
#define AT91C_UDPHS_WAKE_UP   (0x1 <<  5) // (UDPHS) Wake Up CPU Interrupt Enable/Clear/Status
#define AT91C_UDPHS_ENDOFRSM  (0x1 <<  6) // (UDPHS) End Of Resume Interrupt Enable/Clear/Status
#define AT91C_UDPHS_UPSTR_RES (0x1 <<  7) // (UDPHS) Upstream Resume Interrupt Enable/Clear/Status
#define AT91C_UDPHS_EPT_INT_0 (0x1 <<  8) // (UDPHS) Endpoint 0 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_1 (0x1 <<  9) // (UDPHS) Endpoint 1 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_2 (0x1 << 10) // (UDPHS) Endpoint 2 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_3 (0x1 << 11) // (UDPHS) Endpoint 3 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_4 (0x1 << 12) // (UDPHS) Endpoint 4 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_5 (0x1 << 13) // (UDPHS) Endpoint 5 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_6 (0x1 << 14) // (UDPHS) Endpoint 6 Interrupt Enable/Status
#define AT91C_UDPHS_EPT_INT_7 (0x1 << 15) // (UDPHS) Endpoint 7 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_1 (0x1 << 25) // (UDPHS) DMA Channel 1 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_2 (0x1 << 26) // (UDPHS) DMA Channel 2 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_3 (0x1 << 27) // (UDPHS) DMA Channel 3 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_4 (0x1 << 28) // (UDPHS) DMA Channel 4 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_5 (0x1 << 29) // (UDPHS) DMA Channel 5 Interrupt Enable/Status
#define AT91C_UDPHS_DMA_INT_6 (0x1 << 30) // (UDPHS) DMA Channel 6 Interrupt Enable/Status
// -------- UDPHS_INTSTA : (UDPHS Offset: 0x14) UDPHS Interrupt Status Register -------- 
#define AT91C_UDPHS_SPEED     (0x1 <<  0) // (UDPHS) Speed Status
// -------- UDPHS_CLRINT : (UDPHS Offset: 0x18) UDPHS Clear Interrupt Register -------- 
// -------- UDPHS_EPTRST : (UDPHS Offset: 0x1c) UDPHS Endpoints Reset Register -------- 
#define AT91C_UDPHS_RST_EPT_0 (0x1 <<  0) // (UDPHS) Endpoint Reset 0
#define AT91C_UDPHS_RST_EPT_1 (0x1 <<  1) // (UDPHS) Endpoint Reset 1
#define AT91C_UDPHS_RST_EPT_2 (0x1 <<  2) // (UDPHS) Endpoint Reset 2
#define AT91C_UDPHS_RST_EPT_3 (0x1 <<  3) // (UDPHS) Endpoint Reset 3
#define AT91C_UDPHS_RST_EPT_4 (0x1 <<  4) // (UDPHS) Endpoint Reset 4
#define AT91C_UDPHS_RST_EPT_5 (0x1 <<  5) // (UDPHS) Endpoint Reset 5
#define AT91C_UDPHS_RST_EPT_6 (0x1 <<  6) // (UDPHS) Endpoint Reset 6
#define AT91C_UDPHS_RST_EPT_7 (0x1 <<  7) // (UDPHS) Endpoint Reset 7
// -------- UDPHS_TSTSOFCNT : (UDPHS Offset: 0xd0) UDPHS Test SOF Counter Register -------- 
#define AT91C_UDPHS_SOFCNTMAX (0x3 <<  0) // (UDPHS) SOF Counter Max Value
#define AT91C_UDPHS_SOFCTLOAD (0x1 <<  7) // (UDPHS) SOF Counter Load
// -------- UDPHS_TSTCNTA : (UDPHS Offset: 0xd4) UDPHS Test A Counter Register -------- 
#define AT91C_UDPHS_CNTAMAX   (0x7FFF <<  0) // (UDPHS) A Counter Max Value
#define AT91C_UDPHS_CNTALOAD  (0x1 << 15) // (UDPHS) A Counter Load
// -------- UDPHS_TSTCNTB : (UDPHS Offset: 0xd8) UDPHS Test B Counter Register -------- 
#define AT91C_UDPHS_CNTBMAX   (0x7FFF <<  0) // (UDPHS) B Counter Max Value
#define AT91C_UDPHS_CNTBLOAD  (0x1 << 15) // (UDPHS) B Counter Load
// -------- UDPHS_TSTMODREG : (UDPHS Offset: 0xdc) UDPHS Test Mode Register -------- 
#define AT91C_UDPHS_TSTMODE   (0x1F <<  1) // (UDPHS) UDPHS Core TestModeReg
// -------- UDPHS_TST : (UDPHS Offset: 0xe0) UDPHS Test Register -------- 
#define AT91C_UDPHS_SPEED_CFG (0x3 <<  0) // (UDPHS) Speed Configuration
#define 	AT91C_UDPHS_SPEED_CFG_NM                   (0x0) // (UDPHS) Normal Mode
#define 	AT91C_UDPHS_SPEED_CFG_RS                   (0x1) // (UDPHS) Reserved
#define 	AT91C_UDPHS_SPEED_CFG_HS                   (0x2) // (UDPHS) Force High Speed
#define 	AT91C_UDPHS_SPEED_CFG_FS                   (0x3) // (UDPHS) Force Full-Speed
#define AT91C_UDPHS_TST_J     (0x1 <<  2) // (UDPHS) TestJMode
#define AT91C_UDPHS_TST_K     (0x1 <<  3) // (UDPHS) TestKMode
#define AT91C_UDPHS_TST_PKT   (0x1 <<  4) // (UDPHS) TestPacketMode
#define AT91C_UDPHS_OPMODE2   (0x1 <<  5) // (UDPHS) OpMode2
// -------- UDPHS_RIPPADDRSIZE : (UDPHS Offset: 0xec) UDPHS PADDRSIZE Register -------- 
#define AT91C_UDPHS_IPPADDRSIZE (0x0 <<  0) // (UDPHS) 2^UDPHSDEV_PADDR_SIZE
// -------- UDPHS_RIPNAME1 : (UDPHS Offset: 0xf0) UDPHS Name Register -------- 
#define AT91C_UDPHS_IPNAME1   (0x0 <<  0) // (UDPHS) ASCII string HUSB
// -------- UDPHS_RIPNAME2 : (UDPHS Offset: 0xf4) UDPHS Name Register -------- 
#define AT91C_UDPHS_IPNAME2   (0x0 <<  0) // (UDPHS) ASCII string 2DEV
// -------- UDPHS_IPFEATURES : (UDPHS Offset: 0xf8) UDPHS Features Register -------- 
#define AT91C_UDPHS_EPT_NBR_MAX (0xF <<  0) // (UDPHS) Max Number of Endpoints
#define AT91C_UDPHS_DMA_CHANNEL_NBR (0x7 <<  4) // (UDPHS) Number of DMA Channels
#define AT91C_UDPHS_DMA_B_SIZ (0x1 <<  7) // (UDPHS) DMA Buffer Size
#define AT91C_UDPHS_DMA_FIFO_WORD_DEPTH (0xF <<  8) // (UDPHS) DMA FIFO Depth in words
#define AT91C_UDPHS_FIFO_MAX_SIZE (0x7 << 12) // (UDPHS) DPRAM size
#define AT91C_UDPHS_BW_DPRAM  (0x1 << 15) // (UDPHS) DPRAM byte write capability
#define AT91C_UDPHS_DATAB16_8 (0x1 << 16) // (UDPHS) UTMI DataBus16_8
#define AT91C_UDPHS_ISO_EPT_1 (0x1 << 17) // (UDPHS) Endpoint 1 High Bandwidth Isochronous Capability
#define AT91C_UDPHS_ISO_EPT_2 (0x1 << 18) // (UDPHS) Endpoint 2 High Bandwidth Isochronous Capability
#define AT91C_UDPHS_ISO_EPT_3 (0x1 << 19) // (UDPHS) Endpoint 3 High Bandwidth Isochronous Capability
#define AT91C_UDPHS_ISO_EPT_4 (0x1 << 20) // (UDPHS) Endpoint 4 High Bandwidth Isochronous Capability
// -------- UDPHS_IPVERSION : (UDPHS Offset: 0xfc) UDPHS Version Register -------- 
#define AT91C_UDPHS_VERSION_NUM (0xFFFF <<  0) // (UDPHS) Give the IP version
#define AT91C_UDPHS_METAL_FIX_NUM (0x7 << 16) // (UDPHS) Give the number of metal fixes

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Timer Counter Channel Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_TC {
	AT91_REG	 TC_CCR; 	// Channel Control Register
	AT91_REG	 TC_CMR; 	// Channel Mode Register (Capture Mode / Waveform Mode)
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 TC_CV; 	// Counter Value
	AT91_REG	 TC_RA; 	// Register A
	AT91_REG	 TC_RB; 	// Register B
	AT91_REG	 TC_RC; 	// Register C
	AT91_REG	 TC_SR; 	// Status Register
	AT91_REG	 TC_IER; 	// Interrupt Enable Register
	AT91_REG	 TC_IDR; 	// Interrupt Disable Register
	AT91_REG	 TC_IMR; 	// Interrupt Mask Register
} AT91S_TC, *AT91PS_TC;
#else
#define TC_CCR          (AT91_CAST(AT91_REG *) 	0x00000000) // (TC_CCR) Channel Control Register
#define TC_CMR          (AT91_CAST(AT91_REG *) 	0x00000004) // (TC_CMR) Channel Mode Register (Capture Mode / Waveform Mode)
#define TC_CV           (AT91_CAST(AT91_REG *) 	0x00000010) // (TC_CV) Counter Value
#define TC_RA           (AT91_CAST(AT91_REG *) 	0x00000014) // (TC_RA) Register A
#define TC_RB           (AT91_CAST(AT91_REG *) 	0x00000018) // (TC_RB) Register B
#define TC_RC           (AT91_CAST(AT91_REG *) 	0x0000001C) // (TC_RC) Register C
#define TC_SR           (AT91_CAST(AT91_REG *) 	0x00000020) // (TC_SR) Status Register
#define TC_IER          (AT91_CAST(AT91_REG *) 	0x00000024) // (TC_IER) Interrupt Enable Register
#define TC_IDR          (AT91_CAST(AT91_REG *) 	0x00000028) // (TC_IDR) Interrupt Disable Register
#define TC_IMR          (AT91_CAST(AT91_REG *) 	0x0000002C) // (TC_IMR) Interrupt Mask Register

#endif
// -------- TC_CCR : (TC Offset: 0x0) TC Channel Control Register -------- 
#define AT91C_TC_CLKEN        (0x1 <<  0) // (TC) Counter Clock Enable Command
#define AT91C_TC_CLKDIS       (0x1 <<  1) // (TC) Counter Clock Disable Command
#define AT91C_TC_SWTRG        (0x1 <<  2) // (TC) Software Trigger Command
// -------- TC_CMR : (TC Offset: 0x4) TC Channel Mode Register: Capture Mode / Waveform Mode -------- 
#define AT91C_TC_CLKS         (0x7 <<  0) // (TC) Clock Selection
#define 	AT91C_TC_CLKS_TIMER_DIV1_CLOCK     (0x0) // (TC) Clock selected: TIMER_DIV1_CLOCK
#define 	AT91C_TC_CLKS_TIMER_DIV2_CLOCK     (0x1) // (TC) Clock selected: TIMER_DIV2_CLOCK
#define 	AT91C_TC_CLKS_TIMER_DIV3_CLOCK     (0x2) // (TC) Clock selected: TIMER_DIV3_CLOCK
#define 	AT91C_TC_CLKS_TIMER_DIV4_CLOCK     (0x3) // (TC) Clock selected: TIMER_DIV4_CLOCK
#define 	AT91C_TC_CLKS_TIMER_DIV5_CLOCK     (0x4) // (TC) Clock selected: TIMER_DIV5_CLOCK
#define 	AT91C_TC_CLKS_XC0                  (0x5) // (TC) Clock selected: XC0
#define 	AT91C_TC_CLKS_XC1                  (0x6) // (TC) Clock selected: XC1
#define 	AT91C_TC_CLKS_XC2                  (0x7) // (TC) Clock selected: XC2
#define AT91C_TC_CLKI         (0x1 <<  3) // (TC) Clock Invert
#define AT91C_TC_BURST        (0x3 <<  4) // (TC) Burst Signal Selection
#define 	AT91C_TC_BURST_NONE                 (0x0 <<  4) // (TC) The clock is not gated by an external signal
#define 	AT91C_TC_BURST_XC0                  (0x1 <<  4) // (TC) XC0 is ANDed with the selected clock
#define 	AT91C_TC_BURST_XC1                  (0x2 <<  4) // (TC) XC1 is ANDed with the selected clock
#define 	AT91C_TC_BURST_XC2                  (0x3 <<  4) // (TC) XC2 is ANDed with the selected clock
#define AT91C_TC_CPCSTOP      (0x1 <<  6) // (TC) Counter Clock Stopped with RC Compare
#define AT91C_TC_LDBSTOP      (0x1 <<  6) // (TC) Counter Clock Stopped with RB Loading
#define AT91C_TC_CPCDIS       (0x1 <<  7) // (TC) Counter Clock Disable with RC Compare
#define AT91C_TC_LDBDIS       (0x1 <<  7) // (TC) Counter Clock Disabled with RB Loading
#define AT91C_TC_ETRGEDG      (0x3 <<  8) // (TC) External Trigger Edge Selection
#define 	AT91C_TC_ETRGEDG_NONE                 (0x0 <<  8) // (TC) Edge: None
#define 	AT91C_TC_ETRGEDG_RISING               (0x1 <<  8) // (TC) Edge: rising edge
#define 	AT91C_TC_ETRGEDG_FALLING              (0x2 <<  8) // (TC) Edge: falling edge
#define 	AT91C_TC_ETRGEDG_BOTH                 (0x3 <<  8) // (TC) Edge: each edge
#define AT91C_TC_EEVTEDG      (0x3 <<  8) // (TC) External Event Edge Selection
#define 	AT91C_TC_EEVTEDG_NONE                 (0x0 <<  8) // (TC) Edge: None
#define 	AT91C_TC_EEVTEDG_RISING               (0x1 <<  8) // (TC) Edge: rising edge
#define 	AT91C_TC_EEVTEDG_FALLING              (0x2 <<  8) // (TC) Edge: falling edge
#define 	AT91C_TC_EEVTEDG_BOTH                 (0x3 <<  8) // (TC) Edge: each edge
#define AT91C_TC_EEVT         (0x3 << 10) // (TC) External Event  Selection
#define 	AT91C_TC_EEVT_TIOB                 (0x0 << 10) // (TC) Signal selected as external event: TIOB TIOB direction: input
#define 	AT91C_TC_EEVT_XC0                  (0x1 << 10) // (TC) Signal selected as external event: XC0 TIOB direction: output
#define 	AT91C_TC_EEVT_XC1                  (0x2 << 10) // (TC) Signal selected as external event: XC1 TIOB direction: output
#define 	AT91C_TC_EEVT_XC2                  (0x3 << 10) // (TC) Signal selected as external event: XC2 TIOB direction: output
#define AT91C_TC_ABETRG       (0x1 << 10) // (TC) TIOA or TIOB External Trigger Selection
#define AT91C_TC_ENETRG       (0x1 << 12) // (TC) External Event Trigger enable
#define AT91C_TC_WAVESEL      (0x3 << 13) // (TC) Waveform  Selection
#define 	AT91C_TC_WAVESEL_UP                   (0x0 << 13) // (TC) UP mode without atomatic trigger on RC Compare
#define 	AT91C_TC_WAVESEL_UPDOWN               (0x1 << 13) // (TC) UPDOWN mode without automatic trigger on RC Compare
#define 	AT91C_TC_WAVESEL_UP_AUTO              (0x2 << 13) // (TC) UP mode with automatic trigger on RC Compare
#define 	AT91C_TC_WAVESEL_UPDOWN_AUTO          (0x3 << 13) // (TC) UPDOWN mode with automatic trigger on RC Compare
#define AT91C_TC_CPCTRG       (0x1 << 14) // (TC) RC Compare Trigger Enable
#define AT91C_TC_WAVE         (0x1 << 15) // (TC) 
#define AT91C_TC_ACPA         (0x3 << 16) // (TC) RA Compare Effect on TIOA
#define 	AT91C_TC_ACPA_NONE                 (0x0 << 16) // (TC) Effect: none
#define 	AT91C_TC_ACPA_SET                  (0x1 << 16) // (TC) Effect: set
#define 	AT91C_TC_ACPA_CLEAR                (0x2 << 16) // (TC) Effect: clear
#define 	AT91C_TC_ACPA_TOGGLE               (0x3 << 16) // (TC) Effect: toggle
#define AT91C_TC_LDRA         (0x3 << 16) // (TC) RA Loading Selection
#define 	AT91C_TC_LDRA_NONE                 (0x0 << 16) // (TC) Edge: None
#define 	AT91C_TC_LDRA_RISING               (0x1 << 16) // (TC) Edge: rising edge of TIOA
#define 	AT91C_TC_LDRA_FALLING              (0x2 << 16) // (TC) Edge: falling edge of TIOA
#define 	AT91C_TC_LDRA_BOTH                 (0x3 << 16) // (TC) Edge: each edge of TIOA
#define AT91C_TC_ACPC         (0x3 << 18) // (TC) RC Compare Effect on TIOA
#define 	AT91C_TC_ACPC_NONE                 (0x0 << 18) // (TC) Effect: none
#define 	AT91C_TC_ACPC_SET                  (0x1 << 18) // (TC) Effect: set
#define 	AT91C_TC_ACPC_CLEAR                (0x2 << 18) // (TC) Effect: clear
#define 	AT91C_TC_ACPC_TOGGLE               (0x3 << 18) // (TC) Effect: toggle
#define AT91C_TC_LDRB         (0x3 << 18) // (TC) RB Loading Selection
#define 	AT91C_TC_LDRB_NONE                 (0x0 << 18) // (TC) Edge: None
#define 	AT91C_TC_LDRB_RISING               (0x1 << 18) // (TC) Edge: rising edge of TIOA
#define 	AT91C_TC_LDRB_FALLING              (0x2 << 18) // (TC) Edge: falling edge of TIOA
#define 	AT91C_TC_LDRB_BOTH                 (0x3 << 18) // (TC) Edge: each edge of TIOA
#define AT91C_TC_AEEVT        (0x3 << 20) // (TC) External Event Effect on TIOA
#define 	AT91C_TC_AEEVT_NONE                 (0x0 << 20) // (TC) Effect: none
#define 	AT91C_TC_AEEVT_SET                  (0x1 << 20) // (TC) Effect: set
#define 	AT91C_TC_AEEVT_CLEAR                (0x2 << 20) // (TC) Effect: clear
#define 	AT91C_TC_AEEVT_TOGGLE               (0x3 << 20) // (TC) Effect: toggle
#define AT91C_TC_ASWTRG       (0x3 << 22) // (TC) Software Trigger Effect on TIOA
#define 	AT91C_TC_ASWTRG_NONE                 (0x0 << 22) // (TC) Effect: none
#define 	AT91C_TC_ASWTRG_SET                  (0x1 << 22) // (TC) Effect: set
#define 	AT91C_TC_ASWTRG_CLEAR                (0x2 << 22) // (TC) Effect: clear
#define 	AT91C_TC_ASWTRG_TOGGLE               (0x3 << 22) // (TC) Effect: toggle
#define AT91C_TC_BCPB         (0x3 << 24) // (TC) RB Compare Effect on TIOB
#define 	AT91C_TC_BCPB_NONE                 (0x0 << 24) // (TC) Effect: none
#define 	AT91C_TC_BCPB_SET                  (0x1 << 24) // (TC) Effect: set
#define 	AT91C_TC_BCPB_CLEAR                (0x2 << 24) // (TC) Effect: clear
#define 	AT91C_TC_BCPB_TOGGLE               (0x3 << 24) // (TC) Effect: toggle
#define AT91C_TC_BCPC         (0x3 << 26) // (TC) RC Compare Effect on TIOB
#define 	AT91C_TC_BCPC_NONE                 (0x0 << 26) // (TC) Effect: none
#define 	AT91C_TC_BCPC_SET                  (0x1 << 26) // (TC) Effect: set
#define 	AT91C_TC_BCPC_CLEAR                (0x2 << 26) // (TC) Effect: clear
#define 	AT91C_TC_BCPC_TOGGLE               (0x3 << 26) // (TC) Effect: toggle
#define AT91C_TC_BEEVT        (0x3 << 28) // (TC) External Event Effect on TIOB
#define 	AT91C_TC_BEEVT_NONE                 (0x0 << 28) // (TC) Effect: none
#define 	AT91C_TC_BEEVT_SET                  (0x1 << 28) // (TC) Effect: set
#define 	AT91C_TC_BEEVT_CLEAR                (0x2 << 28) // (TC) Effect: clear
#define 	AT91C_TC_BEEVT_TOGGLE               (0x3 << 28) // (TC) Effect: toggle
#define AT91C_TC_BSWTRG       (0x3 << 30) // (TC) Software Trigger Effect on TIOB
#define 	AT91C_TC_BSWTRG_NONE                 (0x0 << 30) // (TC) Effect: none
#define 	AT91C_TC_BSWTRG_SET                  (0x1 << 30) // (TC) Effect: set
#define 	AT91C_TC_BSWTRG_CLEAR                (0x2 << 30) // (TC) Effect: clear
#define 	AT91C_TC_BSWTRG_TOGGLE               (0x3 << 30) // (TC) Effect: toggle
// -------- TC_SR : (TC Offset: 0x20) TC Channel Status Register -------- 
#define AT91C_TC_COVFS        (0x1 <<  0) // (TC) Counter Overflow
#define AT91C_TC_LOVRS        (0x1 <<  1) // (TC) Load Overrun
#define AT91C_TC_CPAS         (0x1 <<  2) // (TC) RA Compare
#define AT91C_TC_CPBS         (0x1 <<  3) // (TC) RB Compare
#define AT91C_TC_CPCS         (0x1 <<  4) // (TC) RC Compare
#define AT91C_TC_LDRAS        (0x1 <<  5) // (TC) RA Loading
#define AT91C_TC_LDRBS        (0x1 <<  6) // (TC) RB Loading
#define AT91C_TC_ETRGS        (0x1 <<  7) // (TC) External Trigger
#define AT91C_TC_CLKSTA       (0x1 << 16) // (TC) Clock Enabling
#define AT91C_TC_MTIOA        (0x1 << 17) // (TC) TIOA Mirror
#define AT91C_TC_MTIOB        (0x1 << 18) // (TC) TIOA Mirror
// -------- TC_IER : (TC Offset: 0x24) TC Channel Interrupt Enable Register -------- 
// -------- TC_IDR : (TC Offset: 0x28) TC Channel Interrupt Disable Register -------- 
// -------- TC_IMR : (TC Offset: 0x2c) TC Channel Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Timer Counter Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_TCB {
	AT91S_TC	 TCB_TC0; 	// TC Channel 0
	AT91_REG	 Reserved0[4]; 	// 
	AT91S_TC	 TCB_TC1; 	// TC Channel 1
	AT91_REG	 Reserved1[4]; 	// 
	AT91S_TC	 TCB_TC2; 	// TC Channel 2
	AT91_REG	 Reserved2[4]; 	// 
	AT91_REG	 TCB_BCR; 	// TC Block Control Register
	AT91_REG	 TCB_BMR; 	// TC Block Mode Register
	AT91_REG	 Reserved3[9]; 	// 
	AT91_REG	 TCB_ADDRSIZE; 	// TC ADDRSIZE REGISTER 
	AT91_REG	 TCB_IPNAME1; 	// TC IPNAME1 REGISTER 
	AT91_REG	 TCB_IPNAME2; 	// TC IPNAME2 REGISTER 
	AT91_REG	 TCB_FEATURES; 	// TC FEATURES REGISTER 
	AT91_REG	 TCB_VER; 	//  Version Register
} AT91S_TCB, *AT91PS_TCB;
#else
#define TCB_BCR         (AT91_CAST(AT91_REG *) 	0x000000C0) // (TCB_BCR) TC Block Control Register
#define TCB_BMR         (AT91_CAST(AT91_REG *) 	0x000000C4) // (TCB_BMR) TC Block Mode Register
#define TC_ADDRSIZE     (AT91_CAST(AT91_REG *) 	0x000000EC) // (TC_ADDRSIZE) TC ADDRSIZE REGISTER 
#define TC_IPNAME1      (AT91_CAST(AT91_REG *) 	0x000000F0) // (TC_IPNAME1) TC IPNAME1 REGISTER 
#define TC_IPNAME2      (AT91_CAST(AT91_REG *) 	0x000000F4) // (TC_IPNAME2) TC IPNAME2 REGISTER 
#define TC_FEATURES     (AT91_CAST(AT91_REG *) 	0x000000F8) // (TC_FEATURES) TC FEATURES REGISTER 
#define TC_VER          (AT91_CAST(AT91_REG *) 	0x000000FC) // (TC_VER)  Version Register

#endif
// -------- TCB_BCR : (TCB Offset: 0xc0) TC Block Control Register -------- 
#define AT91C_TCB_SYNC        (0x1 <<  0) // (TCB) Synchro Command
// -------- TCB_BMR : (TCB Offset: 0xc4) TC Block Mode Register -------- 
#define AT91C_TCB_TC0XC0S     (0x3 <<  0) // (TCB) External Clock Signal 0 Selection
#define 	AT91C_TCB_TC0XC0S_TCLK0                (0x0) // (TCB) TCLK0 connected to XC0
#define 	AT91C_TCB_TC0XC0S_NONE                 (0x1) // (TCB) None signal connected to XC0
#define 	AT91C_TCB_TC0XC0S_TIOA1                (0x2) // (TCB) TIOA1 connected to XC0
#define 	AT91C_TCB_TC0XC0S_TIOA2                (0x3) // (TCB) TIOA2 connected to XC0
#define AT91C_TCB_TC1XC1S     (0x3 <<  2) // (TCB) External Clock Signal 1 Selection
#define 	AT91C_TCB_TC1XC1S_TCLK1                (0x0 <<  2) // (TCB) TCLK1 connected to XC1
#define 	AT91C_TCB_TC1XC1S_NONE                 (0x1 <<  2) // (TCB) None signal connected to XC1
#define 	AT91C_TCB_TC1XC1S_TIOA0                (0x2 <<  2) // (TCB) TIOA0 connected to XC1
#define 	AT91C_TCB_TC1XC1S_TIOA2                (0x3 <<  2) // (TCB) TIOA2 connected to XC1
#define AT91C_TCB_TC2XC2S     (0x3 <<  4) // (TCB) External Clock Signal 2 Selection
#define 	AT91C_TCB_TC2XC2S_TCLK2                (0x0 <<  4) // (TCB) TCLK2 connected to XC2
#define 	AT91C_TCB_TC2XC2S_NONE                 (0x1 <<  4) // (TCB) None signal connected to XC2
#define 	AT91C_TCB_TC2XC2S_TIOA0                (0x2 <<  4) // (TCB) TIOA0 connected to XC2
#define 	AT91C_TCB_TC2XC2S_TIOA1                (0x3 <<  4) // (TCB) TIOA2 connected to XC2

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Multimedia Card Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_MCI {
	AT91_REG	 MCI_CR; 	// MCI Control Register
	AT91_REG	 MCI_MR; 	// MCI Mode Register
	AT91_REG	 MCI_DTOR; 	// MCI Data Timeout Register
	AT91_REG	 MCI_SDCR; 	// MCI SD Card Register
	AT91_REG	 MCI_ARGR; 	// MCI Argument Register
	AT91_REG	 MCI_CMDR; 	// MCI Command Register
	AT91_REG	 MCI_BLKR; 	// MCI Block Register
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 MCI_RSPR[4]; 	// MCI Response Register
	AT91_REG	 MCI_RDR; 	// MCI Receive Data Register
	AT91_REG	 MCI_TDR; 	// MCI Transmit Data Register
	AT91_REG	 Reserved1[2]; 	// 
	AT91_REG	 MCI_SR; 	// MCI Status Register
	AT91_REG	 MCI_IER; 	// MCI Interrupt Enable Register
	AT91_REG	 MCI_IDR; 	// MCI Interrupt Disable Register
	AT91_REG	 MCI_IMR; 	// MCI Interrupt Mask Register
	AT91_REG	 Reserved2[43]; 	// 
	AT91_REG	 MCI_VR; 	// MCI Version Register
	AT91_REG	 MCI_RPR; 	// Receive Pointer Register
	AT91_REG	 MCI_RCR; 	// Receive Counter Register
	AT91_REG	 MCI_TPR; 	// Transmit Pointer Register
	AT91_REG	 MCI_TCR; 	// Transmit Counter Register
	AT91_REG	 MCI_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 MCI_RNCR; 	// Receive Next Counter Register
	AT91_REG	 MCI_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 MCI_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 MCI_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 MCI_PTSR; 	// PDC Transfer Status Register
} AT91S_MCI, *AT91PS_MCI;
#else
#define MCI_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (MCI_CR) MCI Control Register
#define MCI_MR          (AT91_CAST(AT91_REG *) 	0x00000004) // (MCI_MR) MCI Mode Register
#define MCI_DTOR        (AT91_CAST(AT91_REG *) 	0x00000008) // (MCI_DTOR) MCI Data Timeout Register
#define MCI_SDCR        (AT91_CAST(AT91_REG *) 	0x0000000C) // (MCI_SDCR) MCI SD Card Register
#define MCI_ARGR        (AT91_CAST(AT91_REG *) 	0x00000010) // (MCI_ARGR) MCI Argument Register
#define MCI_CMDR        (AT91_CAST(AT91_REG *) 	0x00000014) // (MCI_CMDR) MCI Command Register
#define MCI_BLKR        (AT91_CAST(AT91_REG *) 	0x00000018) // (MCI_BLKR) MCI Block Register
#define MCI_RSPR        (AT91_CAST(AT91_REG *) 	0x00000020) // (MCI_RSPR) MCI Response Register
#define MCI_RDR         (AT91_CAST(AT91_REG *) 	0x00000030) // (MCI_RDR) MCI Receive Data Register
#define MCI_TDR         (AT91_CAST(AT91_REG *) 	0x00000034) // (MCI_TDR) MCI Transmit Data Register
#define MCI_SR          (AT91_CAST(AT91_REG *) 	0x00000040) // (MCI_SR) MCI Status Register
#define MCI_IER         (AT91_CAST(AT91_REG *) 	0x00000044) // (MCI_IER) MCI Interrupt Enable Register
#define MCI_IDR         (AT91_CAST(AT91_REG *) 	0x00000048) // (MCI_IDR) MCI Interrupt Disable Register
#define MCI_IMR         (AT91_CAST(AT91_REG *) 	0x0000004C) // (MCI_IMR) MCI Interrupt Mask Register
#define MCI_VR          (AT91_CAST(AT91_REG *) 	0x000000FC) // (MCI_VR) MCI Version Register

#endif
// -------- MCI_CR : (MCI Offset: 0x0) MCI Control Register -------- 
#define AT91C_MCI_MCIEN       (0x1 <<  0) // (MCI) Multimedia Interface Enable
#define 	AT91C_MCI_MCIEN_0                    (0x0) // (MCI) No effect
#define 	AT91C_MCI_MCIEN_1                    (0x1) // (MCI) Enable the MultiMedia Interface if MCIDIS is 0
#define AT91C_MCI_MCIDIS      (0x1 <<  1) // (MCI) Multimedia Interface Disable
#define 	AT91C_MCI_MCIDIS_0                    (0x0 <<  1) // (MCI) No effect
#define 	AT91C_MCI_MCIDIS_1                    (0x1 <<  1) // (MCI) Disable the MultiMedia Interface
#define AT91C_MCI_PWSEN       (0x1 <<  2) // (MCI) Power Save Mode Enable
#define 	AT91C_MCI_PWSEN_0                    (0x0 <<  2) // (MCI) No effect
#define 	AT91C_MCI_PWSEN_1                    (0x1 <<  2) // (MCI) Enable the Power-saving mode if PWSDIS is 0.
#define AT91C_MCI_PWSDIS      (0x1 <<  3) // (MCI) Power Save Mode Disable
#define 	AT91C_MCI_PWSDIS_0                    (0x0 <<  3) // (MCI) No effect
#define 	AT91C_MCI_PWSDIS_1                    (0x1 <<  3) // (MCI) Disable the Power-saving mode.
#define AT91C_MCI_SWRST       (0x1 <<  7) // (MCI) MCI Software reset
#define 	AT91C_MCI_SWRST_0                    (0x0 <<  7) // (MCI) No effect
#define 	AT91C_MCI_SWRST_1                    (0x1 <<  7) // (MCI) Resets the MCI
// -------- MCI_MR : (MCI Offset: 0x4) MCI Mode Register -------- 
#define AT91C_MCI_CLKDIV      (0xFF <<  0) // (MCI) Clock Divider
#define AT91C_MCI_PWSDIV      (0x7 <<  8) // (MCI) Power Saving Divider
#define AT91C_MCI_RDPROOF     (0x1 << 11) // (MCI) Read Proof Enable
#define 	AT91C_MCI_RDPROOF_DISABLE              (0x0 << 11) // (MCI) Disables Read Proof
#define 	AT91C_MCI_RDPROOF_ENABLE               (0x1 << 11) // (MCI) Enables Read Proof
#define AT91C_MCI_WRPROOF     (0x1 << 12) // (MCI) Write Proof Enable
#define 	AT91C_MCI_WRPROOF_DISABLE              (0x0 << 12) // (MCI) Disables Write Proof
#define 	AT91C_MCI_WRPROOF_ENABLE               (0x1 << 12) // (MCI) Enables Write Proof
#define AT91C_MCI_PDCFBYTE    (0x1 << 13) // (MCI) PDC Force Byte Transfer
#define 	AT91C_MCI_PDCFBYTE_DISABLE              (0x0 << 13) // (MCI) Disables PDC Force Byte Transfer
#define 	AT91C_MCI_PDCFBYTE_ENABLE               (0x1 << 13) // (MCI) Enables PDC Force Byte Transfer
#define AT91C_MCI_PDCPADV     (0x1 << 14) // (MCI) PDC Padding Value
#define AT91C_MCI_PDCMODE     (0x1 << 15) // (MCI) PDC Oriented Mode
#define 	AT91C_MCI_PDCMODE_DISABLE              (0x0 << 15) // (MCI) Disables PDC Transfer
#define 	AT91C_MCI_PDCMODE_ENABLE               (0x1 << 15) // (MCI) Enables PDC Transfer
#define AT91C_MCI_BLKLEN      (0xFFFF << 16) // (MCI) Data Block Length
// -------- MCI_DTOR : (MCI Offset: 0x8) MCI Data Timeout Register -------- 
#define AT91C_MCI_DTOCYC      (0xF <<  0) // (MCI) Data Timeout Cycle Number
#define AT91C_MCI_DTOMUL      (0x7 <<  4) // (MCI) Data Timeout Multiplier
#define 	AT91C_MCI_DTOMUL_1                    (0x0 <<  4) // (MCI) DTOCYC x 1
#define 	AT91C_MCI_DTOMUL_16                   (0x1 <<  4) // (MCI) DTOCYC x 16
#define 	AT91C_MCI_DTOMUL_128                  (0x2 <<  4) // (MCI) DTOCYC x 128
#define 	AT91C_MCI_DTOMUL_256                  (0x3 <<  4) // (MCI) DTOCYC x 256
#define 	AT91C_MCI_DTOMUL_1024                 (0x4 <<  4) // (MCI) DTOCYC x 1024
#define 	AT91C_MCI_DTOMUL_4096                 (0x5 <<  4) // (MCI) DTOCYC x 4096
#define 	AT91C_MCI_DTOMUL_65536                (0x6 <<  4) // (MCI) DTOCYC x 65536
#define 	AT91C_MCI_DTOMUL_1048576              (0x7 <<  4) // (MCI) DTOCYC x 1048576
// -------- MCI_SDCR : (MCI Offset: 0xc) MCI SD Card Register -------- 
#define AT91C_MCI_SCDSEL      (0x3 <<  0) // (MCI) SD Card Selector
#define 	AT91C_MCI_SCDSEL_SLOTA                (0x0) // (MCI) Slot A selected
#define 	AT91C_MCI_SCDSEL_SLOTB                (0x1) // (MCI) Slot B selected
#define 	AT91C_MCI_SCDSEL_RESERVED1            (0x2) // (MCI) 
#define 	AT91C_MCI_SCDSEL_RESERVED2            (0x3) // (MCI) 
#define AT91C_MCI_SCDBUS      (0x1 <<  7) // (MCI) SDCard/SDIO Bus Width
#define 	AT91C_MCI_SCDBUS_1BIT                 (0x0 <<  7) // (MCI) 1-bit data bus
#define 	AT91C_MCI_SCDBUS_4BITS                (0x1 <<  7) // (MCI) 4-bits data bus
// -------- MCI_CMDR : (MCI Offset: 0x14) MCI Command Register -------- 
#define AT91C_MCI_CMDNB       (0x3F <<  0) // (MCI) Command Number
#define AT91C_MCI_RSPTYP      (0x3 <<  6) // (MCI) Response Type
#define 	AT91C_MCI_RSPTYP_NO                   (0x0 <<  6) // (MCI) No response
#define 	AT91C_MCI_RSPTYP_48                   (0x1 <<  6) // (MCI) 48-bit response
#define 	AT91C_MCI_RSPTYP_136                  (0x2 <<  6) // (MCI) 136-bit response
#define AT91C_MCI_SPCMD       (0x7 <<  8) // (MCI) Special CMD
#define 	AT91C_MCI_SPCMD_NONE                 (0x0 <<  8) // (MCI) Not a special CMD
#define 	AT91C_MCI_SPCMD_INIT                 (0x1 <<  8) // (MCI) Initialization CMD
#define 	AT91C_MCI_SPCMD_SYNC                 (0x2 <<  8) // (MCI) Synchronized CMD
#define 	AT91C_MCI_SPCMD_IT_CMD               (0x4 <<  8) // (MCI) Interrupt command
#define 	AT91C_MCI_SPCMD_IT_REP               (0x5 <<  8) // (MCI) Interrupt response
#define AT91C_MCI_OPDCMD      (0x1 << 11) // (MCI) Open Drain Command
#define 	AT91C_MCI_OPDCMD_PUSHPULL             (0x0 << 11) // (MCI) Push/pull command
#define 	AT91C_MCI_OPDCMD_OPENDRAIN            (0x1 << 11) // (MCI) Open drain command
#define AT91C_MCI_MAXLAT      (0x1 << 12) // (MCI) Maximum Latency for Command to respond
#define 	AT91C_MCI_MAXLAT_5                    (0x0 << 12) // (MCI) 5 cycles maximum latency
#define 	AT91C_MCI_MAXLAT_64                   (0x1 << 12) // (MCI) 64 cycles maximum latency
#define AT91C_MCI_TRCMD       (0x3 << 16) // (MCI) Transfer CMD
#define 	AT91C_MCI_TRCMD_NO                   (0x0 << 16) // (MCI) No transfer
#define 	AT91C_MCI_TRCMD_START                (0x1 << 16) // (MCI) Start transfer
#define 	AT91C_MCI_TRCMD_STOP                 (0x2 << 16) // (MCI) Stop transfer
#define AT91C_MCI_TRDIR       (0x1 << 18) // (MCI) Transfer Direction
#define 	AT91C_MCI_TRDIR_WRITE                (0x0 << 18) // (MCI) Write
#define 	AT91C_MCI_TRDIR_READ                 (0x1 << 18) // (MCI) Read
#define AT91C_MCI_TRTYP       (0x7 << 19) // (MCI) Transfer Type
#define 	AT91C_MCI_TRTYP_BLOCK                (0x0 << 19) // (MCI) MMC/SDCard Single Block Transfer type
#define 	AT91C_MCI_TRTYP_MULTIPLE             (0x1 << 19) // (MCI) MMC/SDCard Multiple Block transfer type
#define 	AT91C_MCI_TRTYP_STREAM               (0x2 << 19) // (MCI) MMC Stream transfer type
#define 	AT91C_MCI_TRTYP_SDIO_BYTE            (0x4 << 19) // (MCI) SDIO Byte transfer type
#define 	AT91C_MCI_TRTYP_SDIO_BLOCK           (0x5 << 19) // (MCI) SDIO Block transfer type
#define AT91C_MCI_IOSPCMD     (0x3 << 24) // (MCI) SDIO Special Command
#define 	AT91C_MCI_IOSPCMD_NONE                 (0x0 << 24) // (MCI) NOT a special command
#define 	AT91C_MCI_IOSPCMD_SUSPEND              (0x1 << 24) // (MCI) SDIO Suspend Command
#define 	AT91C_MCI_IOSPCMD_RESUME               (0x2 << 24) // (MCI) SDIO Resume Command
// -------- MCI_BLKR : (MCI Offset: 0x18) MCI Block Register -------- 
#define AT91C_MCI_BCNT        (0xFFFF <<  0) // (MCI) MMC/SDIO Block Count / SDIO Byte Count
// -------- MCI_SR : (MCI Offset: 0x40) MCI Status Register -------- 
#define AT91C_MCI_CMDRDY      (0x1 <<  0) // (MCI) Command Ready flag
#define AT91C_MCI_RXRDY       (0x1 <<  1) // (MCI) RX Ready flag
#define AT91C_MCI_TXRDY       (0x1 <<  2) // (MCI) TX Ready flag
#define AT91C_MCI_BLKE        (0x1 <<  3) // (MCI) Data Block Transfer Ended flag
#define AT91C_MCI_DTIP        (0x1 <<  4) // (MCI) Data Transfer in Progress flag
#define AT91C_MCI_NOTBUSY     (0x1 <<  5) // (MCI) Data Line Not Busy flag
#define AT91C_MCI_ENDRX       (0x1 <<  6) // (MCI) End of RX Buffer flag
#define AT91C_MCI_ENDTX       (0x1 <<  7) // (MCI) End of TX Buffer flag
#define AT91C_MCI_SDIOIRQA    (0x1 <<  8) // (MCI) SDIO Interrupt for Slot A
#define AT91C_MCI_SDIOIRQB    (0x1 <<  9) // (MCI) SDIO Interrupt for Slot B
#define AT91C_MCI_SDIOIRQC    (0x1 << 10) // (MCI) SDIO Interrupt for Slot C
#define AT91C_MCI_SDIOIRQD    (0x1 << 11) // (MCI) SDIO Interrupt for Slot D
#define AT91C_MCI_RXBUFF      (0x1 << 14) // (MCI) RX Buffer Full flag
#define AT91C_MCI_TXBUFE      (0x1 << 15) // (MCI) TX Buffer Empty flag
#define AT91C_MCI_RINDE       (0x1 << 16) // (MCI) Response Index Error flag
#define AT91C_MCI_RDIRE       (0x1 << 17) // (MCI) Response Direction Error flag
#define AT91C_MCI_RCRCE       (0x1 << 18) // (MCI) Response CRC Error flag
#define AT91C_MCI_RENDE       (0x1 << 19) // (MCI) Response End Bit Error flag
#define AT91C_MCI_RTOE        (0x1 << 20) // (MCI) Response Time-out Error flag
#define AT91C_MCI_DCRCE       (0x1 << 21) // (MCI) data CRC Error flag
#define AT91C_MCI_DTOE        (0x1 << 22) // (MCI) Data timeout Error flag
#define AT91C_MCI_OVRE        (0x1 << 30) // (MCI) Overrun flag
#define AT91C_MCI_UNRE        (0x1 << 31) // (MCI) Underrun flag
// -------- MCI_IER : (MCI Offset: 0x44) MCI Interrupt Enable Register -------- 
// -------- MCI_IDR : (MCI Offset: 0x48) MCI Interrupt Disable Register -------- 
// -------- MCI_IMR : (MCI Offset: 0x4c) MCI Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Two-wire Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_TWI {
	AT91_REG	 TWI_CR; 	// Control Register
	AT91_REG	 TWI_MMR; 	// Master Mode Register
	AT91_REG	 TWI_SMR; 	// Slave Mode Register
	AT91_REG	 TWI_IADR; 	// Internal Address Register
	AT91_REG	 TWI_CWGR; 	// Clock Waveform Generator Register
	AT91_REG	 Reserved0[3]; 	// 
	AT91_REG	 TWI_SR; 	// Status Register
	AT91_REG	 TWI_IER; 	// Interrupt Enable Register
	AT91_REG	 TWI_IDR; 	// Interrupt Disable Register
	AT91_REG	 TWI_IMR; 	// Interrupt Mask Register
	AT91_REG	 TWI_RHR; 	// Receive Holding Register
	AT91_REG	 TWI_THR; 	// Transmit Holding Register
	AT91_REG	 Reserved1[45]; 	// 
	AT91_REG	 TWI_ADDRSIZE; 	// TWI ADDRSIZE REGISTER 
	AT91_REG	 TWI_IPNAME1; 	// TWI IPNAME1 REGISTER 
	AT91_REG	 TWI_IPNAME2; 	// TWI IPNAME2 REGISTER 
	AT91_REG	 TWI_FEATURES; 	// TWI FEATURES REGISTER 
	AT91_REG	 TWI_VER; 	// Version Register
	AT91_REG	 TWI_RPR; 	// Receive Pointer Register
	AT91_REG	 TWI_RCR; 	// Receive Counter Register
	AT91_REG	 TWI_TPR; 	// Transmit Pointer Register
	AT91_REG	 TWI_TCR; 	// Transmit Counter Register
	AT91_REG	 TWI_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 TWI_RNCR; 	// Receive Next Counter Register
	AT91_REG	 TWI_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 TWI_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 TWI_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 TWI_PTSR; 	// PDC Transfer Status Register
} AT91S_TWI, *AT91PS_TWI;
#else
#define TWI_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (TWI_CR) Control Register
#define TWI_MMR         (AT91_CAST(AT91_REG *) 	0x00000004) // (TWI_MMR) Master Mode Register
#define TWI_SMR         (AT91_CAST(AT91_REG *) 	0x00000008) // (TWI_SMR) Slave Mode Register
#define TWI_IADR        (AT91_CAST(AT91_REG *) 	0x0000000C) // (TWI_IADR) Internal Address Register
#define TWI_CWGR        (AT91_CAST(AT91_REG *) 	0x00000010) // (TWI_CWGR) Clock Waveform Generator Register
#define TWI_SR          (AT91_CAST(AT91_REG *) 	0x00000020) // (TWI_SR) Status Register
#define TWI_IER         (AT91_CAST(AT91_REG *) 	0x00000024) // (TWI_IER) Interrupt Enable Register
#define TWI_IDR         (AT91_CAST(AT91_REG *) 	0x00000028) // (TWI_IDR) Interrupt Disable Register
#define TWI_IMR         (AT91_CAST(AT91_REG *) 	0x0000002C) // (TWI_IMR) Interrupt Mask Register
#define TWI_RHR         (AT91_CAST(AT91_REG *) 	0x00000030) // (TWI_RHR) Receive Holding Register
#define TWI_THR         (AT91_CAST(AT91_REG *) 	0x00000034) // (TWI_THR) Transmit Holding Register
#define TWI_ADDRSIZE    (AT91_CAST(AT91_REG *) 	0x000000EC) // (TWI_ADDRSIZE) TWI ADDRSIZE REGISTER 
#define TWI_IPNAME1     (AT91_CAST(AT91_REG *) 	0x000000F0) // (TWI_IPNAME1) TWI IPNAME1 REGISTER 
#define TWI_IPNAME2     (AT91_CAST(AT91_REG *) 	0x000000F4) // (TWI_IPNAME2) TWI IPNAME2 REGISTER 
#define TWI_FEATURES    (AT91_CAST(AT91_REG *) 	0x000000F8) // (TWI_FEATURES) TWI FEATURES REGISTER 
#define TWI_VER         (AT91_CAST(AT91_REG *) 	0x000000FC) // (TWI_VER) Version Register

#endif
// -------- TWI_CR : (TWI Offset: 0x0) TWI Control Register -------- 
#define AT91C_TWI_START       (0x1 <<  0) // (TWI) Send a START Condition
#define AT91C_TWI_STOP        (0x1 <<  1) // (TWI) Send a STOP Condition
#define AT91C_TWI_MSEN        (0x1 <<  2) // (TWI) TWI Master Transfer Enabled
#define AT91C_TWI_MSDIS       (0x1 <<  3) // (TWI) TWI Master Transfer Disabled
#define AT91C_TWI_SVEN        (0x1 <<  4) // (TWI) TWI Slave mode Enabled
#define AT91C_TWI_SVDIS       (0x1 <<  5) // (TWI) TWI Slave mode Disabled
#define AT91C_TWI_SWRST       (0x1 <<  7) // (TWI) Software Reset
// -------- TWI_MMR : (TWI Offset: 0x4) TWI Master Mode Register -------- 
#define AT91C_TWI_IADRSZ      (0x3 <<  8) // (TWI) Internal Device Address Size
#define 	AT91C_TWI_IADRSZ_NO                   (0x0 <<  8) // (TWI) No internal device address
#define 	AT91C_TWI_IADRSZ_1_BYTE               (0x1 <<  8) // (TWI) One-byte internal device address
#define 	AT91C_TWI_IADRSZ_2_BYTE               (0x2 <<  8) // (TWI) Two-byte internal device address
#define 	AT91C_TWI_IADRSZ_3_BYTE               (0x3 <<  8) // (TWI) Three-byte internal device address
#define AT91C_TWI_MREAD       (0x1 << 12) // (TWI) Master Read Direction
#define AT91C_TWI_DADR        (0x7F << 16) // (TWI) Device Address
// -------- TWI_SMR : (TWI Offset: 0x8) TWI Slave Mode Register -------- 
#define AT91C_TWI_SADR        (0x7F << 16) // (TWI) Slave Address
// -------- TWI_CWGR : (TWI Offset: 0x10) TWI Clock Waveform Generator Register -------- 
#define AT91C_TWI_CLDIV       (0xFF <<  0) // (TWI) Clock Low Divider
#define AT91C_TWI_CHDIV       (0xFF <<  8) // (TWI) Clock High Divider
#define AT91C_TWI_CKDIV       (0x7 << 16) // (TWI) Clock Divider
// -------- TWI_SR : (TWI Offset: 0x20) TWI Status Register -------- 
#define AT91C_TWI_TXCOMP_SLAVE (0x1 <<  0) // (TWI) Transmission Completed
#define AT91C_TWI_TXCOMP_MASTER (0x1 <<  0) // (TWI) Transmission Completed
#define AT91C_TWI_RXRDY       (0x1 <<  1) // (TWI) Receive holding register ReaDY
#define AT91C_TWI_TXRDY_MASTER (0x1 <<  2) // (TWI) Transmit holding register ReaDY
#define AT91C_TWI_TXRDY_SLAVE (0x1 <<  2) // (TWI) Transmit holding register ReaDY
#define AT91C_TWI_SVREAD      (0x1 <<  3) // (TWI) Slave READ (used only in Slave mode)
#define AT91C_TWI_SVACC       (0x1 <<  4) // (TWI) Slave ACCess (used only in Slave mode)
#define AT91C_TWI_GACC        (0x1 <<  5) // (TWI) General Call ACcess (used only in Slave mode)
#define AT91C_TWI_OVRE        (0x1 <<  6) // (TWI) Overrun Error (used only in Master and Multi-master mode)
#define AT91C_TWI_NACK_SLAVE  (0x1 <<  8) // (TWI) Not Acknowledged
#define AT91C_TWI_NACK_MASTER (0x1 <<  8) // (TWI) Not Acknowledged
#define AT91C_TWI_ARBLST_MULTI_MASTER (0x1 <<  9) // (TWI) Arbitration Lost (used only in Multimaster mode)
#define AT91C_TWI_SCLWS       (0x1 << 10) // (TWI) Clock Wait State (used only in Slave mode)
#define AT91C_TWI_EOSACC      (0x1 << 11) // (TWI) End Of Slave ACCess (used only in Slave mode)
#define AT91C_TWI_ENDRX       (0x1 << 12) // (TWI) End of Receiver Transfer
#define AT91C_TWI_ENDTX       (0x1 << 13) // (TWI) End of Receiver Transfer
#define AT91C_TWI_RXBUFF      (0x1 << 14) // (TWI) RXBUFF Interrupt
#define AT91C_TWI_TXBUFE      (0x1 << 15) // (TWI) TXBUFE Interrupt
// -------- TWI_IER : (TWI Offset: 0x24) TWI Interrupt Enable Register -------- 
// -------- TWI_IDR : (TWI Offset: 0x28) TWI Interrupt Disable Register -------- 
// -------- TWI_IMR : (TWI Offset: 0x2c) TWI Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Usart
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_USART {
	AT91_REG	 US_CR; 	// Control Register
	AT91_REG	 US_MR; 	// Mode Register
	AT91_REG	 US_IER; 	// Interrupt Enable Register
	AT91_REG	 US_IDR; 	// Interrupt Disable Register
	AT91_REG	 US_IMR; 	// Interrupt Mask Register
	AT91_REG	 US_CSR; 	// Channel Status Register
	AT91_REG	 US_RHR; 	// Receiver Holding Register
	AT91_REG	 US_THR; 	// Transmitter Holding Register
	AT91_REG	 US_BRGR; 	// Baud Rate Generator Register
	AT91_REG	 US_RTOR; 	// Receiver Time-out Register
	AT91_REG	 US_TTGR; 	// Transmitter Time-guard Register
	AT91_REG	 Reserved0[5]; 	// 
	AT91_REG	 US_FIDI; 	// FI_DI_Ratio Register
	AT91_REG	 US_NER; 	// Nb Errors Register
	AT91_REG	 Reserved1[1]; 	// 
	AT91_REG	 US_IF; 	// IRDA_FILTER Register
	AT91_REG	 US_MAN; 	// Manchester Encoder Decoder Register
	AT91_REG	 Reserved2[38]; 	// 
	AT91_REG	 US_ADDRSIZE; 	// US ADDRSIZE REGISTER 
	AT91_REG	 US_IPNAME1; 	// US IPNAME1 REGISTER 
	AT91_REG	 US_IPNAME2; 	// US IPNAME2 REGISTER 
	AT91_REG	 US_FEATURES; 	// US FEATURES REGISTER 
	AT91_REG	 US_VER; 	// VERSION Register
	AT91_REG	 US_RPR; 	// Receive Pointer Register
	AT91_REG	 US_RCR; 	// Receive Counter Register
	AT91_REG	 US_TPR; 	// Transmit Pointer Register
	AT91_REG	 US_TCR; 	// Transmit Counter Register
	AT91_REG	 US_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 US_RNCR; 	// Receive Next Counter Register
	AT91_REG	 US_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 US_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 US_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 US_PTSR; 	// PDC Transfer Status Register
} AT91S_USART, *AT91PS_USART;
#else
#define US_CR           (AT91_CAST(AT91_REG *) 	0x00000000) // (US_CR) Control Register
#define US_MR           (AT91_CAST(AT91_REG *) 	0x00000004) // (US_MR) Mode Register
#define US_IER          (AT91_CAST(AT91_REG *) 	0x00000008) // (US_IER) Interrupt Enable Register
#define US_IDR          (AT91_CAST(AT91_REG *) 	0x0000000C) // (US_IDR) Interrupt Disable Register
#define US_IMR          (AT91_CAST(AT91_REG *) 	0x00000010) // (US_IMR) Interrupt Mask Register
#define US_CSR          (AT91_CAST(AT91_REG *) 	0x00000014) // (US_CSR) Channel Status Register
#define US_RHR          (AT91_CAST(AT91_REG *) 	0x00000018) // (US_RHR) Receiver Holding Register
#define US_THR          (AT91_CAST(AT91_REG *) 	0x0000001C) // (US_THR) Transmitter Holding Register
#define US_BRGR         (AT91_CAST(AT91_REG *) 	0x00000020) // (US_BRGR) Baud Rate Generator Register
#define US_RTOR         (AT91_CAST(AT91_REG *) 	0x00000024) // (US_RTOR) Receiver Time-out Register
#define US_TTGR         (AT91_CAST(AT91_REG *) 	0x00000028) // (US_TTGR) Transmitter Time-guard Register
#define US_FIDI         (AT91_CAST(AT91_REG *) 	0x00000040) // (US_FIDI) FI_DI_Ratio Register
#define US_NER          (AT91_CAST(AT91_REG *) 	0x00000044) // (US_NER) Nb Errors Register
#define US_IF           (AT91_CAST(AT91_REG *) 	0x0000004C) // (US_IF) IRDA_FILTER Register
#define US_MAN          (AT91_CAST(AT91_REG *) 	0x00000050) // (US_MAN) Manchester Encoder Decoder Register
#define US_ADDRSIZE     (AT91_CAST(AT91_REG *) 	0x000000EC) // (US_ADDRSIZE) US ADDRSIZE REGISTER 
#define US_IPNAME1      (AT91_CAST(AT91_REG *) 	0x000000F0) // (US_IPNAME1) US IPNAME1 REGISTER 
#define US_IPNAME2      (AT91_CAST(AT91_REG *) 	0x000000F4) // (US_IPNAME2) US IPNAME2 REGISTER 
#define US_FEATURES     (AT91_CAST(AT91_REG *) 	0x000000F8) // (US_FEATURES) US FEATURES REGISTER 
#define US_VER          (AT91_CAST(AT91_REG *) 	0x000000FC) // (US_VER) VERSION Register

#endif
// -------- US_CR : (USART Offset: 0x0)  Control Register -------- 
#define AT91C_US_STTBRK       (0x1 <<  9) // (USART) Start Break
#define AT91C_US_STPBRK       (0x1 << 10) // (USART) Stop Break
#define AT91C_US_STTTO        (0x1 << 11) // (USART) Start Time-out
#define AT91C_US_SENDA        (0x1 << 12) // (USART) Send Address
#define AT91C_US_RSTIT        (0x1 << 13) // (USART) Reset Iterations
#define AT91C_US_RSTNACK      (0x1 << 14) // (USART) Reset Non Acknowledge
#define AT91C_US_RETTO        (0x1 << 15) // (USART) Rearm Time-out
#define AT91C_US_DTREN        (0x1 << 16) // (USART) Data Terminal ready Enable
#define AT91C_US_DTRDIS       (0x1 << 17) // (USART) Data Terminal ready Disable
#define AT91C_US_RTSEN        (0x1 << 18) // (USART) Request to Send enable
#define AT91C_US_RTSDIS       (0x1 << 19) // (USART) Request to Send Disable
// -------- US_MR : (USART Offset: 0x4)  Mode Register -------- 
#define AT91C_US_USMODE       (0xF <<  0) // (USART) Usart mode
#define 	AT91C_US_USMODE_NORMAL               (0x0) // (USART) Normal
#define 	AT91C_US_USMODE_RS485                (0x1) // (USART) RS485
#define 	AT91C_US_USMODE_HWHSH                (0x2) // (USART) Hardware Handshaking
#define 	AT91C_US_USMODE_MODEM                (0x3) // (USART) Modem
#define 	AT91C_US_USMODE_ISO7816_0            (0x4) // (USART) ISO7816 protocol: T = 0
#define 	AT91C_US_USMODE_ISO7816_1            (0x6) // (USART) ISO7816 protocol: T = 1
#define 	AT91C_US_USMODE_IRDA                 (0x8) // (USART) IrDA
#define 	AT91C_US_USMODE_SWHSH                (0xC) // (USART) Software Handshaking
#define AT91C_US_CLKS         (0x3 <<  4) // (USART) Clock Selection (Baud Rate generator Input Clock
#define 	AT91C_US_CLKS_CLOCK                (0x0 <<  4) // (USART) Clock
#define 	AT91C_US_CLKS_FDIV1                (0x1 <<  4) // (USART) fdiv1
#define 	AT91C_US_CLKS_SLOW                 (0x2 <<  4) // (USART) slow_clock (ARM)
#define 	AT91C_US_CLKS_EXT                  (0x3 <<  4) // (USART) External (SCK)
#define AT91C_US_CHRL         (0x3 <<  6) // (USART) Clock Selection (Baud Rate generator Input Clock
#define 	AT91C_US_CHRL_5_BITS               (0x0 <<  6) // (USART) Character Length: 5 bits
#define 	AT91C_US_CHRL_6_BITS               (0x1 <<  6) // (USART) Character Length: 6 bits
#define 	AT91C_US_CHRL_7_BITS               (0x2 <<  6) // (USART) Character Length: 7 bits
#define 	AT91C_US_CHRL_8_BITS               (0x3 <<  6) // (USART) Character Length: 8 bits
#define AT91C_US_SYNC         (0x1 <<  8) // (USART) Synchronous Mode Select
#define AT91C_US_NBSTOP       (0x3 << 12) // (USART) Number of Stop bits
#define 	AT91C_US_NBSTOP_1_BIT                (0x0 << 12) // (USART) 1 stop bit
#define 	AT91C_US_NBSTOP_15_BIT               (0x1 << 12) // (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits
#define 	AT91C_US_NBSTOP_2_BIT                (0x2 << 12) // (USART) 2 stop bits
#define AT91C_US_MSBF         (0x1 << 16) // (USART) Bit Order
#define AT91C_US_MODE9        (0x1 << 17) // (USART) 9-bit Character length
#define AT91C_US_CKLO         (0x1 << 18) // (USART) Clock Output Select
#define AT91C_US_OVER         (0x1 << 19) // (USART) Over Sampling Mode
#define AT91C_US_INACK        (0x1 << 20) // (USART) Inhibit Non Acknowledge
#define AT91C_US_DSNACK       (0x1 << 21) // (USART) Disable Successive NACK
#define AT91C_US_VAR_SYNC     (0x1 << 22) // (USART) Variable synchronization of command/data sync Start Frame Delimiter
#define AT91C_US_MAX_ITER     (0x1 << 24) // (USART) Number of Repetitions
#define AT91C_US_FILTER       (0x1 << 28) // (USART) Receive Line Filter
#define AT91C_US_MANMODE      (0x1 << 29) // (USART) Manchester Encoder/Decoder Enable
#define AT91C_US_MODSYNC      (0x1 << 30) // (USART) Manchester Synchronization mode
#define AT91C_US_ONEBIT       (0x1 << 31) // (USART) Start Frame Delimiter selector
// -------- US_IER : (USART Offset: 0x8)  Interrupt Enable Register -------- 
#define AT91C_US_RXBRK        (0x1 <<  2) // (USART) Break Received/End of Break
#define AT91C_US_TIMEOUT      (0x1 <<  8) // (USART) Receiver Time-out
#define AT91C_US_ITERATION    (0x1 << 10) // (USART) Max number of Repetitions Reached
#define AT91C_US_NACK         (0x1 << 13) // (USART) Non Acknowledge
#define AT91C_US_RIIC         (0x1 << 16) // (USART) Ring INdicator Input Change Flag
#define AT91C_US_DSRIC        (0x1 << 17) // (USART) Data Set Ready Input Change Flag
#define AT91C_US_DCDIC        (0x1 << 18) // (USART) Data Carrier Flag
#define AT91C_US_CTSIC        (0x1 << 19) // (USART) Clear To Send Input Change Flag
#define AT91C_US_MANE         (0x1 << 20) // (USART) Manchester Error Interrupt
// -------- US_IDR : (USART Offset: 0xc)  Interrupt Disable Register -------- 
// -------- US_IMR : (USART Offset: 0x10)  Interrupt Mask Register -------- 
// -------- US_CSR : (USART Offset: 0x14)  Channel Status Register -------- 
#define AT91C_US_RI           (0x1 << 20) // (USART) Image of RI Input
#define AT91C_US_DSR          (0x1 << 21) // (USART) Image of DSR Input
#define AT91C_US_DCD          (0x1 << 22) // (USART) Image of DCD Input
#define AT91C_US_CTS          (0x1 << 23) // (USART) Image of CTS Input
#define AT91C_US_MANERR       (0x1 << 24) // (USART) Manchester Error
// -------- US_MAN : (USART Offset: 0x50) Manchester Encoder Decoder Register -------- 
#define AT91C_US_TX_PL        (0xF <<  0) // (USART) Transmitter Preamble Length
#define AT91C_US_TX_PP        (0x3 <<  8) // (USART) Transmitter Preamble Pattern
#define 	AT91C_US_TX_PP_ALL_ONE              (0x0 <<  8) // (USART) ALL_ONE
#define 	AT91C_US_TX_PP_ALL_ZERO             (0x1 <<  8) // (USART) ALL_ZERO
#define 	AT91C_US_TX_PP_ZERO_ONE             (0x2 <<  8) // (USART) ZERO_ONE
#define 	AT91C_US_TX_PP_ONE_ZERO             (0x3 <<  8) // (USART) ONE_ZERO
#define AT91C_US_TX_MPOL      (0x1 << 12) // (USART) Transmitter Manchester Polarity
#define AT91C_US_RX_PL        (0xF << 16) // (USART) Receiver Preamble Length
#define AT91C_US_RX_PP        (0x3 << 24) // (USART) Receiver Preamble Pattern detected
#define 	AT91C_US_RX_PP_ALL_ONE              (0x0 << 24) // (USART) ALL_ONE
#define 	AT91C_US_RX_PP_ALL_ZERO             (0x1 << 24) // (USART) ALL_ZERO
#define 	AT91C_US_RX_PP_ZERO_ONE             (0x2 << 24) // (USART) ZERO_ONE
#define 	AT91C_US_RX_PP_ONE_ZERO             (0x3 << 24) // (USART) ONE_ZERO
#define AT91C_US_RX_MPOL      (0x1 << 28) // (USART) Receiver Manchester Polarity
#define AT91C_US_DRIFT        (0x1 << 30) // (USART) Drift compensation

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Synchronous Serial Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SSC {
	AT91_REG	 SSC_CR; 	// Control Register
	AT91_REG	 SSC_CMR; 	// Clock Mode Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 SSC_RCMR; 	// Receive Clock ModeRegister
	AT91_REG	 SSC_RFMR; 	// Receive Frame Mode Register
	AT91_REG	 SSC_TCMR; 	// Transmit Clock Mode Register
	AT91_REG	 SSC_TFMR; 	// Transmit Frame Mode Register
	AT91_REG	 SSC_RHR; 	// Receive Holding Register
	AT91_REG	 SSC_THR; 	// Transmit Holding Register
	AT91_REG	 Reserved1[2]; 	// 
	AT91_REG	 SSC_RSHR; 	// Receive Sync Holding Register
	AT91_REG	 SSC_TSHR; 	// Transmit Sync Holding Register
	AT91_REG	 Reserved2[2]; 	// 
	AT91_REG	 SSC_SR; 	// Status Register
	AT91_REG	 SSC_IER; 	// Interrupt Enable Register
	AT91_REG	 SSC_IDR; 	// Interrupt Disable Register
	AT91_REG	 SSC_IMR; 	// Interrupt Mask Register
	AT91_REG	 Reserved3[39]; 	// 
	AT91_REG	 SSC_ADDRSIZE; 	// SSC ADDRSIZE REGISTER 
	AT91_REG	 SSC_IPNAME1; 	// SSC IPNAME1 REGISTER 
	AT91_REG	 SSC_IPNAME2; 	// SSC IPNAME2 REGISTER 
	AT91_REG	 SSC_FEATURES; 	// SSC FEATURES REGISTER 
	AT91_REG	 SSC_VER; 	// Version Register
	AT91_REG	 SSC_RPR; 	// Receive Pointer Register
	AT91_REG	 SSC_RCR; 	// Receive Counter Register
	AT91_REG	 SSC_TPR; 	// Transmit Pointer Register
	AT91_REG	 SSC_TCR; 	// Transmit Counter Register
	AT91_REG	 SSC_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 SSC_RNCR; 	// Receive Next Counter Register
	AT91_REG	 SSC_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 SSC_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 SSC_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 SSC_PTSR; 	// PDC Transfer Status Register
} AT91S_SSC, *AT91PS_SSC;
#else
#define SSC_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (SSC_CR) Control Register
#define SSC_CMR         (AT91_CAST(AT91_REG *) 	0x00000004) // (SSC_CMR) Clock Mode Register
#define SSC_RCMR        (AT91_CAST(AT91_REG *) 	0x00000010) // (SSC_RCMR) Receive Clock ModeRegister
#define SSC_RFMR        (AT91_CAST(AT91_REG *) 	0x00000014) // (SSC_RFMR) Receive Frame Mode Register
#define SSC_TCMR        (AT91_CAST(AT91_REG *) 	0x00000018) // (SSC_TCMR) Transmit Clock Mode Register
#define SSC_TFMR        (AT91_CAST(AT91_REG *) 	0x0000001C) // (SSC_TFMR) Transmit Frame Mode Register
#define SSC_RHR         (AT91_CAST(AT91_REG *) 	0x00000020) // (SSC_RHR) Receive Holding Register
#define SSC_THR         (AT91_CAST(AT91_REG *) 	0x00000024) // (SSC_THR) Transmit Holding Register
#define SSC_RSHR        (AT91_CAST(AT91_REG *) 	0x00000030) // (SSC_RSHR) Receive Sync Holding Register
#define SSC_TSHR        (AT91_CAST(AT91_REG *) 	0x00000034) // (SSC_TSHR) Transmit Sync Holding Register
#define SSC_SR          (AT91_CAST(AT91_REG *) 	0x00000040) // (SSC_SR) Status Register
#define SSC_IER         (AT91_CAST(AT91_REG *) 	0x00000044) // (SSC_IER) Interrupt Enable Register
#define SSC_IDR         (AT91_CAST(AT91_REG *) 	0x00000048) // (SSC_IDR) Interrupt Disable Register
#define SSC_IMR         (AT91_CAST(AT91_REG *) 	0x0000004C) // (SSC_IMR) Interrupt Mask Register
#define SSC_ADDRSIZE    (AT91_CAST(AT91_REG *) 	0x000000EC) // (SSC_ADDRSIZE) SSC ADDRSIZE REGISTER 
#define SSC_IPNAME1     (AT91_CAST(AT91_REG *) 	0x000000F0) // (SSC_IPNAME1) SSC IPNAME1 REGISTER 
#define SSC_IPNAME2     (AT91_CAST(AT91_REG *) 	0x000000F4) // (SSC_IPNAME2) SSC IPNAME2 REGISTER 
#define SSC_FEATURES    (AT91_CAST(AT91_REG *) 	0x000000F8) // (SSC_FEATURES) SSC FEATURES REGISTER 
#define SSC_VER         (AT91_CAST(AT91_REG *) 	0x000000FC) // (SSC_VER) Version Register

#endif
// -------- SSC_CR : (SSC Offset: 0x0) SSC Control Register -------- 
#define AT91C_SSC_RXEN        (0x1 <<  0) // (SSC) Receive Enable
#define AT91C_SSC_RXDIS       (0x1 <<  1) // (SSC) Receive Disable
#define AT91C_SSC_TXEN        (0x1 <<  8) // (SSC) Transmit Enable
#define AT91C_SSC_TXDIS       (0x1 <<  9) // (SSC) Transmit Disable
#define AT91C_SSC_SWRST       (0x1 << 15) // (SSC) Software Reset
// -------- SSC_RCMR : (SSC Offset: 0x10) SSC Receive Clock Mode Register -------- 
#define AT91C_SSC_CKS         (0x3 <<  0) // (SSC) Receive/Transmit Clock Selection
#define 	AT91C_SSC_CKS_DIV                  (0x0) // (SSC) Divided Clock
#define 	AT91C_SSC_CKS_TK                   (0x1) // (SSC) TK Clock signal
#define 	AT91C_SSC_CKS_RK                   (0x2) // (SSC) RK pin
#define AT91C_SSC_CKO         (0x7 <<  2) // (SSC) Receive/Transmit Clock Output Mode Selection
#define 	AT91C_SSC_CKO_NONE                 (0x0 <<  2) // (SSC) Receive/Transmit Clock Output Mode: None RK pin: Input-only
#define 	AT91C_SSC_CKO_CONTINOUS            (0x1 <<  2) // (SSC) Continuous Receive/Transmit Clock RK pin: Output
#define 	AT91C_SSC_CKO_DATA_TX              (0x2 <<  2) // (SSC) Receive/Transmit Clock only during data transfers RK pin: Output
#define AT91C_SSC_CKI         (0x1 <<  5) // (SSC) Receive/Transmit Clock Inversion
#define AT91C_SSC_CKG         (0x3 <<  6) // (SSC) Receive/Transmit Clock Gating Selection
#define 	AT91C_SSC_CKG_NONE                 (0x0 <<  6) // (SSC) Receive/Transmit Clock Gating: None, continuous clock
#define 	AT91C_SSC_CKG_LOW                  (0x1 <<  6) // (SSC) Receive/Transmit Clock enabled only if RF Low
#define 	AT91C_SSC_CKG_HIGH                 (0x2 <<  6) // (SSC) Receive/Transmit Clock enabled only if RF High
#define AT91C_SSC_START       (0xF <<  8) // (SSC) Receive/Transmit Start Selection
#define 	AT91C_SSC_START_CONTINOUS            (0x0 <<  8) // (SSC) Continuous, as soon as the receiver is enabled, and immediately after the end of transfer of the previous data.
#define 	AT91C_SSC_START_TX                   (0x1 <<  8) // (SSC) Transmit/Receive start
#define 	AT91C_SSC_START_LOW_RF               (0x2 <<  8) // (SSC) Detection of a low level on RF input
#define 	AT91C_SSC_START_HIGH_RF              (0x3 <<  8) // (SSC) Detection of a high level on RF input
#define 	AT91C_SSC_START_FALL_RF              (0x4 <<  8) // (SSC) Detection of a falling edge on RF input
#define 	AT91C_SSC_START_RISE_RF              (0x5 <<  8) // (SSC) Detection of a rising edge on RF input
#define 	AT91C_SSC_START_LEVEL_RF             (0x6 <<  8) // (SSC) Detection of any level change on RF input
#define 	AT91C_SSC_START_EDGE_RF              (0x7 <<  8) // (SSC) Detection of any edge on RF input
#define 	AT91C_SSC_START_0                    (0x8 <<  8) // (SSC) Compare 0
#define AT91C_SSC_STOP        (0x1 << 12) // (SSC) Receive Stop Selection
#define AT91C_SSC_STTDLY      (0xFF << 16) // (SSC) Receive/Transmit Start Delay
#define AT91C_SSC_PERIOD      (0xFF << 24) // (SSC) Receive/Transmit Period Divider Selection
// -------- SSC_RFMR : (SSC Offset: 0x14) SSC Receive Frame Mode Register -------- 
#define AT91C_SSC_DATLEN      (0x1F <<  0) // (SSC) Data Length
#define AT91C_SSC_LOOP        (0x1 <<  5) // (SSC) Loop Mode
#define AT91C_SSC_MSBF        (0x1 <<  7) // (SSC) Most Significant Bit First
#define AT91C_SSC_DATNB       (0xF <<  8) // (SSC) Data Number per Frame
#define AT91C_SSC_FSLEN       (0xF << 16) // (SSC) Receive/Transmit Frame Sync length
#define AT91C_SSC_FSOS        (0x7 << 20) // (SSC) Receive/Transmit Frame Sync Output Selection
#define 	AT91C_SSC_FSOS_NONE                 (0x0 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: None RK pin Input-only
#define 	AT91C_SSC_FSOS_NEGATIVE             (0x1 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Negative Pulse
#define 	AT91C_SSC_FSOS_POSITIVE             (0x2 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Positive Pulse
#define 	AT91C_SSC_FSOS_LOW                  (0x3 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Driver Low during data transfer
#define 	AT91C_SSC_FSOS_HIGH                 (0x4 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Driver High during data transfer
#define 	AT91C_SSC_FSOS_TOGGLE               (0x5 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Toggling at each start of data transfer
#define AT91C_SSC_FSEDGE      (0x1 << 24) // (SSC) Frame Sync Edge Detection
// -------- SSC_TCMR : (SSC Offset: 0x18) SSC Transmit Clock Mode Register -------- 
// -------- SSC_TFMR : (SSC Offset: 0x1c) SSC Transmit Frame Mode Register -------- 
#define AT91C_SSC_DATDEF      (0x1 <<  5) // (SSC) Data Default Value
#define AT91C_SSC_FSDEN       (0x1 << 23) // (SSC) Frame Sync Data Enable
// -------- SSC_SR : (SSC Offset: 0x40) SSC Status Register -------- 
#define AT91C_SSC_TXRDY       (0x1 <<  0) // (SSC) Transmit Ready
#define AT91C_SSC_TXEMPTY     (0x1 <<  1) // (SSC) Transmit Empty
#define AT91C_SSC_ENDTX       (0x1 <<  2) // (SSC) End Of Transmission
#define AT91C_SSC_TXBUFE      (0x1 <<  3) // (SSC) Transmit Buffer Empty
#define AT91C_SSC_RXRDY       (0x1 <<  4) // (SSC) Receive Ready
#define AT91C_SSC_OVRUN       (0x1 <<  5) // (SSC) Receive Overrun
#define AT91C_SSC_ENDRX       (0x1 <<  6) // (SSC) End of Reception
#define AT91C_SSC_RXBUFF      (0x1 <<  7) // (SSC) Receive Buffer Full
#define AT91C_SSC_CP0         (0x1 <<  8) // (SSC) Compare 0
#define AT91C_SSC_CP1         (0x1 <<  9) // (SSC) Compare 1
#define AT91C_SSC_TXSYN       (0x1 << 10) // (SSC) Transmit Sync
#define AT91C_SSC_RXSYN       (0x1 << 11) // (SSC) Receive Sync
#define AT91C_SSC_TXENA       (0x1 << 16) // (SSC) Transmit Enable
#define AT91C_SSC_RXENA       (0x1 << 17) // (SSC) Receive Enable
// -------- SSC_IER : (SSC Offset: 0x44) SSC Interrupt Enable Register -------- 
// -------- SSC_IDR : (SSC Offset: 0x48) SSC Interrupt Disable Register -------- 
// -------- SSC_IMR : (SSC Offset: 0x4c) SSC Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR AC97 Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_AC97C {
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 AC97C_MR; 	// Mode Register
	AT91_REG	 Reserved1[1]; 	// 
	AT91_REG	 AC97C_ICA; 	// Input Channel AssignementRegister
	AT91_REG	 AC97C_OCA; 	// Output Channel Assignement Register
	AT91_REG	 Reserved2[2]; 	// 
	AT91_REG	 AC97C_CARHR; 	// Channel A Receive Holding Register
	AT91_REG	 AC97C_CATHR; 	// Channel A Transmit Holding Register
	AT91_REG	 AC97C_CASR; 	// Channel A Status Register
	AT91_REG	 AC97C_CAMR; 	// Channel A Mode Register
	AT91_REG	 AC97C_CBRHR; 	// Channel B Receive Holding Register (optional)
	AT91_REG	 AC97C_CBTHR; 	// Channel B Transmit Holding Register (optional)
	AT91_REG	 AC97C_CBSR; 	// Channel B Status Register
	AT91_REG	 AC97C_CBMR; 	// Channel B Mode Register
	AT91_REG	 AC97C_CORHR; 	// COdec Transmit Holding Register
	AT91_REG	 AC97C_COTHR; 	// COdec Transmit Holding Register
	AT91_REG	 AC97C_COSR; 	// CODEC Status Register
	AT91_REG	 AC97C_COMR; 	// CODEC Mask Status Register
	AT91_REG	 AC97C_SR; 	// Status Register
	AT91_REG	 AC97C_IER; 	// Interrupt Enable Register
	AT91_REG	 AC97C_IDR; 	// Interrupt Disable Register
	AT91_REG	 AC97C_IMR; 	// Interrupt Mask Register
	AT91_REG	 Reserved3[39]; 	// 
	AT91_REG	 AC97C_VERSION; 	// Version Register
	AT91_REG	 AC97C_RPR; 	// Receive Pointer Register
	AT91_REG	 AC97C_RCR; 	// Receive Counter Register
	AT91_REG	 AC97C_TPR; 	// Transmit Pointer Register
	AT91_REG	 AC97C_TCR; 	// Transmit Counter Register
	AT91_REG	 AC97C_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 AC97C_RNCR; 	// Receive Next Counter Register
	AT91_REG	 AC97C_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 AC97C_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 AC97C_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 AC97C_PTSR; 	// PDC Transfer Status Register
} AT91S_AC97C, *AT91PS_AC97C;
#else
#define AC97C_MR        (AT91_CAST(AT91_REG *) 	0x00000008) // (AC97C_MR) Mode Register
#define AC97C_ICA       (AT91_CAST(AT91_REG *) 	0x00000010) // (AC97C_ICA) Input Channel AssignementRegister
#define AC97C_OCA       (AT91_CAST(AT91_REG *) 	0x00000014) // (AC97C_OCA) Output Channel Assignement Register
#define AC97C_CARHR     (AT91_CAST(AT91_REG *) 	0x00000020) // (AC97C_CARHR) Channel A Receive Holding Register
#define AC97C_CATHR     (AT91_CAST(AT91_REG *) 	0x00000024) // (AC97C_CATHR) Channel A Transmit Holding Register
#define AC97C_CASR      (AT91_CAST(AT91_REG *) 	0x00000028) // (AC97C_CASR) Channel A Status Register
#define AC97C_CAMR      (AT91_CAST(AT91_REG *) 	0x0000002C) // (AC97C_CAMR) Channel A Mode Register
#define AC97C_CBRHR     (AT91_CAST(AT91_REG *) 	0x00000030) // (AC97C_CBRHR) Channel B Receive Holding Register (optional)
#define AC97C_CBTHR     (AT91_CAST(AT91_REG *) 	0x00000034) // (AC97C_CBTHR) Channel B Transmit Holding Register (optional)
#define AC97C_CBSR      (AT91_CAST(AT91_REG *) 	0x00000038) // (AC97C_CBSR) Channel B Status Register
#define AC97C_CBMR      (AT91_CAST(AT91_REG *) 	0x0000003C) // (AC97C_CBMR) Channel B Mode Register
#define AC97C_CORHR     (AT91_CAST(AT91_REG *) 	0x00000040) // (AC97C_CORHR) COdec Transmit Holding Register
#define AC97C_COTHR     (AT91_CAST(AT91_REG *) 	0x00000044) // (AC97C_COTHR) COdec Transmit Holding Register
#define AC97C_COSR      (AT91_CAST(AT91_REG *) 	0x00000048) // (AC97C_COSR) CODEC Status Register
#define AC97C_COMR      (AT91_CAST(AT91_REG *) 	0x0000004C) // (AC97C_COMR) CODEC Mask Status Register
#define AC97C_SR        (AT91_CAST(AT91_REG *) 	0x00000050) // (AC97C_SR) Status Register
#define AC97C_IER       (AT91_CAST(AT91_REG *) 	0x00000054) // (AC97C_IER) Interrupt Enable Register
#define AC97C_IDR       (AT91_CAST(AT91_REG *) 	0x00000058) // (AC97C_IDR) Interrupt Disable Register
#define AC97C_IMR       (AT91_CAST(AT91_REG *) 	0x0000005C) // (AC97C_IMR) Interrupt Mask Register
#define AC97C_VERSION   (AT91_CAST(AT91_REG *) 	0x000000FC) // (AC97C_VERSION) Version Register

#endif
// -------- AC97C_MR : (AC97C Offset: 0x8) AC97C Mode Register -------- 
#define AT91C_AC97C_ENA       (0x1 <<  0) // (AC97C) AC97 Controller Global Enable
#define AT91C_AC97C_WRST      (0x1 <<  1) // (AC97C) Warm Reset
#define AT91C_AC97C_VRA       (0x1 <<  2) // (AC97C) Variable RAte (for Data Slots)
// -------- AC97C_ICA : (AC97C Offset: 0x10) AC97C Input Channel Assignement Register -------- 
#define AT91C_AC97C_CHID3     (0x7 <<  0) // (AC97C) Channel Id for the input slot 3
#define 	AT91C_AC97C_CHID3_NONE                 (0x0) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID3_CA                   (0x1) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID3_CB                   (0x2) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID3_CC                   (0x3) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID4     (0x7 <<  3) // (AC97C) Channel Id for the input slot 4
#define 	AT91C_AC97C_CHID4_NONE                 (0x0 <<  3) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID4_CA                   (0x1 <<  3) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID4_CB                   (0x2 <<  3) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID4_CC                   (0x3 <<  3) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID5     (0x7 <<  6) // (AC97C) Channel Id for the input slot 5
#define 	AT91C_AC97C_CHID5_NONE                 (0x0 <<  6) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID5_CA                   (0x1 <<  6) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID5_CB                   (0x2 <<  6) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID5_CC                   (0x3 <<  6) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID6     (0x7 <<  9) // (AC97C) Channel Id for the input slot 6
#define 	AT91C_AC97C_CHID6_NONE                 (0x0 <<  9) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID6_CA                   (0x1 <<  9) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID6_CB                   (0x2 <<  9) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID6_CC                   (0x3 <<  9) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID7     (0x7 << 12) // (AC97C) Channel Id for the input slot 7
#define 	AT91C_AC97C_CHID7_NONE                 (0x0 << 12) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID7_CA                   (0x1 << 12) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID7_CB                   (0x2 << 12) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID7_CC                   (0x3 << 12) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID8     (0x7 << 15) // (AC97C) Channel Id for the input slot 8
#define 	AT91C_AC97C_CHID8_NONE                 (0x0 << 15) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID8_CA                   (0x1 << 15) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID8_CB                   (0x2 << 15) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID8_CC                   (0x3 << 15) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID9     (0x7 << 18) // (AC97C) Channel Id for the input slot 9
#define 	AT91C_AC97C_CHID9_NONE                 (0x0 << 18) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID9_CA                   (0x1 << 18) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID9_CB                   (0x2 << 18) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID9_CC                   (0x3 << 18) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID10    (0x7 << 21) // (AC97C) Channel Id for the input slot 10
#define 	AT91C_AC97C_CHID10_NONE                 (0x0 << 21) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID10_CA                   (0x1 << 21) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID10_CB                   (0x2 << 21) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID10_CC                   (0x3 << 21) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID11    (0x7 << 24) // (AC97C) Channel Id for the input slot 11
#define 	AT91C_AC97C_CHID11_NONE                 (0x0 << 24) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID11_CA                   (0x1 << 24) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID11_CB                   (0x2 << 24) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID11_CC                   (0x3 << 24) // (AC97C) Channel C data will be transmitted during this slot
#define AT91C_AC97C_CHID12    (0x7 << 27) // (AC97C) Channel Id for the input slot 12
#define 	AT91C_AC97C_CHID12_NONE                 (0x0 << 27) // (AC97C) No data will be transmitted during this slot
#define 	AT91C_AC97C_CHID12_CA                   (0x1 << 27) // (AC97C) Channel A data will be transmitted during this slot
#define 	AT91C_AC97C_CHID12_CB                   (0x2 << 27) // (AC97C) Channel B data will be transmitted during this slot
#define 	AT91C_AC97C_CHID12_CC                   (0x3 << 27) // (AC97C) Channel C data will be transmitted during this slot
// -------- AC97C_OCA : (AC97C Offset: 0x14) AC97C Output Channel Assignement Register -------- 
// -------- AC97C_CARHR : (AC97C Offset: 0x20) AC97C Channel A Receive Holding Register -------- 
#define AT91C_AC97C_RDATA     (0xFFFFF <<  0) // (AC97C) Receive data
// -------- AC97C_CATHR : (AC97C Offset: 0x24) AC97C Channel A Transmit Holding Register -------- 
#define AT91C_AC97C_TDATA     (0xFFFFF <<  0) // (AC97C) Transmit data
// -------- AC97C_CASR : (AC97C Offset: 0x28) AC97C Channel A Status Register -------- 
#define AT91C_AC97C_TXRDY     (0x1 <<  0) // (AC97C) 
#define AT91C_AC97C_TXEMPTY   (0x1 <<  1) // (AC97C) 
#define AT91C_AC97C_UNRUN     (0x1 <<  2) // (AC97C) 
#define AT91C_AC97C_RXRDY     (0x1 <<  4) // (AC97C) 
#define AT91C_AC97C_OVRUN     (0x1 <<  5) // (AC97C) 
#define AT91C_AC97C_ENDTX     (0x1 << 10) // (AC97C) 
#define AT91C_AC97C_TXBUFE    (0x1 << 11) // (AC97C) 
#define AT91C_AC97C_ENDRX     (0x1 << 14) // (AC97C) 
#define AT91C_AC97C_RXBUFF    (0x1 << 15) // (AC97C) 
// -------- AC97C_CAMR : (AC97C Offset: 0x2c) AC97C Channel A Mode Register -------- 
#define AT91C_AC97C_SIZE      (0x3 << 16) // (AC97C) 
#define 	AT91C_AC97C_SIZE_20_BITS              (0x0 << 16) // (AC97C) Data size is 20 bits
#define 	AT91C_AC97C_SIZE_18_BITS              (0x1 << 16) // (AC97C) Data size is 18 bits
#define 	AT91C_AC97C_SIZE_16_BITS              (0x2 << 16) // (AC97C) Data size is 16 bits
#define 	AT91C_AC97C_SIZE_10_BITS              (0x3 << 16) // (AC97C) Data size is 10 bits
#define AT91C_AC97C_CEM       (0x1 << 18) // (AC97C) 
#define AT91C_AC97C_CEN       (0x1 << 21) // (AC97C) 
#define AT91C_AC97C_PDCEN     (0x1 << 22) // (AC97C) 
// -------- AC97C_CBRHR : (AC97C Offset: 0x30) AC97C Channel B Receive Holding Register -------- 
// -------- AC97C_CBTHR : (AC97C Offset: 0x34) AC97C Channel B Transmit Holding Register -------- 
// -------- AC97C_CBSR : (AC97C Offset: 0x38) AC97C Channel B Status Register -------- 
// -------- AC97C_CBMR : (AC97C Offset: 0x3c) AC97C Channel B Mode Register -------- 
// -------- AC97C_CORHR : (AC97C Offset: 0x40) AC97C Codec Channel Receive Holding Register -------- 
#define AT91C_AC97C_SDATA     (0xFFFF <<  0) // (AC97C) Status Data
// -------- AC97C_COTHR : (AC97C Offset: 0x44) AC97C Codec Channel Transmit Holding Register -------- 
#define AT91C_AC97C_CDATA     (0xFFFF <<  0) // (AC97C) Command Data
#define AT91C_AC97C_CADDR     (0x7F << 16) // (AC97C) COdec control register index
#define AT91C_AC97C_READ      (0x1 << 23) // (AC97C) Read/Write command
// -------- AC97C_COSR : (AC97C Offset: 0x48) AC97C CODEC Status Register -------- 
// -------- AC97C_COMR : (AC97C Offset: 0x4c) AC97C CODEC Mode Register -------- 
// -------- AC97C_SR : (AC97C Offset: 0x50) AC97C Status Register -------- 
#define AT91C_AC97C_SOF       (0x1 <<  0) // (AC97C) 
#define AT91C_AC97C_WKUP      (0x1 <<  1) // (AC97C) 
#define AT91C_AC97C_COEVT     (0x1 <<  2) // (AC97C) 
#define AT91C_AC97C_CAEVT     (0x1 <<  3) // (AC97C) 
#define AT91C_AC97C_CBEVT     (0x1 <<  4) // (AC97C) 
// -------- AC97C_IER : (AC97C Offset: 0x54) AC97C Interrupt Enable Register -------- 
// -------- AC97C_IDR : (AC97C Offset: 0x58) AC97C Interrupt Disable Register -------- 
// -------- AC97C_IMR : (AC97C Offset: 0x5c) AC97C Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Serial Parallel Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SPI {
	AT91_REG	 SPI_CR; 	// Control Register
	AT91_REG	 SPI_MR; 	// Mode Register
	AT91_REG	 SPI_RDR; 	// Receive Data Register
	AT91_REG	 SPI_TDR; 	// Transmit Data Register
	AT91_REG	 SPI_SR; 	// Status Register
	AT91_REG	 SPI_IER; 	// Interrupt Enable Register
	AT91_REG	 SPI_IDR; 	// Interrupt Disable Register
	AT91_REG	 SPI_IMR; 	// Interrupt Mask Register
	AT91_REG	 Reserved0[4]; 	// 
	AT91_REG	 SPI_CSR[4]; 	// Chip Select Register
	AT91_REG	 Reserved1[48]; 	// 
	AT91_REG	 SPI_RPR; 	// Receive Pointer Register
	AT91_REG	 SPI_RCR; 	// Receive Counter Register
	AT91_REG	 SPI_TPR; 	// Transmit Pointer Register
	AT91_REG	 SPI_TCR; 	// Transmit Counter Register
	AT91_REG	 SPI_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 SPI_RNCR; 	// Receive Next Counter Register
	AT91_REG	 SPI_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 SPI_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 SPI_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 SPI_PTSR; 	// PDC Transfer Status Register
} AT91S_SPI, *AT91PS_SPI;
#else
#define SPI_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (SPI_CR) Control Register
#define SPI_MR          (AT91_CAST(AT91_REG *) 	0x00000004) // (SPI_MR) Mode Register
#define SPI_RDR         (AT91_CAST(AT91_REG *) 	0x00000008) // (SPI_RDR) Receive Data Register
#define SPI_TDR         (AT91_CAST(AT91_REG *) 	0x0000000C) // (SPI_TDR) Transmit Data Register
#define SPI_SR          (AT91_CAST(AT91_REG *) 	0x00000010) // (SPI_SR) Status Register
#define SPI_IER         (AT91_CAST(AT91_REG *) 	0x00000014) // (SPI_IER) Interrupt Enable Register
#define SPI_IDR         (AT91_CAST(AT91_REG *) 	0x00000018) // (SPI_IDR) Interrupt Disable Register
#define SPI_IMR         (AT91_CAST(AT91_REG *) 	0x0000001C) // (SPI_IMR) Interrupt Mask Register
#define SPI_CSR         (AT91_CAST(AT91_REG *) 	0x00000030) // (SPI_CSR) Chip Select Register

#endif
// -------- SPI_CR : (SPI Offset: 0x0) SPI Control Register -------- 
#define AT91C_SPI_SPIEN       (0x1 <<  0) // (SPI) SPI Enable
#define AT91C_SPI_SPIDIS      (0x1 <<  1) // (SPI) SPI Disable
#define AT91C_SPI_SWRST       (0x1 <<  7) // (SPI) SPI Software reset
#define AT91C_SPI_LASTXFER    (0x1 << 24) // (SPI) SPI Last Transfer
// -------- SPI_MR : (SPI Offset: 0x4) SPI Mode Register -------- 
#define AT91C_SPI_MSTR        (0x1 <<  0) // (SPI) Master/Slave Mode
#define AT91C_SPI_PS          (0x1 <<  1) // (SPI) Peripheral Select
#define 	AT91C_SPI_PS_FIXED                (0x0 <<  1) // (SPI) Fixed Peripheral Select
#define 	AT91C_SPI_PS_VARIABLE             (0x1 <<  1) // (SPI) Variable Peripheral Select
#define AT91C_SPI_PCSDEC      (0x1 <<  2) // (SPI) Chip Select Decode
#define AT91C_SPI_FDIV        (0x1 <<  3) // (SPI) Clock Selection
#define AT91C_SPI_MODFDIS     (0x1 <<  4) // (SPI) Mode Fault Detection
#define AT91C_SPI_LLB         (0x1 <<  7) // (SPI) Clock Selection
#define AT91C_SPI_PCS         (0xF << 16) // (SPI) Peripheral Chip Select
#define AT91C_SPI_DLYBCS      (0xFF << 24) // (SPI) Delay Between Chip Selects
// -------- SPI_RDR : (SPI Offset: 0x8) Receive Data Register -------- 
#define AT91C_SPI_RD          (0xFFFF <<  0) // (SPI) Receive Data
#define AT91C_SPI_RPCS        (0xF << 16) // (SPI) Peripheral Chip Select Status
// -------- SPI_TDR : (SPI Offset: 0xc) Transmit Data Register -------- 
#define AT91C_SPI_TD          (0xFFFF <<  0) // (SPI) Transmit Data
#define AT91C_SPI_TPCS        (0xF << 16) // (SPI) Peripheral Chip Select Status
// -------- SPI_SR : (SPI Offset: 0x10) Status Register -------- 
#define AT91C_SPI_RDRF        (0x1 <<  0) // (SPI) Receive Data Register Full
#define AT91C_SPI_TDRE        (0x1 <<  1) // (SPI) Transmit Data Register Empty
#define AT91C_SPI_MODF        (0x1 <<  2) // (SPI) Mode Fault Error
#define AT91C_SPI_OVRES       (0x1 <<  3) // (SPI) Overrun Error Status
#define AT91C_SPI_ENDRX       (0x1 <<  4) // (SPI) End of Receiver Transfer
#define AT91C_SPI_ENDTX       (0x1 <<  5) // (SPI) End of Receiver Transfer
#define AT91C_SPI_RXBUFF      (0x1 <<  6) // (SPI) RXBUFF Interrupt
#define AT91C_SPI_TXBUFE      (0x1 <<  7) // (SPI) TXBUFE Interrupt
#define AT91C_SPI_NSSR        (0x1 <<  8) // (SPI) NSSR Interrupt
#define AT91C_SPI_TXEMPTY     (0x1 <<  9) // (SPI) TXEMPTY Interrupt
#define AT91C_SPI_SPIENS      (0x1 << 16) // (SPI) Enable Status
// -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register -------- 
// -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register -------- 
// -------- SPI_IMR : (SPI Offset: 0x1c) Interrupt Mask Register -------- 
// -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register -------- 
#define AT91C_SPI_CPOL        (0x1 <<  0) // (SPI) Clock Polarity
#define AT91C_SPI_NCPHA       (0x1 <<  1) // (SPI) Clock Phase
#define AT91C_SPI_CSAAT       (0x1 <<  3) // (SPI) Chip Select Active After Transfer
#define AT91C_SPI_BITS        (0xF <<  4) // (SPI) Bits Per Transfer
#define 	AT91C_SPI_BITS_8                    (0x0 <<  4) // (SPI) 8 Bits Per transfer
#define 	AT91C_SPI_BITS_9                    (0x1 <<  4) // (SPI) 9 Bits Per transfer
#define 	AT91C_SPI_BITS_10                   (0x2 <<  4) // (SPI) 10 Bits Per transfer
#define 	AT91C_SPI_BITS_11                   (0x3 <<  4) // (SPI) 11 Bits Per transfer
#define 	AT91C_SPI_BITS_12                   (0x4 <<  4) // (SPI) 12 Bits Per transfer
#define 	AT91C_SPI_BITS_13                   (0x5 <<  4) // (SPI) 13 Bits Per transfer
#define 	AT91C_SPI_BITS_14                   (0x6 <<  4) // (SPI) 14 Bits Per transfer
#define 	AT91C_SPI_BITS_15                   (0x7 <<  4) // (SPI) 15 Bits Per transfer
#define 	AT91C_SPI_BITS_16                   (0x8 <<  4) // (SPI) 16 Bits Per transfer
#define AT91C_SPI_SCBR        (0xFF <<  8) // (SPI) Serial Clock Baud Rate
#define AT91C_SPI_DLYBS       (0xFF << 16) // (SPI) Delay Before SPCK
#define AT91C_SPI_DLYBCT      (0xFF << 24) // (SPI) Delay Between Consecutive Transfers

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Control Area Network MailBox Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_CAN_MB {
	AT91_REG	 CAN_MB_MMR; 	// MailBox Mode Register
	AT91_REG	 CAN_MB_MAM; 	// MailBox Acceptance Mask Register
	AT91_REG	 CAN_MB_MID; 	// MailBox ID Register
	AT91_REG	 CAN_MB_MFID; 	// MailBox Family ID Register
	AT91_REG	 CAN_MB_MSR; 	// MailBox Status Register
	AT91_REG	 CAN_MB_MDL; 	// MailBox Data Low Register
	AT91_REG	 CAN_MB_MDH; 	// MailBox Data High Register
	AT91_REG	 CAN_MB_MCR; 	// MailBox Control Register
} AT91S_CAN_MB, *AT91PS_CAN_MB;
#else
#define CAN_MMR         (AT91_CAST(AT91_REG *) 	0x00000000) // (CAN_MMR) MailBox Mode Register
#define CAN_MAM         (AT91_CAST(AT91_REG *) 	0x00000004) // (CAN_MAM) MailBox Acceptance Mask Register
#define CAN_MID         (AT91_CAST(AT91_REG *) 	0x00000008) // (CAN_MID) MailBox ID Register
#define CAN_MFID        (AT91_CAST(AT91_REG *) 	0x0000000C) // (CAN_MFID) MailBox Family ID Register
#define CAN_MSR         (AT91_CAST(AT91_REG *) 	0x00000010) // (CAN_MSR) MailBox Status Register
#define CAN_MDL         (AT91_CAST(AT91_REG *) 	0x00000014) // (CAN_MDL) MailBox Data Low Register
#define CAN_MDH         (AT91_CAST(AT91_REG *) 	0x00000018) // (CAN_MDH) MailBox Data High Register
#define CAN_MCR         (AT91_CAST(AT91_REG *) 	0x0000001C) // (CAN_MCR) MailBox Control Register

#endif
// -------- CAN_MMR : (CAN_MB Offset: 0x0) CAN Message Mode Register -------- 
#define AT91C_CAN_MTIMEMARK   (0xFFFF <<  0) // (CAN_MB) Mailbox Timemark
#define AT91C_CAN_PRIOR       (0xF << 16) // (CAN_MB) Mailbox Priority
#define AT91C_CAN_MOT         (0x7 << 24) // (CAN_MB) Mailbox Object Type
#define 	AT91C_CAN_MOT_DIS                  (0x0 << 24) // (CAN_MB) 
#define 	AT91C_CAN_MOT_RX                   (0x1 << 24) // (CAN_MB) 
#define 	AT91C_CAN_MOT_RXOVERWRITE          (0x2 << 24) // (CAN_MB) 
#define 	AT91C_CAN_MOT_TX                   (0x3 << 24) // (CAN_MB) 
#define 	AT91C_CAN_MOT_CONSUMER             (0x4 << 24) // (CAN_MB) 
#define 	AT91C_CAN_MOT_PRODUCER             (0x5 << 24) // (CAN_MB) 
// -------- CAN_MAM : (CAN_MB Offset: 0x4) CAN Message Acceptance Mask Register -------- 
#define AT91C_CAN_MIDvB       (0x3FFFF <<  0) // (CAN_MB) Complementary bits for identifier in extended mode
#define AT91C_CAN_MIDvA       (0x7FF << 18) // (CAN_MB) Identifier for standard frame mode
#define AT91C_CAN_MIDE        (0x1 << 29) // (CAN_MB) Identifier Version
// -------- CAN_MID : (CAN_MB Offset: 0x8) CAN Message ID Register -------- 
// -------- CAN_MFID : (CAN_MB Offset: 0xc) CAN Message Family ID Register -------- 
// -------- CAN_MSR : (CAN_MB Offset: 0x10) CAN Message Status Register -------- 
#define AT91C_CAN_MTIMESTAMP  (0xFFFF <<  0) // (CAN_MB) Timer Value
#define AT91C_CAN_MDLC        (0xF << 16) // (CAN_MB) Mailbox Data Length Code
#define AT91C_CAN_MRTR        (0x1 << 20) // (CAN_MB) Mailbox Remote Transmission Request
#define AT91C_CAN_MABT        (0x1 << 22) // (CAN_MB) Mailbox Message Abort
#define AT91C_CAN_MRDY        (0x1 << 23) // (CAN_MB) Mailbox Ready
#define AT91C_CAN_MMI         (0x1 << 24) // (CAN_MB) Mailbox Message Ignored
// -------- CAN_MDL : (CAN_MB Offset: 0x14) CAN Message Data Low Register -------- 
// -------- CAN_MDH : (CAN_MB Offset: 0x18) CAN Message Data High Register -------- 
// -------- CAN_MCR : (CAN_MB Offset: 0x1c) CAN Message Control Register -------- 
#define AT91C_CAN_MACR        (0x1 << 22) // (CAN_MB) Abort Request for Mailbox
#define AT91C_CAN_MTCR        (0x1 << 23) // (CAN_MB) Mailbox Transfer Command

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Control Area Network Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_CAN {
	AT91_REG	 CAN_MR; 	// Mode Register
	AT91_REG	 CAN_IER; 	// Interrupt Enable Register
	AT91_REG	 CAN_IDR; 	// Interrupt Disable Register
	AT91_REG	 CAN_IMR; 	// Interrupt Mask Register
	AT91_REG	 CAN_SR; 	// Status Register
	AT91_REG	 CAN_BR; 	// Baudrate Register
	AT91_REG	 CAN_TIM; 	// Timer Register
	AT91_REG	 CAN_TIMESTP; 	// Time Stamp Register
	AT91_REG	 CAN_ECR; 	// Error Counter Register
	AT91_REG	 CAN_TCR; 	// Transfer Command Register
	AT91_REG	 CAN_ACR; 	// Abort Command Register
	AT91_REG	 Reserved0[52]; 	// 
	AT91_REG	 CAN_VR; 	// Version Register
	AT91_REG	 Reserved1[64]; 	// 
	AT91S_CAN_MB	 CAN_MB0; 	// CAN Mailbox 0
	AT91S_CAN_MB	 CAN_MB1; 	// CAN Mailbox 1
	AT91S_CAN_MB	 CAN_MB2; 	// CAN Mailbox 2
	AT91S_CAN_MB	 CAN_MB3; 	// CAN Mailbox 3
	AT91S_CAN_MB	 CAN_MB4; 	// CAN Mailbox 4
	AT91S_CAN_MB	 CAN_MB5; 	// CAN Mailbox 5
	AT91S_CAN_MB	 CAN_MB6; 	// CAN Mailbox 6
	AT91S_CAN_MB	 CAN_MB7; 	// CAN Mailbox 7
	AT91S_CAN_MB	 CAN_MB8; 	// CAN Mailbox 8
	AT91S_CAN_MB	 CAN_MB9; 	// CAN Mailbox 9
	AT91S_CAN_MB	 CAN_MB10; 	// CAN Mailbox 10
	AT91S_CAN_MB	 CAN_MB11; 	// CAN Mailbox 11
	AT91S_CAN_MB	 CAN_MB12; 	// CAN Mailbox 12
	AT91S_CAN_MB	 CAN_MB13; 	// CAN Mailbox 13
	AT91S_CAN_MB	 CAN_MB14; 	// CAN Mailbox 14
	AT91S_CAN_MB	 CAN_MB15; 	// CAN Mailbox 15
} AT91S_CAN, *AT91PS_CAN;
#else
#define CAN_MR          (AT91_CAST(AT91_REG *) 	0x00000000) // (CAN_MR) Mode Register
#define CAN_IER         (AT91_CAST(AT91_REG *) 	0x00000004) // (CAN_IER) Interrupt Enable Register
#define CAN_IDR         (AT91_CAST(AT91_REG *) 	0x00000008) // (CAN_IDR) Interrupt Disable Register
#define CAN_IMR         (AT91_CAST(AT91_REG *) 	0x0000000C) // (CAN_IMR) Interrupt Mask Register
#define CAN_SR          (AT91_CAST(AT91_REG *) 	0x00000010) // (CAN_SR) Status Register
#define CAN_BR          (AT91_CAST(AT91_REG *) 	0x00000014) // (CAN_BR) Baudrate Register
#define CAN_TIM         (AT91_CAST(AT91_REG *) 	0x00000018) // (CAN_TIM) Timer Register
#define CAN_TIMESTP     (AT91_CAST(AT91_REG *) 	0x0000001C) // (CAN_TIMESTP) Time Stamp Register
#define CAN_ECR         (AT91_CAST(AT91_REG *) 	0x00000020) // (CAN_ECR) Error Counter Register
#define CAN_TCR         (AT91_CAST(AT91_REG *) 	0x00000024) // (CAN_TCR) Transfer Command Register
#define CAN_ACR         (AT91_CAST(AT91_REG *) 	0x00000028) // (CAN_ACR) Abort Command Register
#define CAN_VR          (AT91_CAST(AT91_REG *) 	0x000000FC) // (CAN_VR) Version Register

#endif
// -------- CAN_MR : (CAN Offset: 0x0) CAN Mode Register -------- 
#define AT91C_CAN_CANEN       (0x1 <<  0) // (CAN) CAN Controller Enable
#define AT91C_CAN_LPM         (0x1 <<  1) // (CAN) Disable/Enable Low Power Mode
#define AT91C_CAN_ABM         (0x1 <<  2) // (CAN) Disable/Enable Autobaud/Listen Mode
#define AT91C_CAN_OVL         (0x1 <<  3) // (CAN) Disable/Enable Overload Frame
#define AT91C_CAN_TEOF        (0x1 <<  4) // (CAN) Time Stamp messages at each end of Frame
#define AT91C_CAN_TTM         (0x1 <<  5) // (CAN) Disable/Enable Time Trigger Mode
#define AT91C_CAN_TIMFRZ      (0x1 <<  6) // (CAN) Enable Timer Freeze
#define AT91C_CAN_DRPT        (0x1 <<  7) // (CAN) Disable Repeat
// -------- CAN_IER : (CAN Offset: 0x4) CAN Interrupt Enable Register -------- 
#define AT91C_CAN_MB0         (0x1 <<  0) // (CAN) Mailbox 0 Flag
#define AT91C_CAN_MB1         (0x1 <<  1) // (CAN) Mailbox 1 Flag
#define AT91C_CAN_MB2         (0x1 <<  2) // (CAN) Mailbox 2 Flag
#define AT91C_CAN_MB3         (0x1 <<  3) // (CAN) Mailbox 3 Flag
#define AT91C_CAN_MB4         (0x1 <<  4) // (CAN) Mailbox 4 Flag
#define AT91C_CAN_MB5         (0x1 <<  5) // (CAN) Mailbox 5 Flag
#define AT91C_CAN_MB6         (0x1 <<  6) // (CAN) Mailbox 6 Flag
#define AT91C_CAN_MB7         (0x1 <<  7) // (CAN) Mailbox 7 Flag
#define AT91C_CAN_MB8         (0x1 <<  8) // (CAN) Mailbox 8 Flag
#define AT91C_CAN_MB9         (0x1 <<  9) // (CAN) Mailbox 9 Flag
#define AT91C_CAN_MB10        (0x1 << 10) // (CAN) Mailbox 10 Flag
#define AT91C_CAN_MB11        (0x1 << 11) // (CAN) Mailbox 11 Flag
#define AT91C_CAN_MB12        (0x1 << 12) // (CAN) Mailbox 12 Flag
#define AT91C_CAN_MB13        (0x1 << 13) // (CAN) Mailbox 13 Flag
#define AT91C_CAN_MB14        (0x1 << 14) // (CAN) Mailbox 14 Flag
#define AT91C_CAN_MB15        (0x1 << 15) // (CAN) Mailbox 15 Flag
#define AT91C_CAN_ERRA        (0x1 << 16) // (CAN) Error Active Mode Flag
#define AT91C_CAN_WARN        (0x1 << 17) // (CAN) Warning Limit Flag
#define AT91C_CAN_ERRP        (0x1 << 18) // (CAN) Error Passive Mode Flag
#define AT91C_CAN_BOFF        (0x1 << 19) // (CAN) Bus Off Mode Flag
#define AT91C_CAN_SLEEP       (0x1 << 20) // (CAN) Sleep Flag
#define AT91C_CAN_WAKEUP      (0x1 << 21) // (CAN) Wakeup Flag
#define AT91C_CAN_TOVF        (0x1 << 22) // (CAN) Timer Overflow Flag
#define AT91C_CAN_TSTP        (0x1 << 23) // (CAN) Timestamp Flag
#define AT91C_CAN_CERR        (0x1 << 24) // (CAN) CRC Error
#define AT91C_CAN_SERR        (0x1 << 25) // (CAN) Stuffing Error
#define AT91C_CAN_AERR        (0x1 << 26) // (CAN) Acknowledgment Error
#define AT91C_CAN_FERR        (0x1 << 27) // (CAN) Form Error
#define AT91C_CAN_BERR        (0x1 << 28) // (CAN) Bit Error
// -------- CAN_IDR : (CAN Offset: 0x8) CAN Interrupt Disable Register -------- 
// -------- CAN_IMR : (CAN Offset: 0xc) CAN Interrupt Mask Register -------- 
// -------- CAN_SR : (CAN Offset: 0x10) CAN Status Register -------- 
#define AT91C_CAN_RBSY        (0x1 << 29) // (CAN) Receiver Busy
#define AT91C_CAN_TBSY        (0x1 << 30) // (CAN) Transmitter Busy
#define AT91C_CAN_OVLY        (0x1 << 31) // (CAN) Overload Busy
// -------- CAN_BR : (CAN Offset: 0x14) CAN Baudrate Register -------- 
#define AT91C_CAN_PHASE2      (0x7 <<  0) // (CAN) Phase 2 segment
#define AT91C_CAN_PHASE1      (0x7 <<  4) // (CAN) Phase 1 segment
#define AT91C_CAN_PROPAG      (0x7 <<  8) // (CAN) Programmation time segment
#define AT91C_CAN_SYNC        (0x3 << 12) // (CAN) Re-synchronization jump width segment
#define AT91C_CAN_BRP         (0x7F << 16) // (CAN) Baudrate Prescaler
#define AT91C_CAN_SMP         (0x1 << 24) // (CAN) Sampling mode
// -------- CAN_TIM : (CAN Offset: 0x18) CAN Timer Register -------- 
#define AT91C_CAN_TIMER       (0xFFFF <<  0) // (CAN) Timer field
// -------- CAN_TIMESTP : (CAN Offset: 0x1c) CAN Timestamp Register -------- 
// -------- CAN_ECR : (CAN Offset: 0x20) CAN Error Counter Register -------- 
#define AT91C_CAN_REC         (0xFF <<  0) // (CAN) Receive Error Counter
#define AT91C_CAN_TEC         (0xFF << 16) // (CAN) Transmit Error Counter
// -------- CAN_TCR : (CAN Offset: 0x24) CAN Transfer Command Register -------- 
#define AT91C_CAN_TIMRST      (0x1 << 31) // (CAN) Timer Reset Field
// -------- CAN_ACR : (CAN Offset: 0x28) CAN Abort Command Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Advanced  Encryption Standard
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_AES {
	AT91_REG	 AES_CR; 	// Control Register
	AT91_REG	 AES_MR; 	// Mode Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 AES_IER; 	// Interrupt Enable Register
	AT91_REG	 AES_IDR; 	// Interrupt Disable Register
	AT91_REG	 AES_IMR; 	// Interrupt Mask Register
	AT91_REG	 AES_ISR; 	// Interrupt Status Register
	AT91_REG	 AES_KEYWxR[4]; 	// Key Word x Register
	AT91_REG	 Reserved1[4]; 	// 
	AT91_REG	 AES_IDATAxR[4]; 	// Input Data x Register
	AT91_REG	 AES_ODATAxR[4]; 	// Output Data x Register
	AT91_REG	 AES_IVxR[4]; 	// Initialization Vector x Register
	AT91_REG	 Reserved2[35]; 	// 
	AT91_REG	 AES_VR; 	// AES Version Register
	AT91_REG	 AES_RPR; 	// Receive Pointer Register
	AT91_REG	 AES_RCR; 	// Receive Counter Register
	AT91_REG	 AES_TPR; 	// Transmit Pointer Register
	AT91_REG	 AES_TCR; 	// Transmit Counter Register
	AT91_REG	 AES_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 AES_RNCR; 	// Receive Next Counter Register
	AT91_REG	 AES_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 AES_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 AES_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 AES_PTSR; 	// PDC Transfer Status Register
} AT91S_AES, *AT91PS_AES;
#else
#define AES_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (AES_CR) Control Register
#define AES_MR          (AT91_CAST(AT91_REG *) 	0x00000004) // (AES_MR) Mode Register
#define AES_IER         (AT91_CAST(AT91_REG *) 	0x00000010) // (AES_IER) Interrupt Enable Register
#define AES_IDR         (AT91_CAST(AT91_REG *) 	0x00000014) // (AES_IDR) Interrupt Disable Register
#define AES_IMR         (AT91_CAST(AT91_REG *) 	0x00000018) // (AES_IMR) Interrupt Mask Register
#define AES_ISR         (AT91_CAST(AT91_REG *) 	0x0000001C) // (AES_ISR) Interrupt Status Register
#define AES_KEYWxR      (AT91_CAST(AT91_REG *) 	0x00000020) // (AES_KEYWxR) Key Word x Register
#define AES_IDATAxR     (AT91_CAST(AT91_REG *) 	0x00000040) // (AES_IDATAxR) Input Data x Register
#define AES_ODATAxR     (AT91_CAST(AT91_REG *) 	0x00000050) // (AES_ODATAxR) Output Data x Register
#define AES_IVxR        (AT91_CAST(AT91_REG *) 	0x00000060) // (AES_IVxR) Initialization Vector x Register
#define AES_VR          (AT91_CAST(AT91_REG *) 	0x000000FC) // (AES_VR) AES Version Register

#endif
// -------- AES_CR : (AES Offset: 0x0) Control Register -------- 
#define AT91C_AES_START       (0x1 <<  0) // (AES) Starts Processing
#define AT91C_AES_SWRST       (0x1 <<  8) // (AES) Software Reset
#define AT91C_AES_LOADSEED    (0x1 << 16) // (AES) Random Number Generator Seed Loading
// -------- AES_MR : (AES Offset: 0x4) Mode Register -------- 
#define AT91C_AES_CIPHER      (0x1 <<  0) // (AES) Processing Mode
#define AT91C_AES_PROCDLY     (0xF <<  4) // (AES) Processing Delay
#define AT91C_AES_SMOD        (0x3 <<  8) // (AES) Start Mode
#define 	AT91C_AES_SMOD_MANUAL               (0x0 <<  8) // (AES) Manual Mode: The START bit in register AES_CR must be set to begin encryption or decryption.
#define 	AT91C_AES_SMOD_AUTO                 (0x1 <<  8) // (AES) Auto Mode: no action in AES_CR is necessary (cf datasheet).
#define 	AT91C_AES_SMOD_PDC                  (0x2 <<  8) // (AES) PDC Mode (cf datasheet).
#define AT91C_AES_OPMOD       (0x7 << 12) // (AES) Operation Mode
#define 	AT91C_AES_OPMOD_ECB                  (0x0 << 12) // (AES) ECB Electronic CodeBook mode.
#define 	AT91C_AES_OPMOD_CBC                  (0x1 << 12) // (AES) CBC Cipher Block Chaining mode.
#define 	AT91C_AES_OPMOD_OFB                  (0x2 << 12) // (AES) OFB Output Feedback mode.
#define 	AT91C_AES_OPMOD_CFB                  (0x3 << 12) // (AES) CFB Cipher Feedback mode.
#define 	AT91C_AES_OPMOD_CTR                  (0x4 << 12) // (AES) CTR Counter mode.
#define AT91C_AES_LOD         (0x1 << 15) // (AES) Last Output Data Mode
#define AT91C_AES_CFBS        (0x7 << 16) // (AES) Cipher Feedback Data Size
#define 	AT91C_AES_CFBS_128_BIT              (0x0 << 16) // (AES) 128-bit.
#define 	AT91C_AES_CFBS_64_BIT               (0x1 << 16) // (AES) 64-bit.
#define 	AT91C_AES_CFBS_32_BIT               (0x2 << 16) // (AES) 32-bit.
#define 	AT91C_AES_CFBS_16_BIT               (0x3 << 16) // (AES) 16-bit.
#define 	AT91C_AES_CFBS_8_BIT                (0x4 << 16) // (AES) 8-bit.
#define AT91C_AES_CKEY        (0xF << 20) // (AES) Countermeasure Key
#define AT91C_AES_CTYPE       (0x1F << 24) // (AES) Countermeasure Type
#define 	AT91C_AES_CTYPE_TYPE1_EN             (0x1 << 24) // (AES) Countermeasure type 1 is enabled.
#define 	AT91C_AES_CTYPE_TYPE2_EN             (0x2 << 24) // (AES) Countermeasure type 2 is enabled.
#define 	AT91C_AES_CTYPE_TYPE3_EN             (0x4 << 24) // (AES) Countermeasure type 3 is enabled.
#define 	AT91C_AES_CTYPE_TYPE4_EN             (0x8 << 24) // (AES) Countermeasure type 4 is enabled.
#define 	AT91C_AES_CTYPE_TYPE5_EN             (0x10 << 24) // (AES) Countermeasure type 5 is enabled.
// -------- AES_IER : (AES Offset: 0x10) Interrupt Enable Register -------- 
#define AT91C_AES_DATRDY      (0x1 <<  0) // (AES) DATRDY
#define AT91C_AES_ENDRX       (0x1 <<  1) // (AES) PDC Read Buffer End
#define AT91C_AES_ENDTX       (0x1 <<  2) // (AES) PDC Write Buffer End
#define AT91C_AES_RXBUFF      (0x1 <<  3) // (AES) PDC Read Buffer Full
#define AT91C_AES_TXBUFE      (0x1 <<  4) // (AES) PDC Write Buffer Empty
#define AT91C_AES_URAD        (0x1 <<  8) // (AES) Unspecified Register Access Detection
// -------- AES_IDR : (AES Offset: 0x14) Interrupt Disable Register -------- 
// -------- AES_IMR : (AES Offset: 0x18) Interrupt Mask Register -------- 
// -------- AES_ISR : (AES Offset: 0x1c) Interrupt Status Register -------- 
#define AT91C_AES_URAT        (0x7 << 12) // (AES) Unspecified Register Access Type Status
#define 	AT91C_AES_URAT_IN_DAT_WRITE_DATPROC (0x0 << 12) // (AES) Input data register written during the data processing in PDC mode.
#define 	AT91C_AES_URAT_OUT_DAT_READ_DATPROC (0x1 << 12) // (AES) Output data register read during the data processing.
#define 	AT91C_AES_URAT_MODEREG_WRITE_DATPROC (0x2 << 12) // (AES) Mode register written during the data processing.
#define 	AT91C_AES_URAT_OUT_DAT_READ_SUBKEY  (0x3 << 12) // (AES) Output data register read during the sub-keys generation.
#define 	AT91C_AES_URAT_MODEREG_WRITE_SUBKEY (0x4 << 12) // (AES) Mode register written during the sub-keys generation.
#define 	AT91C_AES_URAT_WO_REG_READ          (0x5 << 12) // (AES) Write-only register read access.

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Triple Data Encryption Standard
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_TDES {
	AT91_REG	 TDES_CR; 	// Control Register
	AT91_REG	 TDES_MR; 	// Mode Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 TDES_IER; 	// Interrupt Enable Register
	AT91_REG	 TDES_IDR; 	// Interrupt Disable Register
	AT91_REG	 TDES_IMR; 	// Interrupt Mask Register
	AT91_REG	 TDES_ISR; 	// Interrupt Status Register
	AT91_REG	 TDES_KEY1WxR[2]; 	// Key 1 Word x Register
	AT91_REG	 TDES_KEY2WxR[2]; 	// Key 2 Word x Register
	AT91_REG	 TDES_KEY3WxR[2]; 	// Key 3 Word x Register
	AT91_REG	 Reserved1[2]; 	// 
	AT91_REG	 TDES_IDATAxR[2]; 	// Input Data x Register
	AT91_REG	 Reserved2[2]; 	// 
	AT91_REG	 TDES_ODATAxR[2]; 	// Output Data x Register
	AT91_REG	 Reserved3[2]; 	// 
	AT91_REG	 TDES_IVxR[2]; 	// Initialization Vector x Register
	AT91_REG	 Reserved4[37]; 	// 
	AT91_REG	 TDES_VR; 	// TDES Version Register
	AT91_REG	 TDES_RPR; 	// Receive Pointer Register
	AT91_REG	 TDES_RCR; 	// Receive Counter Register
	AT91_REG	 TDES_TPR; 	// Transmit Pointer Register
	AT91_REG	 TDES_TCR; 	// Transmit Counter Register
	AT91_REG	 TDES_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 TDES_RNCR; 	// Receive Next Counter Register
	AT91_REG	 TDES_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 TDES_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 TDES_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 TDES_PTSR; 	// PDC Transfer Status Register
} AT91S_TDES, *AT91PS_TDES;
#else
#define TDES_CR         (AT91_CAST(AT91_REG *) 	0x00000000) // (TDES_CR) Control Register
#define TDES_MR         (AT91_CAST(AT91_REG *) 	0x00000004) // (TDES_MR) Mode Register
#define TDES_IER        (AT91_CAST(AT91_REG *) 	0x00000010) // (TDES_IER) Interrupt Enable Register
#define TDES_IDR        (AT91_CAST(AT91_REG *) 	0x00000014) // (TDES_IDR) Interrupt Disable Register
#define TDES_IMR        (AT91_CAST(AT91_REG *) 	0x00000018) // (TDES_IMR) Interrupt Mask Register
#define TDES_ISR        (AT91_CAST(AT91_REG *) 	0x0000001C) // (TDES_ISR) Interrupt Status Register
#define TDES_KEY1WxR    (AT91_CAST(AT91_REG *) 	0x00000020) // (TDES_KEY1WxR) Key 1 Word x Register
#define TDES_KEY2WxR    (AT91_CAST(AT91_REG *) 	0x00000028) // (TDES_KEY2WxR) Key 2 Word x Register
#define TDES_KEY3WxR    (AT91_CAST(AT91_REG *) 	0x00000030) // (TDES_KEY3WxR) Key 3 Word x Register
#define TDES_IDATAxR    (AT91_CAST(AT91_REG *) 	0x00000040) // (TDES_IDATAxR) Input Data x Register
#define TDES_ODATAxR    (AT91_CAST(AT91_REG *) 	0x00000050) // (TDES_ODATAxR) Output Data x Register
#define TDES_IVxR       (AT91_CAST(AT91_REG *) 	0x00000060) // (TDES_IVxR) Initialization Vector x Register
#define TDES_VR         (AT91_CAST(AT91_REG *) 	0x000000FC) // (TDES_VR) TDES Version Register

#endif
// -------- TDES_CR : (TDES Offset: 0x0) Control Register -------- 
#define AT91C_TDES_START      (0x1 <<  0) // (TDES) Starts Processing
#define AT91C_TDES_SWRST      (0x1 <<  8) // (TDES) Software Reset
// -------- TDES_MR : (TDES Offset: 0x4) Mode Register -------- 
#define AT91C_TDES_CIPHER     (0x1 <<  0) // (TDES) Processing Mode
#define AT91C_TDES_TDESMOD    (0x1 <<  1) // (TDES) Single or Triple DES Mode
#define AT91C_TDES_KEYMOD     (0x1 <<  4) // (TDES) Key Mode
#define AT91C_TDES_SMOD       (0x3 <<  8) // (TDES) Start Mode
#define 	AT91C_TDES_SMOD_MANUAL               (0x0 <<  8) // (TDES) Manual Mode: The START bit in register TDES_CR must be set to begin encryption or decryption.
#define 	AT91C_TDES_SMOD_AUTO                 (0x1 <<  8) // (TDES) Auto Mode: no action in TDES_CR is necessary (cf datasheet).
#define 	AT91C_TDES_SMOD_PDC                  (0x2 <<  8) // (TDES) PDC Mode (cf datasheet).
#define AT91C_TDES_OPMOD      (0x3 << 12) // (TDES) Operation Mode
#define 	AT91C_TDES_OPMOD_ECB                  (0x0 << 12) // (TDES) ECB Electronic CodeBook mode.
#define 	AT91C_TDES_OPMOD_CBC                  (0x1 << 12) // (TDES) CBC Cipher Block Chaining mode.
#define 	AT91C_TDES_OPMOD_OFB                  (0x2 << 12) // (TDES) OFB Output Feedback mode.
#define 	AT91C_TDES_OPMOD_CFB                  (0x3 << 12) // (TDES) CFB Cipher Feedback mode.
#define AT91C_TDES_LOD        (0x1 << 15) // (TDES) Last Output Data Mode
#define AT91C_TDES_CFBS       (0x3 << 16) // (TDES) Cipher Feedback Data Size
#define 	AT91C_TDES_CFBS_64_BIT               (0x0 << 16) // (TDES) 64-bit.
#define 	AT91C_TDES_CFBS_32_BIT               (0x1 << 16) // (TDES) 32-bit.
#define 	AT91C_TDES_CFBS_16_BIT               (0x2 << 16) // (TDES) 16-bit.
#define 	AT91C_TDES_CFBS_8_BIT                (0x3 << 16) // (TDES) 8-bit.
// -------- TDES_IER : (TDES Offset: 0x10) Interrupt Enable Register -------- 
#define AT91C_TDES_DATRDY     (0x1 <<  0) // (TDES) DATRDY
#define AT91C_TDES_ENDRX      (0x1 <<  1) // (TDES) PDC Read Buffer End
#define AT91C_TDES_ENDTX      (0x1 <<  2) // (TDES) PDC Write Buffer End
#define AT91C_TDES_RXBUFF     (0x1 <<  3) // (TDES) PDC Read Buffer Full
#define AT91C_TDES_TXBUFE     (0x1 <<  4) // (TDES) PDC Write Buffer Empty
#define AT91C_TDES_URAD       (0x1 <<  8) // (TDES) Unspecified Register Access Detection
// -------- TDES_IDR : (TDES Offset: 0x14) Interrupt Disable Register -------- 
// -------- TDES_IMR : (TDES Offset: 0x18) Interrupt Mask Register -------- 
// -------- TDES_ISR : (TDES Offset: 0x1c) Interrupt Status Register -------- 
#define AT91C_TDES_URAT       (0x3 << 12) // (TDES) Unspecified Register Access Type Status
#define 	AT91C_TDES_URAT_IN_DAT_WRITE_DATPROC (0x0 << 12) // (TDES) Input data register written during the data processing in PDC mode.
#define 	AT91C_TDES_URAT_OUT_DAT_READ_DATPROC (0x1 << 12) // (TDES) Output data register read during the data processing.
#define 	AT91C_TDES_URAT_MODEREG_WRITE_DATPROC (0x2 << 12) // (TDES) Mode register written during the data processing.
#define 	AT91C_TDES_URAT_WO_REG_READ          (0x3 << 12) // (TDES) Write-only register read access.

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR PWMC Channel Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PWMC_CH {
	AT91_REG	 PWMC_CMR; 	// Channel Mode Register
	AT91_REG	 PWMC_CDTYR; 	// Channel Duty Cycle Register
	AT91_REG	 PWMC_CPRDR; 	// Channel Period Register
	AT91_REG	 PWMC_CCNTR; 	// Channel Counter Register
	AT91_REG	 PWMC_CUPDR; 	// Channel Update Register
	AT91_REG	 PWMC_Reserved[3]; 	// Reserved
} AT91S_PWMC_CH, *AT91PS_PWMC_CH;
#else
#define PWMC_CMR        (AT91_CAST(AT91_REG *) 	0x00000000) // (PWMC_CMR) Channel Mode Register
#define PWMC_CDTYR      (AT91_CAST(AT91_REG *) 	0x00000004) // (PWMC_CDTYR) Channel Duty Cycle Register
#define PWMC_CPRDR      (AT91_CAST(AT91_REG *) 	0x00000008) // (PWMC_CPRDR) Channel Period Register
#define PWMC_CCNTR      (AT91_CAST(AT91_REG *) 	0x0000000C) // (PWMC_CCNTR) Channel Counter Register
#define PWMC_CUPDR      (AT91_CAST(AT91_REG *) 	0x00000010) // (PWMC_CUPDR) Channel Update Register
#define Reserved        (AT91_CAST(AT91_REG *) 	0x00000014) // (Reserved) Reserved

#endif
// -------- PWMC_CMR : (PWMC_CH Offset: 0x0) PWMC Channel Mode Register -------- 
#define AT91C_PWMC_CPRE       (0xF <<  0) // (PWMC_CH) Channel Pre-scaler : PWMC_CLKx
#define 	AT91C_PWMC_CPRE_MCK                  (0x0) // (PWMC_CH) 
#define 	AT91C_PWMC_CPRE_MCKA                 (0xB) // (PWMC_CH) 
#define 	AT91C_PWMC_CPRE_MCKB                 (0xC) // (PWMC_CH) 
#define AT91C_PWMC_CALG       (0x1 <<  8) // (PWMC_CH) Channel Alignment
#define AT91C_PWMC_CPOL       (0x1 <<  9) // (PWMC_CH) Channel Polarity
#define AT91C_PWMC_CPD        (0x1 << 10) // (PWMC_CH) Channel Update Period
// -------- PWMC_CDTYR : (PWMC_CH Offset: 0x4) PWMC Channel Duty Cycle Register -------- 
#define AT91C_PWMC_CDTY       (0x0 <<  0) // (PWMC_CH) Channel Duty Cycle
// -------- PWMC_CPRDR : (PWMC_CH Offset: 0x8) PWMC Channel Period Register -------- 
#define AT91C_PWMC_CPRD       (0x0 <<  0) // (PWMC_CH) Channel Period
// -------- PWMC_CCNTR : (PWMC_CH Offset: 0xc) PWMC Channel Counter Register -------- 
#define AT91C_PWMC_CCNT       (0x0 <<  0) // (PWMC_CH) Channel Counter
// -------- PWMC_CUPDR : (PWMC_CH Offset: 0x10) PWMC Channel Update Register -------- 
#define AT91C_PWMC_CUPD       (0x0 <<  0) // (PWMC_CH) Channel Update

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Pulse Width Modulation Controller Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_PWMC {
	AT91_REG	 PWMC_MR; 	// PWMC Mode Register
	AT91_REG	 PWMC_ENA; 	// PWMC Enable Register
	AT91_REG	 PWMC_DIS; 	// PWMC Disable Register
	AT91_REG	 PWMC_SR; 	// PWMC Status Register
	AT91_REG	 PWMC_IER; 	// PWMC Interrupt Enable Register
	AT91_REG	 PWMC_IDR; 	// PWMC Interrupt Disable Register
	AT91_REG	 PWMC_IMR; 	// PWMC Interrupt Mask Register
	AT91_REG	 PWMC_ISR; 	// PWMC Interrupt Status Register
	AT91_REG	 Reserved0[55]; 	// 
	AT91_REG	 PWMC_VR; 	// PWMC Version Register
	AT91_REG	 Reserved1[64]; 	// 
	AT91S_PWMC_CH	 PWMC_CH[32]; 	// PWMC Channel
} AT91S_PWMC, *AT91PS_PWMC;
#else
#define PWMC_MR         (AT91_CAST(AT91_REG *) 	0x00000000) // (PWMC_MR) PWMC Mode Register
#define PWMC_ENA        (AT91_CAST(AT91_REG *) 	0x00000004) // (PWMC_ENA) PWMC Enable Register
#define PWMC_DIS        (AT91_CAST(AT91_REG *) 	0x00000008) // (PWMC_DIS) PWMC Disable Register
#define PWMC_SR         (AT91_CAST(AT91_REG *) 	0x0000000C) // (PWMC_SR) PWMC Status Register
#define PWMC_IER        (AT91_CAST(AT91_REG *) 	0x00000010) // (PWMC_IER) PWMC Interrupt Enable Register
#define PWMC_IDR        (AT91_CAST(AT91_REG *) 	0x00000014) // (PWMC_IDR) PWMC Interrupt Disable Register
#define PWMC_IMR        (AT91_CAST(AT91_REG *) 	0x00000018) // (PWMC_IMR) PWMC Interrupt Mask Register
#define PWMC_ISR        (AT91_CAST(AT91_REG *) 	0x0000001C) // (PWMC_ISR) PWMC Interrupt Status Register
#define PWMC_VR         (AT91_CAST(AT91_REG *) 	0x000000FC) // (PWMC_VR) PWMC Version Register

#endif
// -------- PWMC_MR : (PWMC Offset: 0x0) PWMC Mode Register -------- 
#define AT91C_PWMC_DIVA       (0xFF <<  0) // (PWMC) CLKA divide factor.
#define AT91C_PWMC_PREA       (0xF <<  8) // (PWMC) Divider Input Clock Prescaler A
#define 	AT91C_PWMC_PREA_MCK                  (0x0 <<  8) // (PWMC) 
#define AT91C_PWMC_DIVB       (0xFF << 16) // (PWMC) CLKB divide factor.
#define AT91C_PWMC_PREB       (0xF << 24) // (PWMC) Divider Input Clock Prescaler B
#define 	AT91C_PWMC_PREB_MCK                  (0x0 << 24) // (PWMC) 
// -------- PWMC_ENA : (PWMC Offset: 0x4) PWMC Enable Register -------- 
#define AT91C_PWMC_CHID0      (0x1 <<  0) // (PWMC) Channel ID 0
#define AT91C_PWMC_CHID1      (0x1 <<  1) // (PWMC) Channel ID 1
#define AT91C_PWMC_CHID2      (0x1 <<  2) // (PWMC) Channel ID 2
#define AT91C_PWMC_CHID3      (0x1 <<  3) // (PWMC) Channel ID 3
#define AT91C_PWMC_CHID4      (0x1 <<  4) // (PWMC) Channel ID 4
#define AT91C_PWMC_CHID5      (0x1 <<  5) // (PWMC) Channel ID 5
#define AT91C_PWMC_CHID6      (0x1 <<  6) // (PWMC) Channel ID 6
#define AT91C_PWMC_CHID7      (0x1 <<  7) // (PWMC) Channel ID 7
// -------- PWMC_DIS : (PWMC Offset: 0x8) PWMC Disable Register -------- 
// -------- PWMC_SR : (PWMC Offset: 0xc) PWMC Status Register -------- 
// -------- PWMC_IER : (PWMC Offset: 0x10) PWMC Interrupt Enable Register -------- 
// -------- PWMC_IDR : (PWMC Offset: 0x14) PWMC Interrupt Disable Register -------- 
// -------- PWMC_IMR : (PWMC Offset: 0x18) PWMC Interrupt Mask Register -------- 
// -------- PWMC_ISR : (PWMC Offset: 0x1c) PWMC Interrupt Status Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Ethernet MAC 10/100
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_EMAC {
	AT91_REG	 EMAC_NCR; 	// Network Control Register
	AT91_REG	 EMAC_NCFGR; 	// Network Configuration Register
	AT91_REG	 EMAC_NSR; 	// Network Status Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 EMAC_TSR; 	// Transmit Status Register
	AT91_REG	 EMAC_RBQP; 	// Receive Buffer Queue Pointer
	AT91_REG	 EMAC_TBQP; 	// Transmit Buffer Queue Pointer
	AT91_REG	 EMAC_RSR; 	// Receive Status Register
	AT91_REG	 EMAC_ISR; 	// Interrupt Status Register
	AT91_REG	 EMAC_IER; 	// Interrupt Enable Register
	AT91_REG	 EMAC_IDR; 	// Interrupt Disable Register
	AT91_REG	 EMAC_IMR; 	// Interrupt Mask Register
	AT91_REG	 EMAC_MAN; 	// PHY Maintenance Register
	AT91_REG	 EMAC_PTR; 	// Pause Time Register
	AT91_REG	 EMAC_PFR; 	// Pause Frames received Register
	AT91_REG	 EMAC_FTO; 	// Frames Transmitted OK Register
	AT91_REG	 EMAC_SCF; 	// Single Collision Frame Register
	AT91_REG	 EMAC_MCF; 	// Multiple Collision Frame Register
	AT91_REG	 EMAC_FRO; 	// Frames Received OK Register
	AT91_REG	 EMAC_FCSE; 	// Frame Check Sequence Error Register
	AT91_REG	 EMAC_ALE; 	// Alignment Error Register
	AT91_REG	 EMAC_DTF; 	// Deferred Transmission Frame Register
	AT91_REG	 EMAC_LCOL; 	// Late Collision Register
	AT91_REG	 EMAC_ECOL; 	// Excessive Collision Register
	AT91_REG	 EMAC_TUND; 	// Transmit Underrun Error Register
	AT91_REG	 EMAC_CSE; 	// Carrier Sense Error Register
	AT91_REG	 EMAC_RRE; 	// Receive Ressource Error Register
	AT91_REG	 EMAC_ROV; 	// Receive Overrun Errors Register
	AT91_REG	 EMAC_RSE; 	// Receive Symbol Errors Register
	AT91_REG	 EMAC_ELE; 	// Excessive Length Errors Register
	AT91_REG	 EMAC_RJA; 	// Receive Jabbers Register
	AT91_REG	 EMAC_USF; 	// Undersize Frames Register
	AT91_REG	 EMAC_STE; 	// SQE Test Error Register
	AT91_REG	 EMAC_RLE; 	// Receive Length Field Mismatch Register
	AT91_REG	 EMAC_TPF; 	// Transmitted Pause Frames Register
	AT91_REG	 EMAC_HRB; 	// Hash Address Bottom[31:0]
	AT91_REG	 EMAC_HRT; 	// Hash Address Top[63:32]
	AT91_REG	 EMAC_SA1L; 	// Specific Address 1 Bottom, First 4 bytes
	AT91_REG	 EMAC_SA1H; 	// Specific Address 1 Top, Last 2 bytes
	AT91_REG	 EMAC_SA2L; 	// Specific Address 2 Bottom, First 4 bytes
	AT91_REG	 EMAC_SA2H; 	// Specific Address 2 Top, Last 2 bytes
	AT91_REG	 EMAC_SA3L; 	// Specific Address 3 Bottom, First 4 bytes
	AT91_REG	 EMAC_SA3H; 	// Specific Address 3 Top, Last 2 bytes
	AT91_REG	 EMAC_SA4L; 	// Specific Address 4 Bottom, First 4 bytes
	AT91_REG	 EMAC_SA4H; 	// Specific Address 4 Top, Last 2 bytes
	AT91_REG	 EMAC_TID; 	// Type ID Checking Register
	AT91_REG	 EMAC_TPQ; 	// Transmit Pause Quantum Register
	AT91_REG	 EMAC_USRIO; 	// USER Input/Output Register
	AT91_REG	 EMAC_WOL; 	// Wake On LAN Register
	AT91_REG	 Reserved1[13]; 	// 
	AT91_REG	 EMAC_REV; 	// Revision Register
} AT91S_EMAC, *AT91PS_EMAC;
#else
#define EMAC_NCR        (AT91_CAST(AT91_REG *) 	0x00000000) // (EMAC_NCR) Network Control Register
#define EMAC_NCFGR      (AT91_CAST(AT91_REG *) 	0x00000004) // (EMAC_NCFGR) Network Configuration Register
#define EMAC_NSR        (AT91_CAST(AT91_REG *) 	0x00000008) // (EMAC_NSR) Network Status Register
#define EMAC_TSR        (AT91_CAST(AT91_REG *) 	0x00000014) // (EMAC_TSR) Transmit Status Register
#define EMAC_RBQP       (AT91_CAST(AT91_REG *) 	0x00000018) // (EMAC_RBQP) Receive Buffer Queue Pointer
#define EMAC_TBQP       (AT91_CAST(AT91_REG *) 	0x0000001C) // (EMAC_TBQP) Transmit Buffer Queue Pointer
#define EMAC_RSR        (AT91_CAST(AT91_REG *) 	0x00000020) // (EMAC_RSR) Receive Status Register
#define EMAC_ISR        (AT91_CAST(AT91_REG *) 	0x00000024) // (EMAC_ISR) Interrupt Status Register
#define EMAC_IER        (AT91_CAST(AT91_REG *) 	0x00000028) // (EMAC_IER) Interrupt Enable Register
#define EMAC_IDR        (AT91_CAST(AT91_REG *) 	0x0000002C) // (EMAC_IDR) Interrupt Disable Register
#define EMAC_IMR        (AT91_CAST(AT91_REG *) 	0x00000030) // (EMAC_IMR) Interrupt Mask Register
#define EMAC_MAN        (AT91_CAST(AT91_REG *) 	0x00000034) // (EMAC_MAN) PHY Maintenance Register
#define EMAC_PTR        (AT91_CAST(AT91_REG *) 	0x00000038) // (EMAC_PTR) Pause Time Register
#define EMAC_PFR        (AT91_CAST(AT91_REG *) 	0x0000003C) // (EMAC_PFR) Pause Frames received Register
#define EMAC_FTO        (AT91_CAST(AT91_REG *) 	0x00000040) // (EMAC_FTO) Frames Transmitted OK Register
#define EMAC_SCF        (AT91_CAST(AT91_REG *) 	0x00000044) // (EMAC_SCF) Single Collision Frame Register
#define EMAC_MCF        (AT91_CAST(AT91_REG *) 	0x00000048) // (EMAC_MCF) Multiple Collision Frame Register
#define EMAC_FRO        (AT91_CAST(AT91_REG *) 	0x0000004C) // (EMAC_FRO) Frames Received OK Register
#define EMAC_FCSE       (AT91_CAST(AT91_REG *) 	0x00000050) // (EMAC_FCSE) Frame Check Sequence Error Register
#define EMAC_ALE        (AT91_CAST(AT91_REG *) 	0x00000054) // (EMAC_ALE) Alignment Error Register
#define EMAC_DTF        (AT91_CAST(AT91_REG *) 	0x00000058) // (EMAC_DTF) Deferred Transmission Frame Register
#define EMAC_LCOL       (AT91_CAST(AT91_REG *) 	0x0000005C) // (EMAC_LCOL) Late Collision Register
#define EMAC_ECOL       (AT91_CAST(AT91_REG *) 	0x00000060) // (EMAC_ECOL) Excessive Collision Register
#define EMAC_TUND       (AT91_CAST(AT91_REG *) 	0x00000064) // (EMAC_TUND) Transmit Underrun Error Register
#define EMAC_CSE        (AT91_CAST(AT91_REG *) 	0x00000068) // (EMAC_CSE) Carrier Sense Error Register
#define EMAC_RRE        (AT91_CAST(AT91_REG *) 	0x0000006C) // (EMAC_RRE) Receive Ressource Error Register
#define EMAC_ROV        (AT91_CAST(AT91_REG *) 	0x00000070) // (EMAC_ROV) Receive Overrun Errors Register
#define EMAC_RSE        (AT91_CAST(AT91_REG *) 	0x00000074) // (EMAC_RSE) Receive Symbol Errors Register
#define EMAC_ELE        (AT91_CAST(AT91_REG *) 	0x00000078) // (EMAC_ELE) Excessive Length Errors Register
#define EMAC_RJA        (AT91_CAST(AT91_REG *) 	0x0000007C) // (EMAC_RJA) Receive Jabbers Register
#define EMAC_USF        (AT91_CAST(AT91_REG *) 	0x00000080) // (EMAC_USF) Undersize Frames Register
#define EMAC_STE        (AT91_CAST(AT91_REG *) 	0x00000084) // (EMAC_STE) SQE Test Error Register
#define EMAC_RLE        (AT91_CAST(AT91_REG *) 	0x00000088) // (EMAC_RLE) Receive Length Field Mismatch Register
#define EMAC_TPF        (AT91_CAST(AT91_REG *) 	0x0000008C) // (EMAC_TPF) Transmitted Pause Frames Register
#define EMAC_HRB        (AT91_CAST(AT91_REG *) 	0x00000090) // (EMAC_HRB) Hash Address Bottom[31:0]
#define EMAC_HRT        (AT91_CAST(AT91_REG *) 	0x00000094) // (EMAC_HRT) Hash Address Top[63:32]
#define EMAC_SA1L       (AT91_CAST(AT91_REG *) 	0x00000098) // (EMAC_SA1L) Specific Address 1 Bottom, First 4 bytes
#define EMAC_SA1H       (AT91_CAST(AT91_REG *) 	0x0000009C) // (EMAC_SA1H) Specific Address 1 Top, Last 2 bytes
#define EMAC_SA2L       (AT91_CAST(AT91_REG *) 	0x000000A0) // (EMAC_SA2L) Specific Address 2 Bottom, First 4 bytes
#define EMAC_SA2H       (AT91_CAST(AT91_REG *) 	0x000000A4) // (EMAC_SA2H) Specific Address 2 Top, Last 2 bytes
#define EMAC_SA3L       (AT91_CAST(AT91_REG *) 	0x000000A8) // (EMAC_SA3L) Specific Address 3 Bottom, First 4 bytes
#define EMAC_SA3H       (AT91_CAST(AT91_REG *) 	0x000000AC) // (EMAC_SA3H) Specific Address 3 Top, Last 2 bytes
#define EMAC_SA4L       (AT91_CAST(AT91_REG *) 	0x000000B0) // (EMAC_SA4L) Specific Address 4 Bottom, First 4 bytes
#define EMAC_SA4H       (AT91_CAST(AT91_REG *) 	0x000000B4) // (EMAC_SA4H) Specific Address 4 Top, Last 2 bytes
#define EMAC_TID        (AT91_CAST(AT91_REG *) 	0x000000B8) // (EMAC_TID) Type ID Checking Register
#define EMAC_TPQ        (AT91_CAST(AT91_REG *) 	0x000000BC) // (EMAC_TPQ) Transmit Pause Quantum Register
#define EMAC_USRIO      (AT91_CAST(AT91_REG *) 	0x000000C0) // (EMAC_USRIO) USER Input/Output Register
#define EMAC_WOL        (AT91_CAST(AT91_REG *) 	0x000000C4) // (EMAC_WOL) Wake On LAN Register
#define EMAC_REV        (AT91_CAST(AT91_REG *) 	0x000000FC) // (EMAC_REV) Revision Register

#endif
// -------- EMAC_NCR : (EMAC Offset: 0x0)  -------- 
#define AT91C_EMAC_LB         (0x1 <<  0) // (EMAC) Loopback. Optional. When set, loopback signal is at high level.
#define AT91C_EMAC_LLB        (0x1 <<  1) // (EMAC) Loopback local. 
#define AT91C_EMAC_RE         (0x1 <<  2) // (EMAC) Receive enable. 
#define AT91C_EMAC_TE         (0x1 <<  3) // (EMAC) Transmit enable. 
#define AT91C_EMAC_MPE        (0x1 <<  4) // (EMAC) Management port enable. 
#define AT91C_EMAC_CLRSTAT    (0x1 <<  5) // (EMAC) Clear statistics registers. 
#define AT91C_EMAC_INCSTAT    (0x1 <<  6) // (EMAC) Increment statistics registers. 
#define AT91C_EMAC_WESTAT     (0x1 <<  7) // (EMAC) Write enable for statistics registers. 
#define AT91C_EMAC_BP         (0x1 <<  8) // (EMAC) Back pressure. 
#define AT91C_EMAC_TSTART     (0x1 <<  9) // (EMAC) Start Transmission. 
#define AT91C_EMAC_THALT      (0x1 << 10) // (EMAC) Transmission Halt. 
#define AT91C_EMAC_TPFR       (0x1 << 11) // (EMAC) Transmit pause frame 
#define AT91C_EMAC_TZQ        (0x1 << 12) // (EMAC) Transmit zero quantum pause frame
// -------- EMAC_NCFGR : (EMAC Offset: 0x4) Network Configuration Register -------- 
#define AT91C_EMAC_SPD        (0x1 <<  0) // (EMAC) Speed. 
#define AT91C_EMAC_FD         (0x1 <<  1) // (EMAC) Full duplex. 
#define AT91C_EMAC_JFRAME     (0x1 <<  3) // (EMAC) Jumbo Frames. 
#define AT91C_EMAC_CAF        (0x1 <<  4) // (EMAC) Copy all frames. 
#define AT91C_EMAC_NBC        (0x1 <<  5) // (EMAC) No broadcast. 
#define AT91C_EMAC_MTI        (0x1 <<  6) // (EMAC) Multicast hash event enable
#define AT91C_EMAC_UNI        (0x1 <<  7) // (EMAC) Unicast hash enable. 
#define AT91C_EMAC_BIG        (0x1 <<  8) // (EMAC) Receive 1522 bytes. 
#define AT91C_EMAC_EAE        (0x1 <<  9) // (EMAC) External address match enable. 
#define AT91C_EMAC_CLK        (0x3 << 10) // (EMAC) 
#define 	AT91C_EMAC_CLK_HCLK_8               (0x0 << 10) // (EMAC) HCLK divided by 8
#define 	AT91C_EMAC_CLK_HCLK_16              (0x1 << 10) // (EMAC) HCLK divided by 16
#define 	AT91C_EMAC_CLK_HCLK_32              (0x2 << 10) // (EMAC) HCLK divided by 32
#define 	AT91C_EMAC_CLK_HCLK_64              (0x3 << 10) // (EMAC) HCLK divided by 64
#define AT91C_EMAC_RTY        (0x1 << 12) // (EMAC) 
#define AT91C_EMAC_PAE        (0x1 << 13) // (EMAC) 
#define AT91C_EMAC_RBOF       (0x3 << 14) // (EMAC) 
#define 	AT91C_EMAC_RBOF_OFFSET_0             (0x0 << 14) // (EMAC) no offset from start of receive buffer
#define 	AT91C_EMAC_RBOF_OFFSET_1             (0x1 << 14) // (EMAC) one byte offset from start of receive buffer
#define 	AT91C_EMAC_RBOF_OFFSET_2             (0x2 << 14) // (EMAC) two bytes offset from start of receive buffer
#define 	AT91C_EMAC_RBOF_OFFSET_3             (0x3 << 14) // (EMAC) three bytes offset from start of receive buffer
#define AT91C_EMAC_RLCE       (0x1 << 16) // (EMAC) Receive Length field Checking Enable
#define AT91C_EMAC_DRFCS      (0x1 << 17) // (EMAC) Discard Receive FCS
#define AT91C_EMAC_EFRHD      (0x1 << 18) // (EMAC) 
#define AT91C_EMAC_IRXFCS     (0x1 << 19) // (EMAC) Ignore RX FCS
// -------- EMAC_NSR : (EMAC Offset: 0x8) Network Status Register -------- 
#define AT91C_EMAC_LINKR      (0x1 <<  0) // (EMAC) 
#define AT91C_EMAC_MDIO       (0x1 <<  1) // (EMAC) 
#define AT91C_EMAC_IDLE       (0x1 <<  2) // (EMAC) 
// -------- EMAC_TSR : (EMAC Offset: 0x14) Transmit Status Register -------- 
#define AT91C_EMAC_UBR        (0x1 <<  0) // (EMAC) 
#define AT91C_EMAC_COL        (0x1 <<  1) // (EMAC) 
#define AT91C_EMAC_RLES       (0x1 <<  2) // (EMAC) 
#define AT91C_EMAC_TGO        (0x1 <<  3) // (EMAC) Transmit Go
#define AT91C_EMAC_BEX        (0x1 <<  4) // (EMAC) Buffers exhausted mid frame
#define AT91C_EMAC_COMP       (0x1 <<  5) // (EMAC) 
#define AT91C_EMAC_UND        (0x1 <<  6) // (EMAC) 
// -------- EMAC_RSR : (EMAC Offset: 0x20) Receive Status Register -------- 
#define AT91C_EMAC_BNA        (0x1 <<  0) // (EMAC) 
#define AT91C_EMAC_REC        (0x1 <<  1) // (EMAC) 
#define AT91C_EMAC_OVR        (0x1 <<  2) // (EMAC) 
// -------- EMAC_ISR : (EMAC Offset: 0x24) Interrupt Status Register -------- 
#define AT91C_EMAC_MFD        (0x1 <<  0) // (EMAC) 
#define AT91C_EMAC_RCOMP      (0x1 <<  1) // (EMAC) 
#define AT91C_EMAC_RXUBR      (0x1 <<  2) // (EMAC) 
#define AT91C_EMAC_TXUBR      (0x1 <<  3) // (EMAC) 
#define AT91C_EMAC_TUNDR      (0x1 <<  4) // (EMAC) 
#define AT91C_EMAC_RLEX       (0x1 <<  5) // (EMAC) 
#define AT91C_EMAC_TXERR      (0x1 <<  6) // (EMAC) 
#define AT91C_EMAC_TCOMP      (0x1 <<  7) // (EMAC) 
#define AT91C_EMAC_LINK       (0x1 <<  9) // (EMAC) 
#define AT91C_EMAC_ROVR       (0x1 << 10) // (EMAC) 
#define AT91C_EMAC_HRESP      (0x1 << 11) // (EMAC) 
#define AT91C_EMAC_PFRE       (0x1 << 12) // (EMAC) 
#define AT91C_EMAC_PTZ        (0x1 << 13) // (EMAC) 
// -------- EMAC_IER : (EMAC Offset: 0x28) Interrupt Enable Register -------- 
// -------- EMAC_IDR : (EMAC Offset: 0x2c) Interrupt Disable Register -------- 
// -------- EMAC_IMR : (EMAC Offset: 0x30) Interrupt Mask Register -------- 
// -------- EMAC_MAN : (EMAC Offset: 0x34) PHY Maintenance Register -------- 
#define AT91C_EMAC_DATA       (0xFFFF <<  0) // (EMAC) 
#define AT91C_EMAC_CODE       (0x3 << 16) // (EMAC) 
#define AT91C_EMAC_REGA       (0x1F << 18) // (EMAC) 
#define AT91C_EMAC_PHYA       (0x1F << 23) // (EMAC) 
#define AT91C_EMAC_RW         (0x3 << 28) // (EMAC) 
#define AT91C_EMAC_SOF        (0x3 << 30) // (EMAC) 
// -------- EMAC_USRIO : (EMAC Offset: 0xc0) USER Input Output Register -------- 
#define AT91C_EMAC_RMII       (0x1 <<  0) // (EMAC) Reduce MII
#define AT91C_EMAC_CLKEN      (0x1 <<  1) // (EMAC) Clock Enable
// -------- EMAC_WOL : (EMAC Offset: 0xc4) Wake On LAN Register -------- 
#define AT91C_EMAC_IP         (0xFFFF <<  0) // (EMAC) ARP request IP address
#define AT91C_EMAC_MAG        (0x1 << 16) // (EMAC) Magic packet event enable
#define AT91C_EMAC_ARP        (0x1 << 17) // (EMAC) ARP request event enable
#define AT91C_EMAC_SA1        (0x1 << 18) // (EMAC) Specific address register 1 event enable
// -------- EMAC_REV : (EMAC Offset: 0xfc) Revision Register -------- 
#define AT91C_EMAC_REVREF     (0xFFFF <<  0) // (EMAC) 
#define AT91C_EMAC_PARTREF    (0xFFFF << 16) // (EMAC) 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Analog to Digital Convertor
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_ADC {
	AT91_REG	 ADC_CR; 	// ADC Control Register
	AT91_REG	 ADC_MR; 	// ADC Mode Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 ADC_CHER; 	// ADC Channel Enable Register
	AT91_REG	 ADC_CHDR; 	// ADC Channel Disable Register
	AT91_REG	 ADC_CHSR; 	// ADC Channel Status Register
	AT91_REG	 ADC_SR; 	// ADC Status Register
	AT91_REG	 ADC_LCDR; 	// ADC Last Converted Data Register
	AT91_REG	 ADC_IER; 	// ADC Interrupt Enable Register
	AT91_REG	 ADC_IDR; 	// ADC Interrupt Disable Register
	AT91_REG	 ADC_IMR; 	// ADC Interrupt Mask Register
	AT91_REG	 ADC_CDR0; 	// ADC Channel Data Register 0
	AT91_REG	 ADC_CDR1; 	// ADC Channel Data Register 1
	AT91_REG	 ADC_CDR2; 	// ADC Channel Data Register 2
	AT91_REG	 ADC_CDR3; 	// ADC Channel Data Register 3
	AT91_REG	 ADC_CDR4; 	// ADC Channel Data Register 4
	AT91_REG	 ADC_CDR5; 	// ADC Channel Data Register 5
	AT91_REG	 ADC_CDR6; 	// ADC Channel Data Register 6
	AT91_REG	 ADC_CDR7; 	// ADC Channel Data Register 7
	AT91_REG	 Reserved1[44]; 	// 
	AT91_REG	 ADC_RPR; 	// Receive Pointer Register
	AT91_REG	 ADC_RCR; 	// Receive Counter Register
	AT91_REG	 ADC_TPR; 	// Transmit Pointer Register
	AT91_REG	 ADC_TCR; 	// Transmit Counter Register
	AT91_REG	 ADC_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 ADC_RNCR; 	// Receive Next Counter Register
	AT91_REG	 ADC_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 ADC_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 ADC_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 ADC_PTSR; 	// PDC Transfer Status Register
} AT91S_ADC, *AT91PS_ADC;
#else
#define ADC_CR          (AT91_CAST(AT91_REG *) 	0x00000000) // (ADC_CR) ADC Control Register
#define ADC_MR          (AT91_CAST(AT91_REG *) 	0x00000004) // (ADC_MR) ADC Mode Register
#define ADC_CHER        (AT91_CAST(AT91_REG *) 	0x00000010) // (ADC_CHER) ADC Channel Enable Register
#define ADC_CHDR        (AT91_CAST(AT91_REG *) 	0x00000014) // (ADC_CHDR) ADC Channel Disable Register
#define ADC_CHSR        (AT91_CAST(AT91_REG *) 	0x00000018) // (ADC_CHSR) ADC Channel Status Register
#define ADC_SR          (AT91_CAST(AT91_REG *) 	0x0000001C) // (ADC_SR) ADC Status Register
#define ADC_LCDR        (AT91_CAST(AT91_REG *) 	0x00000020) // (ADC_LCDR) ADC Last Converted Data Register
#define ADC_IER         (AT91_CAST(AT91_REG *) 	0x00000024) // (ADC_IER) ADC Interrupt Enable Register
#define ADC_IDR         (AT91_CAST(AT91_REG *) 	0x00000028) // (ADC_IDR) ADC Interrupt Disable Register
#define ADC_IMR         (AT91_CAST(AT91_REG *) 	0x0000002C) // (ADC_IMR) ADC Interrupt Mask Register
#define ADC_CDR0        (AT91_CAST(AT91_REG *) 	0x00000030) // (ADC_CDR0) ADC Channel Data Register 0
#define ADC_CDR1        (AT91_CAST(AT91_REG *) 	0x00000034) // (ADC_CDR1) ADC Channel Data Register 1
#define ADC_CDR2        (AT91_CAST(AT91_REG *) 	0x00000038) // (ADC_CDR2) ADC Channel Data Register 2
#define ADC_CDR3        (AT91_CAST(AT91_REG *) 	0x0000003C) // (ADC_CDR3) ADC Channel Data Register 3
#define ADC_CDR4        (AT91_CAST(AT91_REG *) 	0x00000040) // (ADC_CDR4) ADC Channel Data Register 4
#define ADC_CDR5        (AT91_CAST(AT91_REG *) 	0x00000044) // (ADC_CDR5) ADC Channel Data Register 5
#define ADC_CDR6        (AT91_CAST(AT91_REG *) 	0x00000048) // (ADC_CDR6) ADC Channel Data Register 6
#define ADC_CDR7        (AT91_CAST(AT91_REG *) 	0x0000004C) // (ADC_CDR7) ADC Channel Data Register 7

#endif
// -------- ADC_CR : (ADC Offset: 0x0) ADC Control Register -------- 
#define AT91C_ADC_SWRST       (0x1 <<  0) // (ADC) Software Reset
#define AT91C_ADC_START       (0x1 <<  1) // (ADC) Start Conversion
// -------- ADC_MR : (ADC Offset: 0x4) ADC Mode Register -------- 
#define AT91C_ADC_TRGEN       (0x1 <<  0) // (ADC) Trigger Enable
#define 	AT91C_ADC_TRGEN_DIS                  (0x0) // (ADC) Hradware triggers are disabled. Starting a conversion is only possible by software
#define 	AT91C_ADC_TRGEN_EN                   (0x1) // (ADC) Hardware trigger selected by TRGSEL field is enabled.
#define AT91C_ADC_TRGSEL      (0x7 <<  1) // (ADC) Trigger Selection
#define 	AT91C_ADC_TRGSEL_TIOA0                (0x0 <<  1) // (ADC) Selected TRGSEL = TIAO0
#define 	AT91C_ADC_TRGSEL_TIOA1                (0x1 <<  1) // (ADC) Selected TRGSEL = TIAO1
#define 	AT91C_ADC_TRGSEL_TIOA2                (0x2 <<  1) // (ADC) Selected TRGSEL = TIAO2
#define 	AT91C_ADC_TRGSEL_TIOA3                (0x3 <<  1) // (ADC) Selected TRGSEL = TIAO3
#define 	AT91C_ADC_TRGSEL_TIOA4                (0x4 <<  1) // (ADC) Selected TRGSEL = TIAO4
#define 	AT91C_ADC_TRGSEL_TIOA5                (0x5 <<  1) // (ADC) Selected TRGSEL = TIAO5
#define 	AT91C_ADC_TRGSEL_EXT                  (0x6 <<  1) // (ADC) Selected TRGSEL = External Trigger
#define AT91C_ADC_LOWRES      (0x1 <<  4) // (ADC) Resolution.
#define 	AT91C_ADC_LOWRES_10_BIT               (0x0 <<  4) // (ADC) 10-bit resolution
#define 	AT91C_ADC_LOWRES_8_BIT                (0x1 <<  4) // (ADC) 8-bit resolution
#define AT91C_ADC_SLEEP       (0x1 <<  5) // (ADC) Sleep Mode
#define 	AT91C_ADC_SLEEP_NORMAL_MODE          (0x0 <<  5) // (ADC) Normal Mode
#define 	AT91C_ADC_SLEEP_MODE                 (0x1 <<  5) // (ADC) Sleep Mode
#define AT91C_ADC_PRESCAL     (0xFF <<  8) // (ADC) Prescaler rate selection
#define AT91C_ADC_STARTUP     (0x7F << 16) // (ADC) Startup Time
#define AT91C_ADC_SHTIM       (0xF << 24) // (ADC) Sample & Hold Time
// -------- 	ADC_CHER : (ADC Offset: 0x10) ADC Channel Enable Register -------- 
#define AT91C_ADC_CH0         (0x1 <<  0) // (ADC) Channel 0
#define AT91C_ADC_CH1         (0x1 <<  1) // (ADC) Channel 1
#define AT91C_ADC_CH2         (0x1 <<  2) // (ADC) Channel 2
#define AT91C_ADC_CH3         (0x1 <<  3) // (ADC) Channel 3
#define AT91C_ADC_CH4         (0x1 <<  4) // (ADC) Channel 4
#define AT91C_ADC_CH5         (0x1 <<  5) // (ADC) Channel 5
#define AT91C_ADC_CH6         (0x1 <<  6) // (ADC) Channel 6
#define AT91C_ADC_CH7         (0x1 <<  7) // (ADC) Channel 7
// -------- 	ADC_CHDR : (ADC Offset: 0x14) ADC Channel Disable Register -------- 
// -------- 	ADC_CHSR : (ADC Offset: 0x18) ADC Channel Status Register -------- 
// -------- ADC_SR : (ADC Offset: 0x1c) ADC Status Register -------- 
#define AT91C_ADC_EOC0        (0x1 <<  0) // (ADC) End of Conversion
#define AT91C_ADC_EOC1        (0x1 <<  1) // (ADC) End of Conversion
#define AT91C_ADC_EOC2        (0x1 <<  2) // (ADC) End of Conversion
#define AT91C_ADC_EOC3        (0x1 <<  3) // (ADC) End of Conversion
#define AT91C_ADC_EOC4        (0x1 <<  4) // (ADC) End of Conversion
#define AT91C_ADC_EOC5        (0x1 <<  5) // (ADC) End of Conversion
#define AT91C_ADC_EOC6        (0x1 <<  6) // (ADC) End of Conversion
#define AT91C_ADC_EOC7        (0x1 <<  7) // (ADC) End of Conversion
#define AT91C_ADC_OVRE0       (0x1 <<  8) // (ADC) Overrun Error
#define AT91C_ADC_OVRE1       (0x1 <<  9) // (ADC) Overrun Error
#define AT91C_ADC_OVRE2       (0x1 << 10) // (ADC) Overrun Error
#define AT91C_ADC_OVRE3       (0x1 << 11) // (ADC) Overrun Error
#define AT91C_ADC_OVRE4       (0x1 << 12) // (ADC) Overrun Error
#define AT91C_ADC_OVRE5       (0x1 << 13) // (ADC) Overrun Error
#define AT91C_ADC_OVRE6       (0x1 << 14) // (ADC) Overrun Error
#define AT91C_ADC_OVRE7       (0x1 << 15) // (ADC) Overrun Error
#define AT91C_ADC_DRDY        (0x1 << 16) // (ADC) Data Ready
#define AT91C_ADC_GOVRE       (0x1 << 17) // (ADC) General Overrun
#define AT91C_ADC_ENDRX       (0x1 << 18) // (ADC) End of Receiver Transfer
#define AT91C_ADC_RXBUFF      (0x1 << 19) // (ADC) RXBUFF Interrupt
// -------- ADC_LCDR : (ADC Offset: 0x20) ADC Last Converted Data Register -------- 
#define AT91C_ADC_LDATA       (0x3FF <<  0) // (ADC) Last Data Converted
// -------- ADC_IER : (ADC Offset: 0x24) ADC Interrupt Enable Register -------- 
// -------- ADC_IDR : (ADC Offset: 0x28) ADC Interrupt Disable Register -------- 
// -------- ADC_IMR : (ADC Offset: 0x2c) ADC Interrupt Mask Register -------- 
// -------- ADC_CDR0 : (ADC Offset: 0x30) ADC Channel Data Register 0 -------- 
#define AT91C_ADC_DATA        (0x3FF <<  0) // (ADC) Converted Data
// -------- ADC_CDR1 : (ADC Offset: 0x34) ADC Channel Data Register 1 -------- 
// -------- ADC_CDR2 : (ADC Offset: 0x38) ADC Channel Data Register 2 -------- 
// -------- ADC_CDR3 : (ADC Offset: 0x3c) ADC Channel Data Register 3 -------- 
// -------- ADC_CDR4 : (ADC Offset: 0x40) ADC Channel Data Register 4 -------- 
// -------- ADC_CDR5 : (ADC Offset: 0x44) ADC Channel Data Register 5 -------- 
// -------- ADC_CDR6 : (ADC Offset: 0x48) ADC Channel Data Register 6 -------- 
// -------- ADC_CDR7 : (ADC Offset: 0x4c) ADC Channel Data Register 7 -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Image Sensor Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_ISI {
	AT91_REG	 ISI_CR1; 	// Control Register 1
	AT91_REG	 ISI_CR2; 	// Control Register 2
	AT91_REG	 ISI_SR; 	// Status Register
	AT91_REG	 ISI_IER; 	// Interrupt Enable Register
	AT91_REG	 ISI_IDR; 	// Interrupt Disable Register
	AT91_REG	 ISI_IMR; 	// Interrupt Mask Register
	AT91_REG	 Reserved0[2]; 	// 
	AT91_REG	 ISI_PSIZE; 	// Preview Size Register
	AT91_REG	 ISI_PDECF; 	// Preview Decimation Factor Register
	AT91_REG	 ISI_PPFBD; 	// Preview Frame Buffer Address Register
	AT91_REG	 ISI_CDBA; 	// Codec Dma Address Register
	AT91_REG	 ISI_Y2RSET0; 	// Color Space Conversion Register
	AT91_REG	 ISI_Y2RSET1; 	// Color Space Conversion Register
	AT91_REG	 ISI_R2YSET0; 	// Color Space Conversion Register
	AT91_REG	 ISI_R2YSET1; 	// Color Space Conversion Register
	AT91_REG	 ISI_R2YSET2; 	// Color Space Conversion Register
} AT91S_ISI, *AT91PS_ISI;
#else
#define ISI_CR1         (AT91_CAST(AT91_REG *) 	0x00000000) // (ISI_CR1) Control Register 1
#define ISI_CR2         (AT91_CAST(AT91_REG *) 	0x00000004) // (ISI_CR2) Control Register 2
#define ISI_SR          (AT91_CAST(AT91_REG *) 	0x00000008) // (ISI_SR) Status Register
#define ISI_IER         (AT91_CAST(AT91_REG *) 	0x0000000C) // (ISI_IER) Interrupt Enable Register
#define ISI_IDR         (AT91_CAST(AT91_REG *) 	0x00000010) // (ISI_IDR) Interrupt Disable Register
#define ISI_IMR         (AT91_CAST(AT91_REG *) 	0x00000014) // (ISI_IMR) Interrupt Mask Register
#define ISI_PSIZE       (AT91_CAST(AT91_REG *) 	0x00000020) // (ISI_PSIZE) Preview Size Register
#define ISI_PDECF       (AT91_CAST(AT91_REG *) 	0x00000024) // (ISI_PDECF) Preview Decimation Factor Register
#define ISI_PPFBD       (AT91_CAST(AT91_REG *) 	0x00000028) // (ISI_PPFBD) Preview Frame Buffer Address Register
#define ISI_CDBA        (AT91_CAST(AT91_REG *) 	0x0000002C) // (ISI_CDBA) Codec Dma Address Register
#define ISI_Y2RSET0     (AT91_CAST(AT91_REG *) 	0x00000030) // (ISI_Y2RSET0) Color Space Conversion Register
#define ISI_Y2RSET1     (AT91_CAST(AT91_REG *) 	0x00000034) // (ISI_Y2RSET1) Color Space Conversion Register
#define ISI_R2YSET0     (AT91_CAST(AT91_REG *) 	0x00000038) // (ISI_R2YSET0) Color Space Conversion Register
#define ISI_R2YSET1     (AT91_CAST(AT91_REG *) 	0x0000003C) // (ISI_R2YSET1) Color Space Conversion Register
#define ISI_R2YSET2     (AT91_CAST(AT91_REG *) 	0x00000040) // (ISI_R2YSET2) Color Space Conversion Register

#endif
// -------- ISI_CR1 : (ISI Offset: 0x0) ISI Control Register 1 -------- 
#define AT91C_ISI_RST         (0x1 <<  0) // (ISI) Image sensor interface reset
#define AT91C_ISI_DISABLE     (0x1 <<  1) // (ISI) image sensor disable.
#define AT91C_ISI_HSYNC_POL   (0x1 <<  2) // (ISI) Horizontal synchronization polarity
#define 	AT91C_ISI_HSYNC_POL_ACTIVE_HIGH          (0x0 <<  2) // (ISI) HSYNC active high.
#define 	AT91C_ISI_HSYNC_POL_ACTIVE_LOW           (0x1 <<  2) // (ISI) HSYNC active low.
#define AT91C_ISI_VSYNC_POL   (0x1 <<  3) // (ISI) Vertical synchronization polarity
#define 	AT91C_ISI_VSYNC_POL_ACTIVE_HIGH          (0x0 <<  3) // (ISI) VSYNC active high.
#define 	AT91C_ISI_VSYNC_POL_ACTIVE_LOW           (0x1 <<  3) // (ISI) VSYNC active low.
#define AT91C_ISI_PIXCLK_POL  (0x1 <<  4) // (ISI) Pixel Clock Polarity
#define 	AT91C_ISI_PIXCLK_POL_RISING_EDGE          (0x0 <<  4) // (ISI) Data is sampled on rising edge of pixel clock.
#define 	AT91C_ISI_PIXCLK_POL_FALLING_EDGE         (0x1 <<  4) // (ISI) Data is sampled on falling edge of pixel clock.
#define AT91C_ISI_EMB_SYNC    (0x1 <<  6) // (ISI) Embedded synchronisation
#define 	AT91C_ISI_EMB_SYNC_HSYNC_VSYNC          (0x0 <<  6) // (ISI) Synchronization by HSYNC, VSYNC.
#define 	AT91C_ISI_EMB_SYNC_SAV_EAV              (0x1 <<  6) // (ISI) Synchronisation by Embedded Synchronization Sequence SAV/EAV.
#define AT91C_ISI_CRC_SYNC    (0x1 <<  7) // (ISI) CRC correction
#define 	AT91C_ISI_CRC_SYNC_CORRECTION_OFF       (0x0 <<  7) // (ISI) No CRC correction performed on embedded synchronization.
#define 	AT91C_ISI_CRC_SYNC_CORRECTION_ON        (0x1 <<  7) // (ISI) CRC correction is performed.
#define AT91C_ISI_FRATE       (0x7 <<  8) // (ISI) Frame rate capture
#define AT91C_ISI_FULL        (0x1 << 12) // (ISI) Full mode is allowed
#define 	AT91C_ISI_FULL_MODE_DISABLE         (0x0 << 12) // (ISI) Full mode disabled.
#define 	AT91C_ISI_FULL_MODE_ENABLE          (0x1 << 12) // (ISI) both codec and preview datapath are working simultaneously.
#define AT91C_ISI_THMASK      (0x3 << 13) // (ISI) DMA Burst Mask
#define 	AT91C_ISI_THMASK_4_8_16_BURST         (0x0 << 13) // (ISI) 4,8 and 16 AHB burst are allowed
#define 	AT91C_ISI_THMASK_8_16_BURST           (0x1 << 13) // (ISI) 8 and 16 AHB burst are allowed
#define 	AT91C_ISI_THMASK_16_BURST             (0x2 << 13) // (ISI) Only 16 AHB burst are allowed
#define AT91C_ISI_CODEC_ON    (0x1 << 15) // (ISI) Enable the codec path
#define AT91C_ISI_SLD         (0xFF << 16) // (ISI) Start of Line Delay
#define AT91C_ISI_SFD         (0xFF << 24) // (ISI) Start of frame Delay
// -------- ISI_CR2 : (ISI Offset: 0x4) ISI Control Register 2 -------- 
#define AT91C_ISI_IM_VSIZE    (0x7FF <<  0) // (ISI) Vertical size of the Image sensor [0..2047]
#define AT91C_ISI_GS_MODE     (0x1 << 11) // (ISI) Grayscale Memory Mode
#define 	AT91C_ISI_GS_MODE_2_PIXELS             (0x0 << 11) // (ISI) 2 pixels per word.
#define 	AT91C_ISI_GS_MODE_1_PIXEL              (0x1 << 11) // (ISI) 1 pixel per word.
#define AT91C_ISI_RGB_MODE    (0x1 << 12) // (ISI) RGB mode
#define 	AT91C_ISI_RGB_MODE_RGB_888              (0x0 << 12) // (ISI) RGB 8:8:8 24 bits
#define 	AT91C_ISI_RGB_MODE_RGB_565              (0x1 << 12) // (ISI) RGB 5:6:5 16 bits
#define AT91C_ISI_GRAYSCALE   (0x1 << 13) // (ISI) Grayscale Mode
#define 	AT91C_ISI_GRAYSCALE_DISABLE              (0x0 << 13) // (ISI) Grayscale mode is disabled
#define 	AT91C_ISI_GRAYSCALE_ENABLE               (0x1 << 13) // (ISI) Input image is assumed to be grayscale coded
#define AT91C_ISI_RGB_SWAP    (0x1 << 14) // (ISI) RGB Swap
#define 	AT91C_ISI_RGB_SWAP_DISABLE              (0x0 << 14) // (ISI) D7 -> R7
#define 	AT91C_ISI_RGB_SWAP_ENABLE               (0x1 << 14) // (ISI) D0 -> R7
#define AT91C_ISI_COL_SPACE   (0x1 << 15) // (ISI) Color space for the image data
#define 	AT91C_ISI_COL_SPACE_YCBCR                (0x0 << 15) // (ISI) YCbCr
#define 	AT91C_ISI_COL_SPACE_RGB                  (0x1 << 15) // (ISI) RGB
#define AT91C_ISI_IM_HSIZE    (0x7FF << 16) // (ISI) Horizontal size of the Image sensor [0..2047]
#define AT91C_ISI_YCC_SWAP    (0x3 << 28) // (ISI) Ycc swap
#define 	AT91C_ISI_YCC_SWAP_YCC_DEFAULT          (0x0 << 28) // (ISI) Cb(i) Y(i) Cr(i) Y(i+1)
#define 	AT91C_ISI_YCC_SWAP_YCC_MODE1            (0x1 << 28) // (ISI) Cr(i) Y(i) Cb(i) Y(i+1)
#define 	AT91C_ISI_YCC_SWAP_YCC_MODE2            (0x2 << 28) // (ISI) Y(i) Cb(i) Y(i+1) Cr(i)
#define 	AT91C_ISI_YCC_SWAP_YCC_MODE3            (0x3 << 28) // (ISI) Y(i) Cr(i) Y(i+1) Cb(i)
#define AT91C_ISI_RGB_CFG     (0x3 << 30) // (ISI) RGB configuration
#define 	AT91C_ISI_RGB_CFG_RGB_DEFAULT          (0x0 << 30) // (ISI) R/G(MSB)  G(LSB)/B  R/G(MSB)  G(LSB)/B
#define 	AT91C_ISI_RGB_CFG_RGB_MODE1            (0x1 << 30) // (ISI) B/G(MSB)  G(LSB)/R  B/G(MSB)  G(LSB)/R
#define 	AT91C_ISI_RGB_CFG_RGB_MODE2            (0x2 << 30) // (ISI) G(LSB)/R  B/G(MSB)  G(LSB)/R  B/G(MSB)
#define 	AT91C_ISI_RGB_CFG_RGB_MODE3            (0x3 << 30) // (ISI) G(LSB)/B  R/G(MSB)  G(LSB)/B  R/G(MSB)
// -------- ISI_SR : (ISI Offset: 0x8) ISI Status Register -------- 
#define AT91C_ISI_SOF         (0x1 <<  0) // (ISI) Start of Frame
#define AT91C_ISI_DIS         (0x1 <<  1) // (ISI) Image Sensor Interface disable
#define AT91C_ISI_SOFTRST     (0x1 <<  2) // (ISI) Software Reset
#define AT91C_ISI_CDC_PND     (0x1 <<  3) // (ISI) Codec request pending
#define AT91C_ISI_CRC_ERR     (0x1 <<  4) // (ISI) CRC synchronisation error
#define AT91C_ISI_FO_C_OVF    (0x1 <<  5) // (ISI) Fifo Codec Overflow 
#define AT91C_ISI_FO_P_OVF    (0x1 <<  6) // (ISI) Fifo Preview Overflow 
#define AT91C_ISI_FO_P_EMP    (0x1 <<  7) // (ISI) Fifo Preview Empty
#define AT91C_ISI_FO_C_EMP    (0x1 <<  8) // (ISI) Fifo Codec Empty
#define AT91C_ISI_FR_OVR      (0x1 <<  9) // (ISI) Frame rate overun
// -------- ISI_IER : (ISI Offset: 0xc) ISI Interrupt Enable Register -------- 
// -------- ISI_IDR : (ISI Offset: 0x10) ISI Interrupt Disable Register -------- 
// -------- ISI_IMR : (ISI Offset: 0x14) ISI Interrupt Mask Register -------- 
// -------- ISI_PSIZE : (ISI Offset: 0x20) ISI Preview Register -------- 
#define AT91C_ISI_PREV_VSIZE  (0x3FF <<  0) // (ISI) Vertical size for the preview path
#define AT91C_ISI_PREV_HSIZE  (0x3FF << 16) // (ISI) Horizontal size for the preview path
// -------- ISI_PDECF : (ISI Offset: 0x24) ISI Preview Decimation Factor Register -------- 
#define AT91C_ISI_DEC_FACTOR  (0xFF <<  0) // (ISI) Decimation factor
// -------- ISI_PPFBD : (ISI Offset: 0x28) ISI Preview Primary FBD Register -------- 
#define AT91C_ISI_PREV_FBD_ADDR (0x0 <<  0) // (ISI) Base address for preview frame buffer descriptor
// -------- ISI_CDBA : (ISI Offset: 0x2c) ISI Codec DMA Base Address Register -------- 
#define AT91C_ISI_CODEC_DMA_ADDR (0x0 <<  0) // (ISI) Base address for codec DMA
// -------- ISI_Y2RSET0 : (ISI Offset: 0x30) Color Space Conversion YCrCb to RGB Register -------- 
#define AT91C_ISI_Y2R_C0      (0xFF <<  0) // (ISI) Color Space Conversion Matrix Coefficient C0
#define AT91C_ISI_Y2R_C1      (0xFF <<  8) // (ISI) Color Space Conversion Matrix Coefficient C1
#define AT91C_ISI_Y2R_C2      (0xFF << 16) // (ISI) Color Space Conversion Matrix Coefficient C2
#define AT91C_ISI_Y2R_C3      (0xFF << 24) // (ISI) Color Space Conversion Matrix Coefficient C3
// -------- ISI_Y2RSET1 : (ISI Offset: 0x34) ISI Color Space Conversion YCrCb to RGB set 1 Register -------- 
#define AT91C_ISI_Y2R_C4      (0x1FF <<  0) // (ISI) Color Space Conversion Matrix Coefficient C4
#define AT91C_ISI_Y2R_YOFF    (0x1 << 12) // (ISI) Color Space Conversion Luninance default offset
#define 	AT91C_ISI_Y2R_YOFF_0                    (0x0 << 12) // (ISI) Offset is 0
#define 	AT91C_ISI_Y2R_YOFF_128                  (0x1 << 12) // (ISI) Offset is 128
#define AT91C_ISI_Y2R_CROFF   (0x1 << 13) // (ISI) Color Space Conversion Red Chrominance default offset
#define 	AT91C_ISI_Y2R_CROFF_0                    (0x0 << 13) // (ISI) Offset is 0
#define 	AT91C_ISI_Y2R_CROFF_16                   (0x1 << 13) // (ISI) Offset is 16
#define AT91C_ISI_Y2R_CBOFF   (0x1 << 14) // (ISI) Color Space Conversion Blue Chrominance default offset
#define 	AT91C_ISI_Y2R_CBOFF_0                    (0x0 << 14) // (ISI) Offset is 0
#define 	AT91C_ISI_Y2R_CBOFF_16                   (0x1 << 14) // (ISI) Offset is 16
// -------- ISI_R2YSET0 : (ISI Offset: 0x38) Color Space Conversion RGB to YCrCb set 0 register -------- 
#define AT91C_ISI_R2Y_C0      (0x7F <<  0) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C0
#define AT91C_ISI_R2Y_C1      (0x7F <<  8) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C1
#define AT91C_ISI_R2Y_C2      (0x7F << 16) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C2
#define AT91C_ISI_R2Y_ROFF    (0x1 << 24) // (ISI) Color Space Conversion Red component offset
#define 	AT91C_ISI_R2Y_ROFF_0                    (0x0 << 24) // (ISI) Offset is 0
#define 	AT91C_ISI_R2Y_ROFF_16                   (0x1 << 24) // (ISI) Offset is 16
// -------- ISI_R2YSET1 : (ISI Offset: 0x3c) Color Space Conversion RGB to YCrCb set 1 register -------- 
#define AT91C_ISI_R2Y_C3      (0x7F <<  0) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C3
#define AT91C_ISI_R2Y_C4      (0x7F <<  8) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C4
#define AT91C_ISI_R2Y_C5      (0x7F << 16) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C5
#define AT91C_ISI_R2Y_GOFF    (0x1 << 24) // (ISI) Color Space Conversion Green component offset
#define 	AT91C_ISI_R2Y_GOFF_0                    (0x0 << 24) // (ISI) Offset is 0
#define 	AT91C_ISI_R2Y_GOFF_128                  (0x1 << 24) // (ISI) Offset is 128
// -------- ISI_R2YSET2 : (ISI Offset: 0x40) Color Space Conversion RGB to YCrCb set 2 register -------- 
#define AT91C_ISI_R2Y_C6      (0x7F <<  0) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C6
#define AT91C_ISI_R2Y_C7      (0x7F <<  8) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C7
#define AT91C_ISI_R2Y_C8      (0x7F << 16) // (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C8
#define AT91C_ISI_R2Y_BOFF    (0x1 << 24) // (ISI) Color Space Conversion Blue component offset
#define 	AT91C_ISI_R2Y_BOFF_0                    (0x0 << 24) // (ISI) Offset is 0
#define 	AT91C_ISI_R2Y_BOFF_128                  (0x1 << 24) // (ISI) Offset is 128

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR LCD Controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_LCDC {
	AT91_REG	 LCDC_BA1; 	// DMA Base Address Register 1
	AT91_REG	 LCDC_BA2; 	// DMA Base Address Register 2
	AT91_REG	 LCDC_FRMP1; 	// DMA Frame Pointer Register 1
	AT91_REG	 LCDC_FRMP2; 	// DMA Frame Pointer Register 2
	AT91_REG	 LCDC_FRMA1; 	// DMA Frame Address Register 1
	AT91_REG	 LCDC_FRMA2; 	// DMA Frame Address Register 2
	AT91_REG	 LCDC_FRMCFG; 	// DMA Frame Configuration Register
	AT91_REG	 LCDC_DMACON; 	// DMA Control Register
	AT91_REG	 LCDC_DMA2DCFG; 	// DMA 2D addressing configuration
	AT91_REG	 Reserved0[503]; 	// 
	AT91_REG	 LCDC_LCDCON1; 	// LCD Control 1 Register
	AT91_REG	 LCDC_LCDCON2; 	// LCD Control 2 Register
	AT91_REG	 LCDC_TIM1; 	// LCD Timing Config 1 Register
	AT91_REG	 LCDC_TIM2; 	// LCD Timing Config 2 Register
	AT91_REG	 LCDC_LCDFRCFG; 	// LCD Frame Config Register
	AT91_REG	 LCDC_FIFO; 	// LCD FIFO Register
	AT91_REG	 LCDC_MVAL; 	// LCD Mode Toggle Rate Value Register
	AT91_REG	 LCDC_DP1_2; 	// Dithering Pattern DP1_2 Register
	AT91_REG	 LCDC_DP4_7; 	// Dithering Pattern DP4_7 Register
	AT91_REG	 LCDC_DP3_5; 	// Dithering Pattern DP3_5 Register
	AT91_REG	 LCDC_DP2_3; 	// Dithering Pattern DP2_3 Register
	AT91_REG	 LCDC_DP5_7; 	// Dithering Pattern DP5_7 Register
	AT91_REG	 LCDC_DP3_4; 	// Dithering Pattern DP3_4 Register
	AT91_REG	 LCDC_DP4_5; 	// Dithering Pattern DP4_5 Register
	AT91_REG	 LCDC_DP6_7; 	// Dithering Pattern DP6_7 Register
	AT91_REG	 LCDC_PWRCON; 	// Power Control Register
	AT91_REG	 LCDC_CTRSTCON; 	// Contrast Control Register
	AT91_REG	 LCDC_CTRSTVAL; 	// Contrast Value Register
	AT91_REG	 LCDC_IER; 	// Interrupt Enable Register
	AT91_REG	 LCDC_IDR; 	// Interrupt Disable Register
	AT91_REG	 LCDC_IMR; 	// Interrupt Mask Register
	AT91_REG	 LCDC_ISR; 	// Interrupt Enable Register
	AT91_REG	 LCDC_ICR; 	// Interrupt Clear Register
	AT91_REG	 LCDC_GPR; 	// General Purpose Register
	AT91_REG	 LCDC_ITR; 	// Interrupts Test Register
	AT91_REG	 LCDC_IRR; 	// Interrupts Raw Status Register
	AT91_REG	 Reserved1[230]; 	// 
	AT91_REG	 LCDC_LUT_ENTRY[256]; 	// LUT Entries Register
} AT91S_LCDC, *AT91PS_LCDC;
#else
#define LCDC_BA1        (AT91_CAST(AT91_REG *) 	0x00000000) // (LCDC_BA1) DMA Base Address Register 1
#define LCDC_BA2        (AT91_CAST(AT91_REG *) 	0x00000004) // (LCDC_BA2) DMA Base Address Register 2
#define LCDC_FRMP1      (AT91_CAST(AT91_REG *) 	0x00000008) // (LCDC_FRMP1) DMA Frame Pointer Register 1
#define LCDC_FRMP2      (AT91_CAST(AT91_REG *) 	0x0000000C) // (LCDC_FRMP2) DMA Frame Pointer Register 2
#define LCDC_FRMA1      (AT91_CAST(AT91_REG *) 	0x00000010) // (LCDC_FRMA1) DMA Frame Address Register 1
#define LCDC_FRMA2      (AT91_CAST(AT91_REG *) 	0x00000014) // (LCDC_FRMA2) DMA Frame Address Register 2
#define LCDC_FRMCFG     (AT91_CAST(AT91_REG *) 	0x00000018) // (LCDC_FRMCFG) DMA Frame Configuration Register
#define LCDC_DMACON     (AT91_CAST(AT91_REG *) 	0x0000001C) // (LCDC_DMACON) DMA Control Register
#define LCDC_DMA2DCFG   (AT91_CAST(AT91_REG *) 	0x00000020) // (LCDC_DMA2DCFG) DMA 2D addressing configuration
#define LCDC_LCDCON1    (AT91_CAST(AT91_REG *) 	0x00000800) // (LCDC_LCDCON1) LCD Control 1 Register
#define LCDC_LCDCON2    (AT91_CAST(AT91_REG *) 	0x00000804) // (LCDC_LCDCON2) LCD Control 2 Register
#define LCDC_TIM1       (AT91_CAST(AT91_REG *) 	0x00000808) // (LCDC_TIM1) LCD Timing Config 1 Register
#define LCDC_TIM2       (AT91_CAST(AT91_REG *) 	0x0000080C) // (LCDC_TIM2) LCD Timing Config 2 Register
#define LCDC_LCDFRCFG   (AT91_CAST(AT91_REG *) 	0x00000810) // (LCDC_LCDFRCFG) LCD Frame Config Register
#define LCDC_FIFO       (AT91_CAST(AT91_REG *) 	0x00000814) // (LCDC_FIFO) LCD FIFO Register
#define LCDC_MVAL       (AT91_CAST(AT91_REG *) 	0x00000818) // (LCDC_MVAL) LCD Mode Toggle Rate Value Register
#define LCDC_DP1_2      (AT91_CAST(AT91_REG *) 	0x0000081C) // (LCDC_DP1_2) Dithering Pattern DP1_2 Register
#define LCDC_DP4_7      (AT91_CAST(AT91_REG *) 	0x00000820) // (LCDC_DP4_7) Dithering Pattern DP4_7 Register
#define LCDC_DP3_5      (AT91_CAST(AT91_REG *) 	0x00000824) // (LCDC_DP3_5) Dithering Pattern DP3_5 Register
#define LCDC_DP2_3      (AT91_CAST(AT91_REG *) 	0x00000828) // (LCDC_DP2_3) Dithering Pattern DP2_3 Register
#define LCDC_DP5_7      (AT91_CAST(AT91_REG *) 	0x0000082C) // (LCDC_DP5_7) Dithering Pattern DP5_7 Register
#define LCDC_DP3_4      (AT91_CAST(AT91_REG *) 	0x00000830) // (LCDC_DP3_4) Dithering Pattern DP3_4 Register
#define LCDC_DP4_5      (AT91_CAST(AT91_REG *) 	0x00000834) // (LCDC_DP4_5) Dithering Pattern DP4_5 Register
#define LCDC_DP6_7      (AT91_CAST(AT91_REG *) 	0x00000838) // (LCDC_DP6_7) Dithering Pattern DP6_7 Register
#define LCDC_PWRCON     (AT91_CAST(AT91_REG *) 	0x0000083C) // (LCDC_PWRCON) Power Control Register
#define LCDC_CTRSTCON   (AT91_CAST(AT91_REG *) 	0x00000840) // (LCDC_CTRSTCON) Contrast Control Register
#define LCDC_CTRSTVAL   (AT91_CAST(AT91_REG *) 	0x00000844) // (LCDC_CTRSTVAL) Contrast Value Register
#define LCDC_IER        (AT91_CAST(AT91_REG *) 	0x00000848) // (LCDC_IER) Interrupt Enable Register
#define LCDC_IDR        (AT91_CAST(AT91_REG *) 	0x0000084C) // (LCDC_IDR) Interrupt Disable Register
#define LCDC_IMR        (AT91_CAST(AT91_REG *) 	0x00000850) // (LCDC_IMR) Interrupt Mask Register
#define LCDC_ISR        (AT91_CAST(AT91_REG *) 	0x00000854) // (LCDC_ISR) Interrupt Enable Register
#define LCDC_ICR        (AT91_CAST(AT91_REG *) 	0x00000858) // (LCDC_ICR) Interrupt Clear Register
#define LCDC_GPR        (AT91_CAST(AT91_REG *) 	0x0000085C) // (LCDC_GPR) General Purpose Register
#define LCDC_ITR        (AT91_CAST(AT91_REG *) 	0x00000860) // (LCDC_ITR) Interrupts Test Register
#define LCDC_IRR        (AT91_CAST(AT91_REG *) 	0x00000864) // (LCDC_IRR) Interrupts Raw Status Register
#define LCDC_LUT_ENTRY  (AT91_CAST(AT91_REG *) 	0x00000C00) // (LCDC_LUT_ENTRY) LUT Entries Register

#endif
// -------- LCDC_FRMP1 : (LCDC Offset: 0x8) DMA Frame Pointer 1 Register -------- 
#define AT91C_LCDC_FRMPT1     (0x3FFFFF <<  0) // (LCDC) Frame Pointer Address 1
// -------- LCDC_FRMP2 : (LCDC Offset: 0xc) DMA Frame Pointer 2 Register -------- 
#define AT91C_LCDC_FRMPT2     (0x1FFFFF <<  0) // (LCDC) Frame Pointer Address 2
// -------- LCDC_FRMCFG : (LCDC Offset: 0x18) DMA Frame Config Register -------- 
#define AT91C_LCDC_FRSIZE     (0x7FFFFF <<  0) // (LCDC) FRAME SIZE
#define AT91C_LCDC_BLENGTH    (0x7F << 24) // (LCDC) BURST LENGTH
// -------- LCDC_DMACON : (LCDC Offset: 0x1c) DMA Control Register -------- 
#define AT91C_LCDC_DMAEN      (0x1 <<  0) // (LCDC) DAM Enable
#define AT91C_LCDC_DMARST     (0x1 <<  1) // (LCDC) DMA Reset (WO)
#define AT91C_LCDC_DMABUSY    (0x1 <<  2) // (LCDC) DMA Reset (WO)
#define AT91C_LCDC_DMAUPDT    (0x1 <<  3) // (LCDC) DMA Configuration Update
#define AT91C_LCDC_DMA2DEN    (0x1 <<  4) // (LCDC) 2D Addressing Enable
// -------- LCDC_DMA2DCFG : (LCDC Offset: 0x20) DMA 2D addressing configuration Register -------- 
#define AT91C_LCDC_ADDRINC    (0xFFFF <<  0) // (LCDC) Number of 32b words that the DMA must jump when going to the next line
#define AT91C_LCDC_PIXELOFF   (0x1F << 24) // (LCDC) Offset (in bits) of the first pixel of the screen in the memory word which contain it
// -------- LCDC_LCDCON1 : (LCDC Offset: 0x800) LCD Control 1 Register -------- 
#define AT91C_LCDC_BYPASS     (0x1 <<  0) // (LCDC) Bypass lcd_pccklk divider
#define AT91C_LCDC_CLKVAL     (0x1FF << 12) // (LCDC) 9-bit Divider for pixel clock frequency
#define AT91C_LCDC_LINCNT     (0x7FF << 21) // (LCDC) Line Counter (RO)
// -------- LCDC_LCDCON2 : (LCDC Offset: 0x804) LCD Control 2 Register -------- 
#define AT91C_LCDC_DISTYPE    (0x3 <<  0) // (LCDC) Display Type
#define 	AT91C_LCDC_DISTYPE_STNMONO              (0x0) // (LCDC) STN Mono
#define 	AT91C_LCDC_DISTYPE_STNCOLOR             (0x1) // (LCDC) STN Color
#define 	AT91C_LCDC_DISTYPE_TFT                  (0x2) // (LCDC) TFT
#define AT91C_LCDC_SCANMOD    (0x1 <<  2) // (LCDC) Scan Mode
#define 	AT91C_LCDC_SCANMOD_SINGLESCAN           (0x0 <<  2) // (LCDC) Single Scan
#define 	AT91C_LCDC_SCANMOD_DUALSCAN             (0x1 <<  2) // (LCDC) Dual Scan
#define AT91C_LCDC_IFWIDTH    (0x3 <<  3) // (LCDC) Interface Width
#define 	AT91C_LCDC_IFWIDTH_FOURBITSWIDTH        (0x0 <<  3) // (LCDC) 4 Bits
#define 	AT91C_LCDC_IFWIDTH_EIGTHBITSWIDTH       (0x1 <<  3) // (LCDC) 8 Bits
#define 	AT91C_LCDC_IFWIDTH_SIXTEENBITSWIDTH     (0x2 <<  3) // (LCDC) 16 Bits
#define AT91C_LCDC_PIXELSIZE  (0x7 <<  5) // (LCDC) Bits per pixel
#define 	AT91C_LCDC_PIXELSIZE_ONEBITSPERPIXEL      (0x0 <<  5) // (LCDC) 1 Bits
#define 	AT91C_LCDC_PIXELSIZE_TWOBITSPERPIXEL      (0x1 <<  5) // (LCDC) 2 Bits
#define 	AT91C_LCDC_PIXELSIZE_FOURBITSPERPIXEL     (0x2 <<  5) // (LCDC) 4 Bits
#define 	AT91C_LCDC_PIXELSIZE_EIGTHBITSPERPIXEL    (0x3 <<  5) // (LCDC) 8 Bits
#define 	AT91C_LCDC_PIXELSIZE_SIXTEENBITSPERPIXEL  (0x4 <<  5) // (LCDC) 16 Bits
#define 	AT91C_LCDC_PIXELSIZE_TWENTYFOURBITSPERPIXEL (0x5 <<  5) // (LCDC) 24 Bits
#define AT91C_LCDC_INVVD      (0x1 <<  8) // (LCDC) lcd datas polarity
#define 	AT91C_LCDC_INVVD_NORMALPOL            (0x0 <<  8) // (LCDC) Normal Polarity
#define 	AT91C_LCDC_INVVD_INVERTEDPOL          (0x1 <<  8) // (LCDC) Inverted Polarity
#define AT91C_LCDC_INVFRAME   (0x1 <<  9) // (LCDC) lcd vsync polarity
#define 	AT91C_LCDC_INVFRAME_NORMALPOL            (0x0 <<  9) // (LCDC) Normal Polarity
#define 	AT91C_LCDC_INVFRAME_INVERTEDPOL          (0x1 <<  9) // (LCDC) Inverted Polarity
#define AT91C_LCDC_INVLINE    (0x1 << 10) // (LCDC) lcd hsync polarity
#define 	AT91C_LCDC_INVLINE_NORMALPOL            (0x0 << 10) // (LCDC) Normal Polarity
#define 	AT91C_LCDC_INVLINE_INVERTEDPOL          (0x1 << 10) // (LCDC) Inverted Polarity
#define AT91C_LCDC_INVCLK     (0x1 << 11) // (LCDC) lcd pclk polarity
#define 	AT91C_LCDC_INVCLK_NORMALPOL            (0x0 << 11) // (LCDC) Normal Polarity
#define 	AT91C_LCDC_INVCLK_INVERTEDPOL          (0x1 << 11) // (LCDC) Inverted Polarity
#define AT91C_LCDC_INVDVAL    (0x1 << 12) // (LCDC) lcd dval polarity
#define 	AT91C_LCDC_INVDVAL_NORMALPOL            (0x0 << 12) // (LCDC) Normal Polarity
#define 	AT91C_LCDC_INVDVAL_INVERTEDPOL          (0x1 << 12) // (LCDC) Inverted Polarity
#define AT91C_LCDC_CLKMOD     (0x1 << 15) // (LCDC) lcd pclk Mode
#define 	AT91C_LCDC_CLKMOD_ACTIVEONLYDISP       (0x0 << 15) // (LCDC) Active during display period
#define 	AT91C_LCDC_CLKMOD_ALWAYSACTIVE         (0x1 << 15) // (LCDC) Always Active
#define AT91C_LCDC_MEMOR      (0x3 << 30) // (LCDC) Memory Ordering Format
#define 	AT91C_LCDC_MEMOR_BIGIND               (0x0 << 30) // (LCDC) Big Endian
#define 	AT91C_LCDC_MEMOR_LITTLEIND            (0x2 << 30) // (LCDC) Little Endian
// -------- LCDC_TIM1 : (LCDC Offset: 0x808) LCDC Timing Config 1 Register -------- 
#define AT91C_LCDC_VFP        (0xFF <<  0) // (LCDC) Vertical Front Porch
#define AT91C_LCDC_VBP        (0xFF <<  8) // (LCDC) Vertical Back Porch
#define AT91C_LCDC_VPW        (0x3F << 16) // (LCDC) Vertical Synchronization Pulse Width
#define AT91C_LCDC_VHDLY      (0xF << 24) // (LCDC) Vertical to Horizontal Delay
// -------- LCDC_TIM2 : (LCDC Offset: 0x80c) LCDC Timing Config 2 Register -------- 
#define AT91C_LCDC_HBP        (0xFF <<  0) // (LCDC) Horizontal Back Porch
#define AT91C_LCDC_HPW        (0x3F <<  8) // (LCDC) Horizontal Synchronization Pulse Width
#define AT91C_LCDC_HFP        (0x7FF << 21) // (LCDC) Horizontal Front Porch
// -------- LCDC_LCDFRCFG : (LCDC Offset: 0x810) LCD Frame Config Register -------- 
#define AT91C_LCDC_LINEVAL    (0x7FF <<  0) // (LCDC) Vertical Size of LCD Module
#define AT91C_LCDC_HOZVAL     (0x7FF << 21) // (LCDC) Horizontal Size of LCD Module
// -------- LCDC_FIFO : (LCDC Offset: 0x814) LCD FIFO Register -------- 
#define AT91C_LCDC_FIFOTH     (0xFFFF <<  0) // (LCDC) FIFO Threshold
// -------- LCDC_MVAL : (LCDC Offset: 0x818) LCD Mode Toggle Rate Value Register -------- 
#define AT91C_LCDC_MVALUE     (0xFF <<  0) // (LCDC) Toggle Rate Value
#define AT91C_LCDC_MMODE      (0x1 << 31) // (LCDC) Toggle Rate Sel
#define 	AT91C_LCDC_MMODE_EACHFRAME            (0x0 << 31) // (LCDC) Each Frame
#define 	AT91C_LCDC_MMODE_MVALDEFINED          (0x1 << 31) // (LCDC) Defined by MVAL
// -------- LCDC_DP1_2 : (LCDC Offset: 0x81c) Dithering Pattern 1/2 -------- 
#define AT91C_LCDC_DP1_2_FIELD (0xFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP4_7 : (LCDC Offset: 0x820) Dithering Pattern 4/7 -------- 
#define AT91C_LCDC_DP4_7_FIELD (0xFFFFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP3_5 : (LCDC Offset: 0x824) Dithering Pattern 3/5 -------- 
#define AT91C_LCDC_DP3_5_FIELD (0xFFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP2_3 : (LCDC Offset: 0x828) Dithering Pattern 2/3 -------- 
#define AT91C_LCDC_DP2_3_FIELD (0xFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP5_7 : (LCDC Offset: 0x82c) Dithering Pattern 5/7 -------- 
#define AT91C_LCDC_DP5_7_FIELD (0xFFFFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP3_4 : (LCDC Offset: 0x830) Dithering Pattern 3/4 -------- 
#define AT91C_LCDC_DP3_4_FIELD (0xFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP4_5 : (LCDC Offset: 0x834) Dithering Pattern 4/5 -------- 
#define AT91C_LCDC_DP4_5_FIELD (0xFFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_DP6_7 : (LCDC Offset: 0x838) Dithering Pattern 6/7 -------- 
#define AT91C_LCDC_DP6_7_FIELD (0xFFFFFFF <<  0) // (LCDC) Ratio
// -------- LCDC_PWRCON : (LCDC Offset: 0x83c) LCDC Power Control Register -------- 
#define AT91C_LCDC_PWR        (0x1 <<  0) // (LCDC) LCD Module Power Control
#define AT91C_LCDC_GUARDT     (0x7F <<  1) // (LCDC) Delay in Frame Period
#define AT91C_LCDC_BUSY       (0x1 << 31) // (LCDC) Read Only : 1 indicates that LCDC is busy
#define 	AT91C_LCDC_BUSY_LCDNOTBUSY           (0x0 << 31) // (LCDC) LCD is Not Busy
#define 	AT91C_LCDC_BUSY_LCDBUSY              (0x1 << 31) // (LCDC) LCD is Busy
// -------- LCDC_CTRSTCON : (LCDC Offset: 0x840) LCDC Contrast Control Register -------- 
#define AT91C_LCDC_PS         (0x3 <<  0) // (LCDC) LCD Contrast Counter Prescaler
#define 	AT91C_LCDC_PS_NOTDIVIDED           (0x0) // (LCDC) Counter Freq is System Freq.
#define 	AT91C_LCDC_PS_DIVIDEDBYTWO         (0x1) // (LCDC) Counter Freq is System Freq divided by 2.
#define 	AT91C_LCDC_PS_DIVIDEDBYFOUR        (0x2) // (LCDC) Counter Freq is System Freq divided by 4.
#define 	AT91C_LCDC_PS_DIVIDEDBYEIGHT       (0x3) // (LCDC) Counter Freq is System Freq divided by 8.
#define AT91C_LCDC_POL        (0x1 <<  2) // (LCDC) Polarity of output Pulse
#define 	AT91C_LCDC_POL_NEGATIVEPULSE        (0x0 <<  2) // (LCDC) Negative Pulse
#define 	AT91C_LCDC_POL_POSITIVEPULSE        (0x1 <<  2) // (LCDC) Positive Pulse
#define AT91C_LCDC_ENA        (0x1 <<  3) // (LCDC) PWM generator Control
#define 	AT91C_LCDC_ENA_PWMGEMDISABLED       (0x0 <<  3) // (LCDC) PWM Generator Disabled
#define 	AT91C_LCDC_ENA_PWMGEMENABLED        (0x1 <<  3) // (LCDC) PWM Generator Disabled
// -------- LCDC_CTRSTVAL : (LCDC Offset: 0x844) Contrast Value Register -------- 
#define AT91C_LCDC_CVAL       (0xFF <<  0) // (LCDC) PWM Compare Value
// -------- LCDC_IER : (LCDC Offset: 0x848) LCDC Interrupt Enable Register -------- 
#define AT91C_LCDC_LNI        (0x1 <<  0) // (LCDC) Line Interrupt
#define AT91C_LCDC_LSTLNI     (0x1 <<  1) // (LCDC) Last Line Interrupt
#define AT91C_LCDC_EOFI       (0x1 <<  2) // (LCDC) End Of Frame Interrupt
#define AT91C_LCDC_UFLWI      (0x1 <<  4) // (LCDC) FIFO Underflow Interrupt
#define AT91C_LCDC_OWRI       (0x1 <<  5) // (LCDC) Over Write Interrupt
#define AT91C_LCDC_MERI       (0x1 <<  6) // (LCDC) Memory Error  Interrupt
// -------- LCDC_IDR : (LCDC Offset: 0x84c) LCDC Interrupt Disable Register -------- 
// -------- LCDC_IMR : (LCDC Offset: 0x850) LCDC Interrupt Mask Register -------- 
// -------- LCDC_ISR : (LCDC Offset: 0x854) LCDC Interrupt Status Register -------- 
// -------- LCDC_ICR : (LCDC Offset: 0x858) LCDC Interrupt Clear Register -------- 
// -------- LCDC_GPR : (LCDC Offset: 0x85c) LCDC General Purpose Register -------- 
#define AT91C_LCDC_GPRBUS     (0xFF <<  0) // (LCDC) 8 bits available
// -------- LCDC_ITR : (LCDC Offset: 0x860) Interrupts Test Register -------- 
// -------- LCDC_IRR : (LCDC Offset: 0x864) Interrupts Raw Status Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR HDMA Channel structure
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_HDMA_CH {
	AT91_REG	 HDMA_SADDR; 	// HDMA Channel Source Address Register
	AT91_REG	 HDMA_DADDR; 	// HDMA Channel Destination Address Register
	AT91_REG	 HDMA_DSCR; 	// HDMA Channel Descriptor Address Register
	AT91_REG	 HDMA_CTRLA; 	// HDMA Channel Control A Register
	AT91_REG	 HDMA_CTRLB; 	// HDMA Channel Control B Register
	AT91_REG	 HDMA_CFG; 	// HDMA Channel Configuration Register
	AT91_REG	 HDMA_SPIP; 	// HDMA Channel Source Picture in Picture Configuration Register
	AT91_REG	 HDMA_DPIP; 	// HDMA Channel Destination Picture in Picture Configuration Register
	AT91_REG	 HDMA_BDSCR; 	// HDMA Reserved
	AT91_REG	 HDMA_CADDR; 	// HDMA Reserved
} AT91S_HDMA_CH, *AT91PS_HDMA_CH;
#else
#define HDMA_SADDR      (AT91_CAST(AT91_REG *) 	0x00000000) // (HDMA_SADDR) HDMA Channel Source Address Register
#define HDMA_DADDR      (AT91_CAST(AT91_REG *) 	0x00000004) // (HDMA_DADDR) HDMA Channel Destination Address Register
#define HDMA_DSCR       (AT91_CAST(AT91_REG *) 	0x00000008) // (HDMA_DSCR) HDMA Channel Descriptor Address Register
#define HDMA_CTRLA      (AT91_CAST(AT91_REG *) 	0x0000000C) // (HDMA_CTRLA) HDMA Channel Control A Register
#define HDMA_CTRLB      (AT91_CAST(AT91_REG *) 	0x00000010) // (HDMA_CTRLB) HDMA Channel Control B Register
#define HDMA_CFG        (AT91_CAST(AT91_REG *) 	0x00000014) // (HDMA_CFG) HDMA Channel Configuration Register
#define HDMA_SPIP       (AT91_CAST(AT91_REG *) 	0x00000018) // (HDMA_SPIP) HDMA Channel Source Picture in Picture Configuration Register
#define HDMA_DPIP       (AT91_CAST(AT91_REG *) 	0x0000001C) // (HDMA_DPIP) HDMA Channel Destination Picture in Picture Configuration Register
#define HDMA_BDSCR      (AT91_CAST(AT91_REG *) 	0x00000020) // (HDMA_BDSCR) HDMA Reserved
#define HDMA_CADDR      (AT91_CAST(AT91_REG *) 	0x00000024) // (HDMA_CADDR) HDMA Reserved

#endif
// -------- HDMA_SADDR : (HDMA_CH Offset: 0x0)  -------- 
#define AT91C_SADDR           (0x0 <<  0) // (HDMA_CH) 
// -------- HDMA_DADDR : (HDMA_CH Offset: 0x4)  -------- 
#define AT91C_DADDR           (0x0 <<  0) // (HDMA_CH) 
// -------- HDMA_DSCR : (HDMA_CH Offset: 0x8)  -------- 
#define AT91C_DSCR_IF         (0x3 <<  0) // (HDMA_CH) 
#define AT91C_DSCR            (0x3FFFFFFF <<  2) // (HDMA_CH) 
// -------- HDMA_CTRLA : (HDMA_CH Offset: 0xc)  -------- 
#define AT91C_BTSIZE          (0xFFF <<  0) // (HDMA_CH) 
#define AT91C_FC              (0x7 << 12) // (HDMA_CH) 
#define AT91C_AUTO            (0x1 << 15) // (HDMA_CH) 
#define AT91C_SCSIZE          (0x7 << 16) // (HDMA_CH) 
#define AT91C_DCSIZE          (0x7 << 20) // (HDMA_CH) 
#define AT91C_SRC_WIDTH       (0x3 << 24) // (HDMA_CH) 
#define AT91C_DST_WIDTH       (0x3 << 28) // (HDMA_CH) 
// -------- HDMA_CTRLB : (HDMA_CH Offset: 0x10)  -------- 
#define AT91C_SIF             (0x3 <<  0) // (HDMA_CH) 
#define AT91C_DIF             (0x3 <<  4) // (HDMA_CH) 
#define AT91C_SRC_PIP         (0x1 <<  8) // (HDMA_CH) 
#define AT91C_DST_PIP         (0x1 << 12) // (HDMA_CH) 
#define AT91C_SRC_DSCR        (0x1 << 16) // (HDMA_CH) 
#define AT91C_DST_DSCR        (0x1 << 20) // (HDMA_CH) 
#define AT91C_SRC_INCR        (0x3 << 24) // (HDMA_CH) 
#define AT91C_DST_INCR        (0x3 << 28) // (HDMA_CH) 
// -------- HDMA_CFG : (HDMA_CH Offset: 0x14)  -------- 
#define AT91C_SRC_PER         (0xF <<  0) // (HDMA_CH) 
#define AT91C_DST_PER         (0xF <<  4) // (HDMA_CH) 
#define AT91C_SRC_REP         (0x1 <<  8) // (HDMA_CH) 
#define AT91C_SRC_H2SEL       (0x1 <<  9) // (HDMA_CH) 
#define AT91C_DST_REP         (0x1 << 12) // (HDMA_CH) 
#define AT91C_DST_H2SEL       (0x1 << 13) // (HDMA_CH) 
#define AT91C_LOCK_IF         (0x1 << 20) // (HDMA_CH) 
#define AT91C_LOCK_B          (0x1 << 21) // (HDMA_CH) 
#define AT91C_LOCK_IF_L       (0x1 << 22) // (HDMA_CH) 
#define AT91C_AHB_PROT        (0x7 << 24) // (HDMA_CH) 
// -------- HDMA_SPIP : (HDMA_CH Offset: 0x18)  -------- 
#define AT91C_SPIP_HOLE       (0xFFFF <<  0) // (HDMA_CH) 
#define AT91C_SPIP_BOUNDARY   (0x3FF << 16) // (HDMA_CH) 
// -------- HDMA_DPIP : (HDMA_CH Offset: 0x1c)  -------- 
#define AT91C_DPIP_HOLE       (0xFFFF <<  0) // (HDMA_CH) 
#define AT91C_DPIP_BOUNDARY   (0x3FF << 16) // (HDMA_CH) 
// -------- HDMA_BDSCR : (HDMA_CH Offset: 0x20)  -------- 
// -------- HDMA_CADDR : (HDMA_CH Offset: 0x24)  -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR HDMA controller
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_HDMA {
	AT91_REG	 HDMA_GCFG; 	// HDMA Global Configuration Register
	AT91_REG	 HDMA_EN; 	// HDMA Controller Enable Register
	AT91_REG	 HDMA_SREQ; 	// HDMA Software Single Request Register
	AT91_REG	 HDMA_BREQ; 	// HDMA Software Chunk Transfer Request Register
	AT91_REG	 HDMA_LAST; 	// HDMA Software Last Transfer Flag Register
	AT91_REG	 HDMA_SYNC; 	// HDMA Request Synchronization Register
	AT91_REG	 HDMA_EBCIER; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register
	AT91_REG	 HDMA_EBCIDR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register
	AT91_REG	 HDMA_EBCIMR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register
	AT91_REG	 HDMA_EBCISR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Status Register
	AT91_REG	 HDMA_CHER; 	// HDMA Channel Handler Enable Register
	AT91_REG	 HDMA_CHDR; 	// HDMA Channel Handler Disable Register
	AT91_REG	 HDMA_CHSR; 	// HDMA Channel Handler Status Register
	AT91_REG	 HDMA_RSVD0; 	// HDMA Reserved
	AT91_REG	 HDMA_RSVD1; 	// HDMA Reserved
	AT91S_HDMA_CH	 HDMA_CH[4]; 	// HDMA Channel structure
} AT91S_HDMA, *AT91PS_HDMA;
#else
#define HDMA_GCFG       (AT91_CAST(AT91_REG *) 	0x00000000) // (HDMA_GCFG) HDMA Global Configuration Register
#define HDMA_EN         (AT91_CAST(AT91_REG *) 	0x00000004) // (HDMA_EN) HDMA Controller Enable Register
#define HDMA_SREQ       (AT91_CAST(AT91_REG *) 	0x00000008) // (HDMA_SREQ) HDMA Software Single Request Register
#define HDMA_BREQ       (AT91_CAST(AT91_REG *) 	0x0000000C) // (HDMA_BREQ) HDMA Software Chunk Transfer Request Register
#define HDMA_LAST       (AT91_CAST(AT91_REG *) 	0x00000010) // (HDMA_LAST) HDMA Software Last Transfer Flag Register
#define HDMA_SYNC       (AT91_CAST(AT91_REG *) 	0x00000014) // (HDMA_SYNC) HDMA Request Synchronization Register
#define HDMA_EBCIER     (AT91_CAST(AT91_REG *) 	0x00000018) // (HDMA_EBCIER) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register
#define HDMA_EBCIDR     (AT91_CAST(AT91_REG *) 	0x0000001C) // (HDMA_EBCIDR) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register
#define HDMA_EBCIMR     (AT91_CAST(AT91_REG *) 	0x00000020) // (HDMA_EBCIMR) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register
#define HDMA_EBCISR     (AT91_CAST(AT91_REG *) 	0x00000024) // (HDMA_EBCISR) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Status Register
#define HDMA_CHER       (AT91_CAST(AT91_REG *) 	0x00000028) // (HDMA_CHER) HDMA Channel Handler Enable Register
#define HDMA_CHDR       (AT91_CAST(AT91_REG *) 	0x0000002C) // (HDMA_CHDR) HDMA Channel Handler Disable Register
#define HDMA_CHSR       (AT91_CAST(AT91_REG *) 	0x00000030) // (HDMA_CHSR) HDMA Channel Handler Status Register
#define HDMA_RSVD0      (AT91_CAST(AT91_REG *) 	0x00000034) // (HDMA_RSVD0) HDMA Reserved
#define HDMA_RSVD1      (AT91_CAST(AT91_REG *) 	0x00000038) // (HDMA_RSVD1) HDMA Reserved

#endif
// -------- HDMA_GCFG : (HDMA Offset: 0x0)  -------- 
#define AT91C_IF0_BIGEND      (0x1 <<  0) // (HDMA) 
#define AT91C_IF1_BIGEND      (0x1 <<  1) // (HDMA) 
#define AT91C_IF2_BIGEND      (0x1 <<  2) // (HDMA) 
#define AT91C_IF3_BIGEND      (0x1 <<  3) // (HDMA) 
#define AT91C_ARB_CFG         (0x1 <<  4) // (HDMA) 
// -------- HDMA_EN : (HDMA Offset: 0x4)  -------- 
#define AT91C_HDMA_ENABLE     (0x1 <<  0) // (HDMA) 
// -------- HDMA_SREQ : (HDMA Offset: 0x8)  -------- 
#define AT91C_SOFT_SREQ       (0xFFFF <<  0) // (HDMA) 
// -------- HDMA_BREQ : (HDMA Offset: 0xc)  -------- 
#define AT91C_SOFT_BREQ       (0xFFFF <<  0) // (HDMA) 
// -------- HDMA_LAST : (HDMA Offset: 0x10)  -------- 
#define AT91C_SOFT_LAST       (0xFFFF <<  0) // (HDMA) 
// -------- HDMA_SYNC : (HDMA Offset: 0x14)  -------- 
#define AT91C_SYNC_REQ        (0xFFFF <<  0) // (HDMA) 
// -------- HDMA_EBCIER : (HDMA Offset: 0x18)  -------- 
#define AT91C_BTC             (0xFF <<  0) // (HDMA) 
#define AT91C_CBTC            (0xFF <<  8) // (HDMA) 
#define AT91C_ERR             (0xFF << 16) // (HDMA) 
// -------- HDMA_EBCIDR : (HDMA Offset: 0x1c)  -------- 
// -------- HDMA_EBCIMR : (HDMA Offset: 0x20)  -------- 
// -------- HDMA_EBCISR : (HDMA Offset: 0x24)  -------- 
// -------- HDMA_CHER : (HDMA Offset: 0x28)  -------- 
#define AT91C_ENABLE          (0xFF <<  0) // (HDMA) 
#define AT91C_SUSPEND         (0xFF <<  8) // (HDMA) 
#define AT91C_KEEPON          (0xFF << 24) // (HDMA) 
// -------- HDMA_CHDR : (HDMA Offset: 0x2c)  -------- 
#define AT91C_RESUME          (0xFF <<  8) // (HDMA) 
// -------- HDMA_CHSR : (HDMA Offset: 0x30)  -------- 
#define AT91C_STALLED         (0xFF << 14) // (HDMA) 
#define AT91C_EMPTY           (0xFF << 16) // (HDMA) 
// -------- HDMA_RSVD : (HDMA Offset: 0x34)  -------- 
// -------- HDMA_RSVD : (HDMA Offset: 0x38)  -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR System Peripherals
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_SYS {
	AT91_REG	 SYS_ECC_CR; 	// TOTO ECC reset register
	AT91_REG	 SYS_ECC_MR; 	//  ECC Page size register
	AT91_REG	 SYS_ECC_SR1; 	//  ECC Status1 register
	AT91_REG	 SYS_ECC_PR0; 	//  ECC Parity register 0
	AT91_REG	 Reserved0[1]; 	// 
	AT91_REG	 SYS_ECC_SR2; 	//  ECC Status2 register
	AT91_REG	 Reserved1[57]; 	// 
	AT91_REG	 SYS_ECC_VR; 	//  ECC Version register
	AT91_REG	 Reserved2[64]; 	// 
	AT91_REG	 SYS_BCRAMC_CR; 	// BCRAM Controller Configuration Register
	AT91_REG	 SYS_BCRAMC_TPR; 	// BCRAM Controller Timing Parameter Register
	AT91_REG	 SYS_BCRAMC_HSR; 	// BCRAM Controller High Speed Register
	AT91_REG	 SYS_BCRAMC_LPR; 	// BCRAM Controller Low Power Register
	AT91_REG	 SYS_BCRAMC_MDR; 	// BCRAM Memory Device Register
	AT91_REG	 Reserved3[54]; 	// 
	AT91_REG	 SYS_BCRAMC_PADDSR; 	// BCRAM PADDR Size Register
	AT91_REG	 SYS_BCRAMC_IPNR1; 	// BCRAM IP Name Register 1
	AT91_REG	 SYS_BCRAMC_IPNR2; 	// BCRAM IP Name Register 2
	AT91_REG	 SYS_BCRAMC_IPFR; 	// BCRAM IP Features Register
	AT91_REG	 SYS_BCRAMC_VR; 	// BCRAM Version Register
	AT91_REG	 Reserved4[64]; 	// 
	AT91_REG	 SYS_SDRAMC_MR; 	// 
	AT91_REG	 SYS_SDRAMC_RTR; 	// 
	AT91_REG	 SYS_SDRAMC_CR; 	// 
	AT91_REG	 SYS_SDRAMC_T0PR; 	// 
	AT91_REG	 SYS_SDRAMC_T1PR; 	// 
	AT91_REG	 SYS_SDRAMC_HS; 	// 
	AT91_REG	 SYS_SDRAMC_LPR; 	// 
	AT91_REG	 SYS_SDRAMC_MDR; 	// 
	AT91_REG	 Reserved5[55]; 	// 
	AT91_REG	 SYS_SDRAMC_VERSION; 	// 
	AT91_REG	 Reserved6[64]; 	// 
	AT91_REG	 SYS_SMC_SETUP0; 	//  Setup Register for CS 0
	AT91_REG	 SYS_SMC_PULSE0; 	//  Pulse Register for CS 0
	AT91_REG	 SYS_SMC_CYCLE0; 	//  Cycle Register for CS 0
	AT91_REG	 SYS_SMC_CTRL0; 	//  Control Register for CS 0
	AT91_REG	 SYS_SMC_SETUP1; 	//  Setup Register for CS 1
	AT91_REG	 SYS_SMC_PULSE1; 	//  Pulse Register for CS 1
	AT91_REG	 SYS_SMC_CYCLE1; 	//  Cycle Register for CS 1
	AT91_REG	 SYS_SMC_CTRL1; 	//  Control Register for CS 1
	AT91_REG	 SYS_SMC_SETUP2; 	//  Setup Register for CS 2
	AT91_REG	 SYS_SMC_PULSE2; 	//  Pulse Register for CS 2
	AT91_REG	 SYS_SMC_CYCLE2; 	//  Cycle Register for CS 2
	AT91_REG	 SYS_SMC_CTRL2; 	//  Control Register for CS 2
	AT91_REG	 SYS_SMC_SETUP3; 	//  Setup Register for CS 3
	AT91_REG	 SYS_SMC_PULSE3; 	//  Pulse Register for CS 3
	AT91_REG	 SYS_SMC_CYCLE3; 	//  Cycle Register for CS 3
	AT91_REG	 SYS_SMC_CTRL3; 	//  Control Register for CS 3
	AT91_REG	 SYS_SMC_SETUP4; 	//  Setup Register for CS 4
	AT91_REG	 SYS_SMC_PULSE4; 	//  Pulse Register for CS 4
	AT91_REG	 SYS_SMC_CYCLE4; 	//  Cycle Register for CS 4
	AT91_REG	 SYS_SMC_CTRL4; 	//  Control Register for CS 4
	AT91_REG	 SYS_SMC_SETUP5; 	//  Setup Register for CS 5
	AT91_REG	 SYS_SMC_PULSE5; 	//  Pulse Register for CS 5
	AT91_REG	 SYS_SMC_CYCLE5; 	//  Cycle Register for CS 5
	AT91_REG	 SYS_SMC_CTRL5; 	//  Control Register for CS 5
	AT91_REG	 SYS_SMC_SETUP6; 	//  Setup Register for CS 6
	AT91_REG	 SYS_SMC_PULSE6; 	//  Pulse Register for CS 6
	AT91_REG	 SYS_SMC_CYCLE6; 	//  Cycle Register for CS 6
	AT91_REG	 SYS_SMC_CTRL6; 	//  Control Register for CS 6
	AT91_REG	 SYS_SMC_SETUP7; 	//  Setup Register for CS 7
	AT91_REG	 SYS_SMC_PULSE7; 	//  Pulse Register for CS 7
	AT91_REG	 SYS_SMC_CYCLE7; 	//  Cycle Register for CS 7
	AT91_REG	 SYS_SMC_CTRL7; 	//  Control Register for CS 7
	AT91_REG	 Reserved7[96]; 	// 
	AT91_REG	 SYS_MATRIX_MCFG[12]; 	//  Master Configuration Register 
	AT91_REG	 Reserved8[4]; 	// 
	AT91_REG	 SYS_MATRIX_SCFG[9]; 	//  Slave Configuration Register 
	AT91_REG	 Reserved9[7]; 	// 
	AT91S_MATRIX_PRS	 SYS_MATRIX_PRS[9]; 	//  Slave Priority Registers
	AT91_REG	 Reserved10[14]; 	// 
	AT91_REG	 SYS_MATRIX_MRCR; 	//  Master Remp Control Register 
	AT91_REG	 Reserved11[63]; 	// 
	AT91_REG	 SYS_HDMA_GCFG; 	// HDMA Global Configuration Register
	AT91_REG	 SYS_HDMA_EN; 	// HDMA Controller Enable Register
	AT91_REG	 SYS_HDMA_SREQ; 	// HDMA Software Single Request Register
	AT91_REG	 SYS_HDMA_BREQ; 	// HDMA Software Chunk Transfer Request Register
	AT91_REG	 SYS_HDMA_LAST; 	// HDMA Software Last Transfer Flag Register
	AT91_REG	 SYS_HDMA_SYNC; 	// HDMA Request Synchronization Register
	AT91_REG	 SYS_HDMA_EBCIER; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register
	AT91_REG	 SYS_HDMA_EBCIDR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register
	AT91_REG	 SYS_HDMA_EBCIMR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register
	AT91_REG	 SYS_HDMA_EBCISR; 	// HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Status Register
	AT91_REG	 SYS_HDMA_CHER; 	// HDMA Channel Handler Enable Register
	AT91_REG	 SYS_HDMA_CHDR; 	// HDMA Channel Handler Disable Register
	AT91_REG	 SYS_HDMA_CHSR; 	// HDMA Channel Handler Status Register
	AT91_REG	 SYS_HDMA_RSVD0; 	// HDMA Reserved
	AT91_REG	 SYS_HDMA_RSVD1; 	// HDMA Reserved
	AT91S_HDMA_CH	 SYS_HDMA_CH[4]; 	// HDMA Channel structure
	AT91_REG	 Reserved12[73]; 	// 
	AT91_REG	 SYS_DBGU_CR; 	// Control Register
	AT91_REG	 SYS_DBGU_MR; 	// Mode Register
	AT91_REG	 SYS_DBGU_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_DBGU_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_DBGU_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_DBGU_CSR; 	// Channel Status Register
	AT91_REG	 SYS_DBGU_RHR; 	// Receiver Holding Register
	AT91_REG	 SYS_DBGU_THR; 	// Transmitter Holding Register
	AT91_REG	 SYS_DBGU_BRGR; 	// Baud Rate Generator Register
	AT91_REG	 Reserved13[7]; 	// 
	AT91_REG	 SYS_DBGU_CIDR; 	// Chip ID Register
	AT91_REG	 SYS_DBGU_EXID; 	// Chip ID Extension Register
	AT91_REG	 SYS_DBGU_FNTR; 	// Force NTRST Register
	AT91_REG	 Reserved14[45]; 	// 
	AT91_REG	 SYS_DBGU_RPR; 	// Receive Pointer Register
	AT91_REG	 SYS_DBGU_RCR; 	// Receive Counter Register
	AT91_REG	 SYS_DBGU_TPR; 	// Transmit Pointer Register
	AT91_REG	 SYS_DBGU_TCR; 	// Transmit Counter Register
	AT91_REG	 SYS_DBGU_RNPR; 	// Receive Next Pointer Register
	AT91_REG	 SYS_DBGU_RNCR; 	// Receive Next Counter Register
	AT91_REG	 SYS_DBGU_TNPR; 	// Transmit Next Pointer Register
	AT91_REG	 SYS_DBGU_TNCR; 	// Transmit Next Counter Register
	AT91_REG	 SYS_DBGU_PTCR; 	// PDC Transfer Control Register
	AT91_REG	 SYS_DBGU_PTSR; 	// PDC Transfer Status Register
	AT91_REG	 Reserved15[54]; 	// 
	AT91_REG	 SYS_AIC_SMR[32]; 	// Source Mode Register
	AT91_REG	 SYS_AIC_SVR[32]; 	// Source Vector Register
	AT91_REG	 SYS_AIC_IVR; 	// IRQ Vector Register
	AT91_REG	 SYS_AIC_FVR; 	// FIQ Vector Register
	AT91_REG	 SYS_AIC_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_AIC_IPR; 	// Interrupt Pending Register
	AT91_REG	 SYS_AIC_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_AIC_CISR; 	// Core Interrupt Status Register
	AT91_REG	 Reserved16[2]; 	// 
	AT91_REG	 SYS_AIC_IECR; 	// Interrupt Enable Command Register
	AT91_REG	 SYS_AIC_IDCR; 	// Interrupt Disable Command Register
	AT91_REG	 SYS_AIC_ICCR; 	// Interrupt Clear Command Register
	AT91_REG	 SYS_AIC_ISCR; 	// Interrupt Set Command Register
	AT91_REG	 SYS_AIC_EOICR; 	// End of Interrupt Command Register
	AT91_REG	 SYS_AIC_SPU; 	// Spurious Vector Register
	AT91_REG	 SYS_AIC_DCR; 	// Debug Control Register (Protect)
	AT91_REG	 Reserved17[1]; 	// 
	AT91_REG	 SYS_AIC_FFER; 	// Fast Forcing Enable Register
	AT91_REG	 SYS_AIC_FFDR; 	// Fast Forcing Disable Register
	AT91_REG	 SYS_AIC_FFSR; 	// Fast Forcing Status Register
	AT91_REG	 Reserved18[45]; 	// 
	AT91_REG	 SYS_PIOA_PER; 	// PIO Enable Register
	AT91_REG	 SYS_PIOA_PDR; 	// PIO Disable Register
	AT91_REG	 SYS_PIOA_PSR; 	// PIO Status Register
	AT91_REG	 Reserved19[1]; 	// 
	AT91_REG	 SYS_PIOA_OER; 	// Output Enable Register
	AT91_REG	 SYS_PIOA_ODR; 	// Output Disable Registerr
	AT91_REG	 SYS_PIOA_OSR; 	// Output Status Register
	AT91_REG	 Reserved20[1]; 	// 
	AT91_REG	 SYS_PIOA_IFER; 	// Input Filter Enable Register
	AT91_REG	 SYS_PIOA_IFDR; 	// Input Filter Disable Register
	AT91_REG	 SYS_PIOA_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved21[1]; 	// 
	AT91_REG	 SYS_PIOA_SODR; 	// Set Output Data Register
	AT91_REG	 SYS_PIOA_CODR; 	// Clear Output Data Register
	AT91_REG	 SYS_PIOA_ODSR; 	// Output Data Status Register
	AT91_REG	 SYS_PIOA_PDSR; 	// Pin Data Status Register
	AT91_REG	 SYS_PIOA_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PIOA_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PIOA_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_PIOA_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_PIOA_MDER; 	// Multi-driver Enable Register
	AT91_REG	 SYS_PIOA_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 SYS_PIOA_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved22[1]; 	// 
	AT91_REG	 SYS_PIOA_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 SYS_PIOA_PPUER; 	// Pull-up Enable Register
	AT91_REG	 SYS_PIOA_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved23[1]; 	// 
	AT91_REG	 SYS_PIOA_ASR; 	// Select A Register
	AT91_REG	 SYS_PIOA_BSR; 	// Select B Register
	AT91_REG	 SYS_PIOA_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved24[9]; 	// 
	AT91_REG	 SYS_PIOA_OWER; 	// Output Write Enable Register
	AT91_REG	 SYS_PIOA_OWDR; 	// Output Write Disable Register
	AT91_REG	 SYS_PIOA_OWSR; 	// Output Write Status Register
	AT91_REG	 Reserved25[85]; 	// 
	AT91_REG	 SYS_PIOB_PER; 	// PIO Enable Register
	AT91_REG	 SYS_PIOB_PDR; 	// PIO Disable Register
	AT91_REG	 SYS_PIOB_PSR; 	// PIO Status Register
	AT91_REG	 Reserved26[1]; 	// 
	AT91_REG	 SYS_PIOB_OER; 	// Output Enable Register
	AT91_REG	 SYS_PIOB_ODR; 	// Output Disable Registerr
	AT91_REG	 SYS_PIOB_OSR; 	// Output Status Register
	AT91_REG	 Reserved27[1]; 	// 
	AT91_REG	 SYS_PIOB_IFER; 	// Input Filter Enable Register
	AT91_REG	 SYS_PIOB_IFDR; 	// Input Filter Disable Register
	AT91_REG	 SYS_PIOB_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved28[1]; 	// 
	AT91_REG	 SYS_PIOB_SODR; 	// Set Output Data Register
	AT91_REG	 SYS_PIOB_CODR; 	// Clear Output Data Register
	AT91_REG	 SYS_PIOB_ODSR; 	// Output Data Status Register
	AT91_REG	 SYS_PIOB_PDSR; 	// Pin Data Status Register
	AT91_REG	 SYS_PIOB_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PIOB_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PIOB_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_PIOB_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_PIOB_MDER; 	// Multi-driver Enable Register
	AT91_REG	 SYS_PIOB_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 SYS_PIOB_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved29[1]; 	// 
	AT91_REG	 SYS_PIOB_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 SYS_PIOB_PPUER; 	// Pull-up Enable Register
	AT91_REG	 SYS_PIOB_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved30[1]; 	// 
	AT91_REG	 SYS_PIOB_ASR; 	// Select A Register
	AT91_REG	 SYS_PIOB_BSR; 	// Select B Register
	AT91_REG	 SYS_PIOB_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved31[9]; 	// 
	AT91_REG	 SYS_PIOB_OWER; 	// Output Write Enable Register
	AT91_REG	 SYS_PIOB_OWDR; 	// Output Write Disable Register
	AT91_REG	 SYS_PIOB_OWSR; 	// Output Write Status Register
	AT91_REG	 Reserved32[85]; 	// 
	AT91_REG	 SYS_PIOC_PER; 	// PIO Enable Register
	AT91_REG	 SYS_PIOC_PDR; 	// PIO Disable Register
	AT91_REG	 SYS_PIOC_PSR; 	// PIO Status Register
	AT91_REG	 Reserved33[1]; 	// 
	AT91_REG	 SYS_PIOC_OER; 	// Output Enable Register
	AT91_REG	 SYS_PIOC_ODR; 	// Output Disable Registerr
	AT91_REG	 SYS_PIOC_OSR; 	// Output Status Register
	AT91_REG	 Reserved34[1]; 	// 
	AT91_REG	 SYS_PIOC_IFER; 	// Input Filter Enable Register
	AT91_REG	 SYS_PIOC_IFDR; 	// Input Filter Disable Register
	AT91_REG	 SYS_PIOC_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved35[1]; 	// 
	AT91_REG	 SYS_PIOC_SODR; 	// Set Output Data Register
	AT91_REG	 SYS_PIOC_CODR; 	// Clear Output Data Register
	AT91_REG	 SYS_PIOC_ODSR; 	// Output Data Status Register
	AT91_REG	 SYS_PIOC_PDSR; 	// Pin Data Status Register
	AT91_REG	 SYS_PIOC_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PIOC_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PIOC_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_PIOC_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_PIOC_MDER; 	// Multi-driver Enable Register
	AT91_REG	 SYS_PIOC_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 SYS_PIOC_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved36[1]; 	// 
	AT91_REG	 SYS_PIOC_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 SYS_PIOC_PPUER; 	// Pull-up Enable Register
	AT91_REG	 SYS_PIOC_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved37[1]; 	// 
	AT91_REG	 SYS_PIOC_ASR; 	// Select A Register
	AT91_REG	 SYS_PIOC_BSR; 	// Select B Register
	AT91_REG	 SYS_PIOC_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved38[9]; 	// 
	AT91_REG	 SYS_PIOC_OWER; 	// Output Write Enable Register
	AT91_REG	 SYS_PIOC_OWDR; 	// Output Write Disable Register
	AT91_REG	 SYS_PIOC_OWSR; 	// Output Write Status Register
	AT91_REG	 Reserved39[85]; 	// 
	AT91_REG	 SYS_PIOD_PER; 	// PIO Enable Register
	AT91_REG	 SYS_PIOD_PDR; 	// PIO Disable Register
	AT91_REG	 SYS_PIOD_PSR; 	// PIO Status Register
	AT91_REG	 Reserved40[1]; 	// 
	AT91_REG	 SYS_PIOD_OER; 	// Output Enable Register
	AT91_REG	 SYS_PIOD_ODR; 	// Output Disable Registerr
	AT91_REG	 SYS_PIOD_OSR; 	// Output Status Register
	AT91_REG	 Reserved41[1]; 	// 
	AT91_REG	 SYS_PIOD_IFER; 	// Input Filter Enable Register
	AT91_REG	 SYS_PIOD_IFDR; 	// Input Filter Disable Register
	AT91_REG	 SYS_PIOD_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved42[1]; 	// 
	AT91_REG	 SYS_PIOD_SODR; 	// Set Output Data Register
	AT91_REG	 SYS_PIOD_CODR; 	// Clear Output Data Register
	AT91_REG	 SYS_PIOD_ODSR; 	// Output Data Status Register
	AT91_REG	 SYS_PIOD_PDSR; 	// Pin Data Status Register
	AT91_REG	 SYS_PIOD_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PIOD_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PIOD_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_PIOD_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_PIOD_MDER; 	// Multi-driver Enable Register
	AT91_REG	 SYS_PIOD_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 SYS_PIOD_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved43[1]; 	// 
	AT91_REG	 SYS_PIOD_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 SYS_PIOD_PPUER; 	// Pull-up Enable Register
	AT91_REG	 SYS_PIOD_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved44[1]; 	// 
	AT91_REG	 SYS_PIOD_ASR; 	// Select A Register
	AT91_REG	 SYS_PIOD_BSR; 	// Select B Register
	AT91_REG	 SYS_PIOD_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved45[9]; 	// 
	AT91_REG	 SYS_PIOD_OWER; 	// Output Write Enable Register
	AT91_REG	 SYS_PIOD_OWDR; 	// Output Write Disable Register
	AT91_REG	 SYS_PIOD_OWSR; 	// Output Write Status Register
	AT91_REG	 Reserved46[85]; 	// 
	AT91_REG	 SYS_PIOE_PER; 	// PIO Enable Register
	AT91_REG	 SYS_PIOE_PDR; 	// PIO Disable Register
	AT91_REG	 SYS_PIOE_PSR; 	// PIO Status Register
	AT91_REG	 Reserved47[1]; 	// 
	AT91_REG	 SYS_PIOE_OER; 	// Output Enable Register
	AT91_REG	 SYS_PIOE_ODR; 	// Output Disable Registerr
	AT91_REG	 SYS_PIOE_OSR; 	// Output Status Register
	AT91_REG	 Reserved48[1]; 	// 
	AT91_REG	 SYS_PIOE_IFER; 	// Input Filter Enable Register
	AT91_REG	 SYS_PIOE_IFDR; 	// Input Filter Disable Register
	AT91_REG	 SYS_PIOE_IFSR; 	// Input Filter Status Register
	AT91_REG	 Reserved49[1]; 	// 
	AT91_REG	 SYS_PIOE_SODR; 	// Set Output Data Register
	AT91_REG	 SYS_PIOE_CODR; 	// Clear Output Data Register
	AT91_REG	 SYS_PIOE_ODSR; 	// Output Data Status Register
	AT91_REG	 SYS_PIOE_PDSR; 	// Pin Data Status Register
	AT91_REG	 SYS_PIOE_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PIOE_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PIOE_IMR; 	// Interrupt Mask Register
	AT91_REG	 SYS_PIOE_ISR; 	// Interrupt Status Register
	AT91_REG	 SYS_PIOE_MDER; 	// Multi-driver Enable Register
	AT91_REG	 SYS_PIOE_MDDR; 	// Multi-driver Disable Register
	AT91_REG	 SYS_PIOE_MDSR; 	// Multi-driver Status Register
	AT91_REG	 Reserved50[1]; 	// 
	AT91_REG	 SYS_PIOE_PPUDR; 	// Pull-up Disable Register
	AT91_REG	 SYS_PIOE_PPUER; 	// Pull-up Enable Register
	AT91_REG	 SYS_PIOE_PPUSR; 	// Pull-up Status Register
	AT91_REG	 Reserved51[1]; 	// 
	AT91_REG	 SYS_PIOE_ASR; 	// Select A Register
	AT91_REG	 SYS_PIOE_BSR; 	// Select B Register
	AT91_REG	 SYS_PIOE_ABSR; 	// AB Select Status Register
	AT91_REG	 Reserved52[9]; 	// 
	AT91_REG	 SYS_PIOE_OWER; 	// Output Write Enable Register
	AT91_REG	 SYS_PIOE_OWDR; 	// Output Write Disable Register
	AT91_REG	 SYS_PIOE_OWSR; 	// Output Write Status Register
	AT91_REG	 Reserved53[85]; 	// 
	AT91_REG	 SYS_PMC_SCER; 	// System Clock Enable Register
	AT91_REG	 SYS_PMC_SCDR; 	// System Clock Disable Register
	AT91_REG	 SYS_PMC_SCSR; 	// System Clock Status Register
	AT91_REG	 Reserved54[1]; 	// 
	AT91_REG	 SYS_PMC_PCER; 	// Peripheral Clock Enable Register
	AT91_REG	 SYS_PMC_PCDR; 	// Peripheral Clock Disable Register
	AT91_REG	 SYS_PMC_PCSR; 	// Peripheral Clock Status Register
	AT91_REG	 SYS_PMC_UCKR; 	// UTMI Clock Configuration Register
	AT91_REG	 SYS_PMC_MOR; 	// Main Oscillator Register
	AT91_REG	 SYS_PMC_MCFR; 	// Main Clock  Frequency Register
	AT91_REG	 SYS_PMC_PLLAR; 	// PLL A Register
	AT91_REG	 SYS_PMC_PLLBR; 	// PLL B Register
	AT91_REG	 SYS_PMC_MCKR; 	// Master Clock Register
	AT91_REG	 Reserved55[3]; 	// 
	AT91_REG	 SYS_PMC_PCKR[8]; 	// Programmable Clock Register
	AT91_REG	 SYS_PMC_IER; 	// Interrupt Enable Register
	AT91_REG	 SYS_PMC_IDR; 	// Interrupt Disable Register
	AT91_REG	 SYS_PMC_SR; 	// Status Register
	AT91_REG	 SYS_PMC_IMR; 	// Interrupt Mask Register
	AT91_REG	 Reserved56[36]; 	// 
	AT91_REG	 SYS_RSTC_RCR; 	// Reset Control Register
	AT91_REG	 SYS_RSTC_RSR; 	// Reset Status Register
	AT91_REG	 SYS_RSTC_RMR; 	// Reset Mode Register
	AT91_REG	 Reserved57[1]; 	// 
	AT91_REG	 SYS_SHDWC_SHCR; 	// Shut Down Control Register
	AT91_REG	 SYS_SHDWC_SHMR; 	// Shut Down Mode Register
	AT91_REG	 SYS_SHDWC_SHSR; 	// Shut Down Status Register
	AT91_REG	 Reserved58[1]; 	// 
	AT91_REG	 SYS_RTTC_RTMR; 	// Real-time Mode Register
	AT91_REG	 SYS_RTTC_RTAR; 	// Real-time Alarm Register
	AT91_REG	 SYS_RTTC_RTVR; 	// Real-time Value Register
	AT91_REG	 SYS_RTTC_RTSR; 	// Real-time Status Register
	AT91_REG	 SYS_PITC_PIMR; 	// Period Interval Mode Register
	AT91_REG	 SYS_PITC_PISR; 	// Period Interval Status Register
	AT91_REG	 SYS_PITC_PIVR; 	// Period Interval Value Register
	AT91_REG	 SYS_PITC_PIIR; 	// Period Interval Image Register
	AT91_REG	 SYS_WDTC_WDCR; 	// Watchdog Control Register
	AT91_REG	 SYS_WDTC_WDMR; 	// Watchdog Mode Register
	AT91_REG	 SYS_WDTC_WDSR; 	// Watchdog Status Register
	AT91_REG	 Reserved59[1]; 	// 
	AT91_REG	 SYS_SLCKSEL; 	// Slow Clock Selection Register
	AT91_REG	 Reserved60[3]; 	// 
	AT91_REG	 SYS_GPBR[4]; 	// General Purpose Register
	AT91_REG	 Reserved61[35]; 	// 
	AT91_REG	 SYS_RSTC_VER; 	// Version Register
} AT91S_SYS, *AT91PS_SYS;
#else
#define SLCKSEL         (AT91_CAST(AT91_REG *) 	0x00001B50) // (SLCKSEL) Slow Clock Selection Register
#define GPBR            (AT91_CAST(AT91_REG *) 	0x00001B60) // (GPBR) General Purpose Register

#endif
// -------- SLCKSEL : (SYS Offset: 0x1b50) Slow Clock Selection Register -------- 
#define AT91C_SLCKSEL_RCEN    (0x1 <<  0) // (SYS) Enable Internal RC Oscillator
#define AT91C_SLCKSEL_OSC32EN (0x1 <<  1) // (SYS) Enable External Oscillator
#define AT91C_SLCKSEL_OSC32BYP (0x1 <<  2) // (SYS) Bypass External Oscillator
#define AT91C_SLCKSEL_OSCSEL  (0x1 <<  3) // (SYS) OSC Selection
// -------- GPBR : (SYS Offset: 0x1b60) GPBR General Purpose Register -------- 
#define AT91C_GPBR_GPRV       (0x0 <<  0) // (SYS) General Purpose Register Value

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR USB Host Interface
// *****************************************************************************
#ifndef __ASSEMBLY__
typedef struct _AT91S_UHP {
	AT91_REG	 UHP_HcRevision; 	// Revision
	AT91_REG	 UHP_HcControl; 	// Operating modes for the Host Controller
	AT91_REG	 UHP_HcCommandStatus; 	// Command & status Register
	AT91_REG	 UHP_HcInterruptStatus; 	// Interrupt Status Register
	AT91_REG	 UHP_HcInterruptEnable; 	// Interrupt Enable Register
	AT91_REG	 UHP_HcInterruptDisable; 	// Interrupt Disable Register
	AT91_REG	 UHP_HcHCCA; 	// Pointer to the Host Controller Communication Area
	AT91_REG	 UHP_HcPeriodCurrentED; 	// Current Isochronous or Interrupt Endpoint Descriptor
	AT91_REG	 UHP_HcControlHeadED; 	// First Endpoint Descriptor of the Control list
	AT91_REG	 UHP_HcControlCurrentED; 	// Endpoint Control and Status Register
	AT91_REG	 UHP_HcBulkHeadED; 	// First endpoint register of the Bulk list
	AT91_REG	 UHP_HcBulkCurrentED; 	// Current endpoint of the Bulk list
	AT91_REG	 UHP_HcBulkDoneHead; 	// Last completed transfer descriptor
	AT91_REG	 UHP_HcFmInterval; 	// Bit time between 2 consecutive SOFs
	AT91_REG	 UHP_HcFmRemaining; 	// Bit time remaining in the current Frame
	AT91_REG	 UHP_HcFmNumber; 	// Frame number
	AT91_REG	 UHP_HcPeriodicStart; 	// Periodic Start
	AT91_REG	 UHP_HcLSThreshold; 	// LS Threshold
	AT91_REG	 UHP_HcRhDescriptorA; 	// Root Hub characteristics A
	AT91_REG	 UHP_HcRhDescriptorB; 	// Root Hub characteristics B
	AT91_REG	 UHP_HcRhStatus; 	// Root Hub Status register
	AT91_REG	 UHP_HcRhPortStatus[2]; 	// Root Hub Port Status Register
} AT91S_UHP, *AT91PS_UHP;
#else
#define HcRevision      (AT91_CAST(AT91_REG *) 	0x00000000) // (HcRevision) Revision
#define HcControl       (AT91_CAST(AT91_REG *) 	0x00000004) // (HcControl) Operating modes for the Host Controller
#define HcCommandStatus (AT91_CAST(AT91_REG *) 	0x00000008) // (HcCommandStatus) Command & status Register
#define HcInterruptStatus (AT91_CAST(AT91_REG *) 	0x0000000C) // (HcInterruptStatus) Interrupt Status Register
#define HcInterruptEnable (AT91_CAST(AT91_REG *) 	0x00000010) // (HcInterruptEnable) Interrupt Enable Register
#define HcInterruptDisable (AT91_CAST(AT91_REG *) 	0x00000014) // (HcInterruptDisable) Interrupt Disable Register
#define HcHCCA          (AT91_CAST(AT91_REG *) 	0x00000018) // (HcHCCA) Pointer to the Host Controller Communication Area
#define HcPeriodCurrentED (AT91_CAST(AT91_REG *) 	0x0000001C) // (HcPeriodCurrentED) Current Isochronous or Interrupt Endpoint Descriptor
#define HcControlHeadED (AT91_CAST(AT91_REG *) 	0x00000020) // (HcControlHeadED) First Endpoint Descriptor of the Control list
#define HcControlCurrentED (AT91_CAST(AT91_REG *) 	0x00000024) // (HcControlCurrentED) Endpoint Control and Status Register
#define HcBulkHeadED    (AT91_CAST(AT91_REG *) 	0x00000028) // (HcBulkHeadED) First endpoint register of the Bulk list
#define HcBulkCurrentED (AT91_CAST(AT91_REG *) 	0x0000002C) // (HcBulkCurrentED) Current endpoint of the Bulk list
#define HcBulkDoneHead  (AT91_CAST(AT91_REG *) 	0x00000030) // (HcBulkDoneHead) Last completed transfer descriptor
#define HcFmInterval    (AT91_CAST(AT91_REG *) 	0x00000034) // (HcFmInterval) Bit time between 2 consecutive SOFs
#define HcFmRemaining   (AT91_CAST(AT91_REG *) 	0x00000038) // (HcFmRemaining) Bit time remaining in the current Frame
#define HcFmNumber      (AT91_CAST(AT91_REG *) 	0x0000003C) // (HcFmNumber) Frame number
#define HcPeriodicStart (AT91_CAST(AT91_REG *) 	0x00000040) // (HcPeriodicStart) Periodic Start
#define HcLSThreshold   (AT91_CAST(AT91_REG *) 	0x00000044) // (HcLSThreshold) LS Threshold
#define HcRhDescriptorA (AT91_CAST(AT91_REG *) 	0x00000048) // (HcRhDescriptorA) Root Hub characteristics A
#define HcRhDescriptorB (AT91_CAST(AT91_REG *) 	0x0000004C) // (HcRhDescriptorB) Root Hub characteristics B
#define HcRhStatus      (AT91_CAST(AT91_REG *) 	0x00000050) // (HcRhStatus) Root Hub Status register
#define HcRhPortStatus  (AT91_CAST(AT91_REG *) 	0x00000054) // (HcRhPortStatus) Root Hub Port Status Register

#endif

// *****************************************************************************
//               REGISTER ADDRESS DEFINITION FOR AT91CAP9_UMC
// *****************************************************************************
// ========== Register definition for HECC peripheral ========== 
#define AT91C_HECC_VR   (AT91_CAST(AT91_REG *) 	0xFFFFE2FC) // (HECC)  ECC Version register
#define AT91C_HECC_SR1  (AT91_CAST(AT91_REG *) 	0xFFFFE208) // (HECC)  ECC Status1 register
#define AT91C_HECC_CR   (AT91_CAST(AT91_REG *) 	0xFFFFE200) // (HECC) TOTO ECC reset register
#define AT91C_HECC_SR2  (AT91_CAST(AT91_REG *) 	0xFFFFE214) // (HECC)  ECC Status2 register
#define AT91C_HECC_PR0  (AT91_CAST(AT91_REG *) 	0xFFFFE20C) // (HECC)  ECC Parity register 0
#define AT91C_HECC_MR   (AT91_CAST(AT91_REG *) 	0xFFFFE204) // (HECC)  ECC Page size register
// ========== Register definition for BCRAMC peripheral ========== 
#define AT91C_BCRAMC_IPNR1 (AT91_CAST(AT91_REG *) 	0xFFFFE4F0) // (BCRAMC) BCRAM IP Name Register 1
#define AT91C_BCRAMC_HSR (AT91_CAST(AT91_REG *) 	0xFFFFE408) // (BCRAMC) BCRAM Controller High Speed Register
#define AT91C_BCRAMC_CR (AT91_CAST(AT91_REG *) 	0xFFFFE400) // (BCRAMC) BCRAM Controller Configuration Register
#define AT91C_BCRAMC_TPR (AT91_CAST(AT91_REG *) 	0xFFFFE404) // (BCRAMC) BCRAM Controller Timing Parameter Register
#define AT91C_BCRAMC_LPR (AT91_CAST(AT91_REG *) 	0xFFFFE40C) // (BCRAMC) BCRAM Controller Low Power Register
#define AT91C_BCRAMC_IPNR2 (AT91_CAST(AT91_REG *) 	0xFFFFE4F4) // (BCRAMC) BCRAM IP Name Register 2
#define AT91C_BCRAMC_IPFR (AT91_CAST(AT91_REG *) 	0xFFFFE4F8) // (BCRAMC) BCRAM IP Features Register
#define AT91C_BCRAMC_VR (AT91_CAST(AT91_REG *) 	0xFFFFE4FC) // (BCRAMC) BCRAM Version Register
#define AT91C_BCRAMC_MDR (AT91_CAST(AT91_REG *) 	0xFFFFE410) // (BCRAMC) BCRAM Memory Device Register
#define AT91C_BCRAMC_PADDSR (AT91_CAST(AT91_REG *) 	0xFFFFE4EC) // (BCRAMC) BCRAM PADDR Size Register
// ========== Register definition for SDDRC peripheral ========== 
#define AT91C_SDDRC_RTR (AT91_CAST(AT91_REG *) 	0xFFFFE604) // (SDDRC) 
#define AT91C_SDDRC_T0PR (AT91_CAST(AT91_REG *) 	0xFFFFE60C) // (SDDRC) 
#define AT91C_SDDRC_MDR (AT91_CAST(AT91_REG *) 	0xFFFFE61C) // (SDDRC) 
#define AT91C_SDDRC_HS  (AT91_CAST(AT91_REG *) 	0xFFFFE614) // (SDDRC) 
#define AT91C_SDDRC_VERSION (AT91_CAST(AT91_REG *) 	0xFFFFE6FC) // (SDDRC) 
#define AT91C_SDDRC_MR  (AT91_CAST(AT91_REG *) 	0xFFFFE600) // (SDDRC) 
#define AT91C_SDDRC_T1PR (AT91_CAST(AT91_REG *) 	0xFFFFE610) // (SDDRC) 
#define AT91C_SDDRC_CR  (AT91_CAST(AT91_REG *) 	0xFFFFE608) // (SDDRC) 
#define AT91C_SDDRC_LPR (AT91_CAST(AT91_REG *) 	0xFFFFE618) // (SDDRC) 
// ========== Register definition for SMC peripheral ========== 
#define AT91C_SMC_PULSE7 (AT91_CAST(AT91_REG *) 	0xFFFFE874) // (SMC)  Pulse Register for CS 7
#define AT91C_SMC_SETUP3 (AT91_CAST(AT91_REG *) 	0xFFFFE830) // (SMC)  Setup Register for CS 3
#define AT91C_SMC_CYCLE2 (AT91_CAST(AT91_REG *) 	0xFFFFE828) // (SMC)  Cycle Register for CS 2
#define AT91C_SMC_CTRL1 (AT91_CAST(AT91_REG *) 	0xFFFFE81C) // (SMC)  Control Register for CS 1
#define AT91C_SMC_CTRL0 (AT91_CAST(AT91_REG *) 	0xFFFFE80C) // (SMC)  Control Register for CS 0
#define AT91C_SMC_CYCLE7 (AT91_CAST(AT91_REG *) 	0xFFFFE878) // (SMC)  Cycle Register for CS 7
#define AT91C_SMC_PULSE2 (AT91_CAST(AT91_REG *) 	0xFFFFE824) // (SMC)  Pulse Register for CS 2
#define AT91C_SMC_SETUP6 (AT91_CAST(AT91_REG *) 	0xFFFFE860) // (SMC)  Setup Register for CS 6
#define AT91C_SMC_SETUP2 (AT91_CAST(AT91_REG *) 	0xFFFFE820) // (SMC)  Setup Register for CS 2
#define AT91C_SMC_CYCLE1 (AT91_CAST(AT91_REG *) 	0xFFFFE818) // (SMC)  Cycle Register for CS 1
#define AT91C_SMC_SETUP5 (AT91_CAST(AT91_REG *) 	0xFFFFE850) // (SMC)  Setup Register for CS 5
#define AT91C_SMC_PULSE1 (AT91_CAST(AT91_REG *) 	0xFFFFE814) // (SMC)  Pulse Register for CS 1
#define AT91C_SMC_CYCLE6 (AT91_CAST(AT91_REG *) 	0xFFFFE868) // (SMC)  Cycle Register for CS 6
#define AT91C_SMC_PULSE6 (AT91_CAST(AT91_REG *) 	0xFFFFE864) // (SMC)  Pulse Register for CS 6
#define AT91C_SMC_CTRL2 (AT91_CAST(AT91_REG *) 	0xFFFFE82C) // (SMC)  Control Register for CS 2
#define AT91C_SMC_CTRL5 (AT91_CAST(AT91_REG *) 	0xFFFFE85C) // (SMC)  Control Register for CS 5
#define AT91C_SMC_PULSE4 (AT91_CAST(AT91_REG *) 	0xFFFFE844) // (SMC)  Pulse Register for CS 4
#define AT91C_SMC_CTRL3 (AT91_CAST(AT91_REG *) 	0xFFFFE83C) // (SMC)  Control Register for CS 3
#define AT91C_SMC_CYCLE0 (AT91_CAST(AT91_REG *) 	0xFFFFE808) // (SMC)  Cycle Register for CS 0
#define AT91C_SMC_SETUP1 (AT91_CAST(AT91_REG *) 	0xFFFFE810) // (SMC)  Setup Register for CS 1
#define AT91C_SMC_SETUP4 (AT91_CAST(AT91_REG *) 	0xFFFFE840) // (SMC)  Setup Register for CS 4
#define AT91C_SMC_PULSE5 (AT91_CAST(AT91_REG *) 	0xFFFFE854) // (SMC)  Pulse Register for CS 5
#define AT91C_SMC_CYCLE3 (AT91_CAST(AT91_REG *) 	0xFFFFE838) // (SMC)  Cycle Register for CS 3
#define AT91C_SMC_SETUP7 (AT91_CAST(AT91_REG *) 	0xFFFFE870) // (SMC)  Setup Register for CS 7
#define AT91C_SMC_SETUP0 (AT91_CAST(AT91_REG *) 	0xFFFFE800) // (SMC)  Setup Register for CS 0
#define AT91C_SMC_CTRL4 (AT91_CAST(AT91_REG *) 	0xFFFFE84C) // (SMC)  Control Register for CS 4
#define AT91C_SMC_CYCLE5 (AT91_CAST(AT91_REG *) 	0xFFFFE858) // (SMC)  Cycle Register for CS 5
#define AT91C_SMC_PULSE0 (AT91_CAST(AT91_REG *) 	0xFFFFE804) // (SMC)  Pulse Register for CS 0
#define AT91C_SMC_PULSE3 (AT91_CAST(AT91_REG *) 	0xFFFFE834) // (SMC)  Pulse Register for CS 3
#define AT91C_SMC_CTRL6 (AT91_CAST(AT91_REG *) 	0xFFFFE86C) // (SMC)  Control Register for CS 6
#define AT91C_SMC_CYCLE4 (AT91_CAST(AT91_REG *) 	0xFFFFE848) // (SMC)  Cycle Register for CS 4
#define AT91C_SMC_CTRL7 (AT91_CAST(AT91_REG *) 	0xFFFFE87C) // (SMC)  Control Register for CS 7
// ========== Register definition for MATRIX_PRS peripheral ========== 
#define AT91C_MATRIX_PRS_PRAS (AT91_CAST(AT91_REG *) 	0xFFFFEA80) // (MATRIX_PRS)  Slave Priority Registers A for Slave
#define AT91C_MATRIX_PRS_PRBS (AT91_CAST(AT91_REG *) 	0xFFFFEA84) // (MATRIX_PRS)  Slave Priority Registers B for Slave
// ========== Register definition for MATRIX peripheral ========== 
#define AT91C_MATRIX_MCFG (AT91_CAST(AT91_REG *) 	0xFFFFEA00) // (MATRIX)  Master Configuration Register 
#define AT91C_MATRIX_MRCR (AT91_CAST(AT91_REG *) 	0xFFFFEB00) // (MATRIX)  Master Remp Control Register 
#define AT91C_MATRIX_SCFG (AT91_CAST(AT91_REG *) 	0xFFFFEA40) // (MATRIX)  Slave Configuration Register 
// ========== Register definition for CCFG peripheral ========== 
#define AT91C_CCFG_RAM  (AT91_CAST(AT91_REG *) 	0xFFFFEB10) // (CCFG)  Slave 0 (Ram) Special Function Register
#define AT91C_CCFG_MPBS1 (AT91_CAST(AT91_REG *) 	0xFFFFEB1C) // (CCFG)  Slave 3 (MP Block Slave 1) Special Function Register
#define AT91C_CCFG_BRIDGE (AT91_CAST(AT91_REG *) 	0xFFFFEB34) // (CCFG)  Slave 8 (APB Bridge) Special Function Register
#define AT91C_CCFG_HDDRC2 (AT91_CAST(AT91_REG *) 	0xFFFFEB24) // (CCFG)  Slave 5 (DDRC Port 2) Special Function Register
#define AT91C_CCFG_MPBS3 (AT91_CAST(AT91_REG *) 	0xFFFFEB30) // (CCFG)  Slave 7 (MP Block Slave 3) Special Function Register
#define AT91C_CCFG_MPBS2 (AT91_CAST(AT91_REG *) 	0xFFFFEB2C) // (CCFG)  Slave 7 (MP Block Slave 2) Special Function Register
#define AT91C_CCFG_UDPHS (AT91_CAST(AT91_REG *) 	0xFFFFEB18) // (CCFG)  Slave 2 (AHB Periphs) Special Function Register
#define AT91C_CCFG_HDDRC3 (AT91_CAST(AT91_REG *) 	0xFFFFEB28) // (CCFG)  Slave 6 (DDRC Port 3) Special Function Register
#define AT91C_CCFG_EBICSA (AT91_CAST(AT91_REG *) 	0xFFFFEB20) // (CCFG)  EBI Chip Select Assignement Register
#define AT91C_CCFG_MATRIXVERSION (AT91_CAST(AT91_REG *) 	0xFFFFEBFC) // (CCFG)  Version Register
#define AT91C_CCFG_MPBS0 (AT91_CAST(AT91_REG *) 	0xFFFFEB14) // (CCFG)  Slave 1 (MP Block Slave 0) Special Function Register
// ========== Register definition for PDC_DBGU peripheral ========== 
#define AT91C_DBGU_PTCR (AT91_CAST(AT91_REG *) 	0xFFFFEF20) // (PDC_DBGU) PDC Transfer Control Register
#define AT91C_DBGU_RCR  (AT91_CAST(AT91_REG *) 	0xFFFFEF04) // (PDC_DBGU) Receive Counter Register
#define AT91C_DBGU_TCR  (AT91_CAST(AT91_REG *) 	0xFFFFEF0C) // (PDC_DBGU) Transmit Counter Register
#define AT91C_DBGU_RNCR (AT91_CAST(AT91_REG *) 	0xFFFFEF14) // (PDC_DBGU) Receive Next Counter Register
#define AT91C_DBGU_TNPR (AT91_CAST(AT91_REG *) 	0xFFFFEF18) // (PDC_DBGU) Transmit Next Pointer Register
#define AT91C_DBGU_RNPR (AT91_CAST(AT91_REG *) 	0xFFFFEF10) // (PDC_DBGU) Receive Next Pointer Register
#define AT91C_DBGU_PTSR (AT91_CAST(AT91_REG *) 	0xFFFFEF24) // (PDC_DBGU) PDC Transfer Status Register
#define AT91C_DBGU_RPR  (AT91_CAST(AT91_REG *) 	0xFFFFEF00) // (PDC_DBGU) Receive Pointer Register
#define AT91C_DBGU_TPR  (AT91_CAST(AT91_REG *) 	0xFFFFEF08) // (PDC_DBGU) Transmit Pointer Register
#define AT91C_DBGU_TNCR (AT91_CAST(AT91_REG *) 	0xFFFFEF1C) // (PDC_DBGU) Transmit Next Counter Register
// ========== Register definition for DBGU peripheral ========== 
#define AT91C_DBGU_BRGR (AT91_CAST(AT91_REG *) 	0xFFFFEE20) // (DBGU) Baud Rate Generator Register
#define AT91C_DBGU_CR   (AT91_CAST(AT91_REG *) 	0xFFFFEE00) // (DBGU) Control Register
#define AT91C_DBGU_THR  (AT91_CAST(AT91_REG *) 	0xFFFFEE1C) // (DBGU) Transmitter Holding Register
#define AT91C_DBGU_IDR  (AT91_CAST(AT91_REG *) 	0xFFFFEE0C) // (DBGU) Interrupt Disable Register
#define AT91C_DBGU_EXID (AT91_CAST(AT91_REG *) 	0xFFFFEE44) // (DBGU) Chip ID Extension Register
#define AT91C_DBGU_IMR  (AT91_CAST(AT91_REG *) 	0xFFFFEE10) // (DBGU) Interrupt Mask Register
#define AT91C_DBGU_FNTR (AT91_CAST(AT91_REG *) 	0xFFFFEE48) // (DBGU) Force NTRST Register
#define AT91C_DBGU_IER  (AT91_CAST(AT91_REG *) 	0xFFFFEE08) // (DBGU) Interrupt Enable Register
#define AT91C_DBGU_CSR  (AT91_CAST(AT91_REG *) 	0xFFFFEE14) // (DBGU) Channel Status Register
#define AT91C_DBGU_MR   (AT91_CAST(AT91_REG *) 	0xFFFFEE04) // (DBGU) Mode Register
#define AT91C_DBGU_RHR  (AT91_CAST(AT91_REG *) 	0xFFFFEE18) // (DBGU) Receiver Holding Register
#define AT91C_DBGU_CIDR (AT91_CAST(AT91_REG *) 	0xFFFFEE40) // (DBGU) Chip ID Register
// ========== Register definition for AIC peripheral ========== 
#define AT91C_AIC_IVR   (AT91_CAST(AT91_REG *) 	0xFFFFF100) // (AIC) IRQ Vector Register
#define AT91C_AIC_SMR   (AT91_CAST(AT91_REG *) 	0xFFFFF000) // (AIC) Source Mode Register
#define AT91C_AIC_FVR   (AT91_CAST(AT91_REG *) 	0xFFFFF104) // (AIC) FIQ Vector Register
#define AT91C_AIC_DCR   (AT91_CAST(AT91_REG *) 	0xFFFFF138) // (AIC) Debug Control Register (Protect)
#define AT91C_AIC_EOICR (AT91_CAST(AT91_REG *) 	0xFFFFF130) // (AIC) End of Interrupt Command Register
#define AT91C_AIC_SVR   (AT91_CAST(AT91_REG *) 	0xFFFFF080) // (AIC) Source Vector Register
#define AT91C_AIC_FFSR  (AT91_CAST(AT91_REG *) 	0xFFFFF148) // (AIC) Fast Forcing Status Register
#define AT91C_AIC_ICCR  (AT91_CAST(AT91_REG *) 	0xFFFFF128) // (AIC) Interrupt Clear Command Register
#define AT91C_AIC_ISR   (AT91_CAST(AT91_REG *) 	0xFFFFF108) // (AIC) Interrupt Status Register
#define AT91C_AIC_IMR   (AT91_CAST(AT91_REG *) 	0xFFFFF110) // (AIC) Interrupt Mask Register
#define AT91C_AIC_IPR   (AT91_CAST(AT91_REG *) 	0xFFFFF10C) // (AIC) Interrupt Pending Register
#define AT91C_AIC_FFER  (AT91_CAST(AT91_REG *) 	0xFFFFF140) // (AIC) Fast Forcing Enable Register
#define AT91C_AIC_IECR  (AT91_CAST(AT91_REG *) 	0xFFFFF120) // (AIC) Interrupt Enable Command Register
#define AT91C_AIC_ISCR  (AT91_CAST(AT91_REG *) 	0xFFFFF12C) // (AIC) Interrupt Set Command Register
#define AT91C_AIC_FFDR  (AT91_CAST(AT91_REG *) 	0xFFFFF144) // (AIC) Fast Forcing Disable Register
#define AT91C_AIC_CISR  (AT91_CAST(AT91_REG *) 	0xFFFFF114) // (AIC) Core Interrupt Status Register
#define AT91C_AIC_IDCR  (AT91_CAST(AT91_REG *) 	0xFFFFF124) // (AIC) Interrupt Disable Command Register
#define AT91C_AIC_SPU   (AT91_CAST(AT91_REG *) 	0xFFFFF134) // (AIC) Spurious Vector Register
// ========== Register definition for PIOA peripheral ========== 
#define AT91C_PIOA_OWDR (AT91_CAST(AT91_REG *) 	0xFFFFF2A4) // (PIOA) Output Write Disable Register
#define AT91C_PIOA_MDDR (AT91_CAST(AT91_REG *) 	0xFFFFF254) // (PIOA) Multi-driver Disable Register
#define AT91C_PIOA_IFSR (AT91_CAST(AT91_REG *) 	0xFFFFF228) // (PIOA) Input Filter Status Register
#define AT91C_PIOA_ISR  (AT91_CAST(AT91_REG *) 	0xFFFFF24C) // (PIOA) Interrupt Status Register
#define AT91C_PIOA_CODR (AT91_CAST(AT91_REG *) 	0xFFFFF234) // (PIOA) Clear Output Data Register
#define AT91C_PIOA_PDR  (AT91_CAST(AT91_REG *) 	0xFFFFF204) // (PIOA) PIO Disable Register
#define AT91C_PIOA_OWSR (AT91_CAST(AT91_REG *) 	0xFFFFF2A8) // (PIOA) Output Write Status Register
#define AT91C_PIOA_ASR  (AT91_CAST(AT91_REG *) 	0xFFFFF270) // (PIOA) Select A Register
#define AT91C_PIOA_PPUSR (AT91_CAST(AT91_REG *) 	0xFFFFF268) // (PIOA) Pull-up Status Register
#define AT91C_PIOA_IMR  (AT91_CAST(AT91_REG *) 	0xFFFFF248) // (PIOA) Interrupt Mask Register
#define AT91C_PIOA_OSR  (AT91_CAST(AT91_REG *) 	0xFFFFF218) // (PIOA) Output Status Register
#define AT91C_PIOA_ABSR (AT91_CAST(AT91_REG *) 	0xFFFFF278) // (PIOA) AB Select Status Register
#define AT91C_PIOA_MDER (AT91_CAST(AT91_REG *) 	0xFFFFF250) // (PIOA) Multi-driver Enable Register
#define AT91C_PIOA_IFDR (AT91_CAST(AT91_REG *) 	0xFFFFF224) // (PIOA) Input Filter Disable Register
#define AT91C_PIOA_PDSR (AT91_CAST(AT91_REG *) 	0xFFFFF23C) // (PIOA) Pin Data Status Register
#define AT91C_PIOA_SODR (AT91_CAST(AT91_REG *) 	0xFFFFF230) // (PIOA) Set Output Data Register
#define AT91C_PIOA_BSR  (AT91_CAST(AT91_REG *) 	0xFFFFF274) // (PIOA) Select B Register
#define AT91C_PIOA_OWER (AT91_CAST(AT91_REG *) 	0xFFFFF2A0) // (PIOA) Output Write Enable Register
#define AT91C_PIOA_IFER (AT91_CAST(AT91_REG *) 	0xFFFFF220) // (PIOA) Input Filter Enable Register
#define AT91C_PIOA_IDR  (AT91_CAST(AT91_REG *) 	0xFFFFF244) // (PIOA) Interrupt Disable Register
#define AT91C_PIOA_ODR  (AT91_CAST(AT91_REG *) 	0xFFFFF214) // (PIOA) Output Disable Registerr
#define AT91C_PIOA_IER  (AT91_CAST(AT91_REG *) 	0xFFFFF240) // (PIOA) Interrupt Enable Register
#define AT91C_PIOA_PPUER (AT91_CAST(AT91_REG *) 	0xFFFFF264) // (PIOA) Pull-up Enable Register
#define AT91C_PIOA_MDSR (AT91_CAST(AT91_REG *) 	0xFFFFF258) // (PIOA) Multi-driver Status Register
#define AT91C_PIOA_OER  (AT91_CAST(AT91_REG *) 	0xFFFFF210) // (PIOA) Output Enable Register
#define AT91C_PIOA_PER  (AT91_CAST(AT91_REG *) 	0xFFFFF200) // (PIOA) PIO Enable Register
#define AT91C_PIOA_PPUDR (AT91_CAST(AT91_REG *) 	0xFFFFF260) // (PIOA) Pull-up Disable Register
#define AT91C_PIOA_ODSR (AT91_CAST(AT91_REG *) 	0xFFFFF238) // (PIOA) Output Data Status Register
#define AT91C_PIOA_PSR  (AT91_CAST(AT91_REG *) 	0xFFFFF208) // (PIOA) PIO Status Register
// ========== Register definition for PIOB peripheral ========== 
#define AT91C_PIOB_ODR  (AT91_CAST(AT91_REG *) 	0xFFFFF414) // (PIOB) Output Disable Registerr
#define AT91C_PIOB_SODR (AT91_CAST(AT91_REG *) 	0xFFFFF430) // (PIOB) Set Output Data Register
#define AT91C_PIOB_ISR  (AT91_CAST(AT91_REG *) 	0xFFFFF44C) // (PIOB) Interrupt Status Register
#define AT91C_PIOB_ABSR (AT91_CAST(AT91_REG *) 	0xFFFFF478) // (PIOB) AB Select Status Register
#define AT91C_PIOB_IER  (AT91_CAST(AT91_REG *) 	0xFFFFF440) // (PIOB) Interrupt Enable Register
#define AT91C_PIOB_PPUDR (AT91_CAST(AT91_REG *) 	0xFFFFF460) // (PIOB) Pull-up Disable Register
#define AT91C_PIOB_IMR  (AT91_CAST(AT91_REG *) 	0xFFFFF448) // (PIOB) Interrupt Mask Register
#define AT91C_PIOB_PER  (AT91_CAST(AT91_REG *) 	0xFFFFF400) // (PIOB) PIO Enable Register
#define AT91C_PIOB_IFDR (AT91_CAST(AT91_REG *) 	0xFFFFF424) // (PIOB) Input Filter Disable Register
#define AT91C_PIOB_OWDR (AT91_CAST(AT91_REG *) 	0xFFFFF4A4) // (PIOB) Output Write Disable Register
#define AT91C_PIOB_MDSR (AT91_CAST(AT91_REG *) 	0xFFFFF458) // (PIOB) Multi-driver Status Register
#define AT91C_PIOB_IDR  (AT91_CAST(AT91_REG *) 	0xFFFFF444) // (PIOB) Interrupt Disable Register
#define AT91C_PIOB_ODSR (AT91_CAST(AT91_REG *) 	0xFFFFF438) // (PIOB) Output Data Status Register
#define AT91C_PIOB_PPUSR (AT91_CAST(AT91_REG *) 	0xFFFFF468) // (PIOB) Pull-up Status Register
#define AT91C_PIOB_OWSR (AT91_CAST(AT91_REG *) 	0xFFFFF4A8) // (PIOB) Output Write Status Register
#define AT91C_PIOB_BSR  (AT91_CAST(AT91_REG *) 	0xFFFFF474) // (PIOB) Select B Register
#define AT91C_PIOB_OWER (AT91_CAST(AT91_REG *) 	0xFFFFF4A0) // (PIOB) Output Write Enable Register
#define AT91C_PIOB_IFER (AT91_CAST(AT91_REG *) 	0xFFFFF420) // (PIOB) Input Filter Enable Register
#define AT91C_PIOB_PDSR (AT91_CAST(AT91_REG *) 	0xFFFFF43C) // (PIOB) Pin Data Status Register
#define AT91C_PIOB_PPUER (AT91_CAST(AT91_REG *) 	0xFFFFF464) // (PIOB) Pull-up Enable Register
#define AT91C_PIOB_OSR  (AT91_CAST(AT91_REG *) 	0xFFFFF418) // (PIOB) Output Status Register
#define AT91C_PIOB_ASR  (AT91_CAST(AT91_REG *) 	0xFFFFF470) // (PIOB) Select A Register
#define AT91C_PIOB_MDDR (AT91_CAST(AT91_REG *) 	0xFFFFF454) // (PIOB) Multi-driver Disable Register
#define AT91C_PIOB_CODR (AT91_CAST(AT91_REG *) 	0xFFFFF434) // (PIOB) Clear Output Data Register
#define AT91C_PIOB_MDER (AT91_CAST(AT91_REG *) 	0xFFFFF450) // (PIOB) Multi-driver Enable Register
#define AT91C_PIOB_PDR  (AT91_CAST(AT91_REG *) 	0xFFFFF404) // (PIOB) PIO Disable Register
#define AT91C_PIOB_IFSR (AT91_CAST(AT91_REG *) 	0xFFFFF428) // (PIOB) Input Filter Status Register
#define AT91C_PIOB_OER  (AT91_CAST(AT91_REG *) 	0xFFFFF410) // (PIOB) Output Enable Register
#define AT91C_PIOB_PSR  (AT91_CAST(AT91_REG *) 	0xFFFFF408) // (PIOB) PIO Status Register
// ========== Register definition for PIOC peripheral ========== 
#define AT91C_PIOC_OWDR (AT91_CAST(AT91_REG *) 	0xFFFFF6A4) // (PIOC) Output Write Disable Register
#define AT91C_PIOC_MDER (AT91_CAST(AT91_REG *) 	0xFFFFF650) // (PIOC) Multi-driver Enable Register
#define AT91C_PIOC_PPUSR (AT91_CAST(AT91_REG *) 	0xFFFFF668) // (PIOC) Pull-up Status Register
#define AT91C_PIOC_IMR  (AT91_CAST(AT91_REG *) 	0xFFFFF648) // (PIOC) Interrupt Mask Register
#define AT91C_PIOC_ASR  (AT91_CAST(AT91_REG *) 	0xFFFFF670) // (PIOC) Select A Register
#define AT91C_PIOC_PPUDR (AT91_CAST(AT91_REG *) 	0xFFFFF660) // (PIOC) Pull-up Disable Register
#define AT91C_PIOC_PSR  (AT91_CAST(AT91_REG *) 	0xFFFFF608) // (PIOC) PIO Status Register
#define AT91C_PIOC_IER  (AT91_CAST(AT91_REG *) 	0xFFFFF640) // (PIOC) Interrupt Enable Register
#define AT91C_PIOC_CODR (AT91_CAST(AT91_REG *) 	0xFFFFF634) // (PIOC) Clear Output Data Register
#define AT91C_PIOC_OWER (AT91_CAST(AT91_REG *) 	0xFFFFF6A0) // (PIOC) Output Write Enable Register
#define AT91C_PIOC_ABSR (AT91_CAST(AT91_REG *) 	0xFFFFF678) // (PIOC) AB Select Status Register
#define AT91C_PIOC_IFDR (AT91_CAST(AT91_REG *) 	0xFFFFF624) // (PIOC) Input Filter Disable Register
#define AT91C_PIOC_PDSR (AT91_CAST(AT91_REG *) 	0xFFFFF63C) // (PIOC) Pin Data Status Register
#define AT91C_PIOC_IDR  (AT91_CAST(AT91_REG *) 	0xFFFFF644) // (PIOC) Interrupt Disable Register
#define AT91C_PIOC_OWSR (AT91_CAST(AT91_REG *) 	0xFFFFF6A8) // (PIOC) Output Write Status Register
#define AT91C_PIOC_PDR  (AT91_CAST(AT91_REG *) 	0xFFFFF604) // (PIOC) PIO Disable Register
#define AT91C_PIOC_ODR  (AT91_CAST(AT91_REG *) 	0xFFFFF614) // (PIOC) Output Disable Registerr
#define AT91C_PIOC_IFSR (AT91_CAST(AT91_REG *) 	0xFFFFF628) // (PIOC) Input Filter Status Register
#define AT91C_PIOC_PPUER (AT91_CAST(AT91_REG *) 	0xFFFFF664) // (PIOC) Pull-up Enable Register
#define AT91C_PIOC_SODR (AT91_CAST(AT91_REG *) 	0xFFFFF630) // (PIOC) Set Output Data Register
#define AT91C_PIOC_ISR  (AT91_CAST(AT91_REG *) 	0xFFFFF64C) // (PIOC) Interrupt Status Register
#define AT91C_PIOC_ODSR (AT91_CAST(AT91_REG *) 	0xFFFFF638) // (PIOC) Output Data Status Register
#define AT91C_PIOC_OSR  (AT91_CAST(AT91_REG *) 	0xFFFFF618) // (PIOC) Output Status Register
#define AT91C_PIOC_MDSR (AT91_CAST(AT91_REG *) 	0xFFFFF658) // (PIOC) Multi-driver Status Register
#define AT91C_PIOC_IFER (AT91_CAST(AT91_REG *) 	0xFFFFF620) // (PIOC) Input Filter Enable Register
#define AT91C_PIOC_BSR  (AT91_CAST(AT91_REG *) 	0xFFFFF674) // (PIOC) Select B Register
#define AT91C_PIOC_MDDR (AT91_CAST(AT91_REG *) 	0xFFFFF654) // (PIOC) Multi-driver Disable Register
#define AT91C_PIOC_OER  (AT91_CAST(AT91_REG *) 	0xFFFFF610) // (PIOC) Output Enable Register
#define AT91C_PIOC_PER  (AT91_CAST(AT91_REG *) 	0xFFFFF600) // (PIOC) PIO Enable Register
// ========== Register definition for PIOD peripheral ========== 
#define AT91C_PIOD_OWDR (AT91_CAST(AT91_REG *) 	0xFFFFF8A4) // (PIOD) Output Write Disable Register
#define AT91C_PIOD_SODR (AT91_CAST(AT91_REG *) 	0xFFFFF830) // (PIOD) Set Output Data Register
#define AT91C_PIOD_PPUER (AT91_CAST(AT91_REG *) 	0xFFFFF864) // (PIOD) Pull-up Enable Register
#define AT91C_PIOD_CODR (AT91_CAST(AT91_REG *) 	0xFFFFF834) // (PIOD) Clear Output Data Register
#define AT91C_PIOD_PSR  (AT91_CAST(AT91_REG *) 	0xFFFFF808) // (PIOD) PIO Status Register
#define AT91C_PIOD_PDR  (AT91_CAST(AT91_REG *) 	0xFFFFF804) // (PIOD) PIO Disable Register
#define AT91C_PIOD_ODR  (AT91_CAST(AT91_REG *) 	0xFFFFF814) // (PIOD) Output Disable Registerr
#define AT91C_PIOD_PPUSR (AT91_CAST(AT91_REG *) 	0xFFFFF868) // (PIOD) Pull-up Status Register
#define AT91C_PIOD_ABSR (AT91_CAST(AT91_REG *) 	0xFFFFF878) // (PIOD) AB Select Status Register
#define AT91C_PIOD_IFSR (AT91_CAST(AT91_REG *) 	0xFFFFF828) // (PIOD) Input Filter Status Register
#define AT91C_PIOD_OER  (AT91_CAST(AT91_REG *) 	0xFFFFF810) // (PIOD) Output Enable Register
#define AT91C_PIOD_IMR  (AT91_CAST(AT91_REG *) 	0xFFFFF848) // (PIOD) Interrupt Mask Register
#define AT91C_PIOD_ASR  (AT91_CAST(AT91_REG *) 	0xFFFFF870) // (PIOD) Select A Register
#define AT91C_PIOD_MDDR (AT91_CAST(AT91_REG *) 	0xFFFFF854) // (PIOD) Multi-driver Disable Register
#define AT91C_PIOD_OWSR (AT91_CAST(AT91_REG *) 	0xFFFFF8A8) // (PIOD) Output Write Status Register
#define AT91C_PIOD_PER  (AT91_CAST(AT91_REG *) 	0xFFFFF800) // (PIOD) PIO Enable Register
#define AT91C_PIOD_IDR  (AT91_CAST(AT91_REG *) 	0xFFFFF844) // (PIOD) Interrupt Disable Register
#define AT91C_PIOD_MDER (AT91_CAST(AT91_REG *) 	0xFFFFF850) // (PIOD) Multi-driver Enable Register
#define AT91C_PIOD_PDSR (AT91_CAST(AT91_REG *) 	0xFFFFF83C) // (PIOD) Pin Data Status Register
#define AT91C_PIOD_MDSR (AT91_CAST(AT91_REG *) 	0xFFFFF858) // (PIOD) Multi-driver Status Register
#define AT91C_PIOD_OWER (AT91_CAST(AT91_REG *) 	0xFFFFF8A0) // (PIOD) Output Write Enable Register
#define AT91C_PIOD_BSR  (AT91_CAST(AT91_REG *) 	0xFFFFF874) // (PIOD) Select B Register
#define AT91C_PIOD_PPUDR (AT91_CAST(AT91_REG *) 	0xFFFFF860) // (PIOD) Pull-up Disable Register
#define AT91C_PIOD_IFDR (AT91_CAST(AT91_REG *) 	0xFFFFF824) // (PIOD) Input Filter Disable Register
#define AT91C_PIOD_IER  (AT91_CAST(AT91_REG *) 	0xFFFFF840) // (PIOD) Interrupt Enable Register
#define AT91C_PIOD_OSR  (AT91_CAST(AT91_REG *) 	0xFFFFF818) // (PIOD) Output Status Register
#define AT91C_PIOD_ODSR (AT91_CAST(AT91_REG *) 	0xFFFFF838) // (PIOD) Output Data Status Register
#define AT91C_PIOD_ISR  (AT91_CAST(AT91_REG *) 	0xFFFFF84C) // (PIOD) Interrupt Status Register
#define AT91C_PIOD_IFER (AT91_CAST(AT91_REG *) 	0xFFFFF820) // (PIOD) Input Filter Enable Register
// ========== Register definition for CKGR peripheral ========== 
#define AT91C_CKGR_MOR  (AT91_CAST(AT91_REG *) 	0xFFFFFC20) // (CKGR) Main Oscillator Register
#define AT91C_CKGR_PLLBR (AT91_CAST(AT91_REG *) 	0xFFFFFC2C) // (CKGR) PLL B Register
#define AT91C_CKGR_MCFR (AT91_CAST(AT91_REG *) 	0xFFFFFC24) // (CKGR) Main Clock  Frequency Register
#define AT91C_CKGR_PLLAR (AT91_CAST(AT91_REG *) 	0xFFFFFC28) // (CKGR) PLL A Register
#define AT91C_CKGR_UCKR (AT91_CAST(AT91_REG *) 	0xFFFFFC1C) // (CKGR) UTMI Clock Configuration Register
// ========== Register definition for PMC peripheral ========== 
#define AT91C_PMC_PCER  (AT91_CAST(AT91_REG *) 	0xFFFFFC10) // (PMC) Peripheral Clock Enable Register
#define AT91C_PMC_PCKR  (AT91_CAST(AT91_REG *) 	0xFFFFFC40) // (PMC) Programmable Clock Register
#define AT91C_PMC_MCKR  (AT91_CAST(AT91_REG *) 	0xFFFFFC30) // (PMC) Master Clock Register
#define AT91C_PMC_PLLAR (AT91_CAST(AT91_REG *) 	0xFFFFFC28) // (PMC) PLL A Register
#define AT91C_PMC_PCDR  (AT91_CAST(AT91_REG *) 	0xFFFFFC14) // (PMC) Peripheral Clock Disable Register
#define AT91C_PMC_SCSR  (AT91_CAST(AT91_REG *) 	0xFFFFFC08) // (PMC) System Clock Status Register
#define AT91C_PMC_MCFR  (AT91_CAST(AT91_REG *) 	0xFFFFFC24) // (PMC) Main Clock  Frequency Register
#define AT91C_PMC_IMR   (AT91_CAST(AT91_REG *) 	0xFFFFFC6C) // (PMC) Interrupt Mask Register
#define AT91C_PMC_IER   (AT91_CAST(AT91_REG *) 	0xFFFFFC60) // (PMC) Interrupt Enable Register
#define AT91C_PMC_UCKR  (AT91_CAST(AT91_REG *) 	0xFFFFFC1C) // (PMC) UTMI Clock Configuration Register
#define AT91C_PMC_MOR   (AT91_CAST(AT91_REG *) 	0xFFFFFC20) // (PMC) Main Oscillator Register
#define AT91C_PMC_IDR   (AT91_CAST(AT91_REG *) 	0xFFFFFC64) // (PMC) Interrupt Disable Register
#define AT91C_PMC_PLLBR (AT91_CAST(AT91_REG *) 	0xFFFFFC2C) // (PMC) PLL B Register
#define AT91C_PMC_SCDR  (AT91_CAST(AT91_REG *) 	0xFFFFFC04) // (PMC) System Clock Disable Register
#define AT91C_PMC_PCSR  (AT91_CAST(AT91_REG *) 	0xFFFFFC18) // (PMC) Peripheral Clock Status Register
#define AT91C_PMC_SCER  (AT91_CAST(AT91_REG *) 	0xFFFFFC00) // (PMC) System Clock Enable Register
#define AT91C_PMC_SR    (AT91_CAST(AT91_REG *) 	0xFFFFFC68) // (PMC) Status Register
// ========== Register definition for RSTC peripheral ========== 
#define AT91C_RSTC_RCR  (AT91_CAST(AT91_REG *) 	0xFFFFFD00) // (RSTC) Reset Control Register
#define AT91C_RSTC_VER  (AT91_CAST(AT91_REG *) 	0xFFFFFDFC) // (RSTC) Version Register
#define AT91C_RSTC_RMR  (AT91_CAST(AT91_REG *) 	0xFFFFFD08) // (RSTC) Reset Mode Register
#define AT91C_RSTC_RSR  (AT91_CAST(AT91_REG *) 	0xFFFFFD04) // (RSTC) Reset Status Register
// ========== Register definition for SHDWC peripheral ========== 
#define AT91C_SHDWC_SHSR (AT91_CAST(AT91_REG *) 	0xFFFFFD18) // (SHDWC) Shut Down Status Register
#define AT91C_SHDWC_SHMR (AT91_CAST(AT91_REG *) 	0xFFFFFD14) // (SHDWC) Shut Down Mode Register
#define AT91C_SHDWC_SHCR (AT91_CAST(AT91_REG *) 	0xFFFFFD10) // (SHDWC) Shut Down Control Register
// ========== Register definition for RTTC peripheral ========== 
#define AT91C_RTTC_RTSR (AT91_CAST(AT91_REG *) 	0xFFFFFD2C) // (RTTC) Real-time Status Register
#define AT91C_RTTC_RTMR (AT91_CAST(AT91_REG *) 	0xFFFFFD20) // (RTTC) Real-time Mode Register
#define AT91C_RTTC_RTVR (AT91_CAST(AT91_REG *) 	0xFFFFFD28) // (RTTC) Real-time Value Register
#define AT91C_RTTC_RTAR (AT91_CAST(AT91_REG *) 	0xFFFFFD24) // (RTTC) Real-time Alarm Register
// ========== Register definition for PITC peripheral ========== 
#define AT91C_PITC_PIVR (AT91_CAST(AT91_REG *) 	0xFFFFFD38) // (PITC) Period Interval Value Register
#define AT91C_PITC_PISR (AT91_CAST(AT91_REG *) 	0xFFFFFD34) // (PITC) Period Interval Status Register
#define AT91C_PITC_PIIR (AT91_CAST(AT91_REG *) 	0xFFFFFD3C) // (PITC) Period Interval Image Register
#define AT91C_PITC_PIMR (AT91_CAST(AT91_REG *) 	0xFFFFFD30) // (PITC) Period Interval Mode Register
// ========== Register definition for WDTC peripheral ========== 
#define AT91C_WDTC_WDCR (AT91_CAST(AT91_REG *) 	0xFFFFFD40) // (WDTC) Watchdog Control Register
#define AT91C_WDTC_WDSR (AT91_CAST(AT91_REG *) 	0xFFFFFD48) // (WDTC) Watchdog Status Register
#define AT91C_WDTC_WDMR (AT91_CAST(AT91_REG *) 	0xFFFFFD44) // (WDTC) Watchdog Mode Register
// ========== Register definition for UDP peripheral ========== 
#define AT91C_UDP_FDR   (AT91_CAST(AT91_REG *) 	0xFFF78050) // (UDP) Endpoint FIFO Data Register
#define AT91C_UDP_IER   (AT91_CAST(AT91_REG *) 	0xFFF78010) // (UDP) Interrupt Enable Register
#define AT91C_UDP_CSR   (AT91_CAST(AT91_REG *) 	0xFFF78030) // (UDP) Endpoint Control and Status Register
#define AT91C_UDP_RSTEP (AT91_CAST(AT91_REG *) 	0xFFF78028) // (UDP) Reset Endpoint Register
#define AT91C_UDP_GLBSTATE (AT91_CAST(AT91_REG *) 	0xFFF78004) // (UDP) Global State Register
#define AT91C_UDP_TXVC  (AT91_CAST(AT91_REG *) 	0xFFF78074) // (UDP) Transceiver Control Register
#define AT91C_UDP_IDR   (AT91_CAST(AT91_REG *) 	0xFFF78014) // (UDP) Interrupt Disable Register
#define AT91C_UDP_ISR   (AT91_CAST(AT91_REG *) 	0xFFF7801C) // (UDP) Interrupt Status Register
#define AT91C_UDP_IMR   (AT91_CAST(AT91_REG *) 	0xFFF78018) // (UDP) Interrupt Mask Register
#define AT91C_UDP_FADDR (AT91_CAST(AT91_REG *) 	0xFFF78008) // (UDP) Function Address Register
#define AT91C_UDP_NUM   (AT91_CAST(AT91_REG *) 	0xFFF78000) // (UDP) Frame Number Register
#define AT91C_UDP_ICR   (AT91_CAST(AT91_REG *) 	0xFFF78020) // (UDP) Interrupt Clear Register
// ========== Register definition for UDPHS_EPTFIFO peripheral ========== 
#define AT91C_UDPHS_EPTFIFO_READEPT3 (AT91_CAST(AT91_REG *) 	0x00630000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 3
#define AT91C_UDPHS_EPTFIFO_READEPT5 (AT91_CAST(AT91_REG *) 	0x00650000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 5
#define AT91C_UDPHS_EPTFIFO_READEPT1 (AT91_CAST(AT91_REG *) 	0x00610000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 1
#define AT91C_UDPHS_EPTFIFO_READEPT0 (AT91_CAST(AT91_REG *) 	0x00600000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 0
#define AT91C_UDPHS_EPTFIFO_READEPT6 (AT91_CAST(AT91_REG *) 	0x00660000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 6
#define AT91C_UDPHS_EPTFIFO_READEPT2 (AT91_CAST(AT91_REG *) 	0x00620000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 2
#define AT91C_UDPHS_EPTFIFO_READEPT4 (AT91_CAST(AT91_REG *) 	0x00640000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 4
#define AT91C_UDPHS_EPTFIFO_READEPT7 (AT91_CAST(AT91_REG *) 	0x00670000) // (UDPHS_EPTFIFO) FIFO Endpoint Data Register 7
// ========== Register definition for UDPHS_EPT_0 peripheral ========== 
#define AT91C_UDPHS_EPT_0_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF7811C) // (UDPHS_EPT_0) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_0_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF7810C) // (UDPHS_EPT_0) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_0_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF78108) // (UDPHS_EPT_0) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_0_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF78100) // (UDPHS_EPT_0) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_0_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF78118) // (UDPHS_EPT_0) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_0_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF78114) // (UDPHS_EPT_0) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_0_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF78104) // (UDPHS_EPT_0) UDPHS Endpoint Control Enable Register
// ========== Register definition for UDPHS_EPT_1 peripheral ========== 
#define AT91C_UDPHS_EPT_1_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF78124) // (UDPHS_EPT_1) UDPHS Endpoint Control Enable Register
#define AT91C_UDPHS_EPT_1_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF78120) // (UDPHS_EPT_1) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_1_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF7812C) // (UDPHS_EPT_1) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_1_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF7813C) // (UDPHS_EPT_1) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_1_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF78138) // (UDPHS_EPT_1) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_1_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF78134) // (UDPHS_EPT_1) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_1_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF78128) // (UDPHS_EPT_1) UDPHS Endpoint Control Disable Register
// ========== Register definition for UDPHS_EPT_2 peripheral ========== 
#define AT91C_UDPHS_EPT_2_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF78158) // (UDPHS_EPT_2) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_2_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF78148) // (UDPHS_EPT_2) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_2_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF7815C) // (UDPHS_EPT_2) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_2_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF78154) // (UDPHS_EPT_2) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_2_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF7814C) // (UDPHS_EPT_2) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_2_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF78140) // (UDPHS_EPT_2) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_2_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF78144) // (UDPHS_EPT_2) UDPHS Endpoint Control Enable Register
// ========== Register definition for UDPHS_EPT_3 peripheral ========== 
#define AT91C_UDPHS_EPT_3_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF7816C) // (UDPHS_EPT_3) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_3_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF78178) // (UDPHS_EPT_3) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_3_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF78168) // (UDPHS_EPT_3) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_3_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF7817C) // (UDPHS_EPT_3) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_3_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF78174) // (UDPHS_EPT_3) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_3_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF78164) // (UDPHS_EPT_3) UDPHS Endpoint Control Enable Register
#define AT91C_UDPHS_EPT_3_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF78160) // (UDPHS_EPT_3) UDPHS Endpoint Config Register
// ========== Register definition for UDPHS_EPT_4 peripheral ========== 
#define AT91C_UDPHS_EPT_4_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF78198) // (UDPHS_EPT_4) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_4_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF7818C) // (UDPHS_EPT_4) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_4_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF78184) // (UDPHS_EPT_4) UDPHS Endpoint Control Enable Register
#define AT91C_UDPHS_EPT_4_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF7819C) // (UDPHS_EPT_4) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_4_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF78194) // (UDPHS_EPT_4) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_4_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF78180) // (UDPHS_EPT_4) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_4_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF78188) // (UDPHS_EPT_4) UDPHS Endpoint Control Disable Register
// ========== Register definition for UDPHS_EPT_5 peripheral ========== 
#define AT91C_UDPHS_EPT_5_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF781BC) // (UDPHS_EPT_5) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_5_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF781B8) // (UDPHS_EPT_5) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_5_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF781A4) // (UDPHS_EPT_5) UDPHS Endpoint Control Enable Register
#define AT91C_UDPHS_EPT_5_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF781B4) // (UDPHS_EPT_5) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_5_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF781A8) // (UDPHS_EPT_5) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_5_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF781A0) // (UDPHS_EPT_5) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_5_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF781AC) // (UDPHS_EPT_5) UDPHS Endpoint Control Register
// ========== Register definition for UDPHS_EPT_6 peripheral ========== 
#define AT91C_UDPHS_EPT_6_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF781D8) // (UDPHS_EPT_6) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_6_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF781C4) // (UDPHS_EPT_6) UDPHS Endpoint Control Enable Register
#define AT91C_UDPHS_EPT_6_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF781CC) // (UDPHS_EPT_6) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_6_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF781D4) // (UDPHS_EPT_6) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_6_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF781C8) // (UDPHS_EPT_6) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_6_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF781DC) // (UDPHS_EPT_6) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_6_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF781C0) // (UDPHS_EPT_6) UDPHS Endpoint Config Register
// ========== Register definition for UDPHS_EPT_7 peripheral ========== 
#define AT91C_UDPHS_EPT_7_EPTSETSTA (AT91_CAST(AT91_REG *) 	0xFFF781F4) // (UDPHS_EPT_7) UDPHS Endpoint Set Status Register
#define AT91C_UDPHS_EPT_7_EPTCFG (AT91_CAST(AT91_REG *) 	0xFFF781E0) // (UDPHS_EPT_7) UDPHS Endpoint Config Register
#define AT91C_UDPHS_EPT_7_EPTSTA (AT91_CAST(AT91_REG *) 	0xFFF781FC) // (UDPHS_EPT_7) UDPHS Endpoint Status Register
#define AT91C_UDPHS_EPT_7_EPTCLRSTA (AT91_CAST(AT91_REG *) 	0xFFF781F8) // (UDPHS_EPT_7) UDPHS Endpoint Clear Status Register
#define AT91C_UDPHS_EPT_7_EPTCTL (AT91_CAST(AT91_REG *) 	0xFFF781EC) // (UDPHS_EPT_7) UDPHS Endpoint Control Register
#define AT91C_UDPHS_EPT_7_EPTCTLDIS (AT91_CAST(AT91_REG *) 	0xFFF781E8) // (UDPHS_EPT_7) UDPHS Endpoint Control Disable Register
#define AT91C_UDPHS_EPT_7_EPTCTLENB (AT91_CAST(AT91_REG *) 	0xFFF781E4) // (UDPHS_EPT_7) UDPHS Endpoint Control Enable Register
// ========== Register definition for UDPHS_DMA_1 peripheral ========== 
#define AT91C_UDPHS_DMA_1_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7831C) // (UDPHS_DMA_1) UDPHS DMA Channel Status Register
#define AT91C_UDPHS_DMA_1_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78310) // (UDPHS_DMA_1) UDPHS DMA Channel Next Descriptor Address
#define AT91C_UDPHS_DMA_1_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78318) // (UDPHS_DMA_1) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_1_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78314) // (UDPHS_DMA_1) UDPHS DMA Channel Address Register
// ========== Register definition for UDPHS_DMA_2 peripheral ========== 
#define AT91C_UDPHS_DMA_2_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78328) // (UDPHS_DMA_2) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_2_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7832C) // (UDPHS_DMA_2) UDPHS DMA Channel Status Register
#define AT91C_UDPHS_DMA_2_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78324) // (UDPHS_DMA_2) UDPHS DMA Channel Address Register
#define AT91C_UDPHS_DMA_2_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78320) // (UDPHS_DMA_2) UDPHS DMA Channel Next Descriptor Address
// ========== Register definition for UDPHS_DMA_3 peripheral ========== 
#define AT91C_UDPHS_DMA_3_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78334) // (UDPHS_DMA_3) UDPHS DMA Channel Address Register
#define AT91C_UDPHS_DMA_3_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78330) // (UDPHS_DMA_3) UDPHS DMA Channel Next Descriptor Address
#define AT91C_UDPHS_DMA_3_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78338) // (UDPHS_DMA_3) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_3_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7833C) // (UDPHS_DMA_3) UDPHS DMA Channel Status Register
// ========== Register definition for UDPHS_DMA_4 peripheral ========== 
#define AT91C_UDPHS_DMA_4_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78340) // (UDPHS_DMA_4) UDPHS DMA Channel Next Descriptor Address
#define AT91C_UDPHS_DMA_4_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78344) // (UDPHS_DMA_4) UDPHS DMA Channel Address Register
#define AT91C_UDPHS_DMA_4_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78348) // (UDPHS_DMA_4) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_4_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7834C) // (UDPHS_DMA_4) UDPHS DMA Channel Status Register
// ========== Register definition for UDPHS_DMA_5 peripheral ========== 
#define AT91C_UDPHS_DMA_5_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7835C) // (UDPHS_DMA_5) UDPHS DMA Channel Status Register
#define AT91C_UDPHS_DMA_5_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78358) // (UDPHS_DMA_5) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_5_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78350) // (UDPHS_DMA_5) UDPHS DMA Channel Next Descriptor Address
#define AT91C_UDPHS_DMA_5_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78354) // (UDPHS_DMA_5) UDPHS DMA Channel Address Register
// ========== Register definition for UDPHS_DMA_6 peripheral ========== 
#define AT91C_UDPHS_DMA_6_DMANXTDSC (AT91_CAST(AT91_REG *) 	0xFFF78360) // (UDPHS_DMA_6) UDPHS DMA Channel Next Descriptor Address
#define AT91C_UDPHS_DMA_6_DMACONTROL (AT91_CAST(AT91_REG *) 	0xFFF78368) // (UDPHS_DMA_6) UDPHS DMA Channel Control Register
#define AT91C_UDPHS_DMA_6_DMASTATUS (AT91_CAST(AT91_REG *) 	0xFFF7836C) // (UDPHS_DMA_6) UDPHS DMA Channel Status Register
#define AT91C_UDPHS_DMA_6_DMAADDRESS (AT91_CAST(AT91_REG *) 	0xFFF78364) // (UDPHS_DMA_6) UDPHS DMA Channel Address Register
// ========== Register definition for UDPHS peripheral ========== 
#define AT91C_UDPHS_IEN (AT91_CAST(AT91_REG *) 	0xFFF78010) // (UDPHS) UDPHS Interrupt Enable Register
#define AT91C_UDPHS_TSTSOFCNT (AT91_CAST(AT91_REG *) 	0xFFF780D0) // (UDPHS) UDPHS Test SOF Counter Register
#define AT91C_UDPHS_IPFEATURES (AT91_CAST(AT91_REG *) 	0xFFF780F8) // (UDPHS) UDPHS Features Register
#define AT91C_UDPHS_TST (AT91_CAST(AT91_REG *) 	0xFFF780E0) // (UDPHS) UDPHS Test Register
#define AT91C_UDPHS_FNUM (AT91_CAST(AT91_REG *) 	0xFFF78004) // (UDPHS) UDPHS Frame Number Register
#define AT91C_UDPHS_TSTCNTB (AT91_CAST(AT91_REG *) 	0xFFF780D8) // (UDPHS) UDPHS Test B Counter Register
#define AT91C_UDPHS_RIPPADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF780EC) // (UDPHS) UDPHS PADDRSIZE Register
#define AT91C_UDPHS_INTSTA (AT91_CAST(AT91_REG *) 	0xFFF78014) // (UDPHS) UDPHS Interrupt Status Register
#define AT91C_UDPHS_EPTRST (AT91_CAST(AT91_REG *) 	0xFFF7801C) // (UDPHS) UDPHS Endpoints Reset Register
#define AT91C_UDPHS_TSTCNTA (AT91_CAST(AT91_REG *) 	0xFFF780D4) // (UDPHS) UDPHS Test A Counter Register
#define AT91C_UDPHS_RIPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF780F4) // (UDPHS) UDPHS Name2 Register
#define AT91C_UDPHS_RIPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF780F0) // (UDPHS) UDPHS Name1 Register
#define AT91C_UDPHS_TSTMODREG (AT91_CAST(AT91_REG *) 	0xFFF780DC) // (UDPHS) UDPHS Test Mode Register
#define AT91C_UDPHS_CLRINT (AT91_CAST(AT91_REG *) 	0xFFF78018) // (UDPHS) UDPHS Clear Interrupt Register
#define AT91C_UDPHS_IPVERSION (AT91_CAST(AT91_REG *) 	0xFFF780FC) // (UDPHS) UDPHS Version Register
#define AT91C_UDPHS_CTRL (AT91_CAST(AT91_REG *) 	0xFFF78000) // (UDPHS) UDPHS Control Register
// ========== Register definition for TC0 peripheral ========== 
#define AT91C_TC0_IER   (AT91_CAST(AT91_REG *) 	0xFFF7C024) // (TC0) Interrupt Enable Register
#define AT91C_TC0_IMR   (AT91_CAST(AT91_REG *) 	0xFFF7C02C) // (TC0) Interrupt Mask Register
#define AT91C_TC0_CCR   (AT91_CAST(AT91_REG *) 	0xFFF7C000) // (TC0) Channel Control Register
#define AT91C_TC0_RB    (AT91_CAST(AT91_REG *) 	0xFFF7C018) // (TC0) Register B
#define AT91C_TC0_CV    (AT91_CAST(AT91_REG *) 	0xFFF7C010) // (TC0) Counter Value
#define AT91C_TC0_SR    (AT91_CAST(AT91_REG *) 	0xFFF7C020) // (TC0) Status Register
#define AT91C_TC0_CMR   (AT91_CAST(AT91_REG *) 	0xFFF7C004) // (TC0) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC0_RA    (AT91_CAST(AT91_REG *) 	0xFFF7C014) // (TC0) Register A
#define AT91C_TC0_RC    (AT91_CAST(AT91_REG *) 	0xFFF7C01C) // (TC0) Register C
#define AT91C_TC0_IDR   (AT91_CAST(AT91_REG *) 	0xFFF7C028) // (TC0) Interrupt Disable Register
// ========== Register definition for TC1 peripheral ========== 
#define AT91C_TC1_IER   (AT91_CAST(AT91_REG *) 	0xFFF7C064) // (TC1) Interrupt Enable Register
#define AT91C_TC1_SR    (AT91_CAST(AT91_REG *) 	0xFFF7C060) // (TC1) Status Register
#define AT91C_TC1_RC    (AT91_CAST(AT91_REG *) 	0xFFF7C05C) // (TC1) Register C
#define AT91C_TC1_CV    (AT91_CAST(AT91_REG *) 	0xFFF7C050) // (TC1) Counter Value
#define AT91C_TC1_RA    (AT91_CAST(AT91_REG *) 	0xFFF7C054) // (TC1) Register A
#define AT91C_TC1_CMR   (AT91_CAST(AT91_REG *) 	0xFFF7C044) // (TC1) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC1_IDR   (AT91_CAST(AT91_REG *) 	0xFFF7C068) // (TC1) Interrupt Disable Register
#define AT91C_TC1_RB    (AT91_CAST(AT91_REG *) 	0xFFF7C058) // (TC1) Register B
#define AT91C_TC1_IMR   (AT91_CAST(AT91_REG *) 	0xFFF7C06C) // (TC1) Interrupt Mask Register
#define AT91C_TC1_CCR   (AT91_CAST(AT91_REG *) 	0xFFF7C040) // (TC1) Channel Control Register
// ========== Register definition for TC2 peripheral ========== 
#define AT91C_TC2_SR    (AT91_CAST(AT91_REG *) 	0xFFF7C0A0) // (TC2) Status Register
#define AT91C_TC2_IMR   (AT91_CAST(AT91_REG *) 	0xFFF7C0AC) // (TC2) Interrupt Mask Register
#define AT91C_TC2_IER   (AT91_CAST(AT91_REG *) 	0xFFF7C0A4) // (TC2) Interrupt Enable Register
#define AT91C_TC2_CV    (AT91_CAST(AT91_REG *) 	0xFFF7C090) // (TC2) Counter Value
#define AT91C_TC2_RB    (AT91_CAST(AT91_REG *) 	0xFFF7C098) // (TC2) Register B
#define AT91C_TC2_CCR   (AT91_CAST(AT91_REG *) 	0xFFF7C080) // (TC2) Channel Control Register
#define AT91C_TC2_CMR   (AT91_CAST(AT91_REG *) 	0xFFF7C084) // (TC2) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC2_RA    (AT91_CAST(AT91_REG *) 	0xFFF7C094) // (TC2) Register A
#define AT91C_TC2_IDR   (AT91_CAST(AT91_REG *) 	0xFFF7C0A8) // (TC2) Interrupt Disable Register
#define AT91C_TC2_RC    (AT91_CAST(AT91_REG *) 	0xFFF7C09C) // (TC2) Register C
// ========== Register definition for TCB0 peripheral ========== 
#define AT91C_TCB0_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF7C0F0) // (TCB0) TC IPNAME1 REGISTER 
#define AT91C_TCB0_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF7C0F4) // (TCB0) TC IPNAME2 REGISTER 
#define AT91C_TCB0_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF7C0F8) // (TCB0) TC FEATURES REGISTER 
#define AT91C_TCB0_BCR  (AT91_CAST(AT91_REG *) 	0xFFF7C0C0) // (TCB0) TC Block Control Register
#define AT91C_TCB0_VER  (AT91_CAST(AT91_REG *) 	0xFFF7C0FC) // (TCB0)  Version Register
#define AT91C_TCB0_BMR  (AT91_CAST(AT91_REG *) 	0xFFF7C0C4) // (TCB0) TC Block Mode Register
#define AT91C_TCB0_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF7C0EC) // (TCB0) TC ADDRSIZE REGISTER 
// ========== Register definition for TCB1 peripheral ========== 
#define AT91C_TCB1_VER  (AT91_CAST(AT91_REG *) 	0xFFF7C13C) // (TCB1)  Version Register
#define AT91C_TCB1_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF7C134) // (TCB1) TC IPNAME2 REGISTER 
#define AT91C_TCB1_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF7C12C) // (TCB1) TC ADDRSIZE REGISTER 
#define AT91C_TCB1_BMR  (AT91_CAST(AT91_REG *) 	0xFFF7C104) // (TCB1) TC Block Mode Register
#define AT91C_TCB1_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF7C138) // (TCB1) TC FEATURES REGISTER 
#define AT91C_TCB1_BCR  (AT91_CAST(AT91_REG *) 	0xFFF7C100) // (TCB1) TC Block Control Register
#define AT91C_TCB1_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF7C130) // (TCB1) TC IPNAME1 REGISTER 
// ========== Register definition for TCB2 peripheral ========== 
#define AT91C_TCB2_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF7C174) // (TCB2) TC IPNAME2 REGISTER 
#define AT91C_TCB2_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF7C178) // (TCB2) TC FEATURES REGISTER 
#define AT91C_TCB2_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF7C16C) // (TCB2) TC ADDRSIZE REGISTER 
#define AT91C_TCB2_VER  (AT91_CAST(AT91_REG *) 	0xFFF7C17C) // (TCB2)  Version Register
#define AT91C_TCB2_BCR  (AT91_CAST(AT91_REG *) 	0xFFF7C140) // (TCB2) TC Block Control Register
#define AT91C_TCB2_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF7C170) // (TCB2) TC IPNAME1 REGISTER 
#define AT91C_TCB2_BMR  (AT91_CAST(AT91_REG *) 	0xFFF7C144) // (TCB2) TC Block Mode Register
// ========== Register definition for PDC_MCI0 peripheral ========== 
#define AT91C_MCI0_TCR  (AT91_CAST(AT91_REG *) 	0xFFF8010C) // (PDC_MCI0) Transmit Counter Register
#define AT91C_MCI0_TNCR (AT91_CAST(AT91_REG *) 	0xFFF8011C) // (PDC_MCI0) Transmit Next Counter Register
#define AT91C_MCI0_RNPR (AT91_CAST(AT91_REG *) 	0xFFF80110) // (PDC_MCI0) Receive Next Pointer Register
#define AT91C_MCI0_TPR  (AT91_CAST(AT91_REG *) 	0xFFF80108) // (PDC_MCI0) Transmit Pointer Register
#define AT91C_MCI0_TNPR (AT91_CAST(AT91_REG *) 	0xFFF80118) // (PDC_MCI0) Transmit Next Pointer Register
#define AT91C_MCI0_PTSR (AT91_CAST(AT91_REG *) 	0xFFF80124) // (PDC_MCI0) PDC Transfer Status Register
#define AT91C_MCI0_RCR  (AT91_CAST(AT91_REG *) 	0xFFF80104) // (PDC_MCI0) Receive Counter Register
#define AT91C_MCI0_PTCR (AT91_CAST(AT91_REG *) 	0xFFF80120) // (PDC_MCI0) PDC Transfer Control Register
#define AT91C_MCI0_RPR  (AT91_CAST(AT91_REG *) 	0xFFF80100) // (PDC_MCI0) Receive Pointer Register
#define AT91C_MCI0_RNCR (AT91_CAST(AT91_REG *) 	0xFFF80114) // (PDC_MCI0) Receive Next Counter Register
// ========== Register definition for MCI0 peripheral ========== 
#define AT91C_MCI0_CMDR (AT91_CAST(AT91_REG *) 	0xFFF80014) // (MCI0) MCI Command Register
#define AT91C_MCI0_IMR  (AT91_CAST(AT91_REG *) 	0xFFF8004C) // (MCI0) MCI Interrupt Mask Register
#define AT91C_MCI0_MR   (AT91_CAST(AT91_REG *) 	0xFFF80004) // (MCI0) MCI Mode Register
#define AT91C_MCI0_CR   (AT91_CAST(AT91_REG *) 	0xFFF80000) // (MCI0) MCI Control Register
#define AT91C_MCI0_IER  (AT91_CAST(AT91_REG *) 	0xFFF80044) // (MCI0) MCI Interrupt Enable Register
#define AT91C_MCI0_RDR  (AT91_CAST(AT91_REG *) 	0xFFF80030) // (MCI0) MCI Receive Data Register
#define AT91C_MCI0_SR   (AT91_CAST(AT91_REG *) 	0xFFF80040) // (MCI0) MCI Status Register
#define AT91C_MCI0_DTOR (AT91_CAST(AT91_REG *) 	0xFFF80008) // (MCI0) MCI Data Timeout Register
#define AT91C_MCI0_SDCR (AT91_CAST(AT91_REG *) 	0xFFF8000C) // (MCI0) MCI SD Card Register
#define AT91C_MCI0_BLKR (AT91_CAST(AT91_REG *) 	0xFFF80018) // (MCI0) MCI Block Register
#define AT91C_MCI0_VR   (AT91_CAST(AT91_REG *) 	0xFFF800FC) // (MCI0) MCI Version Register
#define AT91C_MCI0_TDR  (AT91_CAST(AT91_REG *) 	0xFFF80034) // (MCI0) MCI Transmit Data Register
#define AT91C_MCI0_ARGR (AT91_CAST(AT91_REG *) 	0xFFF80010) // (MCI0) MCI Argument Register
#define AT91C_MCI0_RSPR (AT91_CAST(AT91_REG *) 	0xFFF80020) // (MCI0) MCI Response Register
#define AT91C_MCI0_IDR  (AT91_CAST(AT91_REG *) 	0xFFF80048) // (MCI0) MCI Interrupt Disable Register
// ========== Register definition for PDC_MCI1 peripheral ========== 
#define AT91C_MCI1_PTCR (AT91_CAST(AT91_REG *) 	0xFFF84120) // (PDC_MCI1) PDC Transfer Control Register
#define AT91C_MCI1_PTSR (AT91_CAST(AT91_REG *) 	0xFFF84124) // (PDC_MCI1) PDC Transfer Status Register
#define AT91C_MCI1_TPR  (AT91_CAST(AT91_REG *) 	0xFFF84108) // (PDC_MCI1) Transmit Pointer Register
#define AT91C_MCI1_RPR  (AT91_CAST(AT91_REG *) 	0xFFF84100) // (PDC_MCI1) Receive Pointer Register
#define AT91C_MCI1_TNCR (AT91_CAST(AT91_REG *) 	0xFFF8411C) // (PDC_MCI1) Transmit Next Counter Register
#define AT91C_MCI1_RCR  (AT91_CAST(AT91_REG *) 	0xFFF84104) // (PDC_MCI1) Receive Counter Register
#define AT91C_MCI1_TNPR (AT91_CAST(AT91_REG *) 	0xFFF84118) // (PDC_MCI1) Transmit Next Pointer Register
#define AT91C_MCI1_TCR  (AT91_CAST(AT91_REG *) 	0xFFF8410C) // (PDC_MCI1) Transmit Counter Register
#define AT91C_MCI1_RNPR (AT91_CAST(AT91_REG *) 	0xFFF84110) // (PDC_MCI1) Receive Next Pointer Register
#define AT91C_MCI1_RNCR (AT91_CAST(AT91_REG *) 	0xFFF84114) // (PDC_MCI1) Receive Next Counter Register
// ========== Register definition for MCI1 peripheral ========== 
#define AT91C_MCI1_SR   (AT91_CAST(AT91_REG *) 	0xFFF84040) // (MCI1) MCI Status Register
#define AT91C_MCI1_RDR  (AT91_CAST(AT91_REG *) 	0xFFF84030) // (MCI1) MCI Receive Data Register
#define AT91C_MCI1_RSPR (AT91_CAST(AT91_REG *) 	0xFFF84020) // (MCI1) MCI Response Register
#define AT91C_MCI1_CMDR (AT91_CAST(AT91_REG *) 	0xFFF84014) // (MCI1) MCI Command Register
#define AT91C_MCI1_IMR  (AT91_CAST(AT91_REG *) 	0xFFF8404C) // (MCI1) MCI Interrupt Mask Register
#define AT91C_MCI1_DTOR (AT91_CAST(AT91_REG *) 	0xFFF84008) // (MCI1) MCI Data Timeout Register
#define AT91C_MCI1_SDCR (AT91_CAST(AT91_REG *) 	0xFFF8400C) // (MCI1) MCI SD Card Register
#define AT91C_MCI1_IDR  (AT91_CAST(AT91_REG *) 	0xFFF84048) // (MCI1) MCI Interrupt Disable Register
#define AT91C_MCI1_ARGR (AT91_CAST(AT91_REG *) 	0xFFF84010) // (MCI1) MCI Argument Register
#define AT91C_MCI1_TDR  (AT91_CAST(AT91_REG *) 	0xFFF84034) // (MCI1) MCI Transmit Data Register
#define AT91C_MCI1_BLKR (AT91_CAST(AT91_REG *) 	0xFFF84018) // (MCI1) MCI Block Register
#define AT91C_MCI1_VR   (AT91_CAST(AT91_REG *) 	0xFFF840FC) // (MCI1) MCI Version Register
#define AT91C_MCI1_CR   (AT91_CAST(AT91_REG *) 	0xFFF84000) // (MCI1) MCI Control Register
#define AT91C_MCI1_MR   (AT91_CAST(AT91_REG *) 	0xFFF84004) // (MCI1) MCI Mode Register
#define AT91C_MCI1_IER  (AT91_CAST(AT91_REG *) 	0xFFF84044) // (MCI1) MCI Interrupt Enable Register
// ========== Register definition for PDC_TWI peripheral ========== 
#define AT91C_TWI_PTSR  (AT91_CAST(AT91_REG *) 	0xFFF88124) // (PDC_TWI) PDC Transfer Status Register
#define AT91C_TWI_RNCR  (AT91_CAST(AT91_REG *) 	0xFFF88114) // (PDC_TWI) Receive Next Counter Register
#define AT91C_TWI_RCR   (AT91_CAST(AT91_REG *) 	0xFFF88104) // (PDC_TWI) Receive Counter Register
#define AT91C_TWI_RNPR  (AT91_CAST(AT91_REG *) 	0xFFF88110) // (PDC_TWI) Receive Next Pointer Register
#define AT91C_TWI_TCR   (AT91_CAST(AT91_REG *) 	0xFFF8810C) // (PDC_TWI) Transmit Counter Register
#define AT91C_TWI_RPR   (AT91_CAST(AT91_REG *) 	0xFFF88100) // (PDC_TWI) Receive Pointer Register
#define AT91C_TWI_PTCR  (AT91_CAST(AT91_REG *) 	0xFFF88120) // (PDC_TWI) PDC Transfer Control Register
#define AT91C_TWI_TPR   (AT91_CAST(AT91_REG *) 	0xFFF88108) // (PDC_TWI) Transmit Pointer Register
#define AT91C_TWI_TNPR  (AT91_CAST(AT91_REG *) 	0xFFF88118) // (PDC_TWI) Transmit Next Pointer Register
#define AT91C_TWI_TNCR  (AT91_CAST(AT91_REG *) 	0xFFF8811C) // (PDC_TWI) Transmit Next Counter Register
// ========== Register definition for TWI peripheral ========== 
#define AT91C_TWI_VER   (AT91_CAST(AT91_REG *) 	0xFFF880FC) // (TWI) Version Register
#define AT91C_TWI_IMR   (AT91_CAST(AT91_REG *) 	0xFFF8802C) // (TWI) Interrupt Mask Register
#define AT91C_TWI_THR   (AT91_CAST(AT91_REG *) 	0xFFF88034) // (TWI) Transmit Holding Register
#define AT91C_TWI_IER   (AT91_CAST(AT91_REG *) 	0xFFF88024) // (TWI) Interrupt Enable Register
#define AT91C_TWI_MMR   (AT91_CAST(AT91_REG *) 	0xFFF88004) // (TWI) Master Mode Register
#define AT91C_TWI_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF880F0) // (TWI) TWI IPNAME1 REGISTER 
#define AT91C_TWI_CR    (AT91_CAST(AT91_REG *) 	0xFFF88000) // (TWI) Control Register
#define AT91C_TWI_SR    (AT91_CAST(AT91_REG *) 	0xFFF88020) // (TWI) Status Register
#define AT91C_TWI_CWGR  (AT91_CAST(AT91_REG *) 	0xFFF88010) // (TWI) Clock Waveform Generator Register
#define AT91C_TWI_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF880F4) // (TWI) TWI IPNAME2 REGISTER 
#define AT91C_TWI_IDR   (AT91_CAST(AT91_REG *) 	0xFFF88028) // (TWI) Interrupt Disable Register
#define AT91C_TWI_RHR   (AT91_CAST(AT91_REG *) 	0xFFF88030) // (TWI) Receive Holding Register
#define AT91C_TWI_IADR  (AT91_CAST(AT91_REG *) 	0xFFF8800C) // (TWI) Internal Address Register
#define AT91C_TWI_SMR   (AT91_CAST(AT91_REG *) 	0xFFF88008) // (TWI) Slave Mode Register
#define AT91C_TWI_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF880F8) // (TWI) TWI FEATURES REGISTER 
#define AT91C_TWI_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF880EC) // (TWI) TWI ADDRSIZE REGISTER 
// ========== Register definition for PDC_US0 peripheral ========== 
#define AT91C_US0_TNPR  (AT91_CAST(AT91_REG *) 	0xFFF8C118) // (PDC_US0) Transmit Next Pointer Register
#define AT91C_US0_PTSR  (AT91_CAST(AT91_REG *) 	0xFFF8C124) // (PDC_US0) PDC Transfer Status Register
#define AT91C_US0_PTCR  (AT91_CAST(AT91_REG *) 	0xFFF8C120) // (PDC_US0) PDC Transfer Control Register
#define AT91C_US0_RNCR  (AT91_CAST(AT91_REG *) 	0xFFF8C114) // (PDC_US0) Receive Next Counter Register
#define AT91C_US0_RCR   (AT91_CAST(AT91_REG *) 	0xFFF8C104) // (PDC_US0) Receive Counter Register
#define AT91C_US0_TNCR  (AT91_CAST(AT91_REG *) 	0xFFF8C11C) // (PDC_US0) Transmit Next Counter Register
#define AT91C_US0_TCR   (AT91_CAST(AT91_REG *) 	0xFFF8C10C) // (PDC_US0) Transmit Counter Register
#define AT91C_US0_RNPR  (AT91_CAST(AT91_REG *) 	0xFFF8C110) // (PDC_US0) Receive Next Pointer Register
#define AT91C_US0_RPR   (AT91_CAST(AT91_REG *) 	0xFFF8C100) // (PDC_US0) Receive Pointer Register
#define AT91C_US0_TPR   (AT91_CAST(AT91_REG *) 	0xFFF8C108) // (PDC_US0) Transmit Pointer Register
// ========== Register definition for US0 peripheral ========== 
#define AT91C_US0_MAN   (AT91_CAST(AT91_REG *) 	0xFFF8C050) // (US0) Manchester Encoder Decoder Register
#define AT91C_US0_MR    (AT91_CAST(AT91_REG *) 	0xFFF8C004) // (US0) Mode Register
#define AT91C_US0_RHR   (AT91_CAST(AT91_REG *) 	0xFFF8C018) // (US0) Receiver Holding Register
#define AT91C_US0_CSR   (AT91_CAST(AT91_REG *) 	0xFFF8C014) // (US0) Channel Status Register
#define AT91C_US0_CR    (AT91_CAST(AT91_REG *) 	0xFFF8C000) // (US0) Control Register
#define AT91C_US0_VER   (AT91_CAST(AT91_REG *) 	0xFFF8C0FC) // (US0) VERSION Register
#define AT91C_US0_IER   (AT91_CAST(AT91_REG *) 	0xFFF8C008) // (US0) Interrupt Enable Register
#define AT91C_US0_BRGR  (AT91_CAST(AT91_REG *) 	0xFFF8C020) // (US0) Baud Rate Generator Register
#define AT91C_US0_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF8C0F8) // (US0) US FEATURES REGISTER 
#define AT91C_US0_RTOR  (AT91_CAST(AT91_REG *) 	0xFFF8C024) // (US0) Receiver Time-out Register
#define AT91C_US0_THR   (AT91_CAST(AT91_REG *) 	0xFFF8C01C) // (US0) Transmitter Holding Register
#define AT91C_US0_NER   (AT91_CAST(AT91_REG *) 	0xFFF8C044) // (US0) Nb Errors Register
#define AT91C_US0_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF8C0F0) // (US0) US IPNAME1 REGISTER 
#define AT91C_US0_IMR   (AT91_CAST(AT91_REG *) 	0xFFF8C010) // (US0) Interrupt Mask Register
#define AT91C_US0_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF8C0EC) // (US0) US ADDRSIZE REGISTER 
#define AT91C_US0_IDR   (AT91_CAST(AT91_REG *) 	0xFFF8C00C) // (US0) Interrupt Disable Register
#define AT91C_US0_FIDI  (AT91_CAST(AT91_REG *) 	0xFFF8C040) // (US0) FI_DI_Ratio Register
#define AT91C_US0_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF8C0F4) // (US0) US IPNAME2 REGISTER 
#define AT91C_US0_TTGR  (AT91_CAST(AT91_REG *) 	0xFFF8C028) // (US0) Transmitter Time-guard Register
#define AT91C_US0_IF    (AT91_CAST(AT91_REG *) 	0xFFF8C04C) // (US0) IRDA_FILTER Register
// ========== Register definition for PDC_US1 peripheral ========== 
#define AT91C_US1_PTCR  (AT91_CAST(AT91_REG *) 	0xFFF90120) // (PDC_US1) PDC Transfer Control Register
#define AT91C_US1_TNCR  (AT91_CAST(AT91_REG *) 	0xFFF9011C) // (PDC_US1) Transmit Next Counter Register
#define AT91C_US1_RCR   (AT91_CAST(AT91_REG *) 	0xFFF90104) // (PDC_US1) Receive Counter Register
#define AT91C_US1_RPR   (AT91_CAST(AT91_REG *) 	0xFFF90100) // (PDC_US1) Receive Pointer Register
#define AT91C_US1_TPR   (AT91_CAST(AT91_REG *) 	0xFFF90108) // (PDC_US1) Transmit Pointer Register
#define AT91C_US1_TCR   (AT91_CAST(AT91_REG *) 	0xFFF9010C) // (PDC_US1) Transmit Counter Register
#define AT91C_US1_RNPR  (AT91_CAST(AT91_REG *) 	0xFFF90110) // (PDC_US1) Receive Next Pointer Register
#define AT91C_US1_TNPR  (AT91_CAST(AT91_REG *) 	0xFFF90118) // (PDC_US1) Transmit Next Pointer Register
#define AT91C_US1_RNCR  (AT91_CAST(AT91_REG *) 	0xFFF90114) // (PDC_US1) Receive Next Counter Register
#define AT91C_US1_PTSR  (AT91_CAST(AT91_REG *) 	0xFFF90124) // (PDC_US1) PDC Transfer Status Register
// ========== Register definition for US1 peripheral ========== 
#define AT91C_US1_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF900F8) // (US1) US FEATURES REGISTER 
#define AT91C_US1_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF900EC) // (US1) US ADDRSIZE REGISTER 
#define AT91C_US1_NER   (AT91_CAST(AT91_REG *) 	0xFFF90044) // (US1) Nb Errors Register
#define AT91C_US1_RHR   (AT91_CAST(AT91_REG *) 	0xFFF90018) // (US1) Receiver Holding Register
#define AT91C_US1_IF    (AT91_CAST(AT91_REG *) 	0xFFF9004C) // (US1) IRDA_FILTER Register
#define AT91C_US1_CR    (AT91_CAST(AT91_REG *) 	0xFFF90000) // (US1) Control Register
#define AT91C_US1_TTGR  (AT91_CAST(AT91_REG *) 	0xFFF90028) // (US1) Transmitter Time-guard Register
#define AT91C_US1_MR    (AT91_CAST(AT91_REG *) 	0xFFF90004) // (US1) Mode Register
#define AT91C_US1_FIDI  (AT91_CAST(AT91_REG *) 	0xFFF90040) // (US1) FI_DI_Ratio Register
#define AT91C_US1_RTOR  (AT91_CAST(AT91_REG *) 	0xFFF90024) // (US1) Receiver Time-out Register
#define AT91C_US1_IER   (AT91_CAST(AT91_REG *) 	0xFFF90008) // (US1) Interrupt Enable Register
#define AT91C_US1_MAN   (AT91_CAST(AT91_REG *) 	0xFFF90050) // (US1) Manchester Encoder Decoder Register
#define AT91C_US1_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF900F4) // (US1) US IPNAME2 REGISTER 
#define AT91C_US1_IMR   (AT91_CAST(AT91_REG *) 	0xFFF90010) // (US1) Interrupt Mask Register
#define AT91C_US1_IDR   (AT91_CAST(AT91_REG *) 	0xFFF9000C) // (US1) Interrupt Disable Register
#define AT91C_US1_CSR   (AT91_CAST(AT91_REG *) 	0xFFF90014) // (US1) Channel Status Register
#define AT91C_US1_BRGR  (AT91_CAST(AT91_REG *) 	0xFFF90020) // (US1) Baud Rate Generator Register
#define AT91C_US1_THR   (AT91_CAST(AT91_REG *) 	0xFFF9001C) // (US1) Transmitter Holding Register
#define AT91C_US1_VER   (AT91_CAST(AT91_REG *) 	0xFFF900FC) // (US1) VERSION Register
#define AT91C_US1_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF900F0) // (US1) US IPNAME1 REGISTER 
// ========== Register definition for PDC_US2 peripheral ========== 
#define AT91C_US2_RNCR  (AT91_CAST(AT91_REG *) 	0xFFF94114) // (PDC_US2) Receive Next Counter Register
#define AT91C_US2_PTCR  (AT91_CAST(AT91_REG *) 	0xFFF94120) // (PDC_US2) PDC Transfer Control Register
#define AT91C_US2_TNPR  (AT91_CAST(AT91_REG *) 	0xFFF94118) // (PDC_US2) Transmit Next Pointer Register
#define AT91C_US2_TNCR  (AT91_CAST(AT91_REG *) 	0xFFF9411C) // (PDC_US2) Transmit Next Counter Register
#define AT91C_US2_TPR   (AT91_CAST(AT91_REG *) 	0xFFF94108) // (PDC_US2) Transmit Pointer Register
#define AT91C_US2_RCR   (AT91_CAST(AT91_REG *) 	0xFFF94104) // (PDC_US2) Receive Counter Register
#define AT91C_US2_PTSR  (AT91_CAST(AT91_REG *) 	0xFFF94124) // (PDC_US2) PDC Transfer Status Register
#define AT91C_US2_TCR   (AT91_CAST(AT91_REG *) 	0xFFF9410C) // (PDC_US2) Transmit Counter Register
#define AT91C_US2_RPR   (AT91_CAST(AT91_REG *) 	0xFFF94100) // (PDC_US2) Receive Pointer Register
#define AT91C_US2_RNPR  (AT91_CAST(AT91_REG *) 	0xFFF94110) // (PDC_US2) Receive Next Pointer Register
// ========== Register definition for US2 peripheral ========== 
#define AT91C_US2_TTGR  (AT91_CAST(AT91_REG *) 	0xFFF94028) // (US2) Transmitter Time-guard Register
#define AT91C_US2_IER   (AT91_CAST(AT91_REG *) 	0xFFF94008) // (US2) Interrupt Enable Register
#define AT91C_US2_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF940EC) // (US2) US ADDRSIZE REGISTER 
#define AT91C_US2_NER   (AT91_CAST(AT91_REG *) 	0xFFF94044) // (US2) Nb Errors Register
#define AT91C_US2_CR    (AT91_CAST(AT91_REG *) 	0xFFF94000) // (US2) Control Register
#define AT91C_US2_IDR   (AT91_CAST(AT91_REG *) 	0xFFF9400C) // (US2) Interrupt Disable Register
#define AT91C_US2_VER   (AT91_CAST(AT91_REG *) 	0xFFF940FC) // (US2) VERSION Register
#define AT91C_US2_THR   (AT91_CAST(AT91_REG *) 	0xFFF9401C) // (US2) Transmitter Holding Register
#define AT91C_US2_BRGR  (AT91_CAST(AT91_REG *) 	0xFFF94020) // (US2) Baud Rate Generator Register
#define AT91C_US2_CSR   (AT91_CAST(AT91_REG *) 	0xFFF94014) // (US2) Channel Status Register
#define AT91C_US2_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF940F4) // (US2) US IPNAME2 REGISTER 
#define AT91C_US2_IMR   (AT91_CAST(AT91_REG *) 	0xFFF94010) // (US2) Interrupt Mask Register
#define AT91C_US2_RHR   (AT91_CAST(AT91_REG *) 	0xFFF94018) // (US2) Receiver Holding Register
#define AT91C_US2_MR    (AT91_CAST(AT91_REG *) 	0xFFF94004) // (US2) Mode Register
#define AT91C_US2_FIDI  (AT91_CAST(AT91_REG *) 	0xFFF94040) // (US2) FI_DI_Ratio Register
#define AT91C_US2_MAN   (AT91_CAST(AT91_REG *) 	0xFFF94050) // (US2) Manchester Encoder Decoder Register
#define AT91C_US2_IF    (AT91_CAST(AT91_REG *) 	0xFFF9404C) // (US2) IRDA_FILTER Register
#define AT91C_US2_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF940F8) // (US2) US FEATURES REGISTER 
#define AT91C_US2_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF940F0) // (US2) US IPNAME1 REGISTER 
#define AT91C_US2_RTOR  (AT91_CAST(AT91_REG *) 	0xFFF94024) // (US2) Receiver Time-out Register
// ========== Register definition for PDC_SSC0 peripheral ========== 
#define AT91C_SSC0_PTSR (AT91_CAST(AT91_REG *) 	0xFFF98124) // (PDC_SSC0) PDC Transfer Status Register
#define AT91C_SSC0_TCR  (AT91_CAST(AT91_REG *) 	0xFFF9810C) // (PDC_SSC0) Transmit Counter Register
#define AT91C_SSC0_RNPR (AT91_CAST(AT91_REG *) 	0xFFF98110) // (PDC_SSC0) Receive Next Pointer Register
#define AT91C_SSC0_RNCR (AT91_CAST(AT91_REG *) 	0xFFF98114) // (PDC_SSC0) Receive Next Counter Register
#define AT91C_SSC0_TNPR (AT91_CAST(AT91_REG *) 	0xFFF98118) // (PDC_SSC0) Transmit Next Pointer Register
#define AT91C_SSC0_RPR  (AT91_CAST(AT91_REG *) 	0xFFF98100) // (PDC_SSC0) Receive Pointer Register
#define AT91C_SSC0_TPR  (AT91_CAST(AT91_REG *) 	0xFFF98108) // (PDC_SSC0) Transmit Pointer Register
#define AT91C_SSC0_RCR  (AT91_CAST(AT91_REG *) 	0xFFF98104) // (PDC_SSC0) Receive Counter Register
#define AT91C_SSC0_TNCR (AT91_CAST(AT91_REG *) 	0xFFF9811C) // (PDC_SSC0) Transmit Next Counter Register
#define AT91C_SSC0_PTCR (AT91_CAST(AT91_REG *) 	0xFFF98120) // (PDC_SSC0) PDC Transfer Control Register
// ========== Register definition for SSC0 peripheral ========== 
#define AT91C_SSC0_VER  (AT91_CAST(AT91_REG *) 	0xFFF980FC) // (SSC0) Version Register
#define AT91C_SSC0_RHR  (AT91_CAST(AT91_REG *) 	0xFFF98020) // (SSC0) Receive Holding Register
#define AT91C_SSC0_THR  (AT91_CAST(AT91_REG *) 	0xFFF98024) // (SSC0) Transmit Holding Register
#define AT91C_SSC0_IDR  (AT91_CAST(AT91_REG *) 	0xFFF98048) // (SSC0) Interrupt Disable Register
#define AT91C_SSC0_IER  (AT91_CAST(AT91_REG *) 	0xFFF98044) // (SSC0) Interrupt Enable Register
#define AT91C_SSC0_TSHR (AT91_CAST(AT91_REG *) 	0xFFF98034) // (SSC0) Transmit Sync Holding Register
#define AT91C_SSC0_CR   (AT91_CAST(AT91_REG *) 	0xFFF98000) // (SSC0) Control Register
#define AT91C_SSC0_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF980EC) // (SSC0) SSC ADDRSIZE REGISTER 
#define AT91C_SSC0_RFMR (AT91_CAST(AT91_REG *) 	0xFFF98014) // (SSC0) Receive Frame Mode Register
#define AT91C_SSC0_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF980F4) // (SSC0) SSC IPNAME2 REGISTER 
#define AT91C_SSC0_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF980F8) // (SSC0) SSC FEATURES REGISTER 
#define AT91C_SSC0_CMR  (AT91_CAST(AT91_REG *) 	0xFFF98004) // (SSC0) Clock Mode Register
#define AT91C_SSC0_IMR  (AT91_CAST(AT91_REG *) 	0xFFF9804C) // (SSC0) Interrupt Mask Register
#define AT91C_SSC0_TFMR (AT91_CAST(AT91_REG *) 	0xFFF9801C) // (SSC0) Transmit Frame Mode Register
#define AT91C_SSC0_RCMR (AT91_CAST(AT91_REG *) 	0xFFF98010) // (SSC0) Receive Clock ModeRegister
#define AT91C_SSC0_SR   (AT91_CAST(AT91_REG *) 	0xFFF98040) // (SSC0) Status Register
#define AT91C_SSC0_RSHR (AT91_CAST(AT91_REG *) 	0xFFF98030) // (SSC0) Receive Sync Holding Register
#define AT91C_SSC0_TCMR (AT91_CAST(AT91_REG *) 	0xFFF98018) // (SSC0) Transmit Clock Mode Register
#define AT91C_SSC0_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF980F0) // (SSC0) SSC IPNAME1 REGISTER 
// ========== Register definition for PDC_SSC1 peripheral ========== 
#define AT91C_SSC1_TNPR (AT91_CAST(AT91_REG *) 	0xFFF9C118) // (PDC_SSC1) Transmit Next Pointer Register
#define AT91C_SSC1_PTSR (AT91_CAST(AT91_REG *) 	0xFFF9C124) // (PDC_SSC1) PDC Transfer Status Register
#define AT91C_SSC1_TNCR (AT91_CAST(AT91_REG *) 	0xFFF9C11C) // (PDC_SSC1) Transmit Next Counter Register
#define AT91C_SSC1_RNCR (AT91_CAST(AT91_REG *) 	0xFFF9C114) // (PDC_SSC1) Receive Next Counter Register
#define AT91C_SSC1_TPR  (AT91_CAST(AT91_REG *) 	0xFFF9C108) // (PDC_SSC1) Transmit Pointer Register
#define AT91C_SSC1_RCR  (AT91_CAST(AT91_REG *) 	0xFFF9C104) // (PDC_SSC1) Receive Counter Register
#define AT91C_SSC1_PTCR (AT91_CAST(AT91_REG *) 	0xFFF9C120) // (PDC_SSC1) PDC Transfer Control Register
#define AT91C_SSC1_RNPR (AT91_CAST(AT91_REG *) 	0xFFF9C110) // (PDC_SSC1) Receive Next Pointer Register
#define AT91C_SSC1_TCR  (AT91_CAST(AT91_REG *) 	0xFFF9C10C) // (PDC_SSC1) Transmit Counter Register
#define AT91C_SSC1_RPR  (AT91_CAST(AT91_REG *) 	0xFFF9C100) // (PDC_SSC1) Receive Pointer Register
// ========== Register definition for SSC1 peripheral ========== 
#define AT91C_SSC1_IPNAME2 (AT91_CAST(AT91_REG *) 	0xFFF9C0F4) // (SSC1) SSC IPNAME2 REGISTER 
#define AT91C_SSC1_SR   (AT91_CAST(AT91_REG *) 	0xFFF9C040) // (SSC1) Status Register
#define AT91C_SSC1_TSHR (AT91_CAST(AT91_REG *) 	0xFFF9C034) // (SSC1) Transmit Sync Holding Register
#define AT91C_SSC1_TCMR (AT91_CAST(AT91_REG *) 	0xFFF9C018) // (SSC1) Transmit Clock Mode Register
#define AT91C_SSC1_ADDRSIZE (AT91_CAST(AT91_REG *) 	0xFFF9C0EC) // (SSC1) SSC ADDRSIZE REGISTER 
#define AT91C_SSC1_IMR  (AT91_CAST(AT91_REG *) 	0xFFF9C04C) // (SSC1) Interrupt Mask Register
#define AT91C_SSC1_IDR  (AT91_CAST(AT91_REG *) 	0xFFF9C048) // (SSC1) Interrupt Disable Register
#define AT91C_SSC1_CR   (AT91_CAST(AT91_REG *) 	0xFFF9C000) // (SSC1) Control Register
#define AT91C_SSC1_VER  (AT91_CAST(AT91_REG *) 	0xFFF9C0FC) // (SSC1) Version Register
#define AT91C_SSC1_RHR  (AT91_CAST(AT91_REG *) 	0xFFF9C020) // (SSC1) Receive Holding Register
#define AT91C_SSC1_THR  (AT91_CAST(AT91_REG *) 	0xFFF9C024) // (SSC1) Transmit Holding Register
#define AT91C_SSC1_CMR  (AT91_CAST(AT91_REG *) 	0xFFF9C004) // (SSC1) Clock Mode Register
#define AT91C_SSC1_FEATURES (AT91_CAST(AT91_REG *) 	0xFFF9C0F8) // (SSC1) SSC FEATURES REGISTER 
#define AT91C_SSC1_RCMR (AT91_CAST(AT91_REG *) 	0xFFF9C010) // (SSC1) Receive Clock ModeRegister
#define AT91C_SSC1_IPNAME1 (AT91_CAST(AT91_REG *) 	0xFFF9C0F0) // (SSC1) SSC IPNAME1 REGISTER 
#define AT91C_SSC1_RSHR (AT91_CAST(AT91_REG *) 	0xFFF9C030) // (SSC1) Receive Sync Holding Register
#define AT91C_SSC1_IER  (AT91_CAST(AT91_REG *) 	0xFFF9C044) // (SSC1) Interrupt Enable Register
#define AT91C_SSC1_TFMR (AT91_CAST(AT91_REG *) 	0xFFF9C01C) // (SSC1) Transmit Frame Mode Register
#define AT91C_SSC1_RFMR (AT91_CAST(AT91_REG *) 	0xFFF9C014) // (SSC1) Receive Frame Mode Register
// ========== Register definition for PDC_AC97C peripheral ========== 
#define AT91C_AC97C_RNPR (AT91_CAST(AT91_REG *) 	0xFFFA0110) // (PDC_AC97C) Receive Next Pointer Register
#define AT91C_AC97C_TCR (AT91_CAST(AT91_REG *) 	0xFFFA010C) // (PDC_AC97C) Transmit Counter Register
#define AT91C_AC97C_TNCR (AT91_CAST(AT91_REG *) 	0xFFFA011C) // (PDC_AC97C) Transmit Next Counter Register
#define AT91C_AC97C_RCR (AT91_CAST(AT91_REG *) 	0xFFFA0104) // (PDC_AC97C) Receive Counter Register
#define AT91C_AC97C_RNCR (AT91_CAST(AT91_REG *) 	0xFFFA0114) // (PDC_AC97C) Receive Next Counter Register
#define AT91C_AC97C_PTCR (AT91_CAST(AT91_REG *) 	0xFFFA0120) // (PDC_AC97C) PDC Transfer Control Register
#define AT91C_AC97C_TPR (AT91_CAST(AT91_REG *) 	0xFFFA0108) // (PDC_AC97C) Transmit Pointer Register
#define AT91C_AC97C_RPR (AT91_CAST(AT91_REG *) 	0xFFFA0100) // (PDC_AC97C) Receive Pointer Register
#define AT91C_AC97C_PTSR (AT91_CAST(AT91_REG *) 	0xFFFA0124) // (PDC_AC97C) PDC Transfer Status Register
#define AT91C_AC97C_TNPR (AT91_CAST(AT91_REG *) 	0xFFFA0118) // (PDC_AC97C) Transmit Next Pointer Register
// ========== Register definition for AC97C peripheral ========== 
#define AT91C_AC97C_CORHR (AT91_CAST(AT91_REG *) 	0xFFFA0040) // (AC97C) COdec Transmit Holding Register
#define AT91C_AC97C_MR  (AT91_CAST(AT91_REG *) 	0xFFFA0008) // (AC97C) Mode Register
#define AT91C_AC97C_CATHR (AT91_CAST(AT91_REG *) 	0xFFFA0024) // (AC97C) Channel A Transmit Holding Register
#define AT91C_AC97C_IER (AT91_CAST(AT91_REG *) 	0xFFFA0054) // (AC97C) Interrupt Enable Register
#define AT91C_AC97C_CASR (AT91_CAST(AT91_REG *) 	0xFFFA0028) // (AC97C) Channel A Status Register
#define AT91C_AC97C_CBTHR (AT91_CAST(AT91_REG *) 	0xFFFA0034) // (AC97C) Channel B Transmit Holding Register (optional)
#define AT91C_AC97C_ICA (AT91_CAST(AT91_REG *) 	0xFFFA0010) // (AC97C) Input Channel AssignementRegister
#define AT91C_AC97C_IMR (AT91_CAST(AT91_REG *) 	0xFFFA005C) // (AC97C) Interrupt Mask Register
#define AT91C_AC97C_IDR (AT91_CAST(AT91_REG *) 	0xFFFA0058) // (AC97C) Interrupt Disable Register
#define AT91C_AC97C_CARHR (AT91_CAST(AT91_REG *) 	0xFFFA0020) // (AC97C) Channel A Receive Holding Register
#define AT91C_AC97C_VERSION (AT91_CAST(AT91_REG *) 	0xFFFA00FC) // (AC97C) Version Register
#define AT91C_AC97C_CBRHR (AT91_CAST(AT91_REG *) 	0xFFFA0030) // (AC97C) Channel B Receive Holding Register (optional)
#define AT91C_AC97C_COTHR (AT91_CAST(AT91_REG *) 	0xFFFA0044) // (AC97C) COdec Transmit Holding Register
#define AT91C_AC97C_OCA (AT91_CAST(AT91_REG *) 	0xFFFA0014) // (AC97C) Output Channel Assignement Register
#define AT91C_AC97C_CBMR (AT91_CAST(AT91_REG *) 	0xFFFA003C) // (AC97C) Channel B Mode Register
#define AT91C_AC97C_COMR (AT91_CAST(AT91_REG *) 	0xFFFA004C) // (AC97C) CODEC Mask Status Register
#define AT91C_AC97C_CBSR (AT91_CAST(AT91_REG *) 	0xFFFA0038) // (AC97C) Channel B Status Register
#define AT91C_AC97C_COSR (AT91_CAST(AT91_REG *) 	0xFFFA0048) // (AC97C) CODEC Status Register
#define AT91C_AC97C_CAMR (AT91_CAST(AT91_REG *) 	0xFFFA002C) // (AC97C) Channel A Mode Register
#define AT91C_AC97C_SR  (AT91_CAST(AT91_REG *) 	0xFFFA0050) // (AC97C) Status Register
// ========== Register definition for PDC_SPI0 peripheral ========== 
#define AT91C_SPI0_TPR  (AT91_CAST(AT91_REG *) 	0xFFFA4108) // (PDC_SPI0) Transmit Pointer Register
#define AT91C_SPI0_PTCR (AT91_CAST(AT91_REG *) 	0xFFFA4120) // (PDC_SPI0) PDC Transfer Control Register
#define AT91C_SPI0_RNPR (AT91_CAST(AT91_REG *) 	0xFFFA4110) // (PDC_SPI0) Receive Next Pointer Register
#define AT91C_SPI0_TNCR (AT91_CAST(AT91_REG *) 	0xFFFA411C) // (PDC_SPI0) Transmit Next Counter Register
#define AT91C_SPI0_TCR  (AT91_CAST(AT91_REG *) 	0xFFFA410C) // (PDC_SPI0) Transmit Counter Register
#define AT91C_SPI0_RCR  (AT91_CAST(AT91_REG *) 	0xFFFA4104) // (PDC_SPI0) Receive Counter Register
#define AT91C_SPI0_RNCR (AT91_CAST(AT91_REG *) 	0xFFFA4114) // (PDC_SPI0) Receive Next Counter Register
#define AT91C_SPI0_TNPR (AT91_CAST(AT91_REG *) 	0xFFFA4118) // (PDC_SPI0) Transmit Next Pointer Register
#define AT91C_SPI0_RPR  (AT91_CAST(AT91_REG *) 	0xFFFA4100) // (PDC_SPI0) Receive Pointer Register
#define AT91C_SPI0_PTSR (AT91_CAST(AT91_REG *) 	0xFFFA4124) // (PDC_SPI0) PDC Transfer Status Register
// ========== Register definition for SPI0 peripheral ========== 
#define AT91C_SPI0_MR   (AT91_CAST(AT91_REG *) 	0xFFFA4004) // (SPI0) Mode Register
#define AT91C_SPI0_RDR  (AT91_CAST(AT91_REG *) 	0xFFFA4008) // (SPI0) Receive Data Register
#define AT91C_SPI0_CR   (AT91_CAST(AT91_REG *) 	0xFFFA4000) // (SPI0) Control Register
#define AT91C_SPI0_IER  (AT91_CAST(AT91_REG *) 	0xFFFA4014) // (SPI0) Interrupt Enable Register
#define AT91C_SPI0_TDR  (AT91_CAST(AT91_REG *) 	0xFFFA400C) // (SPI0) Transmit Data Register
#define AT91C_SPI0_IDR  (AT91_CAST(AT91_REG *) 	0xFFFA4018) // (SPI0) Interrupt Disable Register
#define AT91C_SPI0_CSR  (AT91_CAST(AT91_REG *) 	0xFFFA4030) // (SPI0) Chip Select Register
#define AT91C_SPI0_SR   (AT91_CAST(AT91_REG *) 	0xFFFA4010) // (SPI0) Status Register
#define AT91C_SPI0_IMR  (AT91_CAST(AT91_REG *) 	0xFFFA401C) // (SPI0) Interrupt Mask Register
// ========== Register definition for PDC_SPI1 peripheral ========== 
#define AT91C_SPI1_RNCR (AT91_CAST(AT91_REG *) 	0xFFFA8114) // (PDC_SPI1) Receive Next Counter Register
#define AT91C_SPI1_TCR  (AT91_CAST(AT91_REG *) 	0xFFFA810C) // (PDC_SPI1) Transmit Counter Register
#define AT91C_SPI1_RCR  (AT91_CAST(AT91_REG *) 	0xFFFA8104) // (PDC_SPI1) Receive Counter Register
#define AT91C_SPI1_TNPR (AT91_CAST(AT91_REG *) 	0xFFFA8118) // (PDC_SPI1) Transmit Next Pointer Register
#define AT91C_SPI1_RNPR (AT91_CAST(AT91_REG *) 	0xFFFA8110) // (PDC_SPI1) Receive Next Pointer Register
#define AT91C_SPI1_RPR  (AT91_CAST(AT91_REG *) 	0xFFFA8100) // (PDC_SPI1) Receive Pointer Register
#define AT91C_SPI1_TNCR (AT91_CAST(AT91_REG *) 	0xFFFA811C) // (PDC_SPI1) Transmit Next Counter Register
#define AT91C_SPI1_TPR  (AT91_CAST(AT91_REG *) 	0xFFFA8108) // (PDC_SPI1) Transmit Pointer Register
#define AT91C_SPI1_PTSR (AT91_CAST(AT91_REG *) 	0xFFFA8124) // (PDC_SPI1) PDC Transfer Status Register
#define AT91C_SPI1_PTCR (AT91_CAST(AT91_REG *) 	0xFFFA8120) // (PDC_SPI1) PDC Transfer Control Register
// ========== Register definition for SPI1 peripheral ========== 
#define AT91C_SPI1_CSR  (AT91_CAST(AT91_REG *) 	0xFFFA8030) // (SPI1) Chip Select Register
#define AT91C_SPI1_IER  (AT91_CAST(AT91_REG *) 	0xFFFA8014) // (SPI1) Interrupt Enable Register
#define AT91C_SPI1_RDR  (AT91_CAST(AT91_REG *) 	0xFFFA8008) // (SPI1) Receive Data Register
#define AT91C_SPI1_IDR  (AT91_CAST(AT91_REG *) 	0xFFFA8018) // (SPI1) Interrupt Disable Register
#define AT91C_SPI1_MR   (AT91_CAST(AT91_REG *) 	0xFFFA8004) // (SPI1) Mode Register
#define AT91C_SPI1_CR   (AT91_CAST(AT91_REG *) 	0xFFFA8000) // (SPI1) Control Register
#define AT91C_SPI1_SR   (AT91_CAST(AT91_REG *) 	0xFFFA8010) // (SPI1) Status Register
#define AT91C_SPI1_TDR  (AT91_CAST(AT91_REG *) 	0xFFFA800C) // (SPI1) Transmit Data Register
#define AT91C_SPI1_IMR  (AT91_CAST(AT91_REG *) 	0xFFFA801C) // (SPI1) Interrupt Mask Register
// ========== Register definition for CAN_MB0 peripheral ========== 
#define AT91C_CAN_MB0_MID (AT91_CAST(AT91_REG *) 	0xFFFAC208) // (CAN_MB0) MailBox ID Register
#define AT91C_CAN_MB0_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC20C) // (CAN_MB0) MailBox Family ID Register
#define AT91C_CAN_MB0_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC204) // (CAN_MB0) MailBox Acceptance Mask Register
#define AT91C_CAN_MB0_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC21C) // (CAN_MB0) MailBox Control Register
#define AT91C_CAN_MB0_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC200) // (CAN_MB0) MailBox Mode Register
#define AT91C_CAN_MB0_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC214) // (CAN_MB0) MailBox Data Low Register
#define AT91C_CAN_MB0_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC218) // (CAN_MB0) MailBox Data High Register
#define AT91C_CAN_MB0_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC210) // (CAN_MB0) MailBox Status Register
// ========== Register definition for CAN_MB1 peripheral ========== 
#define AT91C_CAN_MB1_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC234) // (CAN_MB1) MailBox Data Low Register
#define AT91C_CAN_MB1_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC224) // (CAN_MB1) MailBox Acceptance Mask Register
#define AT91C_CAN_MB1_MID (AT91_CAST(AT91_REG *) 	0xFFFAC228) // (CAN_MB1) MailBox ID Register
#define AT91C_CAN_MB1_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC220) // (CAN_MB1) MailBox Mode Register
#define AT91C_CAN_MB1_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC23C) // (CAN_MB1) MailBox Control Register
#define AT91C_CAN_MB1_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC22C) // (CAN_MB1) MailBox Family ID Register
#define AT91C_CAN_MB1_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC230) // (CAN_MB1) MailBox Status Register
#define AT91C_CAN_MB1_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC238) // (CAN_MB1) MailBox Data High Register
// ========== Register definition for CAN_MB2 peripheral ========== 
#define AT91C_CAN_MB2_MID (AT91_CAST(AT91_REG *) 	0xFFFAC248) // (CAN_MB2) MailBox ID Register
#define AT91C_CAN_MB2_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC250) // (CAN_MB2) MailBox Status Register
#define AT91C_CAN_MB2_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC254) // (CAN_MB2) MailBox Data Low Register
#define AT91C_CAN_MB2_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC25C) // (CAN_MB2) MailBox Control Register
#define AT91C_CAN_MB2_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC258) // (CAN_MB2) MailBox Data High Register
#define AT91C_CAN_MB2_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC244) // (CAN_MB2) MailBox Acceptance Mask Register
#define AT91C_CAN_MB2_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC240) // (CAN_MB2) MailBox Mode Register
#define AT91C_CAN_MB2_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC24C) // (CAN_MB2) MailBox Family ID Register
// ========== Register definition for CAN_MB3 peripheral ========== 
#define AT91C_CAN_MB3_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC274) // (CAN_MB3) MailBox Data Low Register
#define AT91C_CAN_MB3_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC26C) // (CAN_MB3) MailBox Family ID Register
#define AT91C_CAN_MB3_MID (AT91_CAST(AT91_REG *) 	0xFFFAC268) // (CAN_MB3) MailBox ID Register
#define AT91C_CAN_MB3_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC278) // (CAN_MB3) MailBox Data High Register
#define AT91C_CAN_MB3_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC264) // (CAN_MB3) MailBox Acceptance Mask Register
#define AT91C_CAN_MB3_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC260) // (CAN_MB3) MailBox Mode Register
#define AT91C_CAN_MB3_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC27C) // (CAN_MB3) MailBox Control Register
#define AT91C_CAN_MB3_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC270) // (CAN_MB3) MailBox Status Register
// ========== Register definition for CAN_MB4 peripheral ========== 
#define AT91C_CAN_MB4_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC29C) // (CAN_MB4) MailBox Control Register
#define AT91C_CAN_MB4_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC298) // (CAN_MB4) MailBox Data High Register
#define AT91C_CAN_MB4_MID (AT91_CAST(AT91_REG *) 	0xFFFAC288) // (CAN_MB4) MailBox ID Register
#define AT91C_CAN_MB4_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC280) // (CAN_MB4) MailBox Mode Register
#define AT91C_CAN_MB4_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC290) // (CAN_MB4) MailBox Status Register
#define AT91C_CAN_MB4_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC28C) // (CAN_MB4) MailBox Family ID Register
#define AT91C_CAN_MB4_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC284) // (CAN_MB4) MailBox Acceptance Mask Register
#define AT91C_CAN_MB4_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC294) // (CAN_MB4) MailBox Data Low Register
// ========== Register definition for CAN_MB5 peripheral ========== 
#define AT91C_CAN_MB5_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC2B8) // (CAN_MB5) MailBox Data High Register
#define AT91C_CAN_MB5_MID (AT91_CAST(AT91_REG *) 	0xFFFAC2A8) // (CAN_MB5) MailBox ID Register
#define AT91C_CAN_MB5_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC2BC) // (CAN_MB5) MailBox Control Register
#define AT91C_CAN_MB5_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC2B0) // (CAN_MB5) MailBox Status Register
#define AT91C_CAN_MB5_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC2B4) // (CAN_MB5) MailBox Data Low Register
#define AT91C_CAN_MB5_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC2A0) // (CAN_MB5) MailBox Mode Register
#define AT91C_CAN_MB5_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC2A4) // (CAN_MB5) MailBox Acceptance Mask Register
#define AT91C_CAN_MB5_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC2AC) // (CAN_MB5) MailBox Family ID Register
// ========== Register definition for CAN_MB6 peripheral ========== 
#define AT91C_CAN_MB6_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC2D0) // (CAN_MB6) MailBox Status Register
#define AT91C_CAN_MB6_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC2C0) // (CAN_MB6) MailBox Mode Register
#define AT91C_CAN_MB6_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC2CC) // (CAN_MB6) MailBox Family ID Register
#define AT91C_CAN_MB6_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC2D4) // (CAN_MB6) MailBox Data Low Register
#define AT91C_CAN_MB6_MID (AT91_CAST(AT91_REG *) 	0xFFFAC2C8) // (CAN_MB6) MailBox ID Register
#define AT91C_CAN_MB6_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC2DC) // (CAN_MB6) MailBox Control Register
#define AT91C_CAN_MB6_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC2C4) // (CAN_MB6) MailBox Acceptance Mask Register
#define AT91C_CAN_MB6_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC2D8) // (CAN_MB6) MailBox Data High Register
// ========== Register definition for CAN_MB7 peripheral ========== 
#define AT91C_CAN_MB7_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC2E4) // (CAN_MB7) MailBox Acceptance Mask Register
#define AT91C_CAN_MB7_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC2F8) // (CAN_MB7) MailBox Data High Register
#define AT91C_CAN_MB7_MID (AT91_CAST(AT91_REG *) 	0xFFFAC2E8) // (CAN_MB7) MailBox ID Register
#define AT91C_CAN_MB7_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC2F0) // (CAN_MB7) MailBox Status Register
#define AT91C_CAN_MB7_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC2E0) // (CAN_MB7) MailBox Mode Register
#define AT91C_CAN_MB7_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC2FC) // (CAN_MB7) MailBox Control Register
#define AT91C_CAN_MB7_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC2EC) // (CAN_MB7) MailBox Family ID Register
#define AT91C_CAN_MB7_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC2F4) // (CAN_MB7) MailBox Data Low Register
// ========== Register definition for CAN_MB8 peripheral ========== 
#define AT91C_CAN_MB8_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC318) // (CAN_MB8) MailBox Data High Register
#define AT91C_CAN_MB8_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC300) // (CAN_MB8) MailBox Mode Register
#define AT91C_CAN_MB8_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC31C) // (CAN_MB8) MailBox Control Register
#define AT91C_CAN_MB8_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC310) // (CAN_MB8) MailBox Status Register
#define AT91C_CAN_MB8_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC304) // (CAN_MB8) MailBox Acceptance Mask Register
#define AT91C_CAN_MB8_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC30C) // (CAN_MB8) MailBox Family ID Register
#define AT91C_CAN_MB8_MID (AT91_CAST(AT91_REG *) 	0xFFFAC308) // (CAN_MB8) MailBox ID Register
#define AT91C_CAN_MB8_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC314) // (CAN_MB8) MailBox Data Low Register
// ========== Register definition for CAN_MB9 peripheral ========== 
#define AT91C_CAN_MB9_MID (AT91_CAST(AT91_REG *) 	0xFFFAC328) // (CAN_MB9) MailBox ID Register
#define AT91C_CAN_MB9_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC320) // (CAN_MB9) MailBox Mode Register
#define AT91C_CAN_MB9_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC338) // (CAN_MB9) MailBox Data High Register
#define AT91C_CAN_MB9_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC330) // (CAN_MB9) MailBox Status Register
#define AT91C_CAN_MB9_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC324) // (CAN_MB9) MailBox Acceptance Mask Register
#define AT91C_CAN_MB9_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC334) // (CAN_MB9) MailBox Data Low Register
#define AT91C_CAN_MB9_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC32C) // (CAN_MB9) MailBox Family ID Register
#define AT91C_CAN_MB9_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC33C) // (CAN_MB9) MailBox Control Register
// ========== Register definition for CAN_MB10 peripheral ========== 
#define AT91C_CAN_MB10_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC35C) // (CAN_MB10) MailBox Control Register
#define AT91C_CAN_MB10_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC358) // (CAN_MB10) MailBox Data High Register
#define AT91C_CAN_MB10_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC344) // (CAN_MB10) MailBox Acceptance Mask Register
#define AT91C_CAN_MB10_MID (AT91_CAST(AT91_REG *) 	0xFFFAC348) // (CAN_MB10) MailBox ID Register
#define AT91C_CAN_MB10_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC354) // (CAN_MB10) MailBox Data Low Register
#define AT91C_CAN_MB10_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC350) // (CAN_MB10) MailBox Status Register
#define AT91C_CAN_MB10_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC340) // (CAN_MB10) MailBox Mode Register
#define AT91C_CAN_MB10_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC34C) // (CAN_MB10) MailBox Family ID Register
// ========== Register definition for CAN_MB11 peripheral ========== 
#define AT91C_CAN_MB11_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC370) // (CAN_MB11) MailBox Status Register
#define AT91C_CAN_MB11_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC36C) // (CAN_MB11) MailBox Family ID Register
#define AT91C_CAN_MB11_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC374) // (CAN_MB11) MailBox Data Low Register
#define AT91C_CAN_MB11_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC378) // (CAN_MB11) MailBox Data High Register
#define AT91C_CAN_MB11_MID (AT91_CAST(AT91_REG *) 	0xFFFAC368) // (CAN_MB11) MailBox ID Register
#define AT91C_CAN_MB11_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC37C) // (CAN_MB11) MailBox Control Register
#define AT91C_CAN_MB11_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC360) // (CAN_MB11) MailBox Mode Register
#define AT91C_CAN_MB11_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC364) // (CAN_MB11) MailBox Acceptance Mask Register
// ========== Register definition for CAN_MB12 peripheral ========== 
#define AT91C_CAN_MB12_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC384) // (CAN_MB12) MailBox Acceptance Mask Register
#define AT91C_CAN_MB12_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC398) // (CAN_MB12) MailBox Data High Register
#define AT91C_CAN_MB12_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC380) // (CAN_MB12) MailBox Mode Register
#define AT91C_CAN_MB12_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC390) // (CAN_MB12) MailBox Status Register
#define AT91C_CAN_MB12_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC38C) // (CAN_MB12) MailBox Family ID Register
#define AT91C_CAN_MB12_MID (AT91_CAST(AT91_REG *) 	0xFFFAC388) // (CAN_MB12) MailBox ID Register
#define AT91C_CAN_MB12_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC39C) // (CAN_MB12) MailBox Control Register
#define AT91C_CAN_MB12_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC394) // (CAN_MB12) MailBox Data Low Register
// ========== Register definition for CAN_MB13 peripheral ========== 
#define AT91C_CAN_MB13_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC3B8) // (CAN_MB13) MailBox Data High Register
#define AT91C_CAN_MB13_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC3AC) // (CAN_MB13) MailBox Family ID Register
#define AT91C_CAN_MB13_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC3B0) // (CAN_MB13) MailBox Status Register
#define AT91C_CAN_MB13_MID (AT91_CAST(AT91_REG *) 	0xFFFAC3A8) // (CAN_MB13) MailBox ID Register
#define AT91C_CAN_MB13_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC3A4) // (CAN_MB13) MailBox Acceptance Mask Register
#define AT91C_CAN_MB13_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC3A0) // (CAN_MB13) MailBox Mode Register
#define AT91C_CAN_MB13_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC3BC) // (CAN_MB13) MailBox Control Register
#define AT91C_CAN_MB13_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC3B4) // (CAN_MB13) MailBox Data Low Register
// ========== Register definition for CAN_MB14 peripheral ========== 
#define AT91C_CAN_MB14_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC3D4) // (CAN_MB14) MailBox Data Low Register
#define AT91C_CAN_MB14_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC3C0) // (CAN_MB14) MailBox Mode Register
#define AT91C_CAN_MB14_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC3CC) // (CAN_MB14) MailBox Family ID Register
#define AT91C_CAN_MB14_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC3DC) // (CAN_MB14) MailBox Control Register
#define AT91C_CAN_MB14_MID (AT91_CAST(AT91_REG *) 	0xFFFAC3C8) // (CAN_MB14) MailBox ID Register
#define AT91C_CAN_MB14_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC3D8) // (CAN_MB14) MailBox Data High Register
#define AT91C_CAN_MB14_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC3D0) // (CAN_MB14) MailBox Status Register
#define AT91C_CAN_MB14_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC3C4) // (CAN_MB14) MailBox Acceptance Mask Register
// ========== Register definition for CAN_MB15 peripheral ========== 
#define AT91C_CAN_MB15_MDL (AT91_CAST(AT91_REG *) 	0xFFFAC3F4) // (CAN_MB15) MailBox Data Low Register
#define AT91C_CAN_MB15_MSR (AT91_CAST(AT91_REG *) 	0xFFFAC3F0) // (CAN_MB15) MailBox Status Register
#define AT91C_CAN_MB15_MID (AT91_CAST(AT91_REG *) 	0xFFFAC3E8) // (CAN_MB15) MailBox ID Register
#define AT91C_CAN_MB15_MAM (AT91_CAST(AT91_REG *) 	0xFFFAC3E4) // (CAN_MB15) MailBox Acceptance Mask Register
#define AT91C_CAN_MB15_MCR (AT91_CAST(AT91_REG *) 	0xFFFAC3FC) // (CAN_MB15) MailBox Control Register
#define AT91C_CAN_MB15_MFID (AT91_CAST(AT91_REG *) 	0xFFFAC3EC) // (CAN_MB15) MailBox Family ID Register
#define AT91C_CAN_MB15_MMR (AT91_CAST(AT91_REG *) 	0xFFFAC3E0) // (CAN_MB15) MailBox Mode Register
#define AT91C_CAN_MB15_MDH (AT91_CAST(AT91_REG *) 	0xFFFAC3F8) // (CAN_MB15) MailBox Data High Register
// ========== Register definition for CAN peripheral ========== 
#define AT91C_CAN_ACR   (AT91_CAST(AT91_REG *) 	0xFFFAC028) // (CAN) Abort Command Register
#define AT91C_CAN_BR    (AT91_CAST(AT91_REG *) 	0xFFFAC014) // (CAN) Baudrate Register
#define AT91C_CAN_IDR   (AT91_CAST(AT91_REG *) 	0xFFFAC008) // (CAN) Interrupt Disable Register
#define AT91C_CAN_TIMESTP (AT91_CAST(AT91_REG *) 	0xFFFAC01C) // (CAN) Time Stamp Register
#define AT91C_CAN_SR    (AT91_CAST(AT91_REG *) 	0xFFFAC010) // (CAN) Status Register
#define AT91C_CAN_IMR   (AT91_CAST(AT91_REG *) 	0xFFFAC00C) // (CAN) Interrupt Mask Register
#define AT91C_CAN_TCR   (AT91_CAST(AT91_REG *) 	0xFFFAC024) // (CAN) Transfer Command Register
#define AT91C_CAN_TIM   (AT91_CAST(AT91_REG *) 	0xFFFAC018) // (CAN) Timer Register
#define AT91C_CAN_IER   (AT91_CAST(AT91_REG *) 	0xFFFAC004) // (CAN) Interrupt Enable Register
#define AT91C_CAN_ECR   (AT91_CAST(AT91_REG *) 	0xFFFAC020) // (CAN) Error Counter Register
#define AT91C_CAN_VR    (AT91_CAST(AT91_REG *) 	0xFFFAC0FC) // (CAN) Version Register
#define AT91C_CAN_MR    (AT91_CAST(AT91_REG *) 	0xFFFAC000) // (CAN) Mode Register
// ========== Register definition for PDC_AES peripheral ========== 
#define AT91C_AES_TCR   (AT91_CAST(AT91_REG *) 	0xFFFB010C) // (PDC_AES) Transmit Counter Register
#define AT91C_AES_PTCR  (AT91_CAST(AT91_REG *) 	0xFFFB0120) // (PDC_AES) PDC Transfer Control Register
#define AT91C_AES_RNCR  (AT91_CAST(AT91_REG *) 	0xFFFB0114) // (PDC_AES) Receive Next Counter Register
#define AT91C_AES_PTSR  (AT91_CAST(AT91_REG *) 	0xFFFB0124) // (PDC_AES) PDC Transfer Status Register
#define AT91C_AES_TNCR  (AT91_CAST(AT91_REG *) 	0xFFFB011C) // (PDC_AES) Transmit Next Counter Register
#define AT91C_AES_RNPR  (AT91_CAST(AT91_REG *) 	0xFFFB0110) // (PDC_AES) Receive Next Pointer Register
#define AT91C_AES_RCR   (AT91_CAST(AT91_REG *) 	0xFFFB0104) // (PDC_AES) Receive Counter Register
#define AT91C_AES_TPR   (AT91_CAST(AT91_REG *) 	0xFFFB0108) // (PDC_AES) Transmit Pointer Register
#define AT91C_AES_TNPR  (AT91_CAST(AT91_REG *) 	0xFFFB0118) // (PDC_AES) Transmit Next Pointer Register
#define AT91C_AES_RPR   (AT91_CAST(AT91_REG *) 	0xFFFB0100) // (PDC_AES) Receive Pointer Register
// ========== Register definition for AES peripheral ========== 
#define AT91C_AES_VR    (AT91_CAST(AT91_REG *) 	0xFFFB00FC) // (AES) AES Version Register
#define AT91C_AES_IMR   (AT91_CAST(AT91_REG *) 	0xFFFB0018) // (AES) Interrupt Mask Register
#define AT91C_AES_CR    (AT91_CAST(AT91_REG *) 	0xFFFB0000) // (AES) Control Register
#define AT91C_AES_ODATAxR (AT91_CAST(AT91_REG *) 	0xFFFB0050) // (AES) Output Data x Register
#define AT91C_AES_ISR   (AT91_CAST(AT91_REG *) 	0xFFFB001C) // (AES) Interrupt Status Register
#define AT91C_AES_IDR   (AT91_CAST(AT91_REG *) 	0xFFFB0014) // (AES) Interrupt Disable Register
#define AT91C_AES_KEYWxR (AT91_CAST(AT91_REG *) 	0xFFFB0020) // (AES) Key Word x Register
#define AT91C_AES_IVxR  (AT91_CAST(AT91_REG *) 	0xFFFB0060) // (AES) Initialization Vector x Register
#define AT91C_AES_MR    (AT91_CAST(AT91_REG *) 	0xFFFB0004) // (AES) Mode Register
#define AT91C_AES_IDATAxR (AT91_CAST(AT91_REG *) 	0xFFFB0040) // (AES) Input Data x Register
#define AT91C_AES_IER   (AT91_CAST(AT91_REG *) 	0xFFFB0010) // (AES) Interrupt Enable Register
// ========== Register definition for PDC_TDES peripheral ========== 
#define AT91C_TDES_TCR  (AT91_CAST(AT91_REG *) 	0xFFFB010C) // (PDC_TDES) Transmit Counter Register
#define AT91C_TDES_PTCR (AT91_CAST(AT91_REG *) 	0xFFFB0120) // (PDC_TDES) PDC Transfer Control Register
#define AT91C_TDES_RNCR (AT91_CAST(AT91_REG *) 	0xFFFB0114) // (PDC_TDES) Receive Next Counter Register
#define AT91C_TDES_PTSR (AT91_CAST(AT91_REG *) 	0xFFFB0124) // (PDC_TDES) PDC Transfer Status Register
#define AT91C_TDES_TNCR (AT91_CAST(AT91_REG *) 	0xFFFB011C) // (PDC_TDES) Transmit Next Counter Register
#define AT91C_TDES_RNPR (AT91_CAST(AT91_REG *) 	0xFFFB0110) // (PDC_TDES) Receive Next Pointer Register
#define AT91C_TDES_RCR  (AT91_CAST(AT91_REG *) 	0xFFFB0104) // (PDC_TDES) Receive Counter Register
#define AT91C_TDES_TPR  (AT91_CAST(AT91_REG *) 	0xFFFB0108) // (PDC_TDES) Transmit Pointer Register
#define AT91C_TDES_TNPR (AT91_CAST(AT91_REG *) 	0xFFFB0118) // (PDC_TDES) Transmit Next Pointer Register
#define AT91C_TDES_RPR  (AT91_CAST(AT91_REG *) 	0xFFFB0100) // (PDC_TDES) Receive Pointer Register
// ========== Register definition for TDES peripheral ========== 
#define AT91C_TDES_VR   (AT91_CAST(AT91_REG *) 	0xFFFB00FC) // (TDES) TDES Version Register
#define AT91C_TDES_IMR  (AT91_CAST(AT91_REG *) 	0xFFFB0018) // (TDES) Interrupt Mask Register
#define AT91C_TDES_CR   (AT91_CAST(AT91_REG *) 	0xFFFB0000) // (TDES) Control Register
#define AT91C_TDES_ODATAxR (AT91_CAST(AT91_REG *) 	0xFFFB0050) // (TDES) Output Data x Register
#define AT91C_TDES_ISR  (AT91_CAST(AT91_REG *) 	0xFFFB001C) // (TDES) Interrupt Status Register
#define AT91C_TDES_KEY3WxR (AT91_CAST(AT91_REG *) 	0xFFFB0030) // (TDES) Key 3 Word x Register
#define AT91C_TDES_IDR  (AT91_CAST(AT91_REG *) 	0xFFFB0014) // (TDES) Interrupt Disable Register
#define AT91C_TDES_KEY1WxR (AT91_CAST(AT91_REG *) 	0xFFFB0020) // (TDES) Key 1 Word x Register
#define AT91C_TDES_KEY2WxR (AT91_CAST(AT91_REG *) 	0xFFFB0028) // (TDES) Key 2 Word x Register
#define AT91C_TDES_IVxR (AT91_CAST(AT91_REG *) 	0xFFFB0060) // (TDES) Initialization Vector x Register
#define AT91C_TDES_MR   (AT91_CAST(AT91_REG *) 	0xFFFB0004) // (TDES) Mode Register
#define AT91C_TDES_IDATAxR (AT91_CAST(AT91_REG *) 	0xFFFB0040) // (TDES) Input Data x Register
#define AT91C_TDES_IER  (AT91_CAST(AT91_REG *) 	0xFFFB0010) // (TDES) Interrupt Enable Register
// ========== Register definition for PWMC_CH0 peripheral ========== 
#define AT91C_PWMC_CH0_CCNTR (AT91_CAST(AT91_REG *) 	0xFFFB820C) // (PWMC_CH0) Channel Counter Register
#define AT91C_PWMC_CH0_CPRDR (AT91_CAST(AT91_REG *) 	0xFFFB8208) // (PWMC_CH0) Channel Period Register
#define AT91C_PWMC_CH0_CUPDR (AT91_CAST(AT91_REG *) 	0xFFFB8210) // (PWMC_CH0) Channel Update Register
#define AT91C_PWMC_CH0_CDTYR (AT91_CAST(AT91_REG *) 	0xFFFB8204) // (PWMC_CH0) Channel Duty Cycle Register
#define AT91C_PWMC_CH0_CMR (AT91_CAST(AT91_REG *) 	0xFFFB8200) // (PWMC_CH0) Channel Mode Register
#define AT91C_PWMC_CH0_Reserved (AT91_CAST(AT91_REG *) 	0xFFFB8214) // (PWMC_CH0) Reserved
// ========== Register definition for PWMC_CH1 peripheral ========== 
#define AT91C_PWMC_CH1_CCNTR (AT91_CAST(AT91_REG *) 	0xFFFB822C) // (PWMC_CH1) Channel Counter Register
#define AT91C_PWMC_CH1_CDTYR (AT91_CAST(AT91_REG *) 	0xFFFB8224) // (PWMC_CH1) Channel Duty Cycle Register
#define AT91C_PWMC_CH1_CMR (AT91_CAST(AT91_REG *) 	0xFFFB8220) // (PWMC_CH1) Channel Mode Register
#define AT91C_PWMC_CH1_CPRDR (AT91_CAST(AT91_REG *) 	0xFFFB8228) // (PWMC_CH1) Channel Period Register
#define AT91C_PWMC_CH1_Reserved (AT91_CAST(AT91_REG *) 	0xFFFB8234) // (PWMC_CH1) Reserved
#define AT91C_PWMC_CH1_CUPDR (AT91_CAST(AT91_REG *) 	0xFFFB8230) // (PWMC_CH1) Channel Update Register
// ========== Register definition for PWMC_CH2 peripheral ========== 
#define AT91C_PWMC_CH2_CUPDR (AT91_CAST(AT91_REG *) 	0xFFFB8250) // (PWMC_CH2) Channel Update Register
#define AT91C_PWMC_CH2_CMR (AT91_CAST(AT91_REG *) 	0xFFFB8240) // (PWMC_CH2) Channel Mode Register
#define AT91C_PWMC_CH2_Reserved (AT91_CAST(AT91_REG *) 	0xFFFB8254) // (PWMC_CH2) Reserved
#define AT91C_PWMC_CH2_CPRDR (AT91_CAST(AT91_REG *) 	0xFFFB8248) // (PWMC_CH2) Channel Period Register
#define AT91C_PWMC_CH2_CDTYR (AT91_CAST(AT91_REG *) 	0xFFFB8244) // (PWMC_CH2) Channel Duty Cycle Register
#define AT91C_PWMC_CH2_CCNTR (AT91_CAST(AT91_REG *) 	0xFFFB824C) // (PWMC_CH2) Channel Counter Register
// ========== Register definition for PWMC_CH3 peripheral ========== 
#define AT91C_PWMC_CH3_CPRDR (AT91_CAST(AT91_REG *) 	0xFFFB8268) // (PWMC_CH3) Channel Period Register
#define AT91C_PWMC_CH3_Reserved (AT91_CAST(AT91_REG *) 	0xFFFB8274) // (PWMC_CH3) Reserved
#define AT91C_PWMC_CH3_CUPDR (AT91_CAST(AT91_REG *) 	0xFFFB8270) // (PWMC_CH3) Channel Update Register
#define AT91C_PWMC_CH3_CDTYR (AT91_CAST(AT91_REG *) 	0xFFFB8264) // (PWMC_CH3) Channel Duty Cycle Register
#define AT91C_PWMC_CH3_CCNTR (AT91_CAST(AT91_REG *) 	0xFFFB826C) // (PWMC_CH3) Channel Counter Register
#define AT91C_PWMC_CH3_CMR (AT91_CAST(AT91_REG *) 	0xFFFB8260) // (PWMC_CH3) Channel Mode Register
// ========== Register definition for PWMC peripheral ========== 
#define AT91C_PWMC_IDR  (AT91_CAST(AT91_REG *) 	0xFFFB8014) // (PWMC) PWMC Interrupt Disable Register
#define AT91C_PWMC_MR   (AT91_CAST(AT91_REG *) 	0xFFFB8000) // (PWMC) PWMC Mode Register
#define AT91C_PWMC_VR   (AT91_CAST(AT91_REG *) 	0xFFFB80FC) // (PWMC) PWMC Version Register
#define AT91C_PWMC_IMR  (AT91_CAST(AT91_REG *) 	0xFFFB8018) // (PWMC) PWMC Interrupt Mask Register
#define AT91C_PWMC_SR   (AT91_CAST(AT91_REG *) 	0xFFFB800C) // (PWMC) PWMC Status Register
#define AT91C_PWMC_ISR  (AT91_CAST(AT91_REG *) 	0xFFFB801C) // (PWMC) PWMC Interrupt Status Register
#define AT91C_PWMC_ENA  (AT91_CAST(AT91_REG *) 	0xFFFB8004) // (PWMC) PWMC Enable Register
#define AT91C_PWMC_IER  (AT91_CAST(AT91_REG *) 	0xFFFB8010) // (PWMC) PWMC Interrupt Enable Register
#define AT91C_PWMC_DIS  (AT91_CAST(AT91_REG *) 	0xFFFB8008) // (PWMC) PWMC Disable Register
// ========== Register definition for MACB peripheral ========== 
#define AT91C_MACB_ALE  (AT91_CAST(AT91_REG *) 	0xFFFBC054) // (MACB) Alignment Error Register
#define AT91C_MACB_RRE  (AT91_CAST(AT91_REG *) 	0xFFFBC06C) // (MACB) Receive Ressource Error Register
#define AT91C_MACB_SA4H (AT91_CAST(AT91_REG *) 	0xFFFBC0B4) // (MACB) Specific Address 4 Top, Last 2 bytes
#define AT91C_MACB_TPQ  (AT91_CAST(AT91_REG *) 	0xFFFBC0BC) // (MACB) Transmit Pause Quantum Register
#define AT91C_MACB_RJA  (AT91_CAST(AT91_REG *) 	0xFFFBC07C) // (MACB) Receive Jabbers Register
#define AT91C_MACB_SA2H (AT91_CAST(AT91_REG *) 	0xFFFBC0A4) // (MACB) Specific Address 2 Top, Last 2 bytes
#define AT91C_MACB_TPF  (AT91_CAST(AT91_REG *) 	0xFFFBC08C) // (MACB) Transmitted Pause Frames Register
#define AT91C_MACB_ROV  (AT91_CAST(AT91_REG *) 	0xFFFBC070) // (MACB) Receive Overrun Errors Register
#define AT91C_MACB_SA4L (AT91_CAST(AT91_REG *) 	0xFFFBC0B0) // (MACB) Specific Address 4 Bottom, First 4 bytes
#define AT91C_MACB_MAN  (AT91_CAST(AT91_REG *) 	0xFFFBC034) // (MACB) PHY Maintenance Register
#define AT91C_MACB_TID  (AT91_CAST(AT91_REG *) 	0xFFFBC0B8) // (MACB) Type ID Checking Register
#define AT91C_MACB_TBQP (AT91_CAST(AT91_REG *) 	0xFFFBC01C) // (MACB) Transmit Buffer Queue Pointer
#define AT91C_MACB_SA3L (AT91_CAST(AT91_REG *) 	0xFFFBC0A8) // (MACB) Specific Address 3 Bottom, First 4 bytes
#define AT91C_MACB_DTF  (AT91_CAST(AT91_REG *) 	0xFFFBC058) // (MACB) Deferred Transmission Frame Register
#define AT91C_MACB_PTR  (AT91_CAST(AT91_REG *) 	0xFFFBC038) // (MACB) Pause Time Register
#define AT91C_MACB_CSE  (AT91_CAST(AT91_REG *) 	0xFFFBC068) // (MACB) Carrier Sense Error Register
#define AT91C_MACB_ECOL (AT91_CAST(AT91_REG *) 	0xFFFBC060) // (MACB) Excessive Collision Register
#define AT91C_MACB_STE  (AT91_CAST(AT91_REG *) 	0xFFFBC084) // (MACB) SQE Test Error Register
#define AT91C_MACB_MCF  (AT91_CAST(AT91_REG *) 	0xFFFBC048) // (MACB) Multiple Collision Frame Register
#define AT91C_MACB_IER  (AT91_CAST(AT91_REG *) 	0xFFFBC028) // (MACB) Interrupt Enable Register
#define AT91C_MACB_ELE  (AT91_CAST(AT91_REG *) 	0xFFFBC078) // (MACB) Excessive Length Errors Register
#define AT91C_MACB_USRIO (AT91_CAST(AT91_REG *) 	0xFFFBC0C0) // (MACB) USER Input/Output Register
#define AT91C_MACB_PFR  (AT91_CAST(AT91_REG *) 	0xFFFBC03C) // (MACB) Pause Frames received Register
#define AT91C_MACB_FCSE (AT91_CAST(AT91_REG *) 	0xFFFBC050) // (MACB) Frame Check Sequence Error Register
#define AT91C_MACB_SA1L (AT91_CAST(AT91_REG *) 	0xFFFBC098) // (MACB) Specific Address 1 Bottom, First 4 bytes
#define AT91C_MACB_NCR  (AT91_CAST(AT91_REG *) 	0xFFFBC000) // (MACB) Network Control Register
#define AT91C_MACB_HRT  (AT91_CAST(AT91_REG *) 	0xFFFBC094) // (MACB) Hash Address Top[63:32]
#define AT91C_MACB_NCFGR (AT91_CAST(AT91_REG *) 	0xFFFBC004) // (MACB) Network Configuration Register
#define AT91C_MACB_SCF  (AT91_CAST(AT91_REG *) 	0xFFFBC044) // (MACB) Single Collision Frame Register
#define AT91C_MACB_LCOL (AT91_CAST(AT91_REG *) 	0xFFFBC05C) // (MACB) Late Collision Register
#define AT91C_MACB_SA3H (AT91_CAST(AT91_REG *) 	0xFFFBC0AC) // (MACB) Specific Address 3 Top, Last 2 bytes
#define AT91C_MACB_HRB  (AT91_CAST(AT91_REG *) 	0xFFFBC090) // (MACB) Hash Address Bottom[31:0]
#define AT91C_MACB_ISR  (AT91_CAST(AT91_REG *) 	0xFFFBC024) // (MACB) Interrupt Status Register
#define AT91C_MACB_IMR  (AT91_CAST(AT91_REG *) 	0xFFFBC030) // (MACB) Interrupt Mask Register
#define AT91C_MACB_WOL  (AT91_CAST(AT91_REG *) 	0xFFFBC0C4) // (MACB) Wake On LAN Register
#define AT91C_MACB_USF  (AT91_CAST(AT91_REG *) 	0xFFFBC080) // (MACB) Undersize Frames Register
#define AT91C_MACB_TSR  (AT91_CAST(AT91_REG *) 	0xFFFBC014) // (MACB) Transmit Status Register
#define AT91C_MACB_FRO  (AT91_CAST(AT91_REG *) 	0xFFFBC04C) // (MACB) Frames Received OK Register
#define AT91C_MACB_IDR  (AT91_CAST(AT91_REG *) 	0xFFFBC02C) // (MACB) Interrupt Disable Register
#define AT91C_MACB_SA1H (AT91_CAST(AT91_REG *) 	0xFFFBC09C) // (MACB) Specific Address 1 Top, Last 2 bytes
#define AT91C_MACB_RLE  (AT91_CAST(AT91_REG *) 	0xFFFBC088) // (MACB) Receive Length Field Mismatch Register
#define AT91C_MACB_TUND (AT91_CAST(AT91_REG *) 	0xFFFBC064) // (MACB) Transmit Underrun Error Register
#define AT91C_MACB_RSR  (AT91_CAST(AT91_REG *) 	0xFFFBC020) // (MACB) Receive Status Register
#define AT91C_MACB_SA2L (AT91_CAST(AT91_REG *) 	0xFFFBC0A0) // (MACB) Specific Address 2 Bottom, First 4 bytes
#define AT91C_MACB_FTO  (AT91_CAST(AT91_REG *) 	0xFFFBC040) // (MACB) Frames Transmitted OK Register
#define AT91C_MACB_RSE  (AT91_CAST(AT91_REG *) 	0xFFFBC074) // (MACB) Receive Symbol Errors Register
#define AT91C_MACB_NSR  (AT91_CAST(AT91_REG *) 	0xFFFBC008) // (MACB) Network Status Register
#define AT91C_MACB_RBQP (AT91_CAST(AT91_REG *) 	0xFFFBC018) // (MACB) Receive Buffer Queue Pointer
#define AT91C_MACB_REV  (AT91_CAST(AT91_REG *) 	0xFFFBC0FC) // (MACB) Revision Register
// ========== Register definition for PDC_ADC peripheral ========== 
#define AT91C_ADC_TNPR  (AT91_CAST(AT91_REG *) 	0xFFFC0118) // (PDC_ADC) Transmit Next Pointer Register
#define AT91C_ADC_RNPR  (AT91_CAST(AT91_REG *) 	0xFFFC0110) // (PDC_ADC) Receive Next Pointer Register
#define AT91C_ADC_TCR   (AT91_CAST(AT91_REG *) 	0xFFFC010C) // (PDC_ADC) Transmit Counter Register
#define AT91C_ADC_PTCR  (AT91_CAST(AT91_REG *) 	0xFFFC0120) // (PDC_ADC) PDC Transfer Control Register
#define AT91C_ADC_PTSR  (AT91_CAST(AT91_REG *) 	0xFFFC0124) // (PDC_ADC) PDC Transfer Status Register
#define AT91C_ADC_TNCR  (AT91_CAST(AT91_REG *) 	0xFFFC011C) // (PDC_ADC) Transmit Next Counter Register
#define AT91C_ADC_TPR   (AT91_CAST(AT91_REG *) 	0xFFFC0108) // (PDC_ADC) Transmit Pointer Register
#define AT91C_ADC_RCR   (AT91_CAST(AT91_REG *) 	0xFFFC0104) // (PDC_ADC) Receive Counter Register
#define AT91C_ADC_RPR   (AT91_CAST(AT91_REG *) 	0xFFFC0100) // (PDC_ADC) Receive Pointer Register
#define AT91C_ADC_RNCR  (AT91_CAST(AT91_REG *) 	0xFFFC0114) // (PDC_ADC) Receive Next Counter Register
// ========== Register definition for ADC peripheral ========== 
#define AT91C_ADC_CDR6  (AT91_CAST(AT91_REG *) 	0xFFFC0048) // (ADC) ADC Channel Data Register 6
#define AT91C_ADC_IMR   (AT91_CAST(AT91_REG *) 	0xFFFC002C) // (ADC) ADC Interrupt Mask Register
#define AT91C_ADC_CHER  (AT91_CAST(AT91_REG *) 	0xFFFC0010) // (ADC) ADC Channel Enable Register
#define AT91C_ADC_CDR4  (AT91_CAST(AT91_REG *) 	0xFFFC0040) // (ADC) ADC Channel Data Register 4
#define AT91C_ADC_CDR1  (AT91_CAST(AT91_REG *) 	0xFFFC0034) // (ADC) ADC Channel Data Register 1
#define AT91C_ADC_IER   (AT91_CAST(AT91_REG *) 	0xFFFC0024) // (ADC) ADC Interrupt Enable Register
#define AT91C_ADC_CHDR  (AT91_CAST(AT91_REG *) 	0xFFFC0014) // (ADC) ADC Channel Disable Register
#define AT91C_ADC_CDR2  (AT91_CAST(AT91_REG *) 	0xFFFC0038) // (ADC) ADC Channel Data Register 2
#define AT91C_ADC_LCDR  (AT91_CAST(AT91_REG *) 	0xFFFC0020) // (ADC) ADC Last Converted Data Register
#define AT91C_ADC_CR    (AT91_CAST(AT91_REG *) 	0xFFFC0000) // (ADC) ADC Control Register
#define AT91C_ADC_CDR5  (AT91_CAST(AT91_REG *) 	0xFFFC0044) // (ADC) ADC Channel Data Register 5
#define AT91C_ADC_CDR3  (AT91_CAST(AT91_REG *) 	0xFFFC003C) // (ADC) ADC Channel Data Register 3
#define AT91C_ADC_MR    (AT91_CAST(AT91_REG *) 	0xFFFC0004) // (ADC) ADC Mode Register
#define AT91C_ADC_IDR   (AT91_CAST(AT91_REG *) 	0xFFFC0028) // (ADC) ADC Interrupt Disable Register
#define AT91C_ADC_CDR0  (AT91_CAST(AT91_REG *) 	0xFFFC0030) // (ADC) ADC Channel Data Register 0
#define AT91C_ADC_CHSR  (AT91_CAST(AT91_REG *) 	0xFFFC0018) // (ADC) ADC Channel Status Register
#define AT91C_ADC_SR    (AT91_CAST(AT91_REG *) 	0xFFFC001C) // (ADC) ADC Status Register
#define AT91C_ADC_CDR7  (AT91_CAST(AT91_REG *) 	0xFFFC004C) // (ADC) ADC Channel Data Register 7
// ========== Register definition for ISI peripheral ========== 
#define AT91C_ISI_CDBA  (AT91_CAST(AT91_REG *) 	0xFFFC402C) // (ISI) Codec Dma Address Register
#define AT91C_ISI_PDECF (AT91_CAST(AT91_REG *) 	0xFFFC4024) // (ISI) Preview Decimation Factor Register
#define AT91C_ISI_IMR   (AT91_CAST(AT91_REG *) 	0xFFFC4014) // (ISI) Interrupt Mask Register
#define AT91C_ISI_IER   (AT91_CAST(AT91_REG *) 	0xFFFC400C) // (ISI) Interrupt Enable Register
#define AT91C_ISI_SR    (AT91_CAST(AT91_REG *) 	0xFFFC4008) // (ISI) Status Register
#define AT91C_ISI_Y2RSET0 (AT91_CAST(AT91_REG *) 	0xFFFC4030) // (ISI) Color Space Conversion Register
#define AT91C_ISI_PPFBD (AT91_CAST(AT91_REG *) 	0xFFFC4028) // (ISI) Preview Frame Buffer Address Register
#define AT91C_ISI_PSIZE (AT91_CAST(AT91_REG *) 	0xFFFC4020) // (ISI) Preview Size Register
#define AT91C_ISI_IDR   (AT91_CAST(AT91_REG *) 	0xFFFC4010) // (ISI) Interrupt Disable Register
#define AT91C_ISI_R2YSET2 (AT91_CAST(AT91_REG *) 	0xFFFC4040) // (ISI) Color Space Conversion Register
#define AT91C_ISI_R2YSET0 (AT91_CAST(AT91_REG *) 	0xFFFC4038) // (ISI) Color Space Conversion Register
#define AT91C_ISI_CR1   (AT91_CAST(AT91_REG *) 	0xFFFC4000) // (ISI) Control Register 1
#define AT91C_ISI_CR2   (AT91_CAST(AT91_REG *) 	0xFFFC4004) // (ISI) Control Register 2
#define AT91C_ISI_Y2RSET1 (AT91_CAST(AT91_REG *) 	0xFFFC4034) // (ISI) Color Space Conversion Register
#define AT91C_ISI_R2YSET1 (AT91_CAST(AT91_REG *) 	0xFFFC403C) // (ISI) Color Space Conversion Register
// ========== Register definition for LCDC peripheral ========== 
#define AT91C_LCDC_MVAL (AT91_CAST(AT91_REG *) 	0x00500818) // (LCDC) LCD Mode Toggle Rate Value Register
#define AT91C_LCDC_PWRCON (AT91_CAST(AT91_REG *) 	0x0050083C) // (LCDC) Power Control Register
#define AT91C_LCDC_ISR  (AT91_CAST(AT91_REG *) 	0x00500854) // (LCDC) Interrupt Enable Register
#define AT91C_LCDC_FRMP1 (AT91_CAST(AT91_REG *) 	0x00500008) // (LCDC) DMA Frame Pointer Register 1
#define AT91C_LCDC_CTRSTVAL (AT91_CAST(AT91_REG *) 	0x00500844) // (LCDC) Contrast Value Register
#define AT91C_LCDC_ICR  (AT91_CAST(AT91_REG *) 	0x00500858) // (LCDC) Interrupt Clear Register
#define AT91C_LCDC_TIM1 (AT91_CAST(AT91_REG *) 	0x00500808) // (LCDC) LCD Timing Config 1 Register
#define AT91C_LCDC_DMACON (AT91_CAST(AT91_REG *) 	0x0050001C) // (LCDC) DMA Control Register
#define AT91C_LCDC_ITR  (AT91_CAST(AT91_REG *) 	0x00500860) // (LCDC) Interrupts Test Register
#define AT91C_LCDC_IDR  (AT91_CAST(AT91_REG *) 	0x0050084C) // (LCDC) Interrupt Disable Register
#define AT91C_LCDC_DP4_7 (AT91_CAST(AT91_REG *) 	0x00500820) // (LCDC) Dithering Pattern DP4_7 Register
#define AT91C_LCDC_DP5_7 (AT91_CAST(AT91_REG *) 	0x0050082C) // (LCDC) Dithering Pattern DP5_7 Register
#define AT91C_LCDC_IRR  (AT91_CAST(AT91_REG *) 	0x00500864) // (LCDC) Interrupts Raw Status Register
#define AT91C_LCDC_DP3_4 (AT91_CAST(AT91_REG *) 	0x00500830) // (LCDC) Dithering Pattern DP3_4 Register
#define AT91C_LCDC_IMR  (AT91_CAST(AT91_REG *) 	0x00500850) // (LCDC) Interrupt Mask Register
#define AT91C_LCDC_LCDFRCFG (AT91_CAST(AT91_REG *) 	0x00500810) // (LCDC) LCD Frame Config Register
#define AT91C_LCDC_CTRSTCON (AT91_CAST(AT91_REG *) 	0x00500840) // (LCDC) Contrast Control Register
#define AT91C_LCDC_DP1_2 (AT91_CAST(AT91_REG *) 	0x0050081C) // (LCDC) Dithering Pattern DP1_2 Register
#define AT91C_LCDC_FRMP2 (AT91_CAST(AT91_REG *) 	0x0050000C) // (LCDC) DMA Frame Pointer Register 2
#define AT91C_LCDC_LCDCON1 (AT91_CAST(AT91_REG *) 	0x00500800) // (LCDC) LCD Control 1 Register
#define AT91C_LCDC_DP4_5 (AT91_CAST(AT91_REG *) 	0x00500834) // (LCDC) Dithering Pattern DP4_5 Register
#define AT91C_LCDC_FRMA2 (AT91_CAST(AT91_REG *) 	0x00500014) // (LCDC) DMA Frame Address Register 2
#define AT91C_LCDC_BA1  (AT91_CAST(AT91_REG *) 	0x00500000) // (LCDC) DMA Base Address Register 1
#define AT91C_LCDC_DMA2DCFG (AT91_CAST(AT91_REG *) 	0x00500020) // (LCDC) DMA 2D addressing configuration
#define AT91C_LCDC_LUT_ENTRY (AT91_CAST(AT91_REG *) 	0x00500C00) // (LCDC) LUT Entries Register
#define AT91C_LCDC_DP6_7 (AT91_CAST(AT91_REG *) 	0x00500838) // (LCDC) Dithering Pattern DP6_7 Register
#define AT91C_LCDC_FRMCFG (AT91_CAST(AT91_REG *) 	0x00500018) // (LCDC) DMA Frame Configuration Register
#define AT91C_LCDC_TIM2 (AT91_CAST(AT91_REG *) 	0x0050080C) // (LCDC) LCD Timing Config 2 Register
#define AT91C_LCDC_DP3_5 (AT91_CAST(AT91_REG *) 	0x00500824) // (LCDC) Dithering Pattern DP3_5 Register
#define AT91C_LCDC_FRMA1 (AT91_CAST(AT91_REG *) 	0x00500010) // (LCDC) DMA Frame Address Register 1
#define AT91C_LCDC_IER  (AT91_CAST(AT91_REG *) 	0x00500848) // (LCDC) Interrupt Enable Register
#define AT91C_LCDC_DP2_3 (AT91_CAST(AT91_REG *) 	0x00500828) // (LCDC) Dithering Pattern DP2_3 Register
#define AT91C_LCDC_FIFO (AT91_CAST(AT91_REG *) 	0x00500814) // (LCDC) LCD FIFO Register
#define AT91C_LCDC_BA2  (AT91_CAST(AT91_REG *) 	0x00500004) // (LCDC) DMA Base Address Register 2
#define AT91C_LCDC_LCDCON2 (AT91_CAST(AT91_REG *) 	0x00500804) // (LCDC) LCD Control 2 Register
#define AT91C_LCDC_GPR  (AT91_CAST(AT91_REG *) 	0x0050085C) // (LCDC) General Purpose Register
// ========== Register definition for HDMA_CH_0 peripheral ========== 
#define AT91C_HDMA_CH_0_BDSCR (AT91_CAST(AT91_REG *) 	0xFFFFEC5C) // (HDMA_CH_0) HDMA Reserved
#define AT91C_HDMA_CH_0_DADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC40) // (HDMA_CH_0) HDMA Channel Destination Address Register
#define AT91C_HDMA_CH_0_DPIP (AT91_CAST(AT91_REG *) 	0xFFFFEC58) // (HDMA_CH_0) HDMA Channel Destination Picture in Picture Configuration Register
#define AT91C_HDMA_CH_0_DSCR (AT91_CAST(AT91_REG *) 	0xFFFFEC44) // (HDMA_CH_0) HDMA Channel Descriptor Address Register
#define AT91C_HDMA_CH_0_CFG (AT91_CAST(AT91_REG *) 	0xFFFFEC50) // (HDMA_CH_0) HDMA Channel Configuration Register
#define AT91C_HDMA_CH_0_SPIP (AT91_CAST(AT91_REG *) 	0xFFFFEC54) // (HDMA_CH_0) HDMA Channel Source Picture in Picture Configuration Register
#define AT91C_HDMA_CH_0_CADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC60) // (HDMA_CH_0) HDMA Reserved
#define AT91C_HDMA_CH_0_CTRLA (AT91_CAST(AT91_REG *) 	0xFFFFEC48) // (HDMA_CH_0) HDMA Channel Control A Register
#define AT91C_HDMA_CH_0_CTRLB (AT91_CAST(AT91_REG *) 	0xFFFFEC4C) // (HDMA_CH_0) HDMA Channel Control B Register
#define AT91C_HDMA_CH_0_SADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC3C) // (HDMA_CH_0) HDMA Channel Source Address Register
// ========== Register definition for HDMA_CH_1 peripheral ========== 
#define AT91C_HDMA_CH_1_CADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC88) // (HDMA_CH_1) HDMA Reserved
#define AT91C_HDMA_CH_1_DPIP (AT91_CAST(AT91_REG *) 	0xFFFFEC80) // (HDMA_CH_1) HDMA Channel Destination Picture in Picture Configuration Register
#define AT91C_HDMA_CH_1_CTRLB (AT91_CAST(AT91_REG *) 	0xFFFFEC74) // (HDMA_CH_1) HDMA Channel Control B Register
#define AT91C_HDMA_CH_1_SADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC64) // (HDMA_CH_1) HDMA Channel Source Address Register
#define AT91C_HDMA_CH_1_BDSCR (AT91_CAST(AT91_REG *) 	0xFFFFEC84) // (HDMA_CH_1) HDMA Reserved
#define AT91C_HDMA_CH_1_CFG (AT91_CAST(AT91_REG *) 	0xFFFFEC78) // (HDMA_CH_1) HDMA Channel Configuration Register
#define AT91C_HDMA_CH_1_DSCR (AT91_CAST(AT91_REG *) 	0xFFFFEC6C) // (HDMA_CH_1) HDMA Channel Descriptor Address Register
#define AT91C_HDMA_CH_1_DADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC68) // (HDMA_CH_1) HDMA Channel Destination Address Register
#define AT91C_HDMA_CH_1_CTRLA (AT91_CAST(AT91_REG *) 	0xFFFFEC70) // (HDMA_CH_1) HDMA Channel Control A Register
#define AT91C_HDMA_CH_1_SPIP (AT91_CAST(AT91_REG *) 	0xFFFFEC7C) // (HDMA_CH_1) HDMA Channel Source Picture in Picture Configuration Register
// ========== Register definition for HDMA_CH_2 peripheral ========== 
#define AT91C_HDMA_CH_2_SADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC8C) // (HDMA_CH_2) HDMA Channel Source Address Register
#define AT91C_HDMA_CH_2_BDSCR (AT91_CAST(AT91_REG *) 	0xFFFFECAC) // (HDMA_CH_2) HDMA Reserved
#define AT91C_HDMA_CH_2_DPIP (AT91_CAST(AT91_REG *) 	0xFFFFECA8) // (HDMA_CH_2) HDMA Channel Destination Picture in Picture Configuration Register
#define AT91C_HDMA_CH_2_SPIP (AT91_CAST(AT91_REG *) 	0xFFFFECA4) // (HDMA_CH_2) HDMA Channel Source Picture in Picture Configuration Register
#define AT91C_HDMA_CH_2_DADDR (AT91_CAST(AT91_REG *) 	0xFFFFEC90) // (HDMA_CH_2) HDMA Channel Destination Address Register
#define AT91C_HDMA_CH_2_DSCR (AT91_CAST(AT91_REG *) 	0xFFFFEC94) // (HDMA_CH_2) HDMA Channel Descriptor Address Register
#define AT91C_HDMA_CH_2_CTRLA (AT91_CAST(AT91_REG *) 	0xFFFFEC98) // (HDMA_CH_2) HDMA Channel Control A Register
#define AT91C_HDMA_CH_2_CADDR (AT91_CAST(AT91_REG *) 	0xFFFFECB0) // (HDMA_CH_2) HDMA Reserved
#define AT91C_HDMA_CH_2_CFG (AT91_CAST(AT91_REG *) 	0xFFFFECA0) // (HDMA_CH_2) HDMA Channel Configuration Register
#define AT91C_HDMA_CH_2_CTRLB (AT91_CAST(AT91_REG *) 	0xFFFFEC9C) // (HDMA_CH_2) HDMA Channel Control B Register
// ========== Register definition for HDMA_CH_3 peripheral ========== 
#define AT91C_HDMA_CH_3_SPIP (AT91_CAST(AT91_REG *) 	0xFFFFECCC) // (HDMA_CH_3) HDMA Channel Source Picture in Picture Configuration Register
#define AT91C_HDMA_CH_3_CTRLA (AT91_CAST(AT91_REG *) 	0xFFFFECC0) // (HDMA_CH_3) HDMA Channel Control A Register
#define AT91C_HDMA_CH_3_DPIP (AT91_CAST(AT91_REG *) 	0xFFFFECD0) // (HDMA_CH_3) HDMA Channel Destination Picture in Picture Configuration Register
#define AT91C_HDMA_CH_3_CTRLB (AT91_CAST(AT91_REG *) 	0xFFFFECC4) // (HDMA_CH_3) HDMA Channel Control B Register
#define AT91C_HDMA_CH_3_BDSCR (AT91_CAST(AT91_REG *) 	0xFFFFECD4) // (HDMA_CH_3) HDMA Reserved
#define AT91C_HDMA_CH_3_DSCR (AT91_CAST(AT91_REG *) 	0xFFFFECBC) // (HDMA_CH_3) HDMA Channel Descriptor Address Register
#define AT91C_HDMA_CH_3_CADDR (AT91_CAST(AT91_REG *) 	0xFFFFECD8) // (HDMA_CH_3) HDMA Reserved
#define AT91C_HDMA_CH_3_CFG (AT91_CAST(AT91_REG *) 	0xFFFFECC8) // (HDMA_CH_3) HDMA Channel Configuration Register
#define AT91C_HDMA_CH_3_DADDR (AT91_CAST(AT91_REG *) 	0xFFFFECB8) // (HDMA_CH_3) HDMA Channel Destination Address Register
#define AT91C_HDMA_CH_3_SADDR (AT91_CAST(AT91_REG *) 	0xFFFFECB4) // (HDMA_CH_3) HDMA Channel Source Address Register
// ========== Register definition for HDMA peripheral ========== 
#define AT91C_HDMA_EBCIDR (AT91_CAST(AT91_REG *) 	0xFFFFEC1C) // (HDMA) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register
#define AT91C_HDMA_LAST (AT91_CAST(AT91_REG *) 	0xFFFFEC10) // (HDMA) HDMA Software Last Transfer Flag Register
#define AT91C_HDMA_SREQ (AT91_CAST(AT91_REG *) 	0xFFFFEC08) // (HDMA) HDMA Software Single Request Register
#define AT91C_HDMA_RSVD0 (AT91_CAST(AT91_REG *) 	0xFFFFEC34) // (HDMA) HDMA Reserved
#define AT91C_HDMA_EBCIER (AT91_CAST(AT91_REG *) 	0xFFFFEC18) // (HDMA) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register
#define AT91C_HDMA_GCFG (AT91_CAST(AT91_REG *) 	0xFFFFEC00) // (HDMA) HDMA Global Configuration Register
#define AT91C_HDMA_CHER (AT91_CAST(AT91_REG *) 	0xFFFFEC28) // (HDMA) HDMA Channel Handler Enable Register
#define AT91C_HDMA_RSVD1 (AT91_CAST(AT91_REG *) 	0xFFFFEC38) // (HDMA) HDMA Reserved
#define AT91C_HDMA_CHDR (AT91_CAST(AT91_REG *) 	0xFFFFEC2C) // (HDMA) HDMA Channel Handler Disable Register
#define AT91C_HDMA_EBCIMR (AT91_CAST(AT91_REG *) 	0xFFFFEC20) // (HDMA) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register
#define AT91C_HDMA_BREQ (AT91_CAST(AT91_REG *) 	0xFFFFEC0C) // (HDMA) HDMA Software Chunk Transfer Request Register
#define AT91C_HDMA_SYNC (AT91_CAST(AT91_REG *) 	0xFFFFEC14) // (HDMA) HDMA Request Synchronization Register
#define AT91C_HDMA_EN   (AT91_CAST(AT91_REG *) 	0xFFFFEC04) // (HDMA) HDMA Controller Enable Register
#define AT91C_HDMA_EBCISR (AT91_CAST(AT91_REG *) 	0xFFFFEC24) // (HDMA) HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Status Register
#define AT91C_HDMA_CHSR (AT91_CAST(AT91_REG *) 	0xFFFFEC30) // (HDMA) HDMA Channel Handler Status Register
// ========== Register definition for SYS peripheral ========== 
#define AT91C_SYS_SLCKSEL (AT91_CAST(AT91_REG *) 	0xFFFFFD50) // (SYS) Slow Clock Selection Register
#define AT91C_SYS_GPBR  (AT91_CAST(AT91_REG *) 	0xFFFFFD60) // (SYS) General Purpose Register
// ========== Register definition for UHP peripheral ========== 
#define AT91C_UHP_HcRhPortStatus (AT91_CAST(AT91_REG *) 	0x00700054) // (UHP) Root Hub Port Status Register
#define AT91C_UHP_HcFmRemaining (AT91_CAST(AT91_REG *) 	0x00700038) // (UHP) Bit time remaining in the current Frame
#define AT91C_UHP_HcInterruptEnable (AT91_CAST(AT91_REG *) 	0x00700010) // (UHP) Interrupt Enable Register
#define AT91C_UHP_HcControl (AT91_CAST(AT91_REG *) 	0x00700004) // (UHP) Operating modes for the Host Controller
#define AT91C_UHP_HcPeriodicStart (AT91_CAST(AT91_REG *) 	0x00700040) // (UHP) Periodic Start
#define AT91C_UHP_HcInterruptStatus (AT91_CAST(AT91_REG *) 	0x0070000C) // (UHP) Interrupt Status Register
#define AT91C_UHP_HcRhDescriptorB (AT91_CAST(AT91_REG *) 	0x0070004C) // (UHP) Root Hub characteristics B
#define AT91C_UHP_HcInterruptDisable (AT91_CAST(AT91_REG *) 	0x00700014) // (UHP) Interrupt Disable Register
#define AT91C_UHP_HcPeriodCurrentED (AT91_CAST(AT91_REG *) 	0x0070001C) // (UHP) Current Isochronous or Interrupt Endpoint Descriptor
#define AT91C_UHP_HcRhDescriptorA (AT91_CAST(AT91_REG *) 	0x00700048) // (UHP) Root Hub characteristics A
#define AT91C_UHP_HcRhStatus (AT91_CAST(AT91_REG *) 	0x00700050) // (UHP) Root Hub Status register
#define AT91C_UHP_HcBulkCurrentED (AT91_CAST(AT91_REG *) 	0x0070002C) // (UHP) Current endpoint of the Bulk list
#define AT91C_UHP_HcControlHeadED (AT91_CAST(AT91_REG *) 	0x00700020) // (UHP) First Endpoint Descriptor of the Control list
#define AT91C_UHP_HcLSThreshold (AT91_CAST(AT91_REG *) 	0x00700044) // (UHP) LS Threshold
#define AT91C_UHP_HcRevision (AT91_CAST(AT91_REG *) 	0x00700000) // (UHP) Revision
#define AT91C_UHP_HcBulkDoneHead (AT91_CAST(AT91_REG *) 	0x00700030) // (UHP) Last completed transfer descriptor
#define AT91C_UHP_HcFmNumber (AT91_CAST(AT91_REG *) 	0x0070003C) // (UHP) Frame number
#define AT91C_UHP_HcFmInterval (AT91_CAST(AT91_REG *) 	0x00700034) // (UHP) Bit time between 2 consecutive SOFs
#define AT91C_UHP_HcBulkHeadED (AT91_CAST(AT91_REG *) 	0x00700028) // (UHP) First endpoint register of the Bulk list
#define AT91C_UHP_HcHCCA (AT91_CAST(AT91_REG *) 	0x00700018) // (UHP) Pointer to the Host Controller Communication Area
#define AT91C_UHP_HcCommandStatus (AT91_CAST(AT91_REG *) 	0x00700008) // (UHP) Command & status Register
#define AT91C_UHP_HcControlCurrentED (AT91_CAST(AT91_REG *) 	0x00700024) // (UHP) Endpoint Control and Status Register

// *****************************************************************************
//               PIO DEFINITIONS FOR AT91CAP9_UMC
// *****************************************************************************
#define AT91C_PIO_PA0        (1 <<  0) // Pin Controlled by PA0
#define AT91C_PA0_MCI0_DA0 (AT91C_PIO_PA0) //  
#define AT91C_PA0_SPI0_MISO (AT91C_PIO_PA0) //  
#define AT91C_PIO_PA1        (1 <<  1) // Pin Controlled by PA1
#define AT91C_PA1_MCI0_CDA (AT91C_PIO_PA1) //  
#define AT91C_PA1_SPI0_MOSI (AT91C_PIO_PA1) //  
#define AT91C_PIO_PA10       (1 << 10) // Pin Controlled by PA10
#define AT91C_PA10_IRQ0     (AT91C_PIO_PA10) //  
#define AT91C_PA10_PWM1     (AT91C_PIO_PA10) //  
#define AT91C_PIO_PA11       (1 << 11) // Pin Controlled by PA11
#define AT91C_PA11_DMARQ0   (AT91C_PIO_PA11) //  
#define AT91C_PA11_PWM3     (AT91C_PIO_PA11) //  
#define AT91C_PIO_PA12       (1 << 12) // Pin Controlled by PA12
#define AT91C_PA12_CANTX    (AT91C_PIO_PA12) //  
#define AT91C_PA12_PCK0     (AT91C_PIO_PA12) //  
#define AT91C_PIO_PA13       (1 << 13) // Pin Controlled by PA13
#define AT91C_PA13_CANRX    (AT91C_PIO_PA13) //  
#define AT91C_PIO_PA14       (1 << 14) // Pin Controlled by PA14
#define AT91C_PA14_TCLK2    (AT91C_PIO_PA14) //  
#define AT91C_PA14_IRQ1     (AT91C_PIO_PA14) //  
#define AT91C_PIO_PA15       (1 << 15) // Pin Controlled by PA15
#define AT91C_PA15_DMARQ3   (AT91C_PIO_PA15) //  
#define AT91C_PA15_PCK2     (AT91C_PIO_PA15) //  
#define AT91C_PIO_PA16       (1 << 16) // Pin Controlled by PA16
#define AT91C_PA16_MCI1_CK  (AT91C_PIO_PA16) //  
#define AT91C_PA16_ISI_D0   (AT91C_PIO_PA16) //  
#define AT91C_PIO_PA17       (1 << 17) // Pin Controlled by PA17
#define AT91C_PA17_MCI1_CDA (AT91C_PIO_PA17) //  
#define AT91C_PA17_ISI_D1   (AT91C_PIO_PA17) //  
#define AT91C_PIO_PA18       (1 << 18) // Pin Controlled by PA18
#define AT91C_PA18_MCI1_DA0 (AT91C_PIO_PA18) //  
#define AT91C_PA18_ISI_D2   (AT91C_PIO_PA18) //  
#define AT91C_PIO_PA19       (1 << 19) // Pin Controlled by PA19
#define AT91C_PA19_MCI1_DA1 (AT91C_PIO_PA19) //  
#define AT91C_PA19_ISI_D3   (AT91C_PIO_PA19) //  
#define AT91C_PIO_PA2        (1 <<  2) // Pin Controlled by PA2
#define AT91C_PA2_MCI0_CK  (AT91C_PIO_PA2) //  
#define AT91C_PA2_SPI0_SPCK (AT91C_PIO_PA2) //  
#define AT91C_PIO_PA20       (1 << 20) // Pin Controlled by PA20
#define AT91C_PA20_MCI1_DA2 (AT91C_PIO_PA20) //  
#define AT91C_PA20_ISI_D4   (AT91C_PIO_PA20) //  
#define AT91C_PIO_PA21       (1 << 21) // Pin Controlled by PA21
#define AT91C_PA21_MCI1_DA3 (AT91C_PIO_PA21) //  
#define AT91C_PA21_ISI_D5   (AT91C_PIO_PA21) //  
#define AT91C_PIO_PA22       (1 << 22) // Pin Controlled by PA22
#define AT91C_PA22_TXD0     (AT91C_PIO_PA22) //  
#define AT91C_PA22_ISI_D6   (AT91C_PIO_PA22) //  
#define AT91C_PIO_PA23       (1 << 23) // Pin Controlled by PA23
#define AT91C_PA23_RXD0     (AT91C_PIO_PA23) //  
#define AT91C_PA23_ISI_D7   (AT91C_PIO_PA23) //  
#define AT91C_PIO_PA24       (1 << 24) // Pin Controlled by PA24
#define AT91C_PA24_RTS0     (AT91C_PIO_PA24) //  
#define AT91C_PA24_ISI_PCK  (AT91C_PIO_PA24) //  
#define AT91C_PIO_PA25       (1 << 25) // Pin Controlled by PA25
#define AT91C_PA25_CTS0     (AT91C_PIO_PA25) //  
#define AT91C_PA25_ISI_HSYNC (AT91C_PIO_PA25) //  
#define AT91C_PIO_PA26       (1 << 26) // Pin Controlled by PA26
#define AT91C_PA26_SCK0     (AT91C_PIO_PA26) //  
#define AT91C_PA26_ISI_VSYNC (AT91C_PIO_PA26) //  
#define AT91C_PIO_PA27       (1 << 27) // Pin Controlled by PA27
#define AT91C_PA27_PCK1     (AT91C_PIO_PA27) //  
#define AT91C_PA27_ISI_MCK  (AT91C_PIO_PA27) //  
#define AT91C_PIO_PA28       (1 << 28) // Pin Controlled by PA28
#define AT91C_PA28_SPI0_NPCS3A (AT91C_PIO_PA28) //  
#define AT91C_PA28_ISI_D8   (AT91C_PIO_PA28) //  
#define AT91C_PIO_PA29       (1 << 29) // Pin Controlled by PA29
#define AT91C_PA29_TIOA0    (AT91C_PIO_PA29) //  
#define AT91C_PA29_ISI_D9   (AT91C_PIO_PA29) //  
#define AT91C_PIO_PA3        (1 <<  3) // Pin Controlled by PA3
#define AT91C_PA3_MCI0_DA1 (AT91C_PIO_PA3) //  
#define AT91C_PA3_SPI0_NPCS1 (AT91C_PIO_PA3) //  
#define AT91C_PIO_PA30       (1 << 30) // Pin Controlled by PA30
#define AT91C_PA30_TIOB0    (AT91C_PIO_PA30) //  
#define AT91C_PA30_ISI_D10  (AT91C_PIO_PA30) //  
#define AT91C_PIO_PA31       (1 << 31) // Pin Controlled by PA31
#define AT91C_PA31_DMARQ1   (AT91C_PIO_PA31) //  
#define AT91C_PA31_ISI_D11  (AT91C_PIO_PA31) //  
#define AT91C_PIO_PA4        (1 <<  4) // Pin Controlled by PA4
#define AT91C_PA4_MCI0_DA2 (AT91C_PIO_PA4) //  
#define AT91C_PA4_SPI0_NPCS2A (AT91C_PIO_PA4) //  
#define AT91C_PIO_PA5        (1 <<  5) // Pin Controlled by PA5
#define AT91C_PA5_MCI0_DA3 (AT91C_PIO_PA5) //  
#define AT91C_PA5_SPI0_NPCS0 (AT91C_PIO_PA5) //  
#define AT91C_PIO_PA6        (1 <<  6) // Pin Controlled by PA6
#define AT91C_PA6_AC97FS   (AT91C_PIO_PA6) //  
#define AT91C_PIO_PA7        (1 <<  7) // Pin Controlled by PA7
#define AT91C_PA7_AC97CK   (AT91C_PIO_PA7) //  
#define AT91C_PIO_PA8        (1 <<  8) // Pin Controlled by PA8
#define AT91C_PA8_AC97TX   (AT91C_PIO_PA8) //  
#define AT91C_PIO_PA9        (1 <<  9) // Pin Controlled by PA9
#define AT91C_PA9_AC97RX   (AT91C_PIO_PA9) //  
#define AT91C_PIO_PB0        (1 <<  0) // Pin Controlled by PB0
#define AT91C_PB0_TF0      (AT91C_PIO_PB0) //  
#define AT91C_PIO_PB1        (1 <<  1) // Pin Controlled by PB1
#define AT91C_PB1_TK0      (AT91C_PIO_PB1) //  
#define AT91C_PIO_PB10       (1 << 10) // Pin Controlled by PB10
#define AT91C_PB10_RK1      (AT91C_PIO_PB10) //  
#define AT91C_PB10_PCK1     (AT91C_PIO_PB10) //  
#define AT91C_PIO_PB11       (1 << 11) // Pin Controlled by PB11
#define AT91C_PB11_RF1      (AT91C_PIO_PB11) //  
#define AT91C_PIO_PB12       (1 << 12) // Pin Controlled by PB12
#define AT91C_PB12_SPI1_MISO (AT91C_PIO_PB12) //  
#define AT91C_PIO_PB13       (1 << 13) // Pin Controlled by PB13
#define AT91C_PB13_SPI1_MOSI (AT91C_PIO_PB13) //  
#define AT91C_PB13_AD0      (AT91C_PIO_PB13) //  
#define AT91C_PIO_PB14       (1 << 14) // Pin Controlled by PB14
#define AT91C_PB14_SPI1_SPCK (AT91C_PIO_PB14) //  
#define AT91C_PB14_AD1      (AT91C_PIO_PB14) //  
#define AT91C_PIO_PB15       (1 << 15) // Pin Controlled by PB15
#define AT91C_PB15_SPI1_NPCS0 (AT91C_PIO_PB15) //  
#define AT91C_PB15_AD2      (AT91C_PIO_PB15) //  
#define AT91C_PIO_PB16       (1 << 16) // Pin Controlled by PB16
#define AT91C_PB16_SPI1_NPCS1 (AT91C_PIO_PB16) //  
#define AT91C_PB16_AD3      (AT91C_PIO_PB16) //  
#define AT91C_PIO_PB17       (1 << 17) // Pin Controlled by PB17
#define AT91C_PB17_SPI1_NPCS2B (AT91C_PIO_PB17) //  
#define AT91C_PB17_AD4      (AT91C_PIO_PB17) //  
#define AT91C_PIO_PB18       (1 << 18) // Pin Controlled by PB18
#define AT91C_PB18_SPI1_NPCS3B (AT91C_PIO_PB18) //  
#define AT91C_PB18_AD5      (AT91C_PIO_PB18) //  
#define AT91C_PIO_PB19       (1 << 19) // Pin Controlled by PB19
#define AT91C_PB19_PWM0     (AT91C_PIO_PB19) //  
#define AT91C_PB19_AD6      (AT91C_PIO_PB19) //  
#define AT91C_PIO_PB2        (1 <<  2) // Pin Controlled by PB2
#define AT91C_PB2_TD0      (AT91C_PIO_PB2) //  
#define AT91C_PIO_PB20       (1 << 20) // Pin Controlled by PB20
#define AT91C_PB20_PWM1     (AT91C_PIO_PB20) //  
#define AT91C_PB20_AD7      (AT91C_PIO_PB20) //  
#define AT91C_PIO_PB21       (1 << 21) // Pin Controlled by PB21
#define AT91C_PB21_E_TXCK   (AT91C_PIO_PB21) //  
#define AT91C_PB21_TIOA2    (AT91C_PIO_PB21) //  
#define AT91C_PIO_PB22       (1 << 22) // Pin Controlled by PB22
#define AT91C_PB22_E_RXDV   (AT91C_PIO_PB22) //  
#define AT91C_PB22_TIOB2    (AT91C_PIO_PB22) //  
#define AT91C_PIO_PB23       (1 << 23) // Pin Controlled by PB23
#define AT91C_PB23_E_TX0    (AT91C_PIO_PB23) //  
#define AT91C_PB23_PCK3     (AT91C_PIO_PB23) //  
#define AT91C_PIO_PB24       (1 << 24) // Pin Controlled by PB24
#define AT91C_PB24_E_TX1    (AT91C_PIO_PB24) //  
#define AT91C_PIO_PB25       (1 << 25) // Pin Controlled by PB25
#define AT91C_PB25_E_RX0    (AT91C_PIO_PB25) //  
#define AT91C_PIO_PB26       (1 << 26) // Pin Controlled by PB26
#define AT91C_PB26_E_RX1    (AT91C_PIO_PB26) //  
#define AT91C_PIO_PB27       (1 << 27) // Pin Controlled by PB27
#define AT91C_PB27_E_RXER   (AT91C_PIO_PB27) //  
#define AT91C_PIO_PB28       (1 << 28) // Pin Controlled by PB28
#define AT91C_PB28_E_TXEN   (AT91C_PIO_PB28) //  
#define AT91C_PB28_TCLK0    (AT91C_PIO_PB28) //  
#define AT91C_PIO_PB29       (1 << 29) // Pin Controlled by PB29
#define AT91C_PB29_E_MDC    (AT91C_PIO_PB29) //  
#define AT91C_PB29_PWM3     (AT91C_PIO_PB29) //  
#define AT91C_PIO_PB3        (1 <<  3) // Pin Controlled by PB3
#define AT91C_PB3_RD0      (AT91C_PIO_PB3) //  
#define AT91C_PIO_PB30       (1 << 30) // Pin Controlled by PB30
#define AT91C_PB30_E_MDIO   (AT91C_PIO_PB30) //  
#define AT91C_PIO_PB31       (1 << 31) // Pin Controlled by PB31
#define AT91C_PB31_ADTRIG   (AT91C_PIO_PB31) //  
#define AT91C_PB31_E_F100   (AT91C_PIO_PB31) //  
#define AT91C_PIO_PB4        (1 <<  4) // Pin Controlled by PB4
#define AT91C_PB4_RK0      (AT91C_PIO_PB4) //  
#define AT91C_PB4_TWD      (AT91C_PIO_PB4) //  
#define AT91C_PIO_PB5        (1 <<  5) // Pin Controlled by PB5
#define AT91C_PB5_RF0      (AT91C_PIO_PB5) //  
#define AT91C_PB5_TWCK     (AT91C_PIO_PB5) //  
#define AT91C_PIO_PB6        (1 <<  6) // Pin Controlled by PB6
#define AT91C_PB6_TF1      (AT91C_PIO_PB6) //  
#define AT91C_PB6_TIOA1    (AT91C_PIO_PB6) //  
#define AT91C_PIO_PB7        (1 <<  7) // Pin Controlled by PB7
#define AT91C_PB7_TK1      (AT91C_PIO_PB7) //  
#define AT91C_PB7_TIOB1    (AT91C_PIO_PB7) //  
#define AT91C_PIO_PB8        (1 <<  8) // Pin Controlled by PB8
#define AT91C_PB8_TD1      (AT91C_PIO_PB8) //  
#define AT91C_PB8_PWM2     (AT91C_PIO_PB8) //  
#define AT91C_PIO_PB9        (1 <<  9) // Pin Controlled by PB9
#define AT91C_PB9_RD1      (AT91C_PIO_PB9) //  
#define AT91C_PB9_LCDCC    (AT91C_PIO_PB9) //  
#define AT91C_PIO_PC0        (1 <<  0) // Pin Controlled by PC0
#define AT91C_PC0_LCDVSYNC (AT91C_PIO_PC0) //  
#define AT91C_PIO_PC1        (1 <<  1) // Pin Controlled by PC1
#define AT91C_PC1_LCDHSYNC (AT91C_PIO_PC1) //  
#define AT91C_PIO_PC10       (1 << 10) // Pin Controlled by PC10
#define AT91C_PC10_LCDD6    (AT91C_PIO_PC10) //  
#define AT91C_PC10_LCDD11B  (AT91C_PIO_PC10) //  
#define AT91C_PIO_PC11       (1 << 11) // Pin Controlled by PC11
#define AT91C_PC11_LCDD7    (AT91C_PIO_PC11) //  
#define AT91C_PC11_LCDD12B  (AT91C_PIO_PC11) //  
#define AT91C_PIO_PC12       (1 << 12) // Pin Controlled by PC12
#define AT91C_PC12_LCDD8    (AT91C_PIO_PC12) //  
#define AT91C_PC12_LCDD13B  (AT91C_PIO_PC12) //  
#define AT91C_PIO_PC13       (1 << 13) // Pin Controlled by PC13
#define AT91C_PC13_LCDD9    (AT91C_PIO_PC13) //  
#define AT91C_PC13_LCDD14B  (AT91C_PIO_PC13) //  
#define AT91C_PIO_PC14       (1 << 14) // Pin Controlled by PC14
#define AT91C_PC14_LCDD10   (AT91C_PIO_PC14) //  
#define AT91C_PC14_LCDD15B  (AT91C_PIO_PC14) //  
#define AT91C_PIO_PC15       (1 << 15) // Pin Controlled by PC15
#define AT91C_PC15_LCDD11   (AT91C_PIO_PC15) //  
#define AT91C_PC15_LCDD19B  (AT91C_PIO_PC15) //  
#define AT91C_PIO_PC16       (1 << 16) // Pin Controlled by PC16
#define AT91C_PC16_LCDD12   (AT91C_PIO_PC16) //  
#define AT91C_PC16_LCDD20B  (AT91C_PIO_PC16) //  
#define AT91C_PIO_PC17       (1 << 17) // Pin Controlled by PC17
#define AT91C_PC17_LCDD13   (AT91C_PIO_PC17) //  
#define AT91C_PC17_LCDD21B  (AT91C_PIO_PC17) //  
#define AT91C_PIO_PC18       (1 << 18) // Pin Controlled by PC18
#define AT91C_PC18_LCDD14   (AT91C_PIO_PC18) //  
#define AT91C_PC18_LCDD22B  (AT91C_PIO_PC18) //  
#define AT91C_PIO_PC19       (1 << 19) // Pin Controlled by PC19
#define AT91C_PC19_LCDD15   (AT91C_PIO_PC19) //  
#define AT91C_PC19_LCDD23B  (AT91C_PIO_PC19) //  
#define AT91C_PIO_PC2        (1 <<  2) // Pin Controlled by PC2
#define AT91C_PC2_LCDDOTCK (AT91C_PIO_PC2) //  
#define AT91C_PIO_PC20       (1 << 20) // Pin Controlled by PC20
#define AT91C_PC20_LCDD16   (AT91C_PIO_PC20) //  
#define AT91C_PC20_E_TX2    (AT91C_PIO_PC20) //  
#define AT91C_PIO_PC21       (1 << 21) // Pin Controlled by PC21
#define AT91C_PC21_LCDD17   (AT91C_PIO_PC21) //  
#define AT91C_PC21_E_TX3    (AT91C_PIO_PC21) //  
#define AT91C_PIO_PC22       (1 << 22) // Pin Controlled by PC22
#define AT91C_PC22_LCDD18   (AT91C_PIO_PC22) //  
#define AT91C_PC22_E_RX2    (AT91C_PIO_PC22) //  
#define AT91C_PIO_PC23       (1 << 23) // Pin Controlled by PC23
#define AT91C_PC23_LCDD19   (AT91C_PIO_PC23) //  
#define AT91C_PC23_E_RX3    (AT91C_PIO_PC23) //  
#define AT91C_PIO_PC24       (1 << 24) // Pin Controlled by PC24
#define AT91C_PC24_LCDD20   (AT91C_PIO_PC24) //  
#define AT91C_PC24_E_TXER   (AT91C_PIO_PC24) //  
#define AT91C_PIO_PC25       (1 << 25) // Pin Controlled by PC25
#define AT91C_PC25_LCDD21   (AT91C_PIO_PC25) //  
#define AT91C_PC25_E_CRS    (AT91C_PIO_PC25) //  
#define AT91C_PIO_PC26       (1 << 26) // Pin Controlled by PC26
#define AT91C_PC26_LCDD22   (AT91C_PIO_PC26) //  
#define AT91C_PC26_E_COL    (AT91C_PIO_PC26) //  
#define AT91C_PIO_PC27       (1 << 27) // Pin Controlled by PC27
#define AT91C_PC27_LCDD23   (AT91C_PIO_PC27) //  
#define AT91C_PC27_E_RXCK   (AT91C_PIO_PC27) //  
#define AT91C_PIO_PC28       (1 << 28) // Pin Controlled by PC28
#define AT91C_PC28_PWM0     (AT91C_PIO_PC28) //  
#define AT91C_PC28_TCLK1    (AT91C_PIO_PC28) //  
#define AT91C_PIO_PC29       (1 << 29) // Pin Controlled by PC29
#define AT91C_PC29_PCK0     (AT91C_PIO_PC29) //  
#define AT91C_PC29_PWM2     (AT91C_PIO_PC29) //  
#define AT91C_PIO_PC3        (1 <<  3) // Pin Controlled by PC3
#define AT91C_PC3_LCDDEN   (AT91C_PIO_PC3) //  
#define AT91C_PC3_PWM1     (AT91C_PIO_PC3) //  
#define AT91C_PIO_PC30       (1 << 30) // Pin Controlled by PC30
#define AT91C_PC30_DRXD     (AT91C_PIO_PC30) //  
#define AT91C_PIO_PC31       (1 << 31) // Pin Controlled by PC31
#define AT91C_PC31_DTXD     (AT91C_PIO_PC31) //  
#define AT91C_PIO_PC4        (1 <<  4) // Pin Controlled by PC4
#define AT91C_PC4_LCDD0    (AT91C_PIO_PC4) //  
#define AT91C_PC4_LCDD3B   (AT91C_PIO_PC4) //  
#define AT91C_PIO_PC5        (1 <<  5) // Pin Controlled by PC5
#define AT91C_PC5_LCDD1    (AT91C_PIO_PC5) //  
#define AT91C_PC5_LCDD4B   (AT91C_PIO_PC5) //  
#define AT91C_PIO_PC6        (1 <<  6) // Pin Controlled by PC6
#define AT91C_PC6_LCDD2    (AT91C_PIO_PC6) //  
#define AT91C_PC6_LCDD5B   (AT91C_PIO_PC6) //  
#define AT91C_PIO_PC7        (1 <<  7) // Pin Controlled by PC7
#define AT91C_PC7_LCDD3    (AT91C_PIO_PC7) //  
#define AT91C_PC7_LCDD6B   (AT91C_PIO_PC7) //  
#define AT91C_PIO_PC8        (1 <<  8) // Pin Controlled by PC8
#define AT91C_PC8_LCDD4    (AT91C_PIO_PC8) //  
#define AT91C_PC8_LCDD7B   (AT91C_PIO_PC8) //  
#define AT91C_PIO_PC9        (1 <<  9) // Pin Controlled by PC9
#define AT91C_PC9_LCDD5    (AT91C_PIO_PC9) //  
#define AT91C_PC9_LCDD10B  (AT91C_PIO_PC9) //  
#define AT91C_PIO_PD0        (1 <<  0) // Pin Controlled by PD0
#define AT91C_PD0_TXD1     (AT91C_PIO_PD0) //  
#define AT91C_PD0_SPI0_NPCS2D (AT91C_PIO_PD0) //  
#define AT91C_PIO_PD1        (1 <<  1) // Pin Controlled by PD1
#define AT91C_PD1_RXD1     (AT91C_PIO_PD1) //  
#define AT91C_PD1_SPI0_NPCS3D (AT91C_PIO_PD1) //  
#define AT91C_PIO_PD10       (1 << 10) // Pin Controlled by PD10
#define AT91C_PD10_EBI_CFCE2 (AT91C_PIO_PD10) //  
#define AT91C_PD10_SCK1     (AT91C_PIO_PD10) //  
#define AT91C_PIO_PD11       (1 << 11) // Pin Controlled by PD11
#define AT91C_PD11_EBI_NCS2 (AT91C_PIO_PD11) //  
#define AT91C_PIO_PD12       (1 << 12) // Pin Controlled by PD12
#define AT91C_PD12_EBI_A23  (AT91C_PIO_PD12) //  
#define AT91C_PIO_PD13       (1 << 13) // Pin Controlled by PD13
#define AT91C_PD13_EBI_A24  (AT91C_PIO_PD13) //  
#define AT91C_PIO_PD14       (1 << 14) // Pin Controlled by PD14
#define AT91C_PD14_EBI_A25_CFRNW (AT91C_PIO_PD14) //  
#define AT91C_PIO_PD15       (1 << 15) // Pin Controlled by PD15
#define AT91C_PD15_EBI_NCS3_NANDCS (AT91C_PIO_PD15) //  
#define AT91C_PIO_PD16       (1 << 16) // Pin Controlled by PD16
#define AT91C_PD16_EBI_D16  (AT91C_PIO_PD16) //  
#define AT91C_PIO_PD17       (1 << 17) // Pin Controlled by PD17
#define AT91C_PD17_EBI_D17  (AT91C_PIO_PD17) //  
#define AT91C_PIO_PD18       (1 << 18) // Pin Controlled by PD18
#define AT91C_PD18_EBI_D18  (AT91C_PIO_PD18) //  
#define AT91C_PIO_PD19       (1 << 19) // Pin Controlled by PD19
#define AT91C_PD19_EBI_D19  (AT91C_PIO_PD19) //  
#define AT91C_PIO_PD2        (1 <<  2) // Pin Controlled by PD2
#define AT91C_PD2_TXD2     (AT91C_PIO_PD2) //  
#define AT91C_PD2_SPI1_NPCS2D (AT91C_PIO_PD2) //  
#define AT91C_PIO_PD20       (1 << 20) // Pin Controlled by PD20
#define AT91C_PD20_EBI_D20  (AT91C_PIO_PD20) //  
#define AT91C_PIO_PD21       (1 << 21) // Pin Controlled by PD21
#define AT91C_PD21_EBI_D21  (AT91C_PIO_PD21) //  
#define AT91C_PIO_PD22       (1 << 22) // Pin Controlled by PD22
#define AT91C_PD22_EBI_D22  (AT91C_PIO_PD22) //  
#define AT91C_PIO_PD23       (1 << 23) // Pin Controlled by PD23
#define AT91C_PD23_EBI_D23  (AT91C_PIO_PD23) //  
#define AT91C_PIO_PD24       (1 << 24) // Pin Controlled by PD24
#define AT91C_PD24_EBI_D24  (AT91C_PIO_PD24) //  
#define AT91C_PIO_PD25       (1 << 25) // Pin Controlled by PD25
#define AT91C_PD25_EBI_D25  (AT91C_PIO_PD25) //  
#define AT91C_PIO_PD26       (1 << 26) // Pin Controlled by PD26
#define AT91C_PD26_EBI_D26  (AT91C_PIO_PD26) //  
#define AT91C_PIO_PD27       (1 << 27) // Pin Controlled by PD27
#define AT91C_PD27_EBI_D27  (AT91C_PIO_PD27) //  
#define AT91C_PIO_PD28       (1 << 28) // Pin Controlled by PD28
#define AT91C_PD28_EBI_D28  (AT91C_PIO_PD28) //  
#define AT91C_PIO_PD29       (1 << 29) // Pin Controlled by PD29
#define AT91C_PD29_EBI_D29  (AT91C_PIO_PD29) //  
#define AT91C_PIO_PD3        (1 <<  3) // Pin Controlled by PD3
#define AT91C_PD3_RXD2     (AT91C_PIO_PD3) //  
#define AT91C_PD3_SPI1_NPCS3D (AT91C_PIO_PD3) //  
#define AT91C_PIO_PD30       (1 << 30) // Pin Controlled by PD30
#define AT91C_PD30_EBI_D30  (AT91C_PIO_PD30) //  
#define AT91C_PIO_PD31       (1 << 31) // Pin Controlled by PD31
#define AT91C_PD31_EBI_D31  (AT91C_PIO_PD31) //  
#define AT91C_PIO_PD4        (1 <<  4) // Pin Controlled by PD4
#define AT91C_PD4_FIQ      (AT91C_PIO_PD4) //  
#define AT91C_PIO_PD5        (1 <<  5) // Pin Controlled by PD5
#define AT91C_PD5_DMARQ2   (AT91C_PIO_PD5) //  
#define AT91C_PD5_RTS2     (AT91C_PIO_PD5) //  
#define AT91C_PIO_PD6        (1 <<  6) // Pin Controlled by PD6
#define AT91C_PD6_EBI_NWAIT (AT91C_PIO_PD6) //  
#define AT91C_PD6_CTS2     (AT91C_PIO_PD6) //  
#define AT91C_PIO_PD7        (1 <<  7) // Pin Controlled by PD7
#define AT91C_PD7_EBI_NCS4_CFCS0 (AT91C_PIO_PD7) //  
#define AT91C_PD7_RTS1     (AT91C_PIO_PD7) //  
#define AT91C_PIO_PD8        (1 <<  8) // Pin Controlled by PD8
#define AT91C_PD8_EBI_NCS5_CFCS1 (AT91C_PIO_PD8) //  
#define AT91C_PD8_CTS1     (AT91C_PIO_PD8) //  
#define AT91C_PIO_PD9        (1 <<  9) // Pin Controlled by PD9
#define AT91C_PD9_EBI_CFCE1 (AT91C_PIO_PD9) //  
#define AT91C_PD9_SCK2     (AT91C_PIO_PD9) //  

// *****************************************************************************
//               PERIPHERAL ID DEFINITIONS FOR AT91CAP9_UMC
// *****************************************************************************
#define AT91C_ID_FIQ    ( 0) // Advanced Interrupt Controller (FIQ)
#define AT91C_ID_SYS    ( 1) // System Controller
#define AT91C_ID_PIOABCD ( 2) // Parallel IO Controller A, Parallel IO Controller B, Parallel IO Controller C, Parallel IO Controller D
#define AT91C_ID_MPB0   ( 3) // MP Block Peripheral 0
#define AT91C_ID_MPB1   ( 4) // MP Block Peripheral 1
#define AT91C_ID_MPB2   ( 5) // MP Block Peripheral 2
#define AT91C_ID_MPB3   ( 6) // MP Block Peripheral 3
#define AT91C_ID_MPB4   ( 7) // MP Block Peripheral 4
#define AT91C_ID_US0    ( 8) // USART 0
#define AT91C_ID_US1    ( 9) // USART 1
#define AT91C_ID_US2    (10) // USART 2
#define AT91C_ID_MCI0   (11) // Multimedia Card Interface 0
#define AT91C_ID_MCI1   (12) // Multimedia Card Interface 1
#define AT91C_ID_CAN    (13) // CAN Controller
#define AT91C_ID_TWI    (14) // Two-Wire Interface
#define AT91C_ID_SPI0   (15) // Serial Peripheral Interface 0
#define AT91C_ID_SPI1   (16) // Serial Peripheral Interface 1
#define AT91C_ID_SSC0   (17) // Serial Synchronous Controller 0
#define AT91C_ID_SSC1   (18) // Serial Synchronous Controller 1
#define AT91C_ID_AC97C  (19) // AC97 Controller
#define AT91C_ID_TC012  (20) // Timer Counter 0, Timer Counter 1, Timer Counter 2
#define AT91C_ID_PWMC   (21) // PWM Controller
#define AT91C_ID_EMAC   (22) // Ethernet Mac
#define AT91C_ID_AESTDES (23) // Advanced Encryption Standard, Triple DES
#define AT91C_ID_ADC    (24) // ADC Controller
#define AT91C_ID_ISI    (25) // Image Sensor Interface
#define AT91C_ID_LCDC   (26) // LCD Controller
#define AT91C_ID_HDMA   (27) // HDMA Controller
#define AT91C_ID_UDPHS  (28) // USB High Speed Device Port
#define AT91C_ID_UHP    (29) // USB Host Port
#define AT91C_ID_IRQ0   (30) // Advanced Interrupt Controller (IRQ0)
#define AT91C_ID_IRQ1   (31) // Advanced Interrupt Controller (IRQ1)
#define AT91C_ALL_INT   (0xFFFFFFFF) // ALL VALID INTERRUPTS

// *****************************************************************************
//               BASE ADDRESS DEFINITIONS FOR AT91CAP9_UMC
// *****************************************************************************
#define AT91C_BASE_HECC      (AT91_CAST(AT91PS_ECC) 	0xFFFFE200) // (HECC) Base Address
#define AT91C_BASE_BCRAMC    (AT91_CAST(AT91PS_BCRAMC) 	0xFFFFE400) // (BCRAMC) Base Address
#define AT91C_BASE_SDDRC     (AT91_CAST(AT91PS_SDDRC) 	0xFFFFE600) // (SDDRC) Base Address
#define AT91C_BASE_SMC       (AT91_CAST(AT91PS_SMC) 	0xFFFFE800) // (SMC) Base Address
#define AT91C_BASE_MATRIX_PRS (AT91_CAST(AT91PS_MATRIX_PRS) 	0xFFFFEA80) // (MATRIX_PRS) Base Address
#define AT91C_BASE_MATRIX    (AT91_CAST(AT91PS_MATRIX) 	0xFFFFEA00) // (MATRIX) Base Address
#define AT91C_BASE_CCFG      (AT91_CAST(AT91PS_CCFG) 	0xFFFFEB10) // (CCFG) Base Address
#define AT91C_BASE_PDC_DBGU  (AT91_CAST(AT91PS_PDC) 	0xFFFFEF00) // (PDC_DBGU) Base Address
#define AT91C_BASE_DBGU      (AT91_CAST(AT91PS_DBGU) 	0xFFFFEE00) // (DBGU) Base Address
#define AT91C_BASE_AIC       (AT91_CAST(AT91PS_AIC) 	0xFFFFF000) // (AIC) Base Address
#define AT91C_BASE_PIOA      (AT91_CAST(AT91PS_PIO) 	0xFFFFF200) // (PIOA) Base Address
#define AT91C_BASE_PIOB      (AT91_CAST(AT91PS_PIO) 	0xFFFFF400) // (PIOB) Base Address
#define AT91C_BASE_PIOC      (AT91_CAST(AT91PS_PIO) 	0xFFFFF600) // (PIOC) Base Address
#define AT91C_BASE_PIOD      (AT91_CAST(AT91PS_PIO) 	0xFFFFF800) // (PIOD) Base Address
#define AT91C_BASE_CKGR      (AT91_CAST(AT91PS_CKGR) 	0xFFFFFC1C) // (CKGR) Base Address
#define AT91C_BASE_PMC       (AT91_CAST(AT91PS_PMC) 	0xFFFFFC00) // (PMC) Base Address
#define AT91C_BASE_RSTC      (AT91_CAST(AT91PS_RSTC) 	0xFFFFFD00) // (RSTC) Base Address
#define AT91C_BASE_SHDWC     (AT91_CAST(AT91PS_SHDWC) 	0xFFFFFD10) // (SHDWC) Base Address
#define AT91C_BASE_RTTC      (AT91_CAST(AT91PS_RTTC) 	0xFFFFFD20) // (RTTC) Base Address
#define AT91C_BASE_PITC      (AT91_CAST(AT91PS_PITC) 	0xFFFFFD30) // (PITC) Base Address
#define AT91C_BASE_WDTC      (AT91_CAST(AT91PS_WDTC) 	0xFFFFFD40) // (WDTC) Base Address
#define AT91C_BASE_UDP       (AT91_CAST(AT91PS_UDP) 	0xFFF78000) // (UDP) Base Address
#define AT91C_BASE_UDPHS_EPTFIFO (AT91_CAST(AT91PS_UDPHS_EPTFIFO) 	0x00600000) // (UDPHS_EPTFIFO) Base Address
#define AT91C_BASE_UDPHS_EPT_0 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF78100) // (UDPHS_EPT_0) Base Address
#define AT91C_BASE_UDPHS_EPT_1 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF78120) // (UDPHS_EPT_1) Base Address
#define AT91C_BASE_UDPHS_EPT_2 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF78140) // (UDPHS_EPT_2) Base Address
#define AT91C_BASE_UDPHS_EPT_3 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF78160) // (UDPHS_EPT_3) Base Address
#define AT91C_BASE_UDPHS_EPT_4 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF78180) // (UDPHS_EPT_4) Base Address
#define AT91C_BASE_UDPHS_EPT_5 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF781A0) // (UDPHS_EPT_5) Base Address
#define AT91C_BASE_UDPHS_EPT_6 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF781C0) // (UDPHS_EPT_6) Base Address
#define AT91C_BASE_UDPHS_EPT_7 (AT91_CAST(AT91PS_UDPHS_EPT) 	0xFFF781E0) // (UDPHS_EPT_7) Base Address
#define AT91C_BASE_UDPHS_DMA_1 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78310) // (UDPHS_DMA_1) Base Address
#define AT91C_BASE_UDPHS_DMA_2 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78320) // (UDPHS_DMA_2) Base Address
#define AT91C_BASE_UDPHS_DMA_3 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78330) // (UDPHS_DMA_3) Base Address
#define AT91C_BASE_UDPHS_DMA_4 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78340) // (UDPHS_DMA_4) Base Address
#define AT91C_BASE_UDPHS_DMA_5 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78350) // (UDPHS_DMA_5) Base Address
#define AT91C_BASE_UDPHS_DMA_6 (AT91_CAST(AT91PS_UDPHS_DMA) 	0xFFF78360) // (UDPHS_DMA_6) Base Address
#define AT91C_BASE_UDPHS     (AT91_CAST(AT91PS_UDPHS) 	0xFFF78000) // (UDPHS) Base Address
#define AT91C_BASE_TC0       (AT91_CAST(AT91PS_TC) 	0xFFF7C000) // (TC0) Base Address
#define AT91C_BASE_TC1       (AT91_CAST(AT91PS_TC) 	0xFFF7C040) // (TC1) Base Address
#define AT91C_BASE_TC2       (AT91_CAST(AT91PS_TC) 	0xFFF7C080) // (TC2) Base Address
#define AT91C_BASE_TCB0      (AT91_CAST(AT91PS_TCB) 	0xFFF7C000) // (TCB0) Base Address
#define AT91C_BASE_TCB1      (AT91_CAST(AT91PS_TCB) 	0xFFF7C040) // (TCB1) Base Address
#define AT91C_BASE_TCB2      (AT91_CAST(AT91PS_TCB) 	0xFFF7C080) // (TCB2) Base Address
#define AT91C_BASE_PDC_MCI0  (AT91_CAST(AT91PS_PDC) 	0xFFF80100) // (PDC_MCI0) Base Address
#define AT91C_BASE_MCI0      (AT91_CAST(AT91PS_MCI) 	0xFFF80000) // (MCI0) Base Address
#define AT91C_BASE_PDC_MCI1  (AT91_CAST(AT91PS_PDC) 	0xFFF84100) // (PDC_MCI1) Base Address
#define AT91C_BASE_MCI1      (AT91_CAST(AT91PS_MCI) 	0xFFF84000) // (MCI1) Base Address
#define AT91C_BASE_PDC_TWI   (AT91_CAST(AT91PS_PDC) 	0xFFF88100) // (PDC_TWI) Base Address
#define AT91C_BASE_TWI       (AT91_CAST(AT91PS_TWI) 	0xFFF88000) // (TWI) Base Address
#define AT91C_BASE_PDC_US0   (AT91_CAST(AT91PS_PDC) 	0xFFF8C100) // (PDC_US0) Base Address
#define AT91C_BASE_US0       (AT91_CAST(AT91PS_USART) 	0xFFF8C000) // (US0) Base Address
#define AT91C_BASE_PDC_US1   (AT91_CAST(AT91PS_PDC) 	0xFFF90100) // (PDC_US1) Base Address
#define AT91C_BASE_US1       (AT91_CAST(AT91PS_USART) 	0xFFF90000) // (US1) Base Address
#define AT91C_BASE_PDC_US2   (AT91_CAST(AT91PS_PDC) 	0xFFF94100) // (PDC_US2) Base Address
#define AT91C_BASE_US2       (AT91_CAST(AT91PS_USART) 	0xFFF94000) // (US2) Base Address
#define AT91C_BASE_PDC_SSC0  (AT91_CAST(AT91PS_PDC) 	0xFFF98100) // (PDC_SSC0) Base Address
#define AT91C_BASE_SSC0      (AT91_CAST(AT91PS_SSC) 	0xFFF98000) // (SSC0) Base Address
#define AT91C_BASE_PDC_SSC1  (AT91_CAST(AT91PS_PDC) 	0xFFF9C100) // (PDC_SSC1) Base Address
#define AT91C_BASE_SSC1      (AT91_CAST(AT91PS_SSC) 	0xFFF9C000) // (SSC1) Base Address
#define AT91C_BASE_PDC_AC97C (AT91_CAST(AT91PS_PDC) 	0xFFFA0100) // (PDC_AC97C) Base Address
#define AT91C_BASE_AC97C     (AT91_CAST(AT91PS_AC97C) 	0xFFFA0000) // (AC97C) Base Address
#define AT91C_BASE_PDC_SPI0  (AT91_CAST(AT91PS_PDC) 	0xFFFA4100) // (PDC_SPI0) Base Address
#define AT91C_BASE_SPI0      (AT91_CAST(AT91PS_SPI) 	0xFFFA4000) // (SPI0) Base Address
#define AT91C_BASE_PDC_SPI1  (AT91_CAST(AT91PS_PDC) 	0xFFFA8100) // (PDC_SPI1) Base Address
#define AT91C_BASE_SPI1      (AT91_CAST(AT91PS_SPI) 	0xFFFA8000) // (SPI1) Base Address
#define AT91C_BASE_CAN_MB0   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC200) // (CAN_MB0) Base Address
#define AT91C_BASE_CAN_MB1   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC220) // (CAN_MB1) Base Address
#define AT91C_BASE_CAN_MB2   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC240) // (CAN_MB2) Base Address
#define AT91C_BASE_CAN_MB3   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC260) // (CAN_MB3) Base Address
#define AT91C_BASE_CAN_MB4   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC280) // (CAN_MB4) Base Address
#define AT91C_BASE_CAN_MB5   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC2A0) // (CAN_MB5) Base Address
#define AT91C_BASE_CAN_MB6   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC2C0) // (CAN_MB6) Base Address
#define AT91C_BASE_CAN_MB7   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC2E0) // (CAN_MB7) Base Address
#define AT91C_BASE_CAN_MB8   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC300) // (CAN_MB8) Base Address
#define AT91C_BASE_CAN_MB9   (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC320) // (CAN_MB9) Base Address
#define AT91C_BASE_CAN_MB10  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC340) // (CAN_MB10) Base Address
#define AT91C_BASE_CAN_MB11  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC360) // (CAN_MB11) Base Address
#define AT91C_BASE_CAN_MB12  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC380) // (CAN_MB12) Base Address
#define AT91C_BASE_CAN_MB13  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC3A0) // (CAN_MB13) Base Address
#define AT91C_BASE_CAN_MB14  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC3C0) // (CAN_MB14) Base Address
#define AT91C_BASE_CAN_MB15  (AT91_CAST(AT91PS_CAN_MB) 	0xFFFAC3E0) // (CAN_MB15) Base Address
#define AT91C_BASE_CAN       (AT91_CAST(AT91PS_CAN) 	0xFFFAC000) // (CAN) Base Address
#define AT91C_BASE_PDC_AES   (AT91_CAST(AT91PS_PDC) 	0xFFFB0100) // (PDC_AES) Base Address
#define AT91C_BASE_AES       (AT91_CAST(AT91PS_AES) 	0xFFFB0000) // (AES) Base Address
#define AT91C_BASE_PDC_TDES  (AT91_CAST(AT91PS_PDC) 	0xFFFB0100) // (PDC_TDES) Base Address
#define AT91C_BASE_TDES      (AT91_CAST(AT91PS_TDES) 	0xFFFB0000) // (TDES) Base Address
#define AT91C_BASE_PWMC_CH0  (AT91_CAST(AT91PS_PWMC_CH) 	0xFFFB8200) // (PWMC_CH0) Base Address
#define AT91C_BASE_PWMC_CH1  (AT91_CAST(AT91PS_PWMC_CH) 	0xFFFB8220) // (PWMC_CH1) Base Address
#define AT91C_BASE_PWMC_CH2  (AT91_CAST(AT91PS_PWMC_CH) 	0xFFFB8240) // (PWMC_CH2) Base Address
#define AT91C_BASE_PWMC_CH3  (AT91_CAST(AT91PS_PWMC_CH) 	0xFFFB8260) // (PWMC_CH3) Base Address
#define AT91C_BASE_PWMC      (AT91_CAST(AT91PS_PWMC) 	0xFFFB8000) // (PWMC) Base Address
#define AT91C_BASE_MACB      (AT91_CAST(AT91PS_EMAC) 	0xFFFBC000) // (MACB) Base Address
#define AT91C_BASE_PDC_ADC   (AT91_CAST(AT91PS_PDC) 	0xFFFC0100) // (PDC_ADC) Base Address
#define AT91C_BASE_ADC       (AT91_CAST(AT91PS_ADC) 	0xFFFC0000) // (ADC) Base Address
#define AT91C_BASE_ISI       (AT91_CAST(AT91PS_ISI) 	0xFFFC4000) // (ISI) Base Address
#define AT91C_BASE_LCDC      (AT91_CAST(AT91PS_LCDC) 	0x00500000) // (LCDC) Base Address
#define AT91C_BASE_HDMA_CH_0 (AT91_CAST(AT91PS_HDMA_CH) 	0xFFFFEC3C) // (HDMA_CH_0) Base Address
#define AT91C_BASE_HDMA_CH_1 (AT91_CAST(AT91PS_HDMA_CH) 	0xFFFFEC64) // (HDMA_CH_1) Base Address
#define AT91C_BASE_HDMA_CH_2 (AT91_CAST(AT91PS_HDMA_CH) 	0xFFFFEC8C) // (HDMA_CH_2) Base Address
#define AT91C_BASE_HDMA_CH_3 (AT91_CAST(AT91PS_HDMA_CH) 	0xFFFFECB4) // (HDMA_CH_3) Base Address
#define AT91C_BASE_HDMA      (AT91_CAST(AT91PS_HDMA) 	0xFFFFEC00) // (HDMA) Base Address
#define AT91C_BASE_SYS       (AT91_CAST(AT91PS_SYS) 	0xFFFFE200) // (SYS) Base Address
#define AT91C_BASE_UHP       (AT91_CAST(AT91PS_UHP) 	0x00700000) // (UHP) Base Address

// *****************************************************************************
//               MEMORY MAPPING DEFINITIONS FOR AT91CAP9_UMC
// *****************************************************************************
// IRAM
#define AT91C_IRAM 	 (0x00100000) // 32-KBytes FAST SRAM base address
#define AT91C_IRAM_SIZE	 (0x00008000) // 32-KBytes FAST SRAM size in byte (32 Kbytes)
// IRAM_MIN
#define AT91C_IRAM_MIN	 (0x00100000) // Minimum Internal RAM base address
#define AT91C_IRAM_MIN_SIZE	 (0x00008000) // Minimum Internal RAM size in byte (32 Kbytes)
// DPR
#define AT91C_DPR  	 (0x00200000) //  base address
#define AT91C_DPR_SIZE	 (0x00008000) //  size in byte (32 Kbytes)
// IROM
#define AT91C_IROM 	 (0x00400000) // Internal ROM base address
#define AT91C_IROM_SIZE	 (0x00008000) // Internal ROM size in byte (32 Kbytes)
// EBI_CS0
#define AT91C_EBI_CS0	 (0x10000000) // EBI Chip Select 0 base address
#define AT91C_EBI_CS0_SIZE	 (0x10000000) // EBI Chip Select 0 size in byte (262144 Kbytes)
// EBI_CS1
#define AT91C_EBI_CS1	 (0x20000000) // EBI Chip Select 1 base address
#define AT91C_EBI_CS1_SIZE	 (0x10000000) // EBI Chip Select 1 size in byte (262144 Kbytes)
// EBI_BCRAM
#define AT91C_EBI_BCRAM	 (0x20000000) // BCRAM on EBI Chip Select 1 base address
#define AT91C_EBI_BCRAM_SIZE	 (0x10000000) // BCRAM on EBI Chip Select 1 size in byte (262144 Kbytes)
// EBI_BCRAM_16BIT
#define AT91C_EBI_BCRAM_16BIT	 (0x20000000) // BCRAM on EBI Chip Select 1 base address
#define AT91C_EBI_BCRAM_16BIT_SIZE	 (0x02000000) // BCRAM on EBI Chip Select 1 size in byte (32768 Kbytes)
// EBI_BCRAM_32BIT
#define AT91C_EBI_BCRAM_32BIT	 (0x20000000) // BCRAM on EBI Chip Select 1 base address
#define AT91C_EBI_BCRAM_32BIT_SIZE	 (0x04000000) // BCRAM on EBI Chip Select 1 size in byte (65536 Kbytes)
// EBI_CS2
#define AT91C_EBI_CS2	 (0x30000000) // EBI Chip Select 2 base address
#define AT91C_EBI_CS2_SIZE	 (0x10000000) // EBI Chip Select 2 size in byte (262144 Kbytes)
// EBI_CS3
#define AT91C_EBI_CS3	 (0x40000000) // EBI Chip Select 3 base address
#define AT91C_EBI_CS3_SIZE	 (0x10000000) // EBI Chip Select 3 size in byte (262144 Kbytes)
// EBI_SM
#define AT91C_EBI_SM	 (0x40000000) // SmartMedia on EBI Chip Select 3 base address
#define AT91C_EBI_SM_SIZE	 (0x10000000) // SmartMedia on EBI Chip Select 3 size in byte (262144 Kbytes)
// EBI_CS4
#define AT91C_EBI_CS4	 (0x50000000) // EBI Chip Select 4 base address
#define AT91C_EBI_CS4_SIZE	 (0x10000000) // EBI Chip Select 4 size in byte (262144 Kbytes)
// EBI_CF0
#define AT91C_EBI_CF0	 (0x50000000) // CompactFlash 0 on EBI Chip Select 4 base address
#define AT91C_EBI_CF0_SIZE	 (0x10000000) // CompactFlash 0 on EBI Chip Select 4 size in byte (262144 Kbytes)
// EBI_CS5
#define AT91C_EBI_CS5	 (0x60000000) // EBI Chip Select 5 base address
#define AT91C_EBI_CS5_SIZE	 (0x10000000) // EBI Chip Select 5 size in byte (262144 Kbytes)
// EBI_CF1
#define AT91C_EBI_CF1	 (0x60000000) // CompactFlash 1 on EBI Chip Select 5 base address
#define AT91C_EBI_CF1_SIZE	 (0x10000000) // CompactFlash 1 on EBI Chip Select 5 size in byte (262144 Kbytes)
// EBI_SDRAM
#define AT91C_EBI_SDRAM	 (0x70000000) // SDRAM on EBI Chip Select 6 base address
#define AT91C_EBI_SDRAM_SIZE	 (0x10000000) // SDRAM on EBI Chip Select 6 size in byte (262144 Kbytes)
// EBI_SDRAM_16BIT
#define AT91C_EBI_SDRAM_16BIT	 (0x70000000) // SDRAM on EBI Chip Select 6 base address
#define AT91C_EBI_SDRAM_16BIT_SIZE	 (0x02000000) // SDRAM on EBI Chip Select 6 size in byte (32768 Kbytes)
// EBI_SDRAM_32BIT
#define AT91C_EBI_SDRAM_32BIT	 (0x70000000) // SDRAM on EBI Chip Select 6 base address
#define AT91C_EBI_SDRAM_32BIT_SIZE	 (0x04000000) // SDRAM on EBI Chip Select 6 size in byte (65536 Kbytes)

#endif
