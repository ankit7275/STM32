
#include<stdio.h>
//#include<stdint.h>
int main(){
	char a[30];
	printf("enter name\n");
	fflush(stdout);
	scanf("%[^\n]s",a);
	printf("name is :%s",a);
	fflush(stdout);
	return 0;
}
