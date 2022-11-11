#include <stdio.h>

int main(void) {
	int a, b, i;
	int result, k = 1;
	
	scanf("%d %d", &a, &b);
	
	for(i = 1; i <= b; i++){
		result *= a;
		if(result <= b ){
			k = i;
		}
	}	
	printf("%d", k);
	return 0;
}
