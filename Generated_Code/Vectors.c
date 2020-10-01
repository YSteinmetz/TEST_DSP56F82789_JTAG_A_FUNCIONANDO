/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Vectors.c
**     Project     : TEST_DSP56F82789_JTAG_A
**     Processor   : MC56F84789VLL
**     Version     : Component 01.067, Driver 01.01, CPU db: 3.50.001
**     Compiler    : CodeWarrior DSP C Compiler
**     Date/Time   : 2020-10-01, 17:01, # CodeGen: 3
**     Abstract    :
**
**     Settings    :
**
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Vectors.c                                                  
** @version 01.01
** @brief
**
*/         
/*!
**  @addtogroup Vectors_module Vectors module documentation
**  @{
*/         

#include "Cpu.h"
#include "Bits1.h"
#include "TI1.h"
#include "Bits2.h"
#include "Events.h"

#ifndef _lint

extern void _EntryPoint(void);         /* Startup routine */

volatile asm void _vect(void);
#pragma define_section interrupt_vectors "interrupt_vectors.text"  RX
#pragma section interrupt_vectors begin
volatile asm void _vect(void) {
  JMP  _EntryPoint                     /* Interrupt no. 0 (Used)   - ivINT_HW_RESET */
  JMP  _EntryPoint                     /* Interrupt no. 1 (Used)   - ivINT_COP_RESET  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 2 (Unused) - ivINT_ILLEGAL_OP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 3 (Unused) - ivINT_SWI3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 4 (Unused) - ivINT_OVERFLOW  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 5 (Unused) - ivINT_MISALIGNED  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 6 (Unused) - ivINT_STPCNT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 7 (Unused) - ivINT_BKPT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 8 (Unused) - ivINT_TRBUF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 9 (Unused) - ivINT_TX_REG  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 10 (Unused) - ivINT_RX_REG  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 11 (Unused) - ivINT_BUS_ERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 12 (Unused) - ivINT_PLAT_3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 13 (Unused) - ivINT_PLAT_2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 14 (Unused) - ivINT_PLAT_1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 15 (Unused) - ivINT_SWI2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 16 (Unused) - ivINT_SWI1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 17 (Unused) - ivINT_SWI0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 18 (Unused) - ivINT_XBARA  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 19 (Unused) - ivINT_LVI1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 20 (Unused) - ivINT_OCCS  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 21 (Unused) - ivINT_TMRB_3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 22 (Unused) - ivINT_TMRB_2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 23 (Unused) - ivINT_TMRB_1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 24 (Unused) - ivINT_TMRB_0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 25 (Unused) - ivINT_TMRA_3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 26 (Unused) - ivINT_TMRA_2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 27 (Unused) - ivINT_TMRA_1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 28 (Unused) - ivINT_TMRA_0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 29 (Unused) - ivINT_ADC12_CC1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 30 (Unused) - ivINT_ADC12_CC0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 31 (Unused) - ivINT_ADC12_ERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 32 (Unused) - ivINT_ADC16  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 33 (Unused) - ivINT_DMA3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 34 (Unused) - ivINT_DMA2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 35 (Unused) - ivINT_DMA1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 36 (Unused) - ivINT_DMA0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 37 (Unused) - ivINT_MB_OR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 38 (Unused) - ivINT_BUS_OFF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 39 (Unused) - ivINT_ERROR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 40 (Unused) - ivINT_TX_WARN  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 41 (Unused) - ivINT_RX_WARN  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 42 (Unused) - ivINT_WAKEUP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 43 (Unused) - ivINT_QSCI2_RERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 44 (Unused) - ivINT_QSCI2_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 45 (Unused) - ivINT_QSCI2_TIDLE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 46 (Unused) - ivINT_QSCI2_TDRE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 47 (Unused) - ivINT_QSCI1_RERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 48 (Unused) - ivINT_QSCI1_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 49 (Unused) - ivINT_QSCI1_TIDLE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 50 (Unused) - ivINT_QSCI1_TDRE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 51 (Unused) - ivINT_QSCI0_RERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 52 (Unused) - ivINT_QSCI0_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 53 (Unused) - ivINT_QSCI0_TIDLE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 54 (Unused) - ivINT_QSCI0_TDRE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 55 (Unused) - ivINT_QSPI2_XMIT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 56 (Unused) - ivINT_QSPI2_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 57 (Unused) - ivINT_QSPI1_XMIT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 58 (Unused) - ivINT_QSPI1_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 59 (Unused) - ivINT_QSPI0_XMIT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 60 (Unused) - ivINT_QSPI0_RCV  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 61 (Unused) - ivINT_IIC1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 62 (Unused) - ivINT_IIC0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 63 (Unused) - ivINT_eFlexPWMB_FAULT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 64 (Unused) - ivINT_eFlexPWMB_RERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 65 (Unused) - ivINT_eFlexPWMB_RELOAD3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 66 (Unused) - ivINT_eFlexPWMB_CAP3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 67 (Unused) - ivINT_eFlexPWMB_CMP3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 68 (Unused) - ivINT_eFlexPWMB_RELOAD2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 69 (Unused) - ivINT_eFlexPWMB_CAP2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 70 (Unused) - ivINT_eFlexPWMB_CMP2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 71 (Unused) - ivINT_eFlexPWMB_RELOAD1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 72 (Unused) - ivINT_eFlexPWMB_CAP1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 73 (Unused) - ivINT_eFlexPWMB_CMP1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 74 (Unused) - ivINT_eFlexPWMB_RELOAD0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 75 (Unused) - ivINT_eFlexPWMB_CAP0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 76 (Unused) - ivINT_eFlexPWMB_CMP0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 77 (Unused) - ivINT_eFlexPWMA_FAULT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 78 (Unused) - ivINT_eFlexPWMA_RERR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 79 (Unused) - ivINT_eFlexPWMA_RELOAD3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 80 (Unused) - ivINT_eFlexPWMA_CAP  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 81 (Unused) - ivINT_eFlexPWMA_CMP3  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 82 (Unused) - ivINT_eFlexPWMA_RELOAD2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 83 (Unused) - ivINT_eFlexPWMA_CMP2  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 84 (Unused) - ivINT_eFlexPWMA_RELOAD1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 85 (Unused) - ivINT_eFlexPWMA_CMP1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 86 (Unused) - ivINT_eFlexPWMA_RELOAD0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 87 (Unused) - ivINT_eFlexPWMA_CMP0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 88 (Unused) - ivINT_FTFL_RDCOL  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 89 (Unused) - ivINT_FTFL_CC  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 90 (Unused) - ivINT_CMPD  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 91 (Unused) - ivINT_CMPC  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 92 (Unused) - ivINT_CMPB  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 93 (Unused) - ivINT_CMPA  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 94 (Unused) - ivINT_PIT1_ROLLOVR  */
  JSR  TI1_Interrupt                   /* Interrupt no. 95 (Used)   - ivINT_PIT0_ROLLOVR  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 96 (Unused) - ivINT_PDB1  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 97 (Unused) - ivINT_PDB0  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 98 (Unused) - ivINT_INDEX  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 99 (Unused) - ivINT_HOME_DOG  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 100 (Unused) - ivINT_COMPARE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 101 (Unused) - ivINT_GPIOG  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 102 (Unused) - ivINT_GPIOF  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 103 (Unused) - ivINT_GPIOE  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 104 (Unused) - ivINT_GPIOD  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 105 (Unused) - ivINT_GPIOC  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 106 (Unused) - ivINT_GPIOB  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 107 (Unused) - ivINT_GPIOA  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 108 (Unused) - ivINT_COP_INT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 109 (Unused) - ivINT_EWM_INT  */
  JSR  Cpu_Interrupt                   /* Interrupt no. 110 (Unused) - ivINT_SWILP  */
}
#pragma section interrupt_vectors end

#endif _lint

/* Disable MISRA rules for interurupt routines */
/*lint -esym(765,Cpu_Interrupt) Disable MISRA rule (8.10) checking for symbols (Cpu_Interrupt). */
/*lint -esym(765,TI1_Interrupt) Disable MISRA rule (8.10) checking for symbols (TI1_Interrupt). */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale 56800 series of microcontrollers.
**
** ###################################################################
*/
