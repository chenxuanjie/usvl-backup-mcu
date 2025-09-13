#include <string.h> 
#include "main.h"
#include "FreeRTOS.h" 
#include "task.h" 
#include "Detect.h"


extern UART_HandleTypeDef huart1;
extern DMA_HandleTypeDef hdma_usart1_rx;
extern DMA_HandleTypeDef hdma_usart1_tx;


int8_t HeartDetectInit(uint8_t* pData, uint16_t Size) {
    // 初始化DMA接收
    HAL_UARTEx_ReceiveToIdle_DMA(&huart1, pData, Size);
    __HAL_DMA_DISABLE_IT(&hdma_usart1_rx, DMA_IT_HT);		   // 手动关闭DMA_IT_HT中断	

    return SUCCESS;
}

int8_t HeartDetectReflashIT(uint8_t* pData, uint16_t Size) {
    __HAL_DMA_DISABLE_IT(&hdma_usart1_rx, DMA_IT_HT);		   // 手动关闭DMA_IT_HT中断
    memset(pData, 0, Size);							   // 清除接收缓存

    return SUCCESS;
}

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

