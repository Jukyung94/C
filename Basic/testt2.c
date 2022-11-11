#include <stdio.h>

int main(void) {
	int a, b, i;
	
	scanf("%d", &b);
	
	for(i = 2; i <= b; i ++) {
		for(a = 2; a < i; a++){
			if(i % a == 0){
				break;
			}
		}
		if(i == a){
			printf("%d \n", i);
		}
	}
	return 0;
}
