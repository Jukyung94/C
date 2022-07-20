#include <stdio.h>

int main(void)
{
	int n, k, result;
	printf("enter constant n: ");
	scanf("%d", &n);
	
	
	for(k = 1; k < n; k++) 
	{
		result = pow(2, k);
		if(result == n)
			break;		
	}
	printf("maximum number of k is : %d", k);
	
	return 0;
}
