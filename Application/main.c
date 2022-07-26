#include "Port.h"
#include "Dio.h"
#include "GPT.h"
#include "NVIC.h"
#include "LED.h"

  
volatile static uint8 ticks = 0;

void Timer0A_ISR(void);

void Timer0A_ISR(void)
{
	ticks++;
}


int main ()
{
    Gpt_Init(&Gpt_Configuration);
	   
	  Gpt_StartTimer(TIMER0_A_WIDE,16000000);

    Port_Init(&Port_PinConfig);

    Dio_Init(&Dio_Configuration);

    NVIC_Init();

    while(1)
    {
      Timer0A_ISR();
			
			if(ticks <= 5)
			{
				LED_ON(RED_LED);
			}
			else if(ticks > 5 && ticks <= 7)
			{
				LED_OFF(RED_LED);
			}
			else if(ticks > 7 && ticks <= 11)
			{
				LED_ON(BLUE_LED);
			}
			else if(ticks > 11 && ticks <= 14)
			{
				LED_OFF(BLUE_LED);
			}
			else if(ticks > 14 && ticks <= 17)
			{
				LED_ON(GREEN_LED);
			}
			else if(ticks > 17 && ticks <= 20)
			{
				LED_OFF(GREEN_LED);
				ticks = 0;
			}
    }
}
