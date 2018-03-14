/*
 * PIT.h
 *
 *  Created on: Feb 20, 2017
 *      Author: Samir Sabag
 */
#ifndef PIT_H_
#define PIT_H_

#include "derivative.h"

void PIT_Init(void);
void PIT_IRQHandler(void);
void enable_irq (int irq);


#endif /* PIT_H_ */
