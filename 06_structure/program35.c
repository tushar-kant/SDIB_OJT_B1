#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bits_1;
        int bits_2;
        int bits_3;
        int bits_4;
    }bit;
    printf("%d\n",sizeof(bit));
}