#ifndef __printf_h__
#define __printf_h__

#include <stdio.h>
#include "stm32f4xx.h" 

#define			BUFFERSIZE			127



extern uint8_t RxBuffer [BUFFERSIZE];
extern __IO uint8_t RxIndex;



void USART_Config(void);
void send_string( char * string);


#endif

