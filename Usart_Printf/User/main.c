/***************************************************************************/
/**
	//	Ӳ��ƽ̨  stm32f407vet6,�ⲿ����8M
	//	ע��system_stm32f4xx.c,stm32f4xx.h�޸ĵĲ���
	//	ģ�幤��
	//
	//

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
		printf("hello world\r\n");
		Delay_ms(500);
		
		printf("good well \r\n");
		Delay_ms(500);
		
	}
}


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/


