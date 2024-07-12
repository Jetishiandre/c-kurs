#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    char buffer[256];

    // Datei öffnen
    file = fopen("beispiel.txt", "r");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
    }

    // Zeilenweise lesen und ausgeben
    while (!feof(file)) {
        fgets(buffer, sizeof(buffer), file);
        printf("%s", buffer);
    }

    // Datei schließen
    fclose(file);

}
