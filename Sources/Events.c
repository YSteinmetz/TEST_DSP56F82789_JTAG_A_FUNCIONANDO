/* ###################################################################
**     Filename    : Events.c
**     Project     : TEST_DSP56F82789_JTAG_A
**     Processor   : MC56F84789VLL
**     Component   : Events
**     Version     : Driver 01.03
**     Compiler    : CodeWarrior DSP C Compiler
**     Date/Time   : 2020-10-01, 16:27, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.03
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  TI1_OnInterrupt (module Events)
**
**     Component   :  TI1 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/* Comment following line if the appropriate 'Interrupt preserve registers' property */
/* is set to 'yes' (#pragma interrupt saveall is generated before the ISR)           */
#pragma interrupt called
void TI1_OnInterrupt(void)
{
  /* Write your code here ... */
	static unsigned int i = 0;
	i++;
	
	if(i >= 100){
		i = 0;
		
		//Pinos port C LOW
		
		Bits1_NegBit(0);
		Bits1_NegBit(1);
		Bits1_NegBit(2);
		Bits1_NegBit(3);
		Bits1_NegBit(4);
		Bits1_NegBit(5);
		Bits1_NegBit(6);
		Bits1_NegBit(7);
		
		
		//Pinos port E LOW
		
		Bits2_NegBit(0);
		Bits2_NegBit(1);
		Bits2_NegBit(2);
		Bits2_NegBit(3);
		Bits2_NegBit(4);
		Bits2_NegBit(5);
		Bits2_NegBit(6);
		Bits2_NegBit(7);
	}
}

/* END Events */

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
