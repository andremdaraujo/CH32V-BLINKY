#include "debug.h"

#include "app.h"

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    SystemCoreClockUpdate();
    Delay_Init();

    USART_Printf_Init(115200);

    printf("SystemClk:%d\r\n", SystemCoreClock);
    printf("ChipID:%08x \r\n", DBGMCU_GetCHIPID() );
    printf("GPIO Toggle TEST \r\n");

    APP_Init();
}

