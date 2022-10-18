#include<stdio.h>
int main(){

   int a=5,b,c;
   b=a++;
   c=++a;

   printf("%d %d %d  \n" ,a,b,c);
   return 0;
}