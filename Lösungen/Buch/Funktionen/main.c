#include <stdio.h>

void eingabe (float * r1, float * r2);
void berechnung (float r1, float r2, float * r);
void ausgabe (float r1, float r2, float r);

int main (void)
{
    float r1;
    float r2;
    float r;
    eingabe(&r1, &r2);
    berechnung(r1, r2, &r);
    ausgabe(r1, r2, r);
    return 0;
}

void eingabe (float * r1, float * r2)
{
    do {
        printf("Geben Sie den Wert für R1 ein: ");
        scanf("%f", r1);
        printf("Geben Sie den Wert für R2 ein: ");
        scanf("%f", r2);
        if (*r1 == 0 || *r2 == 0) {
            printf("Widerstände dürfen nicht null sein. Bitte erneut eingeben.\n");
        }
    } while (*r1 == 0 || *r2 == 0);
}

void berechnung (float r1, float r2, float * r)
{
    *r = (r1 * r2) / (r1 + r2);
}

void ausgabe (float r1, float r2, float r)
{
    printf("\nDer Ersatzwiderstand von %f und %f ist %f\n", r1, r2, r);
}
