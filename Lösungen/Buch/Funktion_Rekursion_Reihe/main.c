#include <stdio.h>

void eingeben(int *u, float *v, int *w) {
    printf("\nGib einen ganzzahligen Wert fuer a ein: ");
    scanf("%d", u);
    printf("\nGib einen reellen Wert fuer x ein: ");
    scanf("%f", v);
    printf("\nGib einen ganzzahligen Wert fuer N ein: ");
    scanf("%d", w);
}

float reku(int a, float x, int N) {
    if (N == 0) {
        return a;
    } else {
        return (a + (N - 1) * x) + reku(a, x, N - 1);
    }
}

void ausgeben(float z) {
    printf("\nDie Summe der Reihe ist: %f", z);
}

void main(void) {
    int a;
    float x;
    int N;
    float summe_rek;

    eingeben(&a, &x, &N);
    summe_rek = reku(a, x, N);
    ausgeben(summe_rek);
}
