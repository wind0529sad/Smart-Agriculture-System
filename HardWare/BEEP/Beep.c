#include "Beep.h"

void BEEP_Init(void)
	{
    RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOB, ENABLE);
		
		GPIO_InitTypeDef GPIO_InitStructure;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
		GPIO_InitStructure.GPIO_Speed  = GPIO_Speed_50MHz;
		GPIO_Init(GPIOB,&GPIO_InitStructure);
		
		GPIO_ResetBits (GPIOB,GPIO_Pin_8);
	}

	void BEEP_Turn(void)
	{
		if(GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_8) == 0)
		{
			GPIO_SetBits(GPIOB,GPIO_Pin_8);
	  }
		else
		{
			GPIO_ResetBits(GPIOB, GPIO_Pin_8);
		}
	}
	void BEEP_ON(void)
		{
			GPIO_SetBits(GPIOB,GPIO_Pin_8);
		}

	void BEEP_OFF(void)
		{
			GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		}



		