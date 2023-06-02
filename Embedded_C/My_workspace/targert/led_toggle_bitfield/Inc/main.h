/*
 * main.h
 *
 *  Created on: May 22, 2023
 *      Author: ankit
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>

typedef struct{
	uint32_t GPIOA_EN:1;
	uint32_t GPIOB_EN:1;
	uint32_t GPIOC_EN:1;
	uint32_t GPIOD_EN:1;
	uint32_t GPIOE_EN:1;
	uint32_t GPIOF_EN:1;
	uint32_t GPIOG_EN:1;
	uint32_t GPIOI_EN:1;
	uint32_t GPIOJ_EN:1;
	uint32_t GPIOK_EN:1;
	uint32_t RESERVED1:1;
	uint32_t CRCEN:1;
	uint32_t RESERVED2:3;
	uint32_t RESERVED3:3;
	uint32_t BKPSRAMEN:1;
	uint32_t RESERVED4:1;
	uint32_t CCMDATARAMEN:1;
	uint32_t DMA1EN:1;
	uint32_t DMA2EN:1;
	uint32_t DMA2DEN:1;
	uint32_t RESERVED5:1;
	uint32_t ETHMACEN:1;
	uint32_t ETHMACTXEN:1;
	uint32_t ETHMACRXEN:1;
	uint32_t ETHMACPTPEN:1;
	uint32_t OTGHSEN:1;
	uint32_t OTGHSILPIEEN:1;
	uint32_t RESERVED6:1;


}RCC_AHB1ENR_t;

typedef struct{
	uint32_t MODER0:2;
	uint32_t MODER1:2;
	uint32_t MODER2:2;
	uint32_t MODER3:2;
	uint32_t MODER4:2;
	uint32_t MODER5:2;
	uint32_t MODER6:2;
	uint32_t MODER7:2;
	uint32_t MODER8:2;
	uint32_t MODER9:2;
	uint32_t MODER10:2;
	uint32_t MODER11:2;
	uint32_t MODER12:2;
	uint32_t MODER13:2;
	uint32_t MODER14:2;
	uint32_t MODER15:2;
	}GPIOd_MODE_t;

typedef struct{
	uint32_t ODR0:1;
	uint32_t ODR1:1;
	uint32_t ODR2:1;
	uint32_t ODR3:1;
	uint32_t ODR4:1;
	uint32_t ODR5:1;
	uint32_t ODR6:1;
	uint32_t ODR7:1;
	uint32_t ODR8:1;
	uint32_t ODR9:1;
	uint32_t ODR10:1;
	uint32_t ODR11:1;
	uint32_t ODR12:1;
	uint32_t ODR13:1;
	uint32_t ODR14:1;
	uint32_t ODR15:1;
	uint32_t Reserved:16;
	}GPIOd_ODR_t;


#endif /* MAIN_H_ */
