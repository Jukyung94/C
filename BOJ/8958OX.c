#include <stdio.h>
#include <string.h>

int main(void)
{
	char ox[80];
	int n;
	int i,j = 0;
	int b, sum = 0;
	
	scanf("%d\n", &n); //number of cases
	
	for(i = 0; i < n; i ++)
	{
		b = 0;
		sum = 0;
		scanf("%s", ox); //input O or X
		for(j = 0; j < strlen(ox); j ++) //scan ox
		{
			if(ox[j] == 'X') //if there is X, count reset
				b = 0;
			else if(ox[j] == 'O') 
			{	
				b ++;
			}
			sum += b;	
		}
		printf("%d\n", sum);
	}
	return 0;
}
