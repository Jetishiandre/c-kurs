#include <stdio.h>

// Iterative Funktion zur Berechnung der Fakultät
int fakultaet_iterativ(int n) {
    int ergebnis = 1;
    for (int i = 1; i <= n; ++i) {
        ergebnis *= i;
    }
    return ergebnis;
}


// Rekursive Funktion zur Berechnung der Fakultät
int fakultaet_rekursiv(int n) {
    if (n > 1) {
        return n * fakultaet_rekursiv(n - 1);  // Rekursiver Aufruf
    } else {
       return 1; //Fakultät = 1
    }
}

void main(void) {
    int zahl;

    // Einlesen einer Ganzzahl vom Benutzer
    printf("Geben Sie eine Ganzzahl ein: ");
    scanf("%d", &zahl);

    // Überprüfen, ob die eingegebene Zahl negativ ist
    if (zahl < 0) {
        printf("Fakultät ist für negative Zahlen nicht definiert.\n");
    } else {
        // Berechnung und Ausgabe der Fakultät (iterativ)
        int ergebnis_iterativ = fakultaet_iterativ(zahl);
        printf("Iterative Lösung: Die Fakultät von %d ist %d\n", zahl, ergebnis_iterativ);

        // Berechnung und Ausgabe der Fakultät (iterativ)
        int ergebnis_rekursiv = fakultaet_rekursiv(zahl);
        printf("Rekursive Lösung: Die Fakultät von %d ist %d\n", zahl, ergebnis_rekursiv);
    }

}