#include "derivative.h" /* include peripheral declarations */
#include "GPIO.h"



void GPIO_Init(void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTC_MASK;
}

uint8 Read_input(uint8 Port,uint8 Pin)
{
	if(1)
	{ 
		return(1);
	}
	else
	{
		return(0);
	}
}
