#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bits_1:20;
        int bits_2:12;
        int bits_3:20;
        int bits_4:13;
    }bit;
    printf("%d\n",sizeof(bit));
}