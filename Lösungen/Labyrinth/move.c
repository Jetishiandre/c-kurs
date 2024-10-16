#include <stdio.h>
#include <stdbool.h>
#include "move.h"

bool movePlayer(char **labyrinth, Position *playerPos, char direction, Position treasurePos, int rows, int cols) {
    int newX = playerPos->x;
    int newY = playerPos->y;

    if (direction == 'B' || direction == 'b') {
        return false; // Beendet das Spiel durch Benutzereingabe, aber nicht durch finden des Schatzes
    }

    switch (direction) {
        case 'W':
        case 'w': newX--; break;
        case 'A':
        case 'a': newY--; break;
        case 'S':
        case 's': newX++; break;
        case 'D':
        case 'd': newY++; break;
        default:
            printf("Ungueltige Eingabe! Verwende W/ A/ S/ D fuer Bewegungen oder B um das Spiel zu beenden.\n");
            fflush(stdout);
            #ifdef _WIN32
                Sleep(2000);
            #else
                sleep(2);
            #endif
            return true;
    }

    // Überprüft, ob die neue Position innerhalb der dynamischen Grenzen liegt
    if (newX >= 0 && newX < rows && newY >= 0 && newY < cols) {
        if (labyrinth[newX][newY] == 'O') {
            printf("Bewegung nicht moeglich! Ein Hindernis 'O' blockiert den Weg.\n");
            fflush(stdout);
            #ifdef _WIN32
                Sleep(2000);
            #else
                sleep(2);
            #endif
        } else {
            if (newX == treasurePos.x && newY == treasurePos.y) {
                labyrinth[playerPos->x][playerPos->y] = '.';
                labyrinth[newX][newY] = 'P';
                playerPos->x = newX;
                playerPos->y = newY;
                return false; // Spiel beendet, da der Schatz gefunden wurde
            }

            labyrinth[playerPos->x][playerPos->y] = '.';
            labyrinth[newX][newY] = 'P';
            playerPos->x = newX;
            playerPos->y = newY;
        }
    } else {
        printf("Bewegung nicht moeglich! Du befindest dich bereits am Spielfeldrand.\n");
        fflush(stdout);
        #ifdef _WIN32
            Sleep(2000);
        #else
            sleep(2);
        #endif
    }

    return true;
}
