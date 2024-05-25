#include <stdio.h>

int main() {
    float zahl=0.0;
    int anzahlZahlen = 0;
    float summe = 0.0;
    char c;

    printf("Geben Sie eine Zahl ein (oder drücken Sie q, um zu beenden): ");

    while (scanf("%f",&zahl)==1) 
    { 
       summe += zahl;
       anzahlZahlen++;
    
       printf("Geben Sie eine weitere Zahl ein (oder drücken Sie q, um zu beenden): ");
    }

    if (anzahlZahlen > 0) {
        float mittelwert = summe / anzahlZahlen;
        printf("Der Mittelwert der eingegebenen Zahlen ist: %.2f\n", mittelwert);
    } else {
        printf("Keine Zahlen eingegeben.\n");
    }

    return 0;
}
