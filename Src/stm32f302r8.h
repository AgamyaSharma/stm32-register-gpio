

#ifndef STM32F302R8_H_
#define STM32F302R8_H_

#include <stdint.h>
typedef struct {
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
	volatile uint32_t BRR;

}GPIO_Reg_Def_t;

typedef struct {
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t CFGR2;
	volatile uint32_t CFRG3;
} RCC_Reg_t;

typedef struct {
	volatile uint32_t CTRL;
	volatile uint32_t LOAD;
	volatile uint32_t VAL;
	volatile uint32_t CALIB;
} SYSTICK_Reg_t;

#define GPIOB_REG_ADDR 0x48000400
#define GPIOB ((GPIO_Reg_Def_t*) GPIOB_REG_ADDR)

#define RCC_REG_ADDR 0x40021000
#define RCC ((RCC_Reg_t*) RCC_REG_ADDR)

#define SYSTICK_REG_ADDR 0xE000E010
#define SYSTICK ((SYSTICK_Reg_t*) SYSTICK_REG_ADDR )
#endif /* STM32F302R8_H_ */
