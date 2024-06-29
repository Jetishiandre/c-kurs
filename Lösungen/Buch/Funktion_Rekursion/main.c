#include <stdio.h>

void spiegle(void)
{
    int c;
    c = getchar();
    if (c != '\n')
    {
        spiegle();
    }
    putchar(c);
}

void main(void)
{
    printf("\n\n\n");
    spiegle();
}
