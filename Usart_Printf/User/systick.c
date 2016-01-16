#include "stm32f4xx.h" 
#include "systick.h"

volatile unsigned int SystemNum;


void Delay_ms(unsigned int delay_ms){

	unsigned int Start = SystemNum;
	
	while ( (SystemNum - Start) < delay_ms);

}


void SysTick_Init(void)
{
	
	SystemNum = 0;
	
	/* SystemCoreClock / 1000    1ms
	 * SystemCoreClock / 100000	 10us
	 * SystemCoreClock / 1000000 1us
	 */
	while(SysTick_Config( SystemCoreClock  / 1000));
}

