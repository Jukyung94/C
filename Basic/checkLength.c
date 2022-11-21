#include <stdio.h>
#include <string.h>

void check(char *str, int length) {
	if(strlen(str) >= 8 && strlen(str) <= length) {
		printf("조건에 맞습니다.");
	} else {
		printf("길이가 다릅니다");
	}
}

int main(void) {
	char a[100];
	scanf("%s", a);
	int length = 12;
	
	
	check(a, length);
	
	return 0; 
}
