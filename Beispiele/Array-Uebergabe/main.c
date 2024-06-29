#include <stdio.h>

// Funktion zur Berechnung der Summe eines Arrays ohne Längenangabe
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Funktion zur Berechnung der Summe eines Arrays über einen Pointer
int sumArrayPointer(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Funktion zur Berechnung der Länge einer Zeichenkette
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Funktion zur Berechnung der Länge einer Zeichenkette über einen Pointer
int stringLengthPointer(char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

void main() {
    // Definition und Initialisierung eines eindimensionalen Arrays mit 5 Ganzzahlen
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Berechnung der Summe des Arrays mit beiden Methoden
    int sum1 = sumArray(numbers, size);
    int sum2 = sumArrayPointer(numbers, size);

    // Ausgabe der Ergebnisse
    printf("Summe des Arrays: %d\n", sum1);
    printf("Summe des Arrays (Pointer): %d\n", sum2);

    // Definition und Initialisierung eines char-Arrays mit einer Zeichenkette
    char str[] = "Hallo, Welt!";

    // Berechnung der Länge der Zeichenkette mit beiden Methoden
    int length1 = stringLength(str);
    int length2 = stringLengthPointer(str);

    // Ausgabe der Ergebnisse
    printf("Länge der Zeichenkette: %d\n", length1);
    printf("Länge der Zeichenkette (Pointer): %d\n", length2);
}
