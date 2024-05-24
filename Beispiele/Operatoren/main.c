#include <stdio.h>

int main() {
    // Arithmetische Operatoren
    int a = 10, b = 5;
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraktion: %d - %d = %d\n", a, b, a - b);
    printf("Multiplikation: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Zuweisungsoperatoren
    int c = a;
    printf("Zuweisung: c = %d\n", c);
    c += b;
    printf("Additionszuweisung: c += %d -> c = %d\n", b, c);
    c -= b;
    printf("Subtraktionszuweisung: c -= %d -> c = %d\n", b, c);
    c *= b;
    printf("Multiplikationszuweisung: c *= %d -> c = %d\n", b, c);
    c /= b;
    printf("Divisionszuweisung: c /= %d -> c = %d\n", b, c);
    c %= b;
    printf("Moduluszuweisung: c %%= %d -> c = %d\n", b, c);

    // Vergleichsoperatoren
    printf("Gleich: %d == %d -> %d\n", a, b, a == b);
    printf("Ungleich: %d != %d -> %d\n", a, b, a != b);
    printf("Größer als: %d > %d -> %d\n", a, b, a > b);
    printf("Kleiner als: %d < %d -> %d\n", a, b, a < b);
    printf("Größer gleich: %d >= %d -> %d\n", a, b, a >= b);
    printf("Kleiner gleich: %d <= %d -> %d\n", a, b, a <= b);

    // Logische Operatoren
    int x = 1, y = 0;
    printf("UND: %d && %d -> %d\n", x, y, x && y);
    printf("ODER: %d || %d -> %d\n", x, y, x || y);
    printf("NICHT: !%d -> %d\n", x, !x);

    // Bitweise Operatoren
    int d = 6, e = 3;
    printf("Bitweises UND: %d & %d -> %d\n", d, e, d & e);
    printf("Bitweises ODER: %d | %d -> %d\n", d, e, d | e);
    printf("Bitweises XOR: %d ^ %d -> %d\n", d, e, d ^ e);
    printf("Bitweise NICHT: ~%d -> %d\n", d, ~d);
    printf("Linksverschiebung: %d << 1 -> %d\n", d, d << 1);
    printf("Rechtsverschiebung: %d >> 1 -> %d\n", d, d >> 1);

    return 0;
}
