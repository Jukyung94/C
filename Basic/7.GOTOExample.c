#include <stdio.h>

//GOTO Example

int main(void)
{
	int num;
	printf("natural number: ");
	scanf("%d", &num);
	
	if(num == 1)
		goto ONE;
	else if(num == 2)
		goto TWO;
	else
		goto OTHER;
ONE:
	printf("You entered 1 \n");
	goto END;
TWO:
	printf("You entered 2 \n");
	goto END;
OTHER:
	printf("You entered 3 or higher number \n");
END:
	return 0;
}
