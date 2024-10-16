#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // Hinzufügen für bool
#include "labyrinth.h"

// Initialisiert das Labyrinth, platziert Spieler 'P', den Schatz 'T' und die Hindernisse 'O'
void initLabyrinth(char **labyrinth, int rows, int cols, Position *playerPos, Position *treasurePos) {
    // Setze alle Felder auf '.'
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            labyrinth[i][j] = '.';
        }
    }
 // Berechne die Anzahl der Hindernisse dynamisch, z.B. 15% der Spielfeldgröße.
    int numObstacles = (rows * cols) * 0.15;

    // Platziere die Hindernisse an zufälligen Positionen
    for (int i = 0; i < numObstacles; i++) {
        int obstacleX, obstacleY;
        do {
            obstacleX = rand() % rows;
            obstacleY = rand() % cols;
        } while (labyrinth[obstacleX][obstacleY] != '.'); // Stelle sicher, dass kein anderes Objekt an dieser Position ist
        labyrinth[obstacleX][obstacleY] = 'O';
    }

    // Platziere den Spieler an einer zufälligen Position
    do {
        playerPos->x = rand() % rows;
        playerPos->y = rand() % cols;
    } while (labyrinth[playerPos->x][playerPos->y] != '.'); // Spieler darf nicht auf einem Hindernis platziert werden
    labyrinth[playerPos->x][playerPos->y] = 'P';

    // Platziere den Schatz an einer Position mit mindestens einem freien Nachbarfeld
    do {
        treasurePos->x = rand() % rows;
        treasurePos->y = rand() % cols;
    } while (labyrinth[treasurePos->x][treasurePos->y] != '.' ||
             !hasFreeNeighbor(labyrinth, treasurePos->x, treasurePos->y, rows, cols));

    labyrinth[treasurePos->x][treasurePos->y] = 'T';
}

// Hilfsfunktion zur Überprüfung, ob es mindestens ein freies Nachbarfeld gibt
bool hasFreeNeighbor(char **labyrinth, int x, int y, int rows, int cols) {
    // Überprüfe die vier Nachbarfelder: oben, unten, links, rechts
    if ((x > 0 && labyrinth[x - 1][y] == '.') ||
        (x < rows - 1 && labyrinth[x + 1][y] == '.') ||
        (y > 0 && labyrinth[x][y - 1] == '.') ||
        (y < cols - 1 && labyrinth[x][y + 1] == '.')) {
        return true;
    }
    return false;
}

void printLabyrinth(char **labyrinth, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", labyrinth[i][j]);
        }
        printf("\n");
    }
}
