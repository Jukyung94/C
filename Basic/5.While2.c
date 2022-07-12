#include <stdio.h>
/*print
	*
	o*
	oo*
	ooo*
	oooo* */

int main(void){
	int j = 0; //set count for 'o'
	int i = 0;
	while(j < 5){
		while(i < j){
			printf("o");
			i++;
		}
		printf("*\n");
		i = 0;
		j++;
	}
	return 0;
}
