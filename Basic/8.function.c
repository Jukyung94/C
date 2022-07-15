#include <stdio.h>
//a function to return MAX or MIN of 3 inputs

int main(void)
{
	int num1, num2, num3;
	printf("enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	MaxNumber(num1, num2, num3);
	MinNumber(num1, num2, num3);
	return 0;
}

int MaxNumber(int num1, int num2, int num3)
{
	if(num1 > num2 && num1 > num3)
		printf("MAX is %d \n", num1);
	else if(num2 > num1 && num2 > num3)
		printf("MAX is %d \n", num2);
	else
		printf("MAX is %d \n", num3);	
}
int MinNumber(int num1, int num2, int num3)
{
	if(num1 < num2 && num1 < num3)
		printf("MIN is %d \n", num1);
	else if(num2 < num1 && num2 < num3)
		printf("MIN is %d \n", num2);
	else
		printf("MIN is %d \n", num3);	
}
