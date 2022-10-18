#include<stdio.h>
void disp(char *);
#define STRING(s) disp(s)

int main()
{
    STRING("ABC");
    STRING("hello");

}
void disp(char *p){
    printf("\n%s\n",p);
}