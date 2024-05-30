#include <stdio.h>

// Deklaration der Funktionen
int summe(int a, int b);
int produkt(int a, int b);
void ausgabe(int ergebnis);

void main(void) {
    int zahl1, zahl2, ergebnisSumme, ergebnisProdukt;

    // Eingabe der zwei Zahlen
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d", &zahl1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d", &zahl2);

    // Aufruf der Funktionen und Speichern der Ergebnisse
    ergebnisSumme = summe(zahl1, zahl2);
    ergebnisProdukt = produkt(zahl1, zahl2);

    // Ausgabe der Ergebnisse
    printf("Die Summerechnung von %d und %d:\n", zahl1, zahl2);
    ausgabe(ergebnisSumme);
    printf("Das Produktrechnung von %d und %d:\n", zahl1, zahl2);
    ausgabe(ergebnisProdukt);

}

// Definition der Funktion zur Berechnung der Summe
int summe(int a, int b) {
    return a + b;
}

// Definition der Funktion zur Berechnung des Produkts
int produkt(int a, int b) {
    return a * b;
}

// Definition der Funktion zur Ausgabe
void ausgabe(int ergebnis){
    printf("Das Ergebnis ist %d.\n", ergebnis);
}
