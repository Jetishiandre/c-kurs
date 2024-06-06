#include <stdio.h>


void main(void)
{
    int zahl=0;
    int summe=0;
    float mittelwert=0.0;
    int anzahlZahlen=0;

    printf("Geben Sie eine Zahl ein (Beenden mit q):");

    while(scanf("%d",&zahl)==1)
    {
        anzahlZahlen++;
        summe=summe+zahl;
        
        if(zahl==5)
        {
            break;
        }

        printf("Geben Sie eine Zahl ein (Beenden mit q):");

    }

    mittelwert=(float)summe/(float)anzahlZahlen;

    printf("Der Mittelwert ist: %f",mittelwert);



}