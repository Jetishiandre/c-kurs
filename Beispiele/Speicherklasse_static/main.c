#include <stdio.h>

void zaehlerFunktion() {
    static int zaehler = 0;  // Static-Variable, behält ihren Wert zwischen Funktionsaufrufen
    zaehler++;
    printf("Die Funktion wurde %d mal aufgerufen.\n", zaehler);
}

void main() {
    zaehlerFunktion();  // Ausgabe: Die Funktion wurde 1 mal aufgerufen.
    zaehlerFunktion();  // Ausgabe: Die Funktion wurde 2 mal aufgerufen.
    zaehlerFunktion();  // Ausgabe: Die Funktion wurde 3 mal aufgerufen.

}
