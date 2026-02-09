
#include <stdint.h>
#include "stm32f302r8.h"
int main(void)
{
	RCC->AHBENR |= (1<<18); // Enabling the Clock of GPIOB hanging off AHB bus
	GPIOB->MODER &= ~(1<<27|1<<26); // Clearing the bits(26-27) of the mode register
	GPIOB->MODER |=(1<<26); //Setting 01 for PB13 connected to the internal Led
	GPIOB->ODR &= ~(1<<13); // Clearing the bit(13) of output data register

	while(1){

    GPIOB->ODR ^= (1<<13); // Toggling the bits
    for(volatile int i=0;i<500000;i++){
    	__asm("nop");
    }
	}
	for(;;);
}
