#include <stdio.h>

void main() {
    // Definition und Initialisierung eines char-Arrays mit einer Zeichenkette
    char str[] = "Hallo";

    // Direkte Ausgabe des Strings
    printf("Direkte Ausgabe des Strings: %s\n", str);

    // Zugriff auf die Elemente des char-Arrays und deren Ausgabe
    for(int i = 0; str[i] != '\0'; i++) {
        printf("Element %d: %c\n", i, str[i]);
    }

}
