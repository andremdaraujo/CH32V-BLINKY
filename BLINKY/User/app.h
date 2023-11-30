/*
 * app.h
 *
 *  Created on: Nov 22, 2023
 *      Author: Andre
 */

#ifndef USER_APP_H_
#define USER_APP_H_

#include <ch32v00x.h>

extern volatile uint8_t button;

void APP_Init(void);

void APP_ConfigGPIO(void);

void EXTI7_0_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

#endif /* USER_APP_H_ */
