/* Define to prevent recursive inclusitoggle -------------------------------------*/
#ifndef __MYLIB_H
#define __MYLIB_H

#include "main.h"
#include "stdio.h"
#include "string.h"

#define defineUART_TX_DELAY     10

#define BKFET_BOARD
//#define STM32F407G_DISC1
//#define NUCLEO_F767ZI

/**
 *
 */
#ifdef BKFET_BOARD

#define toggleLed1        	     HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
#define toggleLed2          	 HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_12);
#define toggleLed3          	 HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_11);
#define toggleLed4          	 HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_8);
#define toggleAllLed             toggleLed1;toggleLed2;toggleLed3;toggleLed4;              
#define toggleBuzzer             HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);

#define onLed1                   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
#define onLed2                   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
#define onLed3                   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
#define onLed4                   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
#define onAllLed                 onLed1; onLed2; onLed3; onLed4;
#define onBuzzer                 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);


#define offLed1                  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
#define offLed2                  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
#define offLed3                  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
#define offLed4                  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
#define offAllLed                offLed1; offLed2; offLed3; offLed4;
#define offBuzzer                 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);


#endif

/**
 *
 */
#ifdef STM32F407G_DISC1
#endif

/**
 *
 */
#ifdef NUCLEO_F767ZI
#endif

void vUARTSend(UART_HandleTypeDef huart ,uint8_t *String);


#endif
