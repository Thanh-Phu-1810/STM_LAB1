/*
 * exercise10.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Thanh Phu
 */
#include "exercise10.h"
int hour = 0;
int minute = 0;
int second = 0;
int counter = 0;
int blink_counter = 0;
int blink_state = 0;

void EXERCISE10_Run()
{
	 counter+=1;
	   blink_counter+=1;
	   if(counter >= 5)
	   {
		   second++;
		   counter = 0;
		   if(second >= 60)
		   {
			   minute++;
			   second = 0;
			   if(minute >= 60)
			   {
				   minute = 0;
	               resetNumberOnClock(hour);
	               hour++;
	               if(hour >= 12)
	               {
	            	   hour = 0;
	               }
			   }
		   }
	   }
	   if(second % 5 == 0)
	   {
		   if(second / 5 == 0) resetNumberOnClock(11);
		   if(second /5 != 0) resetNumberOnClock(second / 5 - 1);
		   setnumberOnClock(second / 5);
	   }
	   setnumberOnClock(hour);
	   if(blink_counter >= 4)
	   {  switch(blink_state)
	      {
	         case 0:
			   setnumberOnClock(minute / 5);
			   blink_state = 1;
			   break;
	         case 1:
			   resetNumberOnClock(minute / 5);
			   blink_state = 0;
			   break;
	      }
		   blink_counter = 0;
	   }

}
void setnumberOnClock(int num)
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
void resetNumberOnClock(int num)
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

