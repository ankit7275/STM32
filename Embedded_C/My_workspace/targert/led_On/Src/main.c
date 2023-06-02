#include<stdio.h>
#include<stdint.h>
int main(){
	uint32_t *pClkctrlReg=(uint32_t*)0x40023830;
	uint32_t *pPortDModeReg=(uint32_t*)0x40020c00;
	uint32_t *pPortDOutReg=(uint32_t*)0x40020c14;
	uint32_t *pPortAModeReg=(uint32_t*)0x40020000;
	uint32_t *pPortAInpReg=(uint32_t*)0x40020010;

	*pClkctrlReg |= (1<<3); //enable gpiod

	*pClkctrlReg |= (1<<0); //enable gpioa

	*pPortDModeReg &= ~(3<<24);
		//b. make 24th bit as 1(set)
	*pPortDModeReg |= (1<<24);

	//now we have to make PA0 to input mode
	*pPortAModeReg &= ~(3<<0);



//	*pPortAInpReg |= (1<<0);     //make gpioa0 to read input data regiser

	//read the status of the gpioa0



	//2. configure the mode of the Io pin as output
	//a. clear the 24th and 25th bits position(clear)

	//3. set 12th bit of the output data register to make I/O pin-12 HIGH
	while(1){
	uint8_t pinStatus = (uint8_t)(*pPortAInpReg & 0x1);

	if(pinStatus){
		*pPortDOutReg |= (1<<12);
	}
	else{
		*pPortDOutReg &= ~(1<<12);
	}
	}
}
//	*pPortDOutReg |= (1<<12);

