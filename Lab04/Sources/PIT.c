/*
 * PIT.c
 *
 *  Created on: Feb 20, 2018
 *      Author: samir
 */
#include "pit.h"
#include "Main_SM.h"
#include "PWM.h"

void PIT_Init(void)
{
	// Enable PIT clock
	SIM_SCGC6 |= SIM_SCGC6_PIT_MASK;

	// Turn on PIT
	PIT_MCR = 0;
	
	// Configure PIT to produce an interrupt every 1  uS
	PIT_LDVAL0 = 0x13;	// 1/20Mhz = 50ns   (1s/50ns)-1= 19,999,999 cycles or 0x1312CFF
	PIT_TCTRL0 |= PIT_TCTRL_TIE_MASK | PIT_TCTRL_TEN_MASK; // Enable interrupt and enable timer
	
	// Enable interrupt registers ISER and ICPR
	enable_irq(INT_PIT - 16);
}

/*	Handles PIT interrupt if enabled
 * 
 * 
 */
void PIT_IRQHandler(void)
{	
	// Clear interrupt
	PIT_TFLG0 = PIT_TFLG_TIF_MASK;
	TPM_Handler();
	Start_Program();

}

void enable_irq (int irq)
{   
    /* Make sure that the IRQ is an allowable number. Up to 32 is 
     * used.
     *
     * NOTE: If you are using the interrupt definitions from the header
     * file, you MUST SUBTRACT 16!!!
     */
    if (irq > 32)
    	__asm("bkpt"); // Invalid IRQ value passed to enable irq function!
    else
    {
      /* Set the ICPR and ISER registers accordingly */
      NVIC_ICPR |= 1 << (irq%32);
      NVIC_ISER |= 1 << (irq%32);
    }
}

