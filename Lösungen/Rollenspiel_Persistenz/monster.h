#ifndef MONSTER_H
#define MONSTER_H

typedef struct {
    int poisoned:1;
} Status;

typedef struct {
    char name[50];
    int health;
    int attack;
    Status status;
} Monster;

void createMonster(Monster *monster,char name[],int health,int attack);
void displayMonster(const Monster *monster);

#endif
