#include <stdio.h>


void main(void)
{
    float zahl1,zahl2,zahl3,mittelwert;

    printf("Geben die 1. Zahl ein:");
    scanf("%f",&zahl1);
    printf("Geben Sie die 2. Zahl ein:");
    scanf("%f",&zahl2);
    printf("Geben Sie die 3. Zahl ein:");
    scanf("%f",&zahl3);

    mittelwert=(zahl1+zahl2+zahl3)/3;

    if(mittelwert>10)
    {
        printf("Der Mittelwert ist: %f",mittelwert);
    }

}