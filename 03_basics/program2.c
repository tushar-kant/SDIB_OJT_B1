#include<stdio.h>
int add (int x,int y){
   
   return x+y;
}
void sub(){
    int a,b;
    printf("enter for sub:");
    scanf("%d%d",&a,&b);
    printf("sub is=%d",a-b);
}
int mul(){
    int a,b;
     printf("enter for mul:") ;
    scanf("%d%d",&a,&b);
    return a*b;

}
void div (int x,int y){
   
  
   printf("%d",x/y);
}
int main(){
    int a,b;
    printf("enter two mumbers:");
    scanf("%d%d",&a,&b);

   
    printf("addision is:%d",add(a,b));
    div(a,b);
    sub();
    printf("multiplication is:%d",mul());
    
    
}