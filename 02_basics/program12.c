#include<stdio.h>
int main(){
    int a=11 ,b=5  ;
    for (int i=7;i>=0;i--){

        printf("%d\t",((a>>i)&0X01)&((b>>i)&0X01));
    }
}       