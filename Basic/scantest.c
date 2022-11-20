#include <stdio.h> 

void check(char c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		printf("¾ËÆÄºª\n");
	} else {
		printf("¾ËÆÄºª¾Æ´Ô\n");
	} 
}

int main(void) {
	char a;
	int i = 0;
	
	while(i < 3){
		printf("¹®ÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
		scanf(" %c", &a);
		
		i++;
		check(a);
	}	
	return 0;
}


