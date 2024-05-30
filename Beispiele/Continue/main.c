#include <stdio.h>

void main(void) {
    int i=0;

    while(i < 20)
     {
        i++;
        if (i == 7) {
            continue; // Überspringen, wenn i gleich 7 ist
        }
        printf("Durchgang: %d \n", i+1);
    }

    printf("\nSchleife hat 7 übersprungen. Siehe oben Durchgänge. 8 fehlt (8. Durchgang = i = 7).\n");
}
