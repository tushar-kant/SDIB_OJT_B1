#include<stdio.h>
#define BIG(x,y) (x>y)?x:y
int main()
{
    int a,b,c;
    printf("\n enter any three integer");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n biggest of three integer:%d\n",BIG(BIG(a,b),c));
  
}
