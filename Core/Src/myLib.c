#include "myLib.h"

void vUARTSend(UART_HandleTypeDef huart ,uint8_t *String){
	HAL_UART_Transmit(&huart, (uint8_t *)String, strlen((char*)String), defineUART_TX_DELAY);
}
