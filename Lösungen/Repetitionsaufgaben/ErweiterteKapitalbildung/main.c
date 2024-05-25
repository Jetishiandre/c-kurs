#include <stdio.h>

void main(void)
{
            float K = 0;//Kapitel Variabledeklaration
            float p = 0;//Zinsatz Variablendeklaration
            float Kend;//Kapital nach Jahresende Variablendeklaration

            printf("Geben Sie das gewünschte Kapital in CHF ein:");//Konsolenausgabe
            scanf("%f",&K);//Konsolen lesen und String2Double-Konvertierung
            while (K <= 0)
            {
                printf("Bitte geben Sie ein Kapital grösser 0 ein.");
                scanf("%f",&K);//Konsolen lesen und String2Double-Konvertierung
            }
            printf("Geben Sie den Zinssatz in Prozent ein:");//Konsolenausgabe
            scanf("%f",&p);//Konsole lesen und String2Double-Konvertierung
            while (p <= 0 || p > 100)
            {
                printf("Bitte geben Sie einen Zinsatz grösser 0 ein und kleiner gleich 100 ein.");
                scanf("%f",&p);//Konsole lesen und String2Double-Konvertierung
            }

            Kend = K * (1 + (p / 100.0));//Formel 

            printf("Das Jahresendkapital ist %f.",Kend);//Konsolenausgabe + automatische String konvertierung

}