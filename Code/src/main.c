#include <msp430.h>
#include <legacymsp430.h>

#define LED0 BIT0
#define LED1 BIT6
#define LED_DIR P1DIR
#define LED_OUT P1OUT



void initLEDs(void) 
{
	LED_DIR |= LED0 + LED1; //Set LED pins as outputs
	LED_OUT |= LED0 + LED1; //Turn on both LEDs
}


int main()
{
	WDTCTL = WDTPW + WDTHOLD;
	initLEDs(); 
	BCSCTL3 |= LFXT1S_2; 
	TACTL = TASSEL_1 | MC_1;
	TACCTL0 = CCIE; 
	TACCR0 = 11999; 
	
	while(1)
	{
	}
}




