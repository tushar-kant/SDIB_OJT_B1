#include<stdio.h>

int main(){

    int a=8,b,c,d;
    b=(a++,++a);
    c=a++,++a;
    d=(a++,++a,a>>2);
    printf("%d",b);
    printf("%d",c);
    printf("%d",d);


   

}