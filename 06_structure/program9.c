#include <stdio.h>
#pragma pack(1)
struct employee
{
    char name;
    int id;
    float height;
    int age;
}__attribute__((packed));
int main()
{
    struct employee a;
    printf("size:%d\n", sizeof(a));
}