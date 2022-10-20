#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *fp;
    fp = fopen("hello.txt", "r");
    perror(fp);
    printf("Error no. is:%d",errno);
}