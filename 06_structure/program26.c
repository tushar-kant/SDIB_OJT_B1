#include <stdio.h>
#include <string.h>
#pragma pack(1);
struct data
{
    unsigned int a : 4;
    char ch : 1;
 
} D = {10, 'A'};
void main()
{

    printf("size:%d\n", sizeof(D));
    printf("%u",&D);
    // printf("%d",&D.ch);
}   