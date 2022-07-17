#include <stdio.h>

//get two numbers and print multiplication table for number between two numbers
//ex input: 3, 5 -> output: multiplication table of  3, 4, 5


int main(void)
{
	int num1, num2;
	printf("enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	MultipleTable(num1, num2);
}

int MultipleTable(int n1, int n2)
{
	int i, j;
	for(i = n1; i <= n2; i++)
	{
		printf("multiplication table of %d: \n", i);
		for(j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d \n", i, j, (i*j));
		}
		printf("\n");
	}
	
}
