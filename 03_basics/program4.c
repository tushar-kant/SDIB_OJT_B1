#include <stdio.h>
int numberprint (int n) {
    printf ("%d\n", n);
    if (n > 0)
    {
        numberprint (n - 1);
    }
}
int main () {
    numberprint(10);
}