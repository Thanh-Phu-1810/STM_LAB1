/*
 * exercise7.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Thanh Phu
 */
#include "exercise7.h"
void EXERCISE7_Run()
{
    clearAllClock();
}
void clearAllClock()
{
	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin , RESET);

}


