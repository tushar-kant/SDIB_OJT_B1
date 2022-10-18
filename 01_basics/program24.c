
#include<stdio.h>

void main()

{

    int a=5,b=4;

    a=a^b;

    printf(" a=%d , b=%d", a, b);

    b=b^a;

    printf(" a=%d , b=%d", a, b);

    a=a^b;

    printf(" a=%d , b=%d", a, b);



    printf(" a=%d , b=%d", a, b);

}