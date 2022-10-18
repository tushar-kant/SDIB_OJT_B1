#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "tushar";
    char str2[50];
    int value;
    printf("Enter your name: ");
    scanf("%s", str2);

    value = strcmp(str1, str2);
    if (value == 0)
        printf("Congratulations");
    else
        printf("You Entered wrong data");
    return 0;
}