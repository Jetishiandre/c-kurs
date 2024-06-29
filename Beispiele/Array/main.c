#include <stdio.h>

void main() {
    // Definition und Initialisierung eines eindimensionalen Arrays mit 5 Elementen
    int numbers[5] = {1, 2, 3, 4, 5};

    // Zugriff auf die Elemente des Arrays und deren Ausgabe
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

}
