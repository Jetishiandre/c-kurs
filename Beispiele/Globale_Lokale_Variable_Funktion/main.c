#include <stdio.h>

void ausgabe()
{
    int lokaleZahl=10;

    printf("Lokale Zahl: %d",lokaleZahl);
}

void main(void)
{
    int zahl1=1;

    //Block
    {
        int zahl2=2;

        printf("Zahl1: %d Zahl2: %d",zahl1,zahl2);

        ausgabe();

    }
}

