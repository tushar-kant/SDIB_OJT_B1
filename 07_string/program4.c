#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "first";
    char str2[] = "second";
    printf("%d\n",strlen(str1));
    printf("%s\n",strcat(str1,str2));
    printf("%s\n",strcpy(str1,str2));
    printf("%d\n",strcmp(str1, str2));
}