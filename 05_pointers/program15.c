#include <stdio.h>
void operation(int, int, int (*fnptr)(int, int));
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
    int a = 10, b = 20;
    int op;
    printf("which operation");
    printf("\n1:add\n2:sub:\n3:mul\n4:div\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        operation(a, b, add);

        break;
    case 2:
        operation(a, b, sub);

        break;
    case 3:
        operation(a, b, mul);

        break;
    case 4:
        operation(a, b, div);

        break;

    default:
        break;
    }
}
void operation(int x, int y, int (*fnptr)(int, int))
{
    int result;
    result = fnptr(x, y);
    printf("%d", result);
}
