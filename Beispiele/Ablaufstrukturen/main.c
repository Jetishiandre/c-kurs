#include <stdio.h>

int main() {
    // Beispiel für if-Struktur
    int num1 = 10;
    if (num1 > 0) {
        printf("Die Zahl %d ist positiv.\n", num1);
    }

    // Beispiel für if-else-Struktur
    int num2 = -5;
    if (num2 > 0) {
        printf("Die Zahl %d ist positiv.\n", num2);
    } else {
        printf("Die Zahl %d ist nicht positiv.\n", num2);
    }

    // Beispiel für if-else if-else-Struktur
    int num3 = 0;
    if (num3 > 0) {
        printf("Die Zahl %d ist positiv.\n", num3);
    } else if (num3 < 0) {
        printf("Die Zahl %d ist negativ.\n", num3);
    } else {
        printf("Die Zahl ist Null.\n");
    }

    // Beispiel für switch-Struktur
    int num4 = 2;
    switch (num4) {
        case 1:
            printf("Die Zahl ist eins.\n");
            break;
        case 2:
            printf("Die Zahl ist zwei.\n");
            break;
        case 3:
            printf("Die Zahl ist drei.\n");
            break;
        default:
            printf("Die Zahl ist weder eins, zwei noch drei.\n");
            break;
    }

    return 0;
}
