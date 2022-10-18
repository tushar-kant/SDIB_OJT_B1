#include <stdio.h>
int (*fnptr)(int, int);
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}

int main()
{
    fnptr = &add;
    int x = (*fnptr)(10, 30);
    printf("%d\n", x);

    fnptr = &sub;
    x = (*fnptr)(10, 30);
    printf("%d\n", x);

    fnptr = &mul;
    x = (*fnptr)(10, 30);
    printf("%d\n", x);

    fnptr = &div;
    x = (*fnptr)(10, 10);
    printf("%d\n", x);
}
