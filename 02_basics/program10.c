#include<stdio.h>
int main(){
    int a=10,j;
    for (int i=7;i>=0;i--){
        j=(a>>i)&0X01;
        printf("%d",j);
    }
}