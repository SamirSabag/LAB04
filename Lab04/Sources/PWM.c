/*
 * PWM.c
 *
 *  Created on: Feb 27, 2018
 *      Author: samir
 */

#include "derivative.h"

void TPM_Init(void)
{
   SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;	/*Enable the PORTD Clock*/
   SIM_SCGC6 |= SIM_SCGC6_TPM0_MASK;   // Enable the TPM0 clock
   PORTA_PCR3 = PORT_PCR_MUX(3);		/*MUX = ALT 3*/
   TPM0_SC |= 0x004F;				/*Setting TOIE = 1,CLKS =  01, PS = 111*/
   TPM0_MOD = 32000;				/*Setting the Modulo register = 32000*/
   TPM0_C5SC |= 0x0028;				/*Setting MSB = 1, ELSnB = 1*/
   TPM0_C5V = 500;					/*Value of the Channel*/
		
}

void TPM_Handler (void)
{
  //Clear interrupt flag
  unsigned long ChannelValue = TPM0_C5V;			/*Take the value of the Channel to compare it*/
  (void)TPM0_SC;
  TPM0_SC |= 0x0080;								/*TPM counter has overflow*/
  if(ChannelValue < 32000)							/*Channel Value > Modulo Value*/
  {
	  TPM0_C5V += 500;								/*Add 500 to Channel*/
  }
  else
  {
	  TPM0_C5V = 0;									/*Set Channel in 0*/
  }
}
