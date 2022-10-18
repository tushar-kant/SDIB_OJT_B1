#include<stdio.h>
void swap(int a, int b)
{
   int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d\t%d",a,b);
}
int main()
{
    int a , b;
    scanf("%d%d",&a,&b);
    swap(a,b);
}
