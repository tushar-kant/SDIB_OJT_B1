#include<stdio.h>
void evenodd(int x)
{
  if(x%2==0){
    printf("number is even");
  }
  else
    printf("number is odd");
}
int main()
{
    int a;
    scanf("%d",&a);
    evenodd(a);
}
