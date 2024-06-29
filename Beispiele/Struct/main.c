#include <stdio.h>

// Definition der struct für einen Punkt im 2D-Raum
struct Point {
    int x;
    int y;
};

// Funktion zur Ausgabe der Koordinaten eines Punktes
void printPoint(struct Point p) {
    printf("Punktkoordinaten: (%d, %d)\n", p.x, p.y);
}

void main() {
    // Deklaration und Initialisierung eines Punktes
    struct Point point1;
    point1.x = 5;
    point1.y = 10;

    // Ausgabe der Koordinaten des Punktes
    printPoint(point1);

}
