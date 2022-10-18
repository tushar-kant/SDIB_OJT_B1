#include<stdio.h>
int main()
{
  int arr[10]={7,13,37,4,2,1,22,45,11,99};

  for (int j = 0 ; j < 10 ; j++){
    for (int i = 0 ; i < 10 - 1; i++){
      if (arr[i] > arr[i+1])
      {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1] = temp;
      }
    }
  }
  for (int j = 0; j < 10; j++)  
     printf("%d\n", arr[j]);

}