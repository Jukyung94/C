#include <stdio.h>
//add all numbers between two given numbers

int main(void){
	int num1; 	//first number
	int num2; 	//second number
	int i; 		//avariable use for 'for' loop
	int sum = 0; 	//sum of numbers
	
	printf("enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	for(i = num1; i <= num2; i++)
	{
		sum += i;
	}
	printf("sum is : %d", sum);
	return 0;
	
}
