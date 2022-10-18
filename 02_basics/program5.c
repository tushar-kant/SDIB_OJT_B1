#include<stdio.h>
int main(){
    int a=10,b=2;
    printf("\n before a=%d\tb=%d",a,b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;

    }
    printf("\n after a=%d\tb=%d",a,b);
}