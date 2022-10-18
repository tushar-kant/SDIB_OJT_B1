#include<stdio.h>
struct arith
{
    int a,b;
    int (*fnptr)(int,int);
};
int addition(int x,int y)
{
    return x+y;
}
int main()
{
    struct arith add;
    printf("Enter the value :");
    scanf("%d%d",&add.a,&add.b);
    add.fnptr=addition;
    printf("Addition is :%d",add.fnptr(add.a,add.b));
    
}