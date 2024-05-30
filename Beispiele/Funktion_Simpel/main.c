#include <stdio.h>

int inkrementiere(int i) 
{
    i++;//i=i+1
    return i;
}

void main(void)
{
    int y = 10;  // Initialwert für y
    y=inkrementiere(y);
    printf("Ende, y = %d\n", y);
}
