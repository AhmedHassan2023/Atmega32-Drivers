/*******************************************************************************/
/*******************************************************************************/
/**************************     Author: Ahmed Hassan      **********************/
/**************************     Layer:  HAL               **********************/
/**************************     SWC:    SW                **********************/
/**************************     Version:1.00              **********************/
/*******************************************************************************/
/*******************************************************************************/

#ifndef SW_INTERFACE_H_
#define SW_INTERFACE_H_

#define PRESSED				1
#define NOT_PRESSED			0

#define PULL_UP				0
#define PULL_DOWN			1


typedef struct
{
	u8 Port;
	u8 Pin;
	u8 Pull_Type;
}SW_t;

u8 SW_u8GetState(SW_t* Copy_u8SW);



#endif