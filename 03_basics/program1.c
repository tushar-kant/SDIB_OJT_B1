#include<stdio.h>
int add (int x,int y){
   
    printf("%d",x+y);
}
int main(){
    int a,b;
    printf("enter two mumbers");
    scanf("%d%d",&a,&b);
    add(a,b);
}