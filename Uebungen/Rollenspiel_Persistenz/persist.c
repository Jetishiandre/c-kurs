#include <stdio.h>
#include "persist.h"


void loadGame(Character *player,Monster monsters[],int *numMonster)
{

}

void saveGame(Character *player,Monster monsters[],int numMonster)
{  FILE *file=fopen("saveGame.dat","w");
   
    fprintf(file,"%s %d %d",player->name,player->health,player->attack);


}