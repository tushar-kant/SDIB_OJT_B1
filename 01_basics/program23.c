#include <stdio.h>
int main()
{
    float cel, fah;
  
    scanf("%f", &cel);

    fah = (cel * 9 / 5) + 32;
    printf("%.2f cel = %.2f fah", cel, fah);
    return 0;
}