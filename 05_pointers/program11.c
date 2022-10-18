#include <stdio.h>

void incrementnu(int * num1)
{
   num1++;
}
int main()
{
    int num1;

    scanf("%d", &num1);
    incrementnu(&num1);
 
    printf(" %d",num1);
    return 0;
}