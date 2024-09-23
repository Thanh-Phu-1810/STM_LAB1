/*
 * exercise9.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Thanh Phu
 */
#include "exercise9.h"
void EXERCISE9_Run(int x)
{
	clearNumberOnClock(x);
}
void clearNumberOnClock(int num)
{
	 switch(num)
	     {
			case 0:
					HAL_GPIO_WritePin(GPIOA, LED_2_Pin, RESET);
					break;
			case 1:
					HAL_GPIO_WritePin(GPIOA, LED_3_Pin, RESET);
					break;
			case 2:
					HAL_GPIO_WritePin(GPIOA, LED_4_Pin, RESET);
					break;
		    case 3:
					HAL_GPIO_WritePin(GPIOA, LED_5_Pin, RESET);
					break;
		    case 4:
					HAL_GPIO_WritePin(GPIOA, LED_6_Pin, RESET);
					break;
			case 5:
					HAL_GPIO_WritePin(GPIOA, LED_7_Pin, RESET);
					break;
			case 6:
					HAL_GPIO_WritePin(GPIOA, LED_8_Pin, RESET);
					break;
			case 7:
					HAL_GPIO_WritePin(GPIOA, LED_9_Pin, RESET);
					break;
			case 8:
					HAL_GPIO_WritePin(GPIOA, LED_10_Pin, RESET);
					break;
			case 9:
					HAL_GPIO_WritePin(GPIOA, LED_11_Pin, RESET);
					break;
			case 10:
					HAL_GPIO_WritePin(GPIOA, LED_12_Pin, RESET);
					break;
			case 11:
					HAL_GPIO_WritePin(GPIOA, LED_1_Pin, RESET);
					break;
			default:
					num = 0;
					break;
			}
}

