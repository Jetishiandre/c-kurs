#include <stdio.h>
#include <stdlib.h>
#include "character.h"
#include "monster.h"
#include "game.h"
#include "persist.h"

int gameOver = 0;  // Globale Variable für den Spielzustand

void mainMenu();

int main() {
    mainMenu();
    return 0;
}

void mainMenu() {
    Character player;
    Monster monsters[10];  // Maximal 10 Monster
    int numMonsters = 3;
    char choice;
    const char *filename = "savegame.dat";

    while (!gameOver) {
        printf("\nHauptmenü:\n");
        printf("1. Neues Spiel\n");
        printf("2. Spiel Laden\n");
        printf("3. Spiel Beenden\n");
        printf("Geben Sie Ihre Wahl ein: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                createCharacter(&player);
                
                createMonster(&monsters[0],"Monster-1",83,10);
                createMonster(&monsters[1],"Monster-2",50,5);
                createMonster(&monsters[2],"Monster-3",70,8);

                startGame(&player, monsters, &numMonsters);
                break;
            case '2':
                if (loadGame(filename, &player, monsters, &numMonsters)) {
                    printf("Spiel erfolgreich geladen.\n");
                    startGame(&player, monsters, &numMonsters);
                } else {
                    printf("Fehler beim Laden des Spiels.\n");
                }
                break;
            case '3':
                exitGame();
                break;
            default:
                printf("Ungültige Wahl, bitte erneut versuchen.\n");
        }

      
            if (saveGame(filename, &player, monsters, numMonsters)) {
                printf("Spiel erfolgreich gespeichert.\n");
            } else {
                printf("Fehler beim Speichern des Spiels.\n");
            }
        
    }
}
