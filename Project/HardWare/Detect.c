#include "Detect.h"
#include "main.h"
#include "FreeRTOS.h" 
#include "task.h" 


#define LEDTEST_GPIO	GPIOC
#define LEDTEST_PIN		GPIO_PIN_13


//void LEDTest_Init(void)
//{
//	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);;
//	vTaskDelay(1000);
//}

//void LEDTest_ON(void)
//{
//	HAL_GPIO_WritePin(LEDTEST_GPIO, LEDTEST_PIN, GPIO_PIN_RESET);
//}

//void LEDTest_OFF(void)
//{
//	HAL_GPIO_WritePin(LEDTEST_GPIO, LEDTEST_PIN, GPIO_PIN_SET);
//}

//void LEDTest_Turn(void)
//{
//	HAL_GPIO_TogglePin(LEDTEST_GPIO, LEDTEST_PIN);
//}

