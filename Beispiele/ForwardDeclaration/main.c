#include <stdio.h>

// Funktion, die einen Pointer auf eine int-Variable akzeptiert als Vorwärts-Deklaration
void funktion(int *y);

void main(void) {
    // Deklaration und Initialisierung der Variable y
    int y = 3;
    
    // Ausgabe des Wertes und der Adresse der Variable y vor dem Funktionsaufruf
    printf("Wert von y vor dem Funktionsaufruf: %d\n", y);
    printf("Adresse von y: %p\n", (void*)&y);
    
    // Aufruf der Funktion mit der Adresse von y
    funktion(&y);
    
    // Ausgabe des Wertes von y nach dem Funktionsaufruf
    printf("Wert von y nach dem Funktionsaufruf: %d\n", y);
    
}

// Funktion, die einen Pointer auf eine int-Variable akzeptiert
void funktion(int *y) {
    // Änderung des Wertes der Variablen, auf die der Pointer zeigt
    *y = 5;
}