#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    FILE *file;
    time_t now;
    struct tm *timeinfo;
    char buffer[100];

    // Aktuelle Zeit ermitteln
    time(&now);
    timeinfo = localtime(&now);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d-%H:%M:%S\n", timeinfo);

    // Datei öffnen zum Schreiben
    file = fopen("timestamp.txt", "w");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
    }

    // Zeitstempel in die Datei schreiben
    fprintf(file, "%s\n", buffer);

    // Datei schließen
    fclose(file);

    // Datei öffnen zum Lesen
    file = fopen("timestamp.txt", "r");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
    }

    // Zeitstempel aus der Datei lesen
    fscanf(file, "%s", buffer);

    // Datei schließen
    fclose(file);

    // Eingelesenen Zeitstempel ausgeben
    printf("Eingelesener Zeitstempel:\n");
    printf("%s\n", buffer);

}
