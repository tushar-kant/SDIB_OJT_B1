#include <stdio.h>
#define SIZE 5
int main()
{
    long a[SIZE];
    long sum = 0 ;int i;

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        sum+=a[i];
    }
    printf("sum is:%ld",sum);
}