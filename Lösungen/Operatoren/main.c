#include <stdio.h>

int main() {
    int x = 15;
    int y = 4;
    int z;

    // Addition
    z = x + y;
    printf("Addition: %d + %d = %d\n", x, y, z);

    // Subtraktion
    z = x - y;
    printf("Subtraktion: %d - %d = %d\n", x, y, z);

    // Multiplikation
    z = x * y;
    printf("Multiplikation: %d * %d = %d\n", x, y, z);

    // Division
    z = x / y;
    printf("Division: %d / %d = %d\n", x, y, z);

    // Modulus
    z = x % y;
    printf("Modulus: %d %% %d = %d\n", x, y, z);

    // Inkrementieren
    x++;
    z = x;
    printf("Inkrementieren: x++ -> %d\n", z);

    // Dekrementieren
    y--;
    z = y;
    printf("Dekrementieren: y-- -> %d\n", z);

    return 0;
}
