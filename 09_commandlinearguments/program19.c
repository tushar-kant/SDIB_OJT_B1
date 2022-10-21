#include<stdio.h>
void main()
{
    enum days{mon=-1,tue,wed=6,thu,fri,sat};
    printf("%d %d %d %d %d %d",mon,tue,wed,thu,fri,sat);
}