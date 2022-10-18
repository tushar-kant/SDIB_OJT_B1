#include <stdio.h>
#include <string.h>

struct marks
{
    int maths;
    int phy;
    int chem;
    int average;
};
struct student
{
    int id;
    char name[20];
    int height;
    struct marks m;
};
int main()
{
    struct student std;
    std.id = 1;
    strcpy(std.name, "tushar");
    std.height = 5;
    std.m.maths = 20;
    std.m.phy = 30;
    std.m.chem = 10;
    std.m.average = (std.m.maths + std.m.phy + std.m.chem) / 3;
    printf("size is:%d\n", sizeof(std));
    printf("id:%d\n", std.id);
    printf("name:%s\n", std.name);
    printf("height:%d\n", std.height);
    printf("mark in phy:%d\n", std.m.phy);
    printf("mark in maths:%d\n", std.m.maths);

    printf("mark in chem:%d\n", std.m.chem);

    printf("average marks:%d", std.m.average);
}