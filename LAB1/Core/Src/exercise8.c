/*
 * exercise8.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Thanh Phu
 */
#include "exercise8.h"
void EXERCISE8_Run(int x)
{
	setNumberOnClock(x);
}
void setNumberOnClock(int num)
{
	switch(num)
		{
		     case 0:
		          HAL_GPIO_WritePin(GPIOA, LED_2_Pin, SET);
		          break;
		     case 1:
		          HAL_GPIO_WritePin(GPIOA, LED_3_Pin, SET);
		          break;
		     case 2:
		          HAL_GPIO_WritePin(GPIOA, LED_4_Pin, SET);
		          break;
		     case 3:
		          HAL_GPIO_WritePin(GPIOA, LED_5_Pin, SET);
		          break;
		     case 4:
		          HAL_GPIO_WritePin(GPIOA, LED_6_Pin, SET);
		          break;
		     case 5:
		          HAL_GPIO_WritePin(GPIOA, LED_7_Pin, SET);
		          break;
		     case 6:
		          HAL_GPIO_WritePin(GPIOA, LED_8_Pin, SET);
		          break;
		     case 7:
		          HAL_GPIO_WritePin(GPIOA, LED_9_Pin, SET);
		          break;
		     case 8:
		          HAL_GPIO_WritePin(GPIOA, LED_10_Pin, SET);
		          break;
		     case 9:
		          HAL_GPIO_WritePin(GPIOA, LED_11_Pin, SET);
		          break;
		     case 10:
		          HAL_GPIO_WritePin(GPIOA, LED_12_Pin, SET);
		          break;
		     case 11:
		          HAL_GPIO_WritePin(GPIOA, LED_1_Pin, SET);
		          break;
		     default:
		          break;
	    }
}

