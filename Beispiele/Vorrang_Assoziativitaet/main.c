#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int result;

    // Beispiel für Operatorvorrang
    // Multiplikation hat höheren Vorrang als Addition
    result = a + b * c;
    // Erwartetes Ergebnis: 5 + (10 * 15) = 5 + 150 = 155
    printf("Vorrang: %d + %d * %d = %d\n", a, b, c, result);

    // Klammern ändern die Reihenfolge der Ausführung
    result = (a + b) * c;
    // Erwartetes Ergebnis: (5 + 10) * 15 = 15 * 15 = 225
    printf("Vorrang mit Klammern: (%d + %d) * %d = %d\n", a, b, c, result);

    // Beispiel für Assoziativität
    int x = 20;
    // Zuweisungsoperatoren sind rechtsassoziativ
    a = b = c = x;
    // Erwartetes Ergebnis: c wird zu 20, dann b wird zu 20, dann a wird zu 20
    printf("Assoziativität der Zuweisungsoperatoren: a = %d, b = %d, c = %d\n", a, b, c);

    // Beispiel für linke Assoziativität von arithmetischen Operatoren
    result = a - b - c;
    // Erwartetes Ergebnis: (a - b) - c = (20 - 20) - 20 = 0 - 20 = -20
    printf("Linke Assoziativität: %d - %d - %d = %d\n", a, b, c, result);

    return 0;
}
