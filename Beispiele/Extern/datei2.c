#include <stdio.h>
#include "datei2.h"

//Definition der externen Variable (global)
int a;

// Definition der externen Funktion
void printA() {
    // Zugriff auf die externe Variable
    printf("Der Wert von a ist: %d\n", a);
}
