#include <stdio.h>
int swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    printf("%d\n%d", x, y);
}
int main()
{
    int a, b;
    printf("enter two mumbers:");
    scanf("%d%d", &a, &b);

    swap(a, b);
}