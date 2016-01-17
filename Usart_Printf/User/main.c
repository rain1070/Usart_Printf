/***************************************************************************/
/**
	//	硬件平台  stm32f407vet6,外部晶振8M
	//	注意system_stm32f4xx.c,stm32f4xx.h修改的参数
	//	模板工程
	//
	//中断接收串上位机的数据， 再回发给上位机

***/

/***************************************************************************/

#include "stm32f4xx.h" 

#include "usart_printf.h"
#include "systick.h"

int main(void)
{   
	 
	SysTick_Init();
	USART_Config();
	
	while (1)
	{
		while(RxIndex != 0){
			
			printf("你发送的数据为:\r\n");
			Delay_ms(10);
			
			printf("%s\r\n",RxBuffer);
			Delay_ms(10);
			
			RxIndex = 0;
			
		}
		
	}
}


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/


