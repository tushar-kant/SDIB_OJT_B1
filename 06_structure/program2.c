#include <stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int id;
    int salary;
    char designation[20];
};
int main()
{
    struct employee a;
    strcpy(a.name, "tushar");
    a.id = 1;
    a.salary = 1;
    strcpy(a.designation, "student");
    printf("name:%s\n", a.name);
    printf("id:%d\n", a.id);
    printf("salary:%dk\n", a.salary);
    printf("designation:%s\n", a.designation);
    printf("size:%d\n", sizeof(a));

}