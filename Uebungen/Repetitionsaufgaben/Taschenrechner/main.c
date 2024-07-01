#include <stdio.h>

void main(void)
{
    float resultat;
    float operandlinks;
    float operandrechts;
    char operator;

    printf("Gib die erste Zahl ein:");
    scanf("%f",&operandlinks);
    getchar();
    printf("Gib den Operator ein: +,-,/,*:");
    scanf("%c",&operator);
    getchar();
    printf("Gib die erste Zahl ein:");
    scanf("%f",&operandrechts);

    switch(operator)
    {
        case '+':
            resultat=operandlinks+operandrechts;
        break;
        case '-':
            resultat=operandlinks-operandrechts;
        break;
        case '*':
            resultat=operandlinks*operandrechts;
        break;
        case '/':
            resultat=operandlinks/operandrechts;
        break;

    }

    printf("Resultat: %f",resultat);

    }