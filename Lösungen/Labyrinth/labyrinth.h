#ifndef LABYRINTH_H
#define LABYRINTH_H

#include <stdbool.h>  // Hinzufügen für die Verwendung von bool

#define NUM_OBSTACLES 10

// Struktur zur Speicherung der Positionen
typedef struct {
    int x;
    int y;
} Position;

void initLabyrinth(char **labyrinth, int rows, int cols, Position *playerPos, Position *treasurePos);
void printLabyrinth(char **labyrinth, int rows, int cols);

// Deklaration der hasFreeNeighbor-Funktion
bool hasFreeNeighbor(char **labyrinth, int x, int y, int rows, int cols);

#endif
