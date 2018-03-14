
#include "derivative.h" /* include peripheral declarations */

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define PORTB      		GPIOB_PDIR

void GPIO_Init(void);
uint8 Read_input(uint8 Port,uint8 Pin);
