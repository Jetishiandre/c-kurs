#include <stdio.h>

void main() {
    // Schritt 1: Definition und Initialisierung eines eindimensionalen Arrays mit 5 Ganzzahlen
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    double average;

    // Berechnung der Summe der Zahlen im Array
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Berechnung des Durchschnitts
    average = sum / 5.0;

    // Ausgabe der Summe und des Durchschnitts
    printf("Summe: %d\n", sum);
    printf("Durchschnitt: %.2f\n", average);

    // Schritt 3: Definition und Initialisierung eines char-Arrays mit einer Zeichenkette
    char str[] = "Hallo";

    // Direkte Ausgabe des Strings
    printf("Direkte Ausgabe des Strings: %s\n", str);

    // Schritt 5: Ausgabe jedes Zeichens der Zeichenkette einzeln mit seinem Index
    for(int i = 0; str[i] != '\0'; i++) {
        printf("Element %d: %c\n", i, str[i]);
    }

}
