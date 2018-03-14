/*
 * Main_SM.c
 *
 *  Created on: Feb 20, 2018
 *      Author: samir
 */
#include "USSensor_SM.h"
#include "GPIO.h"

static void ( * const SM_pvaUSSensor[])(void) = FUNCTIONS_USSENSOR_SM_TABLE;
entUSSensor_SM_STATES USSensor_Index = ent_USSensor_State_One;

static uint8 u8TriggerCnt = 10;
static uint8 u8TriggerOut;
extern static uint32 u32TimeDetected = 0;
extern static uint32 u32TimeUndetected = 0;
static uint8 u8ItemDetected = 0;


void vUSSensor_SM(void)
{
		(*SM_pvaUSSensor[USSensor_Index])();		
}

void vTrigger(void)
{
	if(u8TriggerCnt == 0)
	{
		u8TriggerOut = 0;
		USSensor_Index =  ent_USSensor_State_Two;
		u8TriggerCnt = 9;
	}
	else
	{
		USSensor_Index =  ent_USSensor_State_One;
		u8TriggerOut = 1;
		u8TriggerCnt--;
	}
}
void vEcho(void)
{
	u8ItemDetected  = Read_input(PORTB,ECHO);
	
	if(u8ItemDetected == TRUE)
	{
		u32TimeDetected++;
	}
	else
	{
		u32TimeUndetected++;
		if(u32TimeUndetected == 0x5DC)    //if had past more than 1.5 sec without detecting something, move to next state 
		{
			USSensor_Index =   ent_USSensor_State_One;
			u32TimeUndetected = 0;
			u32TimeDetected = 0;
		}
		else
		{
			/*Nothing to do*/
		}
	}
}

