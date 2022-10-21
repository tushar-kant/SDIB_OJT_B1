#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
    int i,j=0;
    for(i=0;i<argc;i++)
    {
        j=j+atoi(argv[i]);
    }
    printf("%d\n",j);
}