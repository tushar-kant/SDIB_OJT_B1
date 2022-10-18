#include<stdio.h>
void findsquare(int a){
    printf("square is:%d",a*a);
}
int main(){
    int a;
    scanf("%d",&a);
    findsquare(a);
}