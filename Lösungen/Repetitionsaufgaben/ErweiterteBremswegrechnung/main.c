#include <stdio.h>

void main(void)
{
            float a = 0;//Verzögerung als float
            float t = 0;//Zeit als float
            float s;//Weg als float

            printf("Geben Sie das gewünschte Verzögerung in m/s2 ein:");
            scanf("%f",&a);//Konsolen-Einlesen Verzögerung
            while(a<=0)//Abfrage solange werde nicht grösser 0
            {
                printf("Geben Sie einen Wert grösser 0 ein:");
                scanf("%f",&a);//Konsolen-Einlesen Verzögerung
            }
            printf("Geben Sie das gewünschte Zeit in s ein:");
            scanf("%f",&t);//Konsolen-Einlesen Zeit
            while (t <= 0)//Abfrage solange werde nicht grösser 0
            {
                printf("Geben Sie einen Wert grösser 0 ein:");
                scanf("%f",&t);//Konsolen-Einlesen Zeit
            }


            s = (a * t * t) / 2;//Berechung des Bremsweges

            printf("Der Bremsweg ist %fm.",s);//Konsole-Ausgabe
}