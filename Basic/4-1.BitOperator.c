#include <stdio.h>
//Bit practice

int main(void){
    int num1;
    printf("enter a number: ");
    scanf("%d", &num1);
    int num2 = ~num1+1;
    printf("%d \n", num2);
    
    int num3 = 3;
    int num4 = num3<<3; //shift 3 left means 2^3 = 8
    int num5 = num4>>2; 
    printf("3x8/4 = %d", num5);
    return 0;
}
