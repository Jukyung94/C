#include <stdio.h> 

void check(char c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		printf("���ĺ�\n");
	} else {
		printf("���ĺ��ƴ�\n");
	} 
}

int main(void) {
	char a;
	int i = 0;
	
	while(i < 3){
		printf("���ڸ� �Է��ϼ���: ");
		scanf(" %c", &a);
		
		i++;
		check(a);
	}	
	return 0;
}


