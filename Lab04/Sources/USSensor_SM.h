/*
 * USSensor_SM.h
 *
 *  Created on: Feb 24, 2018
 *      Author: Samir
 */
#ifndef USSensor_SM_H_
#define USSensor_SM_H_
/////new//Definitions///////////////////
typedef unsigned char uint8;//////////// 				
typedef unsigned short uint16;//////////				
typedef unsigned long uint32;///////////
////////////////////////////////////////
typedef enum{
	ent_USSensor_State_One = 0,
	ent_USSensor_State_Two,
}entUSSensor_SM_STATES;
////////////////////////////////////////

#define  FUNCTIONS_USSENSOR_SM_TABLE \
{   vTrigger,       	 			 \
	vEcho				      		 \
}
#define    ECHO 			12
#define    FALSE 			0
#define    TRUE 			1
#define    COND_TRIGGER    u8TriggerCnt == FALSE

/////////////////////////////////////////
//PROTOTYPE////FUNCTIONS/////////////////
/////////////////////////////////////////
void vTrigger(void);/////////////////////
void vEcho(void);////////////////////////
void vUSSensor_SM(void);/////////////////
///USSensor///STATE////MACHINE///////////
/////////////////////////////////////////
#endif /* Main_SM_H_ *///////////////////
