#include <stdio.h>
int main()
{
    int arr[5] = {0,1,2,3,5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != i)
        {
            printf("%d\n", i);
        }
    }
}