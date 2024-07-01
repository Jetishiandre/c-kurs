#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10
#define MAX_MOVES 50
#define NUM_TREASURES 3
#define NUM_OBSTACLES 10

typedef struct {
    int x;
    int y;
} Position;

void initializeGame(char labyrinth[HEIGHT][WIDTH], Position *player, Position treasures[], Position obstacles[], int *numTreasures);
void printLabyrinth(char labyrinth[HEIGHT][WIDTH]);
void movePlayer(char labyrinth[HEIGHT][WIDTH], Position *player, char move);
int checkTreasure(Position player, Position treasures[], int *numTreasures);
void placeObstacles(char labyrinth[HEIGHT][WIDTH], Position obstacles[]);

int main() {
    char labyrinth[HEIGHT][WIDTH];
    Position player;
    Position treasures[NUM_TREASURES];
    Position obstacles[NUM_OBSTACLES];
    char move;
    int gameOver = 0;
    int numTreasures = NUM_TREASURES;
    int moves = 0;
    int score = 0;

    srand(time(NULL));
    initializeGame(labyrinth, &player, treasures, obstacles, &numTreasures);

    while (!gameOver && moves < MAX_MOVES) {
        printLabyrinth(labyrinth);
        printf("Bewege den Spieler (W/A/S/D): ");
        scanf(" %c", &move);
        movePlayer(labyrinth, &player, move);
        score += checkTreasure(player, treasures, &numTreasures);
        moves++;
        gameOver = (numTreasures == 0);
    }

    if (numTreasures == 0) {
        printf("Herzlichen Glückwunsch! Du hast alle Schätze gefunden!\n");
    } else {
        printf("Spiel vorbei! Du hast nicht alle Schätze gefunden.\n");
    }
    printf("Dein Score: %d\n", score);
    printf("Verwendete Züge: %d\n", moves);

    return 0;
}

void initializeGame(char labyrinth[HEIGHT][WIDTH], Position *player, Position treasures[], Position obstacles[], int *numTreasures) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            labyrinth[i][j] = '.';
        }
    }

    player->x = rand() % WIDTH;
    player->y = rand() % HEIGHT;
    labyrinth[player->y][player->x] = 'P';

    for (int i = 0; i < *numTreasures; i++) {
        do {
            treasures[i].x = rand() % WIDTH;
            treasures[i].y = rand() % HEIGHT;
        } while ((treasures[i].x == player->x && treasures[i].y == player->y) || labyrinth[treasures[i].y][treasures[i].x] == 'T');
        labyrinth[treasures[i].y][treasures[i].x] = 'T';
    }

    placeObstacles(labyrinth, obstacles);
}

void printLabyrinth(char labyrinth[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c ", labyrinth[i][j]);
        }
        printf("\n");
    }
}

void movePlayer(char labyrinth[HEIGHT][WIDTH], Position *player, char move) {
    int newX = player->x;
    int newY = player->y;

    switch (move) {
        case 'W':
        case 'w':
            newY = player->y - 1;
            break;
        case 'A':
        case 'a':
            newX = player->x - 1;
            break;
        case 'S':
        case 's':
            newY = player->y + 1;
            break;
        case 'D':
        case 'd':
            newX = player->x + 1;
            break;
        default:
            printf("Ungültige Eingabe!\n");
            return;
    }

    if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT && labyrinth[newY][newX] != 'O') {
        labyrinth[player->y][player->x] = '.';
        player->x = newX;
        player->y = newY;
        labyrinth[player->y][player->x] = 'P';
    } else {
        printf("Bewegung außerhalb des Labyrinths oder auf ein Hindernis!\n");
    }
}

int checkTreasure(Position player, Position treasures[], int *numTreasures) {
    for (int i = 0; i < *numTreasures; i++) {
        if (player.x == treasures[i].x && player.y == treasures[i].y) {
            treasures[i] = treasures[--(*numTreasures)];
            return 10;  // Punkte für das Finden eines Schatzes
        }
    }
    return 0;
}

void placeObstacles(char labyrinth[HEIGHT][WIDTH], Position obstacles[]) {
    for (int i = 0; i < NUM_OBSTACLES; i++) {
        do {
            obstacles[i].x = rand() % WIDTH;
            obstacles[i].y = rand() % HEIGHT;
        } while (labyrinth[obstacles[i].y][obstacles[i].x] != '.');
        labyrinth[obstacles[i].y][obstacles[i].x] = 'O';
    }
}
