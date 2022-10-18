#include <stdio.h>
struct Student
{
    char name[30];
    int id;
    int height;
};
int main()
{ 
    struct Student a;
    // a.name[30]="tushar";
    strcpy(a.name,"tushar");
    a.id = 1;
    a.height = 12;
  
  printf("%s\n", a.name);
  printf("%d\n", a.id);
  printf("%d\n", a.height);
}