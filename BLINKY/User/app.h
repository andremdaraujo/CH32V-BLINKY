/*
 * app.h
 *
 *  Created on: Nov 22, 2023
 *      Author: Andr�� A. M. Ara��jo
 */

#ifndef USER_APP_H_
#define USER_APP_H_

#include <ch32v00x.h>

extern volatile uint8_t button_flag;

void APP_Init(void);
void APP_GPIO_Init(void);
void APP_GPIO_DeInit(void);
void APP_Standby(void);

void EXTI7_0_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

#endif /* USER_APP_H_ */
