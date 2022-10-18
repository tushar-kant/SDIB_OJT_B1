#include <stdio.h>

void swapNum(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
}
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    swapNum(&num1, &num2);
    printf("%d %d",num1,num2);
    return 0;
}