#include<stdio.h>
int main()
{
    struct simp
    {
        int i;
        char city[30];
        
    };
    struct simp s1={6,"Bangalore"};
    printf("%s\n",s1.city);
    printf("%d\n",s1.i);
    return 0;
}