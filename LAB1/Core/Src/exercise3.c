/*
 * exercise3.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Thanh Phu
 */
#include "exercise3.h"
int led_p = 0;
int a = 0;


void EXERCISE3_Run()
{
	switch(led_p)
	{
	     case 0: //đèn đỏ hướng 1, đèn xanh hướng 2  (đỏ 5s, vàng 2s, xanh 3s)
	    	 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_4_Pin | LED_10_Pin, SET);
	    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_12_Pin, RESET);
	    	 a++;
	    	 if(a >= 3)
	    	 {
	    		 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_3_Pin | LED_9_Pin, SET);
	    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_4_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_10_Pin | LED_12_Pin, RESET);
	    		 led_p = 1;
	    	 }
	    	 break;

	     case 1: //đèn đỏ hướng 1, đèn vàng hướng 2
	    	 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_3_Pin | LED_9_Pin, SET);
	    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_4_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_10_Pin | LED_12_Pin, RESET);
	    	 a++;
	    	 if(a >= 5)
	    	 {
	    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_7_Pin | LED_2_Pin | LED_8_Pin, SET);
	    		 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    		 led_p = 2;
	    		 a = 0;
	    	 }
	    	 break;
	     case 2: //đèn xanh hướng 1, đèn đỏ hướng 2
	    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_7_Pin | LED_2_Pin | LED_8_Pin, SET);
	    	 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
	    	 a++;
	    	 if(a >= 3)
	    	 {
	    		 HAL_GPIO_WritePin(GPIOB, LED_12_Pin | LED_6_Pin | LED_2_Pin | LED_8_Pin, SET);
	    		 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_7_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_1_Pin, RESET);
	    		 led_p = 3;
	    	 }
	    	 break;
	     case 3: //đèn vàng hướng 1, đèn đỏ hướng 2
	    	 HAL_GPIO_WritePin(GPIOB, LED_12_Pin | LED_6_Pin | LED_2_Pin | LED_8_Pin, SET);
	    	 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_7_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_1_Pin, RESET);
	    	 a++;
	    	 if(a >= 5)
	    	 {
	    		 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_4_Pin | LED_10_Pin, SET);
	    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_12_Pin, RESET);
	    		 a = 0;
	    		 led_p = 0;
	    	 }
	    	 break;
	     default:
	    	 led_p = 0;
	    	 break;

     }

}

