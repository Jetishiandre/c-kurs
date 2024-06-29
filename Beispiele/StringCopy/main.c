#include <stdio.h>
#include <string.h>

// Funktion zum Kopieren einer Zeichenkette
void copyString(char destination[], const char source[]) {
    strcpy(destination, source);
}

void main() {
    char source[100], destination[100];

    // Einlesen der Quell-Zeichenkette vom Benutzer
    printf("Geben Sie die Zeichenkette ein (maximal 100 Zeichen):\n");
    scanf(" %[^\n]", source);

    // Kopieren der Zeichenkette
    copyString(destination, source);

    // Ausgabe der Quell- und Ziel-Zeichenkette
    printf("Quell-Zeichenkette: %s\n", source);
    printf("Ziel-Zeichenkette: %s\n", destination);
}
