#include <stdio.h>
#define MAX 10

/* Globale Variable */
int a[MAX];

/* Funktionsprototypen */
void einlesen(void);
void durchschnitt1(float *);
float durchschnitt2(void);

void main(void)
{
    float erg;
    einlesen();
    durchschnitt1(&erg); /* Rückgabe über die Parameterliste */
    printf("\nDer Durchschnitt der eingegebenen Zahlen ist: %f", erg);

    erg = durchschnitt2(); /* Rückgabe mit return */
    printf("\nDer Durchschnitt der eingegebenen Zahlen ist: %f", erg);

}

void einlesen(void)
{   int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\nGib den Wert des Elementes mit dem Index %d ein: ",i);
        scanf("%d", &a[i]);
    }
}

void durchschnitt1(float *erg)
{
    int sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        sum += a[i];
    }
    *erg = (float)sum / MAX;
}

float durchschnitt2(void)
{
    int sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        sum += a[i];
    }
    return (float)sum / MAX;
}
