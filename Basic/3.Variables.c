/*Variables.

Get 3 numbers from user to calculate the equation below

num1 * num2 + num3

ex) if the inputs are 2, 4, 6, then the output must be 2x4+6=14. */

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("The output is... \n");
	printf("%d x %d + %d = %d \n", num1, num2, num3, (num1*num2+num3));
	return 0;
}
