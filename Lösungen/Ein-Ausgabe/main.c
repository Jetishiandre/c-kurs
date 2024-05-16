#include <stdio.h>


void main(void)
{
    int zahl1;
    int zahl2;
    int resultat;
    printf("Gib die erste Zahl ein:");
    scanf("%d",&zahl1);
    printf("Gib die 2. Zahl ein:");
    scanf("%d",&zahl2);
    resultat=zahl1+zahl2;
    printf("Die Zahlen ergeben zusammen %d.",resultat);
}