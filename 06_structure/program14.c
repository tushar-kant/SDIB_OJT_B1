#include<stdio.h>
struct arith{
    int a;
    int b;
    int res;
};
int add(int a,int b){
    return a+b;
}
int main(){
    struct arith val;
    val.a=10;
    val.b=5;
    val.res=add(val.a,val.b);
    printf("add is:%d\n",val.res);
  
}