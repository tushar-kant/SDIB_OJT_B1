#include"stdio.h"
#include"string.h"
int main()
{
    typedef struct xyz{
        char *n;
        int join;
    }abc;
    abc x={"Phytec",2022};
    abc y=x;
    printf("%d %d\n",printf("%s",y.n),printf("%d",y.join));
}