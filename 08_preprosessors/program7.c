#include<stdio.h>

#define BIG(x,y) (x>y)?x:y


int main()
{
    int a,b,result,*p;
    char y= 'F',z='S';
    printf("\n enter any two integer");
    scanf("%d%d",&a,&b);
    printf("\n biggest of two integer:%d\n",BIG(a,b));
    printf("\n biggest of two char:%c\n",BIG(y,z));
    printf("\n biggest of two float:%f\n",BIG(10.23,24.45));
}
