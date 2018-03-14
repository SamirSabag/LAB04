/*
 * Main_SM.h
 *
 *  Created on: Feb 24, 2018
 *      Author: samir
 */
#ifndef Main_SM_H_
#define Main_SM_H_

/////new//Definitions////////////////////
typedef unsigned char uint8;/////////////				
typedef unsigned short uint16;///////////				
typedef unsigned long uint32;////////////
///////////////////////////////////////// 

#define  FUNCTIONS_MAIN_SM_TABLE \
{   vUSSensor_SM,       	 \
	State_Red_Led,     		 \
	State_Yellow_Led,    	 \
	State_Blue_Led,  		 \
}

typedef enum{
	ent_MainState_One = 0,
	ent_MainState_Two,
	ent_MainState_Three,
	ent_MainState_Four
}entMain_SM_STATES;

/////////////FUNCTIONS///////////////////
////////// OF///////THE//////////////////
void vUSSensor_SM_CHECK(void);///////////
void State_Red_Led(void);////////////////
void State_Yellow_Led(void);/////////////
void State_Blue_Led(void);///////////////
/////////////////////////////////////////
void Start_Program(void);////////////////
///////MAIN////STATE////MACHINE//////////
/////////////////////////////////////////
#endif /* Main_SM_H_ */
