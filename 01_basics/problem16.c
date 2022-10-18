#include<stdio.h>
int main(){
    int a=7;
    int b=4;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    return 0;

}