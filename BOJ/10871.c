#include <stdio.h>

//print a number which is smaller than variable x

int main(void)
{
    int N = 0; //amount of array
    int X = 0; //variable x
    scanf("%d %d", &N, &X);
    int A[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]); //input array A
    }
    for(int i = 0; i < N; i++)
    {
        if(A[i] < X)		//compare number in array with x
        {
            printf("%d ", A[i]); //print numbers
        }
    }
    return 0;
}
