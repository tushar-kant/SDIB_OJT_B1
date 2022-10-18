#include<stdio.h>
#include"myArith.h"
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int  main()
{
    printf("ADDITION IS : %d\n",add(10,20));
    printf("SUBTRACTION IS : %d\n",sub(10,20));
    printf("MULTIPLICATION IS : %d\n",mul(10,20));
    printf("division IS : %d\n",div(10,20));
}