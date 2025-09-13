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

int8_t HeartDetectInit(uint8_t* pData, uint16_t Size);
int8_t HeartDetectReflashIT(uint8_t* pData, uint16_t Size);
//void LEDTest_ON(void);
//void LEDTest_OFF(void);
//void LEDTest_Turn(void);


#endif	// DUALMCU_HARDWARE_DETECT_H_
