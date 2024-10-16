#ifndef MOVE_H
#define MOVE_H

#include "labyrinth.h"

bool movePlayer(char **labyrinth, Position *playerPos, char direction, Position treasurePos, int rows, int cols);

#endif
