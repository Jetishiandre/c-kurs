#ifndef PERSIST_H
#define PERSIST_H

#include "character.h"
#include "monster.h"

int saveGame(const char *filename, Character *player, Monster monsters[], int numMonsters);
int loadGame(const char *filename, Character *player, Monster monsters[], int *numMonsters);

#endif
