/*
 * exercise1.c
 *
 *  Created on: Sep 8, 2024
 *      Author: Thanh Phu
 */
#include "exercise1.h"
int led_status = 0;
void EXERCISE1_Run()
{
    if(led_status == 0)
    {
    	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
    	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
        led_status = 1;
    }
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
}
