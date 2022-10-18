#include<stdio.h>
int main(){

int a=1,b=2,temp;
printf("\n before a=%d \tb=%d",a,b);
if(a>b){
    a+=1;
    b+=1;
}
else{
    a+=10;
    b+=20;
}
printf("\n after a=%d \tb=%d",a,b);
}