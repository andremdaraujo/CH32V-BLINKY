/*
 * pwm.h
 *
 *  Created on: Dec 7, 2023
 *      Author: Andre
 */

#ifndef USER_PWM_H_
#define USER_PWM_H_

#include <ch32v00x.h>

/* PWM Output Mode Definition */
#define PWM_MODE1   0
#define PWM_MODE2   1

/* PWM Output Mode Selection */
//#define PWM_MODE PWM_MODE1
#define PWM_MODE PWM_MODE2

void TIM1_PWMOut_Init(u16 arr, u16 psc, u16 ccp);

void PWM_UpdatePulseWidth(uint16_t pulse_width);

#endif /* USER_PWM_H_ */
