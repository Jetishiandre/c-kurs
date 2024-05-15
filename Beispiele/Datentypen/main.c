#include <stdio.h>
#include <stdbool.h>


void main(void)
{
    
    signed int zahl=1;
    unsigned int zahl2=1;
    short zahl3=1;
    long zahl4=1;
    float zahl5=1.0;
    double zahl6=1.0;
    char c='c';
    bool condition=true;

    printf("Integer signed: %d \n", zahl);
    printf("Integer unsigned: %u \n",zahl2);
    printf("Short: %d \n",zahl2);
    printf("Long: %d \n",zahl3);
    printf("float: %f \n",zahl5);
    printf("Double: %f \n",zahl6);
    printf("Character: %c \n",c);
    printf("Boolean: %d \n",condition);
}