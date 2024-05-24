#include <stdio.h>


void main(void)
{
    int i=0;
    
    printf("For-Schleife!\n");
    for(i=0; i<10; i++)
    {
        printf("For-Schleife Durchgang %d!\n",i+1);
    }

    i=0;

    printf("While-Schleife!\n");
    while(i<10)
    {
        i++;
        printf("While-Schleife Durchgang %d!\n",i);
    }

    i=0;

    printf("Do-While-Schleife!\n");
    do{
       i++;
       printf("Do-While-Schleife Durchgang %d!\n",i);
    }while(i<10);
}