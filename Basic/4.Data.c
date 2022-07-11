#include <stdio.h>

int main(void){
	//decimal, octal, hexadecimal
	printf("00000001 to decimal is %d \n", 1);
	printf("00000010 to decimal is %d \n", 2);
	printf("00000100 to decimal is %d \n", 4);
	printf("00001000 to decimal is %d \n", 8);
	
	//BitAndOperation
	int num1 = 15; //00000000 00000000 00000000 00001111
	int num2 = 20; //00000000 00000000 00000000 00010100
	int num3 = num1 & num2; // bit and operation of num1, num2
	printf("the result of AND operation: %d \n", num3);
	return 0;
}
