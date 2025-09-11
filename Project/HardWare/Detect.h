#ifndef DUALMCU_HARDWARE_DETECT_H_
#define DUALMCU_HARDWARE_DETECT_H_

#include <stdio.h>
#include "main.h"
#include "FreeRTOS.h" 
#include "task.h" 

typedef enum{
	NORMAL = 0,
	RESETTING,
	FAULT,
}McuState;


typedef struct {
	int8_t primary_mcu_state;
}PrimaryMcuContext;

void LEDTest_Init(void);
void LEDTest_ON(void);
void LEDTest_OFF(void);
void LEDTest_Turn(void);


#endif
