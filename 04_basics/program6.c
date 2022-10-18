#include<stdio.h>
int main(){
    int arr[10]={5,5,66,66,1,7,88,9,};
    int count;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            //  printf("%d\n",arr[i]); 
            }
        }
        
    }
}