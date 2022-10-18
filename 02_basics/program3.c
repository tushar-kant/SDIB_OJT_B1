#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("sunday");

    case 2:
        printf("monday");

    case 3:
        printf("tuesday");

    case 4:
        printf("wednesday");

    case 5:
        printf("Thursday");

    case 6:
        printf("friday");

    case 7:
        printf("saturday");

    default:
        printf("not valid");
        break;
    }
}