#include <stdio.h>

int x = 5;

void f1 (int * u)
{
    int x = 4;
    *u = 6;
    printf("\nf1 - der Wert von x ist %d", x);
}

void f2 (int x)
{
    printf("\nf2 - der Wert von x ist %d", x);
}

int main (void)
{
    printf ("\nmain - der Wert von x ist %d", x);
    f2 (7);
    f1 (&x);
    printf ("\nmain - der Wert von x ist %d", x);
    return 0;
}
