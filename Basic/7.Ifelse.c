#include <stdio.h>

int main(void)
{
	int num1;

	for(num1 = 1; num1 < 100; num1++)
	{
		if(num1 % 7 == 0 && num1 %9 == 0){
			printf("common multiples of 7, 9: %d \n\n", num1);
		}
		else if(num1 % 7 == 0){
			printf("multiples of 7: %d \n\n", num1);
		}
		else if(num1 % 9 == 0){
			printf("multiples of 9: %d \n\n", num1);
		}
	}
	return 0;
}
