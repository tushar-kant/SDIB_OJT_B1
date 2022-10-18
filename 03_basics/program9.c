#include<stdio.h>
int a,b;
int main(){
    initialize();
    printf("value of a  and b%d %d",a,b);
    swap();
    printf("\nvalue of a  and b%d %d",a,b);

}
int initialize(){
    a=10,b=20;
}
void swap(){
    int temp;
    temp=a;
    a=b;
    b=temp;
}