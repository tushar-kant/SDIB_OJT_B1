#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array before sorting\n:");
     for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }    
    printf("\nSorted array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }



}