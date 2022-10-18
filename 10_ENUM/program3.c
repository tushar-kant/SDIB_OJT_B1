#include <stdio.h>
 enum LED
    {
        OFF,
        ON
    };
int main()
{
    int state;
   
    state=OFF;
    if (state == OFF)
    {
        printf("%d",OFF);
    }
    else
    {
        printf("%d",ON);
    }
}