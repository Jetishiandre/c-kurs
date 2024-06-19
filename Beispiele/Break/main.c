#include <stdio.h>


void main(void) {
    int i=0;

    while(i < 20) 
    {
        i++;
        if (i == 7) {
            break; // Schleife beenden, wenn i gleich 7 ist
        }
        printf("Durchgang: %d \n", i+1);
    }

    printf("\nSchleife beendet, da i gleich 7 war.\n");
}
