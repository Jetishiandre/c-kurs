#include <stdio.h>

void eingeben(int *u, float *v, int *w) {
    printf("\nGib einen ganzzahligen Wert fuer a ein: ");
    scanf("%d", u);
    printf("\nGib einen reellen Wert fuer x ein: ");
    scanf("%f", v);
    printf("\nGib einen ganzzahligen Wert fuer N ein: ");
    scanf("%d", w);
}

float iter(int a, float x, int N) {
    float sum = a;
    for (int i = 1; i <= N; i++) {
        sum =sum + (i * x);
    }
    return sum;
}

void ausgeben(float z) {
    printf("\nDie Summe der Reihe ist: %f", z);
}

void main(void) {
    int a;
    float x;
    int N;
    float summe_it;

    eingeben(&a, &x, &N);
    summe_it = iter(a, x, N);
    ausgeben(summe_it);
}
