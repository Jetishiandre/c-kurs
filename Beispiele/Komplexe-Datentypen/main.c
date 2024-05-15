#include <stdio.h>


void main(void)
{
    typedef struct{
        char name[50];
        int alter;
        float lohn;
    }Mitarbeiter;
    
    int numbers[5]={1,2,3,4,5};

    Mitarbeiter Hugo;
    snprintf(Hugo.name, sizeof(Hugo.name), "Hugo Meier");
    Hugo.alter = 45;
    Hugo.lohn = 3500.75;

    printf("Array Inhalt: ");

    for(int i=0; i<5; i++)
    {
        printf(" %d",numbers[i]);
    }

    printf(" Mitarbeiter.Name: %s",Hugo.name);
    printf(" Mitarbeiter.Alter: %d",Hugo.alter);
    printf(" Mitarbeiter.Lohn: %f",Hugo.lohn);

}