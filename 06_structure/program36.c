#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bits_1:16;
        int bits_2:10;
        int bits_3:6;
        int bits_4:1;
    }bit;
    printf("%d\n",sizeof(bit));
}