#include <stdio.h>

int main(void)
{
	//count the length of the word
	char arr[100]; //array for save the given word
	int count = 0;
	printf("enter the word: ");
	scanf("%s", arr);
	
	while(arr[count] != 0)
	{
		count++;
	}
	printf("length of the word: %d \n", count);
	
	return 0;
}
