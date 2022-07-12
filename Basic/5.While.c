#include <stdio.h>

int main(void)
{
	//print Hello world
	int i = 0;
	int num1 = 0;
	printf("enter the number: ");
	scanf("%d", &num1);
	
	while(i < num1){
		printf("Hello World! \n");
		i++;
	}
	return 0;
}
