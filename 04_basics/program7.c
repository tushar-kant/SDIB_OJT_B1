#include<stdio.h>
int main(){
    int arr[10]={4,5,6,3,6,3,8,5,22,55};
    int num,pos;
    printf("enter the value to insert");
    scanf("%d",num);
    printf("enter theposition");
    scanf("%d",pos);
    for (int i = 10-1; i >=pos-1; i--)
    {
        arr[i+1]=arr[i];
        arr[pos-1]=num;
    }
    


}