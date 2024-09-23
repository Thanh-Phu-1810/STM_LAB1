/*
 * exercise2.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Thanh Phu
 */
#include "exercise2.h"
int led_blinky = 0;
int count = 1;
void EXERCISE2_Run()
{
	switch(led_blinky)
	{
	     case 0:
	         HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	         HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	         HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	         count++;
	    	 if(count >= 5)
	    	 {
	    		 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    		 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    		 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	    		 count = 1;
	    		 led_blinky = 2;
	    	 }
	       break;
	     case 1:
	    	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	    	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	    	 count++;
	    	 if(count >= 2)
	    	 {
	    		 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	    		 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    		 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	    		 count = 1;
	    		 led_blinky = 0;
	    	 }
	       break;
	     case 2:
	    	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	    	 count++;
	    	 if(count >= 3)
	    	 {
	    		 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    		 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	    	     HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	    		 count = 1;
	    		 led_blinky = 1;
	    	 }
	    	 break;
	     default:
	    	 led_blinky = 0;
	    	 break;

	}



}

