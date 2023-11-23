/*
 * app.c
 *
 *  Created on: Nov 22, 2023
 *      Author: Andre
 */

#include "app.h"

void APP_Init(void)
{
    uint8_t display = 0;

    APP_ConfigGPIO();

    while(1)
    {
        if (!GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_0))
        {
            display++;

            GPIO_Write(GPIOC, (display & 0x1Fu));
            Delay_Ms(125);
        }
    }
}

void APP_ConfigGPIO(void)
{
    GPIO_InitTypeDef    GPIO_InitStructure  = {0};

    // Port A - Is being used for XTAL

    // Port C
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    // Set Pins 1 to 5 as output, push-pull
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    // Port D
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    // Set Pin 0 as input, pull-up
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;

    GPIO_Init(GPIOD, &GPIO_InitStructure);
}
