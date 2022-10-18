#include<stdio.h>
struct arith{
    int a,b,res;
   
};
struct arith add(struct arith val){
    val.res=val.a+val.b;
    printf("%d",val.res);
}

int main(){
    struct arith val;
    val.a=10;
    val.b=5;
    add(val);
}