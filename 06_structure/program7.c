#include <stdio.h>
struct employe
{
    char name[50];
    int id;
    int salary;
    char designation[50];
}s[2];

int main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter id: ");
        scanf("%d", &s[i].id);
        printf("Enter salary: ");
        scanf("%d", &s[i].salary);
        printf("Enter designation: ");
        scanf("%s", s[i].designation);
    }
    for (i = 0; i < 2; i++)
    {
      printf("----------------------------------------------------------\n");
        printf("Name of employeee:%s\n", s[i].name);
        printf("id of employee:%d\n", s[i].id);
        printf("salary of employe:%d\n", s[i].salary);
        printf("designation of employee:%s\n", s[i].designation);
    }
    return 0;
}