/*******************************************************************************/
/*******************************************************************************/
/**************************     Author: Ahmed Hassan      **********************/
/**************************     Layer:  RTOS Stack        **********************/
/**************************     SWC:    RTOS              **********************/
/**************************     Version:1.00              **********************/
/**************************     Date: 31-7-2022           **********************/
/*******************************************************************************/
/*******************************************************************************/

#ifndef RTOS_PRIVATE_H_
#define RTOS_PRIVATE_H_

typedef struct
{
	u16 Periodicity;
	void(*TaskFunc)(void);
}Task_t;

static void voidScheduler(void);


#endif