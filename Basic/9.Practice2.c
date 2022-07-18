#include <stdio.h>

//convert second to hour, minute, second

int main(void)
{
	int num;
	int h, m, s;
	printf("enter second:");
	scanf("%d", &num);
	
	s = num % 60;
	m = (num / 60) % 60;
	h = num / 60 / 60;
	
	printf("[h: %d m: %d s: %d]", h, m, s);
	return 0;
}
