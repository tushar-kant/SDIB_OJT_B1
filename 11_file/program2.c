#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    int fp;
    fp =open("hello.txt",O_WRONLY|O_CREAT);
    if (fp == -1)
    {
        printf("file not created");
    }
    else
    {
        printf("file created successfully");
    }
    printf("\n%d",fp);
}