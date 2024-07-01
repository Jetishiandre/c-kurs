#include <stdio.h>


void main(void)
{
   float K=0.0;
   float p=0.0;
   float Kend=0.0;
   
   printf("Geben Sie das Kapital ein:");
   scanf("%f",&K);
   printf("Geben Sie den Zinssatz ein:");
   scanf("%f",&p);

   Kend=K*(1+(p/100.0));//Formel Kapital

   printf("Das Jahreskapital K ist %f.",Kend);

}