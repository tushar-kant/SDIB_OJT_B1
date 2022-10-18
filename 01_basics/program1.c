#include<stdio.h>
int main(){
    int a =10;
    int b;
    b=sizeof(a++);
    printf("%i\n%i",a,b);

}