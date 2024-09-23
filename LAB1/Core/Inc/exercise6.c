/*
 * exercise6.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Thanh Phu
 */
#include "exercise6.h"
void EXERCISE6_Run(int x)
{
	switch(x)
	{
	    case 0:
	    	HAL_GPIO_WritePin(GPIOA, LED_2_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 1:
	    	HAL_GPIO_WritePin(GPIOA, LED_3_Pin, SET);
	        HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 2:
	    	HAL_GPIO_WritePin(GPIOA, LED_4_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	        break;
	    case 3:
	    	HAL_GPIO_WritePin(GPIOA, LED_5_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 4:
	    	HAL_GPIO_WritePin(GPIOA, LED_6_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 5:
	    	HAL_GPIO_WritePin(GPIOA, LED_7_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 6:
	    	HAL_GPIO_WritePin(GPIOA, LED_8_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 7:
	    	HAL_GPIO_WritePin(GPIOA, LED_9_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 8:
	    	HAL_GPIO_WritePin(GPIOA, LED_10_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    case 9:
	    	HAL_GPIO_WritePin(GPIOA, LED_11_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_12_Pin, RESET);
	    	break;
	    case 10:
	    	HAL_GPIO_WritePin(GPIOA, LED_12_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin, RESET);
	    	break;
	    case 11:
	    	HAL_GPIO_WritePin(GPIOA, LED_1_Pin, SET);
	    	HAL_GPIO_WritePin(GPIOA, LED_2_Pin | LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	break;
	    default:
	    	x = 0;
	    	break;
     }

}

