#include "main.h"
#include<stdio.h>
#include<stdint.h>
int main(){
	RCC_AHB1ENR_t volatile *const pClkctrlReg = (RCC_AHB1ENR_t *)0x40023830;
	pClkctrlReg -> GPIOD_EN = 1; //enabling rcc for RCC_AHB1ENR_t

	GPIOd_MODE_t volatile *const pPortDModeReg = (GPIOd_MODE_t*)0x40020C00;
	pPortDModeReg -> MODER12 = 1;

	GPIOd_ODR_t volatile *const pPortDOutReg = (GPIOd_ODR_t*)0x40020C14;
	pPortDOutReg -> ODR13 = 1;

	while(1);

}
