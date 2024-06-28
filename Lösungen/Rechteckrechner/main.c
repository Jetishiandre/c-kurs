#include <stdio.h>

// Funktion zur Berechnung der Fläche eines Rechtecks
double berechneFlaeche(double laenge, double breite) {
    return laenge * breite;
}

// Funktion zur Berechnung des Umfangs eines Rechtecks
double berechneUmfang(double laenge, double breite) {
    return 2 * (laenge + breite);
}

int main() {
    double laenge, breite;

    // Benutzer nach Länge und Breite fragen
    printf("Bitte geben Sie die Länge des Rechtecks ein: ");
    scanf("%lf", &laenge);
    printf("Bitte geben Sie die Breite des Rechtecks ein: ");
    scanf("%lf", &breite);

    // Fläche und Umfang berechnen
    double flaeche = berechneFlaeche(laenge, breite);
    double umfang = berechneUmfang(laenge, breite);

    // Ergebnisse ausgeben
    printf("Die Fläche des Rechtecks beträgt: %.2lf\n", flaeche);
    printf("Der Umfang des Rechtecks beträgt: %.2lf\n", umfang);

    return 0;
}
