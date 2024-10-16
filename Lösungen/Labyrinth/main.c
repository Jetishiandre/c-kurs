#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "labyrinth.h"
#include "move.h"
#include "openingscreen.h"



int main() {
    int rows, cols;
    // Dynamisches Erstellen des 2D-Arrays für das Labyrinth
    char **labyrinth = (char **)malloc(rows * sizeof(char *));
    for (int i = 0; i < rows; i++) {
        labyrinth[i] = (char *)malloc(cols * sizeof(char));
    }

    Position playerPos;
    Position treasurePos;
    char move;
    bool gameRunning = true;
    bool treasureFound = false;

    srand(time(NULL));
    showOpeningScreen();
    clearScreen();    
    printf("Bitte die Anzahl der Zeilen für das Labyrinth eingeben (min. 5): ");
    scanf("%d", &rows);
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} //Eingangsbuffer leeren
    printf("Bitte die Anzahl der Spalten für das Labyrinth eingeben (min. 5): ");
    scanf("%d", &cols);
    while ((c = getchar()) != '\n' && c != EOF) {} //Eingangsbuffer leeren

    initLabyrinth(labyrinth, rows, cols, &playerPos, &treasurePos);

    while (gameRunning) {
        clearScreen();
        printLabyrinth(labyrinth, rows, cols);
        printf("Dein Zug\n");
        printf("W/A/S/D + Enter fuer Bewegung des Spielers\n");
        printf("oder B + Enter fuer Beenden: ");
        scanf(" %c", &move);
        gameRunning = movePlayer(labyrinth, &playerPos, move, treasurePos, rows, cols);


        if (!gameRunning && playerPos.x == treasurePos.x && playerPos.y == treasurePos.y) {
            treasureFound = true;
            break;
        } else if (!gameRunning) {
            break;
        }
    }

    if (treasureFound) {
        clearScreen();
        printf("Herzlichen Glueckwunsch, du hast den Schatz gefunden!\n");
    } else {
        clearScreen();
        printf("Spiel beendet. Danke fuers Spielen!\n");
    }
    printf("Fuer eine weitere Runde starte das Spiel einfach neu.\n");

    // Speicher freigeben
    for (int i = 0; i < rows; i++) {
        free(labyrinth[i]);
    }
    free(labyrinth);

    return 0;
}