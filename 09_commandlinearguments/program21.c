#include<stdio.h>
enum xenum{
    C,CPP,Java
};
int main()
{
    enum xenum var;
    printf("%d",sizeof(var));
}