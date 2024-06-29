#include <stdio.h>
#define PI 3.141592653589793

void rechne_kreisdaten(double, double *, double *); /* Funktionsprototyp */

void main(void)
{
    double radius, flaeche, umfang;
    
    printf("Gib den Radius des Kreises ein: ");
    scanf("%lf", &radius);
    
    rechne_kreisdaten(radius, &flaeche, &umfang);
    
    printf("Die Fläche des Kreises ist: %lf\n", flaeche);
    printf("Der Umfang des Kreises ist: %lf\n", umfang);
    
}

void rechne_kreisdaten(double radius, double *flaeche, double *umfang)
{
    *flaeche = PI * radius * radius;
    *umfang = 2 * PI * radius;
}
