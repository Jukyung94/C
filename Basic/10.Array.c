#include <stdio.h>

//Array

int main(void)
{
	//set an array with 5 length and print maximum, minimum and sum of numbers
	int arr[5];
	int i, sum = 0;
	printf("enter 5 numbers: ");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	
	for(i = 0; i < 5; i++)
	{
		sum += arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
			min = arr[i];
	}
	printf("max: %d \n", max);
	printf("min: %d \n", min);
	printf("sum: %d \n", sum);
}
