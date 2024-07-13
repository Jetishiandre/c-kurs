#ifndef PERSIST_H
#define PERSIST_H

#include "character.h"
#include "monster.h"

void loadGame(Character *player,Monster monsters[],int numMonster);
void saveGame(Character *player,Monster monsters[],int *numMonster);

#endif