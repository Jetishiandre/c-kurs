#include <stdio.h>

void main() {
    register int i;  // Deklaration einer Variable mit der Speicherklasse register

    int summe = 0;

    // Schleife zur Berechnung der Summe der ersten 10 positiven ganzen Zahlen
    for (i = 1; i <= 10; i++) {
        summe += i;
    }

    printf("Die Summe der ersten 10 positiven ganzen Zahlen ist: %d\n", summe);

}
