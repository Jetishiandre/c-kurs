#include <stdio.h>
#include "persist.h"

int saveGame(const char *filename, Character *player, Monster monsters[], int numMonsters) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        return 0;
    }

    fprintf(file, "%s %d %d\n", player->name, player->health, player->attack);
    fprintf(file, "%d\n", numMonsters);
    for (int i = 0; i < numMonsters; i++) {
        fprintf(file, "%s %d %d\n", monsters[i].name, monsters[i].health, monsters[i].attack);
    }

    fclose(file);
    return 1;
}

int loadGame(const char *filename, Character *player, Monster monsters[], int *numMonsters) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    fscanf(file, "%s %d %d", player->name, &player->health, &player->attack);
    fscanf(file, "%d", numMonsters);
    for (int i = 0; i < *numMonsters; i++) {
        fscanf(file, "%s %d %d", monsters[i].name, &monsters[i].health, &monsters[i].attack);
    }

    fclose(file);
    return 1;
}
