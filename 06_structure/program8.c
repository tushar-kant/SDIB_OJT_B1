#include<stdio.h>
struct arith{
    int a;
    int b;
    int res;
};
void add(struct arith *val){
    
    (*val).res=(*val).a+(*val).b;
    printf("%d",(*val).res);
}

int main(){
    struct arith *p;
  
    add(p);
  
}