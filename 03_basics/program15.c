#include<stdio.h>
int convertbinary(int);
int main(){
   int decimalnum;
   scanf("%d",&decimalnum);
   printf("\nBinary num is: %d",convertbinary(decimalnum));
}
int convertbinary(int decimalnum){
   int binarynum=0,rem,x=1;
   while(decimalnum != 0){
      rem = decimalnum % 2;
      binarynum = binarynum + rem * x;
      x = x * 10;
      decimalnum = decimalnum / 2;
   }
   return binarynum;;
}