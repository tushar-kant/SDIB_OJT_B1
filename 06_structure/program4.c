#include<stdio.h>
struct arith{
    int a;
    int b;
    int res;
};
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    struct arith val;
    val.a=10;
    val.b=5;
    val.res=add(val.a,val.b);
    printf("add is:%d\n",val.res);
    // val.res=sub(val.a,val.b);
    // printf("sub is:%d\n",val.res);
    // val.res=mul(val.a,val.b);
    // printf("mul is:%d\n",val.res);
    // val.res=div(val.a,val.b);
    // printf("div is:%d\n",val.res);
}