#include <stdio.h>
 
int main()
{
    float cel, fah;

    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("\n %.2f fah = %.2f cel", fah, cel);
 
    return 0;
}