#include <stdio.h>


void main(void)
{
    typedef struct{
        char name[50];
        char vorname[50];
        char strasse[50];
        unsigned int strassennummer;
        unsigned int postleitzahl;
        char ort[50];
    }Adresse;
    
   
    Adresse Hugo;
    snprintf(Hugo.name, sizeof(Hugo.name), "Meier");
    snprintf(Hugo.vorname, sizeof(Hugo.vorname), "Hugo");
    snprintf(Hugo.strasse, sizeof(Hugo.strasse), "Ballwilerstrasse");
    Hugo.strassennummer = 45;
    Hugo.postleitzahl = 6034;
    snprintf(Hugo.ort, sizeof(Hugo.ort), "Inwil");

    Adresse Roman;
    snprintf(Roman.name, sizeof(Roman.name), "Camenzind");
    snprintf(Roman.vorname, sizeof(Roman.vorname), "Roman");
    snprintf(Roman.strasse, sizeof(Roman.strasse), "Eichmatt");
    Roman.strassennummer = 28;
    Roman.postleitzahl = 6034;
    snprintf(Roman.ort, sizeof(Roman.ort), "Inwil");

    printf(" Name: %s",Hugo.name);
    printf(" Vorname: %s",Hugo.vorname);
    printf(" Strasse: %s",Hugo.strasse);
    printf(" Strassenummer: %d",Hugo.strassennummer);
    printf(" PLZ: %d",Hugo.postleitzahl);
    printf(" Ort: %s \n",Hugo.ort);

    printf(" Name: %s",Roman.name);
    printf(" Vorname: %s",Roman.vorname);
    printf(" Strasse: %s",Roman.strasse);
    printf(" Strassenummer: %d",Roman.strassennummer);
    printf(" PLZ: %d",Roman.postleitzahl);
    printf(" Ort: %s \n",Roman.ort);




}