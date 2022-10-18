#include<stdio.h>
extern int result;
int main(){
    printf("\n%d",result);
    add(10,20);
    printf("\n%d",result);
    sub(10,20);
    printf("\n%d",result);
    disp();
}
int disp(){
    printf("\n%d",result);
}