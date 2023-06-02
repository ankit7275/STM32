#include<stdint.h>
int main(){
	uint8_t volatile data1 =50;
	uint8_t volatile data2;
	data2=data1;
	data2=data1;

}
