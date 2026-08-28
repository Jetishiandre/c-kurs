#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256];
    int anzahlZeichen = 0;
    int anzahlWoerter = 0;
    int anzahlZeilen = 0;
    int imWort = 0;

    // Datei öffnen
    file = fopen("Uebungen/Ablaufstrukturen/beispiel.txt", "r");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
        return 1;
    }

    // Zeilenweise lesen, ausgeben und zählen
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
        anzahlZeilen++;

        for (int i = 0; buffer[i] != '\0'; i++) {
            anzahlZeichen++;

            if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '\t') {
                imWort = 0;
            } else if (imWort == 0) {
                imWort = 1;
                anzahlWoerter++;
            }
        }
    }

    // Datei schliessen
    fclose(file);

    printf("\nStatistik:\n");
    printf("Anzahl Zeilen:  %d\n", anzahlZeilen);
    printf("Anzahl Woerter: %d\n", anzahlWoerter);
    printf("Anzahl Zeichen: %d\n", anzahlZeichen);

    return 0;
}
