#include <stdio.h>
#include <stdlib.h>

void main() {
    while (1) {
        // Dynamische Speicherzuweisung ohne Freigabe (Memory Leak)
        int *ptr = (int *)malloc(1024 * 1024 * sizeof(int)); // Zuweisung von 1 MB

        // Überprüfen, ob Speicher zugewiesen werden konnte
        if (ptr == NULL) {
            printf("Speicherzuweisung fehlgeschlagen. Programm stürzt ab.\n");
            break;
        }

        // Hinweis: Es fehlt die Speicherfreigabe, daher wird der zugewiesene Speicher nie freigegeben.
    }

}
