#include<stdio.h>
#define MAX 10

int main()
{
    printf("\n Max:%d\n",MAX);
    #undef MAX
    #define MAX 100
    printf("\n Max:%d\n",MAX);

}