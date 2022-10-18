#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *p, n, i, *temp;
    printf("\n enter how many elements:");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        fprintf(stderr, "\n fail to allocate memory\n");
        exit(0);
    }
    printf("\n memory allocated at:%x", p);
    for (i = 0; i < n; i++)
        p[i] = i + 1;
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d", p[i]);
    printf("\n");
    temp = realloc(p,(n * sizeof(int)) + 10);
    p = temp;
    n += 10;
    for (i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }
    printf("\n");
}