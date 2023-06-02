#include <stdio.h>
#include<stdint.h>
int main(void){
	uint32_t *pClkctrlReg=(uint32_t*)0x40023830;
	uint32_t *pPortDModeReg=(uint32_t*)0x40020C00;
	uint32_t *pPortDModeReg1=(uint32_t*)0x40020C00;
	uint32_t *pPortDModeReg2=(uint32_t*)0x40020C00;
	uint32_t *pPortDModeReg3=(uint32_t*)0x40020C00;

	uint32_t *pPortDOutReg=(uint32_t*)0x40020C14;
	uint32_t *pPortDOutReg1=(uint32_t*)0x40020C14;
	uint32_t *pPortDOutReg2=(uint32_t*)0x40020C14;
	uint32_t *pPortDOutReg3=(uint32_t*)0x40020C14;

	*pClkctrlReg |= (1<<3);

	*pPortDModeReg &= ~(3<<30);
	*pPortDModeReg |= (1<<30);

	*pPortDModeReg1 &= ~(3<<28);
	*pPortDModeReg1 |= (1<<28);

	*pPortDModeReg2 &= ~(3<<26);
	*pPortDModeReg2 |= (1<<26);

	*pPortDModeReg3 &= ~(3<<24);
	*pPortDModeReg3 |= (1<<24);


	*pPortDOutReg |= (1<<15);
	*pPortDOutReg1 |= (1<<14);
	*pPortDOutReg2 |= (1<<13);
	*pPortDOutReg3 |= (1<<12);

	while(1);
}
