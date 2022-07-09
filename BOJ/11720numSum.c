#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    char arr[100] = { 0 };
    int sum = 0;
    scanf("%s", arr);
    for(int i = 0; i < a; i++)
    {
        sum += arr[i]-'0';
    }
    printf("%d", sum);
    return 0;
}
