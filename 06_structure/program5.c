#include<stdio.h>
struct arith{
    int a;
    int b;
    int res;
};
int add(int a,int b,int *res){
    res= a+b;
}

int main(){
    struct arith val;
    val.a=10;
    val.b=5;
    
    printf("add is:%d\n",add(val.a,val.b,&val.res));
}