#include<stdio.h>
int main(){
    int arr[]={1,3,4,5,6,7,9};
    int length=sizeof(arr)/sizeof(int);
    int number=0,i;
    for (i = 0; i < length; i++)
    {
       if(arr[i+1]-arr[i]==1){
        continue;
       }
       else{
        number=arr[i]+1;
        break;
       }
       
    }
    printf("%d",number);
    
}