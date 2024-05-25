#include <stdio.h>

void main(void)
{
            float l = 0;
            float b = 0;
            float h = 0;
            float V;

            printf("Geben Sie das gewünschte Länge in m ein:");
            scanf("%f",&l);
            while(l <=0)
            {
                printf("Geben Sie einen Wert grösser als 0 ein.");
                scanf("%f",&l);
            }
            printf("Geben Sie das gewünschte Breite in m ein:");
            scanf("%f",&b);
            while (b <= 0)
            {
                printf("Geben Sie einen Wert grösser als 0 ein.");
                scanf("%f",&b);
            }
            printf("Geben Sie das gewünschte Höhe in m ein:");
            scanf("%f",&h);
            while (h <= 0)
            {
                printf("Geben Sie einen Wert grösser als 0 ein.");
                scanf("%f",&h);
            }

            V = l * b * h;

            printf("Das Volumen ist %fm3.",V);
        
        }