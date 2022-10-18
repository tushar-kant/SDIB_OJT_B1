#include<stdio.h>
#define MAX 10
#define MIN 20
int main()
{
    #if MAX
    #if defined MIN
    #if (MAX>0 && MIN>0)
    printf("\n POSTITIVE NUMBERS\n");

    #else
    printf("\n negetive number\n");
    #endif
    #else
    printf("\n ERROR: MIN not Defined \n");
    #endif
    #else
    printf("\n ERROR : MAX is not defined \n");
    #endif
}