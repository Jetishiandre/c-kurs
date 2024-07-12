#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    // Beispielwerte für die verschiedenen Formate
    int int_value = 42;
    unsigned int uint_value = 3000000000U;
    char char_value = 'A';
    char str_value[] = "Hallo, Welt!";
    double double_value = 3.14159;
    void *ptr_value = &int_value;

    // Datei öffnen
    file = fopen("ausgabe.txt", "w");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
        return EXIT_FAILURE;
    }

    // Ausgabe von Ganzzahlen
    fprintf(file, "Dezimal: %d\n", int_value);
    fprintf(file, "Oktal: %o\n", uint_value);
    fprintf(file, "Hexadezimal (klein): %x\n", uint_value);
    fprintf(file, "Hexadezimal (groß): %X\n", uint_value);
    fprintf(file, "Unsigned Dezimal: %u\n", uint_value);
    fprintf(file, "Character: %c\n", char_value);

    // Ausgabe von Strings
    fprintf(file, "String: %s\n", str_value);

    // Ausgabe von Gleitpunktzahlen
    fprintf(file, "Dezimalzahl: %f\n", double_value);
    fprintf(file, "Exponentialzahl (klein): %e\n", double_value);
    fprintf(file, "Exponentialzahl (groß): %E\n", double_value);
    fprintf(file, "Allgemeines Format (klein): %g\n", double_value);
    fprintf(file, "Allgemeines Format (groß): %G\n", double_value);

    // Ausgabe von Pointern
    fprintf(file, "Pointer: %p\n", ptr_value);

    // Ausgabe des %% Zeichens
    fprintf(file, "Prozentzeichen: %%\n");

    // Speicherort der Anzahl geschriebener Zeichen
    int count;
    fprintf(file, "Anzahl der geschriebenen Zeichen: %n\n", &count);
    printf("Anzahl der geschriebenen Zeichen: %d\n", count);

    // Datei schließen
    fclose(file);

    printf("Daten wurden in die Datei geschrieben.\n");

    return EXIT_SUCCESS;
}
