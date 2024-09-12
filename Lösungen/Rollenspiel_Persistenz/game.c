#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "persist.h"


extern int gameOver;  // Externe Deklaration der globalen Variable

void exitGame() {
    gameOver = 1;
    printf("Spiel beendet.\n");           
}

void selectAttack(AttackType *attackType) {
    int choice;
    printf("Wählen Sie eine Angriffsart:\n");
    printf("1: Physischer Angriff\n");
    printf("2: Magischer Angriff\n");
    printf("3: Fernkampfangriff\n");
    printf("4: Giftangriff\n");
    do {
        printf("Geben Sie die Nummer der Angriffsart ein: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 4);

    *attackType = (AttackType)(choice - 1);
}

void attack(Character *attacker, Monster *defender, AttackType attackType) {
    performAttack(attacker, defender, attackType);
}

void monsterAttack(Monster *attacker, Character *defender) {
    performMonsterAttack(attacker, defender);
}

void selectMonster(Monster *monsters, int *numMonsters, int *selectedMonster) {
    printf("Wählen Sie ein Monster zum Kämpfen:\n");
    for (int i = 0; i < *numMonsters; i++) {
        printf("%d: %s (Gesundheit: %d, Angriff: %d)\n", i + 1, monsters[i].name, monsters[i].health, monsters[i].attack);
    }
    do {
        printf("Geben Sie die Nummer des Monsters ein: (Beenden mit q)");
        char input;
        scanf("%c", &input);
        if(input=='q')
        {
            exitGame();
            break;
        }
        char str[2] = {input, '\0'};
        *selectedMonster = atoi(str);
        (*selectedMonster)--;
    } while (*selectedMonster < 0 || *selectedMonster >= *numMonsters);
}

void startGame(Character *player, Monster *monsters, int *numMonsters) {
    int currentMonster;
    AttackType attackType;

    while (player->health > 0 && *numMonsters > 0) {
        selectMonster(monsters, numMonsters, &currentMonster);
        if(gameOver)
        {
            break;
        }

        printf("\nKampf gegen %s!\n", monsters[currentMonster].name);
        displayCharacter(player);
        displayMonster(&monsters[currentMonster]);

        while (player->health > 0 && monsters[currentMonster].health > 0) {
            selectAttack(&attackType);
            attack(player, &monsters[currentMonster], attackType);
            if (monsters[currentMonster].health > 0) {
                monsterAttack(&monsters[currentMonster], player);
            }

            displayCharacter(player);
            displayMonster(&monsters[currentMonster]);
        }

    
            if (player->health > 0) {
                printf("Sie haben %s besiegt!\n", monsters[currentMonster].name);
                monsters[currentMonster] = monsters[*numMonsters - 1];
                (*numMonsters)--;
            } else {
                printf("Sie wurden besiegt...\n");
            }


    if (gameOver==0 && player->health > 0) {
        printf("Glückwunsch, Sie haben alle Monster besiegt!\n");
    }

    }
}
