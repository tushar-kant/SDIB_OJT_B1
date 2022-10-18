#include <stdio.h>
#include<string.h>
union student
{
    int id;
    char name[8];
    int age;
};
int main()
{
    union student a;
    printf("size:%d\n", sizeof(a));

}