#include<stdio.h>
struct course
{
    int courseno;
    char coursename[25];
};
int main()
{
    struct course c[]={{102,"Java"},
    {103,"PHP"},
    {104,"dotNet"} };
    printf("%d",c[1].courseno);
    printf("%s\n",(*(c+2)).coursename);
}