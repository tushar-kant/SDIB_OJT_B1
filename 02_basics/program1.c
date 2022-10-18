#include <stdio.h>
int main()
{
    int a = 10;
    if (a > 11)
    {
        a++;
        printf("executed\n%d", a);
    } 
    else
    {
        --a;
        printf("\n%d", a);
    }
}