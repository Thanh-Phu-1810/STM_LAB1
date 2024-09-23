/*
 * exercise5.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Thanh Phu
 */
#include "exercise5.h"
int led_q = 0;
int c = 6;

void EXERCISE5_Run()
{
	switch(led_q)
		{
		     case 0: //đèn đỏ hướng 1, đèn xanh hướng 2  (đỏ 5s, vàng 2s, xanh 3s)
		    	 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_4_Pin | LED_10_Pin, SET);
		    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_12_Pin, RESET);
		    	 c--;
		    	 EXERCISE4_Run_EX5(c);
		    	 if(c <= 3)
		    	 {
		    		 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_3_Pin | LED_9_Pin, SET);
		    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_4_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_10_Pin | LED_12_Pin, RESET);
		    		 led_q = 1;
		    	 }
		    	 break;

		     case 1: //đèn đỏ hướng 1, đèn vàng hướng 2
		    	 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_3_Pin | LED_9_Pin, SET);
		    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_4_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_10_Pin | LED_12_Pin, RESET);
		    	 c--;
		    	 EXERCISE4_Run_EX5(c);
		    	 if(c <= 0)
		    	 {
		    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_7_Pin | LED_2_Pin | LED_8_Pin, SET);
		    		 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
		    		 led_q = 2;
		    		 c = 6;
		    	 }
		    	 break;
		     case 2: //đèn xanh hướng 1, đèn đỏ hướng 2
		    	 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_7_Pin | LED_2_Pin | LED_8_Pin, SET);
		    	 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_12_Pin, RESET);
		    	 c--;
		    	 EXERCISE4_Run_EX5(c);
		    	 if(c <= 3)
		    	 {
		    		 HAL_GPIO_WritePin(GPIOB, LED_12_Pin | LED_6_Pin | LED_2_Pin | LED_8_Pin, SET);
		    		 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_7_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_1_Pin, RESET);
		    		 led_q = 3;
		    	 }
		    	 break;
		     case 3: //đèn vàng hướng 1, đèn đỏ hướng 2
		    	 HAL_GPIO_WritePin(GPIOB, LED_12_Pin | LED_6_Pin | LED_2_Pin | LED_8_Pin, SET);
		    	 HAL_GPIO_WritePin(GPIOB, LED_3_Pin | LED_4_Pin | LED_5_Pin | LED_7_Pin | LED_9_Pin | LED_10_Pin | LED_11_Pin | LED_1_Pin, RESET);
		    	 c--;
		    	 EXERCISE4_Run_EX5(c);
		    	 if(c <= 0)
		    	 {
		    		 HAL_GPIO_WritePin(GPIOB, LED_11_Pin | LED_5_Pin | LED_4_Pin | LED_10_Pin, SET);
		    		 HAL_GPIO_WritePin(GPIOB, LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin | LED_9_Pin | LED_12_Pin, RESET);
		    		 c = 6;
		    		 led_q = 0;
		    	 }
		    	 break;
		     default:
		    	 led_q = 0;
		    	 break;

	     }
}
void EXERCISE4_Run_EX5(int x)
{
	switch(x)
		{
		    case 0:
		    	HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
		    	break;
		    case 1:
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_1_Pin | SEG_2_Pin, RESET);
		    	break;
		    case 2:
		    	HAL_GPIO_WritePin(GPIOA, SEG_2_Pin | SEG_5_Pin , SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
		    	break;
		    case 3:
		    	HAL_GPIO_WritePin(GPIOA, SEG_4_Pin | SEG_5_Pin , SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
		    	break;
		    case 4:
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
		    	break;
		    case 5:
		    	HAL_GPIO_WritePin(GPIOA, SEG_1_Pin | SEG_4_Pin , SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
		    	break;
		    case 6:
		    	HAL_GPIO_WritePin(GPIOA, SEG_1_Pin , SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
		    	break;
		    case 7:
		    	HAL_GPIO_WritePin(GPIOA, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
		    	break;
		    case 8:
		    	HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
		    	break;
		    case 9:
		    	HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, SET);
		        HAL_GPIO_WritePin(GPIOA, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
		    	break;
		    default:
		    	x = 0;
		    	break;
	    }
}

