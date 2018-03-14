/*
 * Main_SM.c
 *
 *  Created on: Feb 20, 2018
 *      Author: samir
 */
#include "Main_SM.h"
#include "USSensor_SM.h"

static void ( * const SM_pvaMain[] )(void) = FUNCTIONS_MAIN_SM_TABLE;

entMain_SM_STATES Main_Index = ent_MainState_One;

void vUSSensor_SM_CHECK(void)
{
	vUSSensor_SM();
	Main_Index = ent_MainState_Two;
}
void State_Red_AND_Yellow(void)
{
	if (1) 
	{	
		if (u32TimeUndetected == 0x3EB) 
		{
			TOGGLE_RED;
			TOGGLE_YELLOW;
		}
	
	
	
	Main_Index = ent_MainState_Three;
}
void State_Blue_Led(void)
{
	Main_Index = ent_MainState_One;
}
void Start_Program(void)
{
	for(;;)
	{
		(*SM_pvaMain[Main_Index])();	
	}
}
