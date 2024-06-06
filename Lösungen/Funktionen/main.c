#include <stdio.h>

int addiere(int a, int b) {
    return a + b;
}

int subtrahiere(int a, int b) {
    return a - b;
}

int multipliziere(int a, int b) {
    return a * b;
}

float dividiere(int a, int b) {
    if (b == 0) {
        printf("Fehler: Division durch Null ist nicht erlaubt.\n");
        return 0;  // Rückgabewert kann hier ignoriert werden
    }
    return (float)a / b;
}

int main() {
    int a = 10;
    int b = 5;
    
    printf("Addition: %d + %d = %d\n", a, b, addiere(a, b));
    printf("Subtraktion: %d - %d = %d\n", a, b, subtrahiere(a, b));
    printf("Multiplikation: %d * %d = %d\n", a, b, multipliziere(a, b));
    
    float division = dividiere(a, b);
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, division);
    }
    
    // Testen der Division durch 0
    b = 0;
    division = dividiere(a, b);
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, division);
    }
    
    return 0;
}
