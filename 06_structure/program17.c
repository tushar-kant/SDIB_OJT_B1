#include <stdio.h>
int main()
{
    struct c
    {
        int z;
        double y;
        short int x;
    };
    printf("Size of struct:%d\n", sizeof(struct c));
}