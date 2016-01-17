/***************************************************************************/
/**
	//	Ӳ��ƽ̨  stm32f407vet6,�ⲿ����8M
	//	ע��system_stm32f4xx.c,stm32f4xx.h�޸ĵĲ���
	//	ģ�幤��
	//
	//�жϽ��մ���λ�������ݣ� �ٻط�����λ��

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
			
			printf("�㷢�͵�����Ϊ:\r\n");
			Delay_ms(10);
			
			printf("%s\r\n",RxBuffer);
			Delay_ms(10);
			
			RxIndex = 0;
			
		}
		
	}
}


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/


