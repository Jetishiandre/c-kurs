#include <stdio.h>

// Funktion zur Berechnung der maximalen Zahl eines Arrays ohne Längenangabe
int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Funktion zur Berechnung der maximalen Zahl eines Arrays über einen Pointer
int maxArrayPointer(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// Funktion zur Berechnung der minimalen Zahl eines Arrays ohne Längenangabe
int minArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Funktion zur Berechnung der minimalen Zahl eines Arrays über einen Pointer
int minArrayPointer(int *arr, int size) {
    int min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

// Funktion zur Ausgabe einer Zeichenkette rückwärts
void reverseString(char str[], int length) {
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Funktion zur Ausgabe einer Zeichenkette rückwärts über einen Pointer
void reverseStringPointer(char *str, int length) {
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

// Funktion zur Berechnung der Länge einer Zeichenkette
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void main() {
    int numbers[10];
    int size = 10;

    // Schritt 1: Einlesen des Arrays von 10 Ganzzahlen vom Benutzer
    printf("Geben Sie 10 Ganzzahlen ein:\n");
    for (int i = 0; i < size; i++) {
        printf("Zahl %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Berechnung der maximalen und minimalen Zahl des Arrays mit beiden Methoden
    int max1 = maxArray(numbers, size);
    int max2 = maxArrayPointer(numbers, size);
    int min1 = minArray(numbers, size);
    int min2 = minArrayPointer(numbers, size);

    // Ausgabe der Ergebnisse für Ganzzahlen-Array
    printf("Maximale Zahl des Arrays: %d\n", max1);
    printf("Maximale Zahl des Arrays (Pointer): %d\n", max2);
    printf("Minimale Zahl des Arrays: %d\n", min1);
    printf("Minimale Zahl des Arrays (Pointer): %d\n", min2);

    // Schritt 3: Einlesen einer Zeichenkette vom Benutzer
    char str[100];
    printf("Geben Sie eine Zeichenkette ein (maximal 100 Zeichen):\n");
    scanf(" %[^\n]", str);

    // Berechnung der Länge der Zeichenkette
    int length = stringLength(str);

    // Ausgabe der Zeichenkette rückwärts mit beiden Methoden
    printf("Rückwärts ausgegebene Zeichenkette: ");
    reverseString(str, length);

    printf("Rückwärts ausgegebene Zeichenkette (Pointer): ");
    reverseStringPointer(str, length);
}
