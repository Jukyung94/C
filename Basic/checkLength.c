#include <stdio.h>
#include <string.h>

void check(char *str, int length) {
	if(strlen(str) >= 8 && strlen(str) <= length) {
		printf("���ǿ� �½��ϴ�.");
	} else {
		printf("���̰� �ٸ��ϴ�");
	}
}

int main(void) {
	char a[100];
	scanf("%s", a);
	int length = 12;
	
	
	check(a, length);
	
	return 0; 
}
