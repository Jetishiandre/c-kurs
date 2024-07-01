#include <stdio.h>

// Funktion zur Berechnung des ggT mit dem Euklidischen Algorithmus
int rechneGgt(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funktion zur Berechnung des kgV
int rechneKgv(int a, int b) {
    return (a * b) / rechneGgt(a, b);
}

int main() {
    int zahl1, zahl2, ggt, kgv;

    // Eingabe der zwei Zahlen
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d", &zahl1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d", &zahl2);

    // Berechnung des ggT und des kgV
    ggt = rechneGgt(zahl1, zahl2);
    kgv = rechneKgv(zahl1, zahl2);

    // Ausgabe des Ergebnisses
    printf("Der groesste gemeinsame Teiler (ggT) von %d und %d ist: %d\n", zahl1, zahl2, ggt);
    printf("Das kleinste gemeinsame Vielfache (kgV) von %d und %d ist: %d\n", zahl1, zahl2, kgv);

    return 0;
}