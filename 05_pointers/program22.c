#include<stdio.h>
int main ()
{
    char *ptr="Linux";
    printf("\n[%c]\n",*ptr++);
    printf("\n[%c]\n",*ptr);
    return 0;
}