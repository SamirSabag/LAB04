/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "PIT.h"
#include "PWM.h"
	
		
int main(void)
{	
	PIT_Init();
	TPM_Init();
   GPIO_Init();
   
	
	
	for(;;);

	return 0;
}
