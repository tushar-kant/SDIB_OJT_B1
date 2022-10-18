#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[20], ch;
    FILE *fp;
    printf("Enter the file name\n");
    scanf("%[^\n]", &name);
    fp = fopen(name, "r");
    printf("Value of the fp is: %d\n", fp);
    if (fp == NULL)
    {
        printf("ERROR: Fail to Open %s File\n", name);
        exit(1);
    }   
    printf("\n Data in %s file \n", name);
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}