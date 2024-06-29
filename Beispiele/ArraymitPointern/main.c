#include <stdio.h>

void main() {
    // Definition und Initialisierung eines eindimensionalen Arrays mit 5 Ganzzahlen
    int numbers[5] = {1, 2, 3, 4, 5};
    
    // Definition eines Pointers und Zuweisung der Adresse des ersten Elements des Arrays
    int *pointer = &numbers[0]; // oder int *pointer = numbers;

    // Zugriff auf die Elemente des Arrays mit dem Array-Namen
    printf("Zugriff mit Array-Namen:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Zugriff auf die Elemente des Arrays mit dem Pointer
    printf("\nZugriff mit Pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(pointer + i));
    }

}
