#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    p = &a;
    printf("%d\n", *(p++));

    printf("%d\n", p++);
    printf("%d\n", p);
     printf("%d\n", *p);
}