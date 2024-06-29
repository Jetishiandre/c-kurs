#include <stdio.h>
#include <string.h>

// Funktion zum Vergleich zweier Strings
void compareStrings(char str1[], char str2[]) {
    // Vergleich der Strings mit strcmp
    int result = strcmp(str1, str2);

    // Ergebnis des Vergleichs ausgeben
    if (result == 0) {
        printf("Die Zeichenketten sind gleich.\n");
    } else if (result < 0) {
        printf("Die erste Zeichenkette ist lexikographisch kleiner als die zweite.\n");
    } else {
        printf("Die erste Zeichenkette ist lexikographisch größer als die zweite.\n");
    }
}

void main() {
    char str1[100], str2[100];

    // Einlesen der ersten Zeichenkette vom Benutzer
    printf("Geben Sie die erste Zeichenkette ein (maximal 100 Zeichen):\n");
    scanf(" %[^\n]", str1);

    // Einlesen der zweiten Zeichenkette vom Benutzer
    printf("Geben Sie die zweite Zeichenkette ein (maximal 100 Zeichen):\n");
    scanf(" %[^\n]", str2);

    // Aufruf der Funktion zum Vergleich der Strings
    compareStrings(str1, str2);
}
