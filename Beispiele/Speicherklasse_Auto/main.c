#include <stdio.h>

void beispielFunktion() {
    auto int a = 5;  // explizit als auto deklariert (normalerweise nicht notwendig)
    int b = 10;      // implizit auto (kein explizites auto nötig)

    printf("Wert von a: %d\n", a);
    printf("Wert von b: %d\n", b);
}

void main() {
    beispielFunktion();
}
