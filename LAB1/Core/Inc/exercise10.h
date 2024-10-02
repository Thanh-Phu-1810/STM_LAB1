/*
 * exercise10.h
 *
 *  Created on: Sep 13, 2024
 *      Author: Thanh Phu
 */

#ifndef INC_EXERCISE10_H_
#define INC_EXERCISE10_H_
#include "main.h"
void EXERCISE10_Run();
void setnumberOnClock(int num);
void resetNumberOnClock(int num);
void setTimer(int hour, int minute, int second);
extern int hour;
extern int minute;
extern int second;
extern int counter;
extern int blink_counter;
extern int blink_state;

#endif /* INC_EXERCISE10_H_ */
