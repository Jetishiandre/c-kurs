#include <stdio.h>
#include "openingscreen.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void showOpeningScreen() {
    clearScreen();
    printf("#############################################################\n");
    printf("# Willkommen zum Labyrinth-Spiel!                           #\n");
    printf("#                                                           #\n");
    printf("# Finde den Schatz \"T\" durch                                #\n");
    printf("# Bewegen des Spielers \"P\"                                  #\n");
    printf("# Das Spiel startet automatisch. Viel Glueck und Erfolg...  #\n");
    printf("#############################################################\n");
#ifdef _WIN32
    Sleep(5000);
#else
    sleep(5);
#endif
}

void clearScreen() {
    printf("\033[H\033[J");
}