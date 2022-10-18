#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char *name;

} s[2];
void display(struct student s[]);
int main()
{
    s[0].rollno = 1;
    s[0].name = "tushar";

    s[1].rollno = 2;
    s[1].name = "kanta";

    s[2].rollno = 3;
    s[2].name = "nayak";
    display(s);
}
void display(struct student s[])
{
    for (int i = 0; i <= 2; i++)
    {
        printf("%d\t%s\n", s[i].rollno, s[i].name);
    }
}