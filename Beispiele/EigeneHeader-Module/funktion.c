#include "funktion.h"

// Funktion, die einen Pointer auf eine int-Variable akzeptiert
void funktion(int *y) {
    // Änderung des Wertes der Variablen, auf die der Pointer zeigt
    *y = 5;
}