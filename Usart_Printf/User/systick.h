#ifndef __systick_h__
#define __systick_h__

extern volatile unsigned int SystemNum;

void Delay_ms(unsigned int delay_ms);
void SysTick_Init(void);

#endif


