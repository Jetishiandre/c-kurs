#include <stdio.h>
#include <stdbool.h>


void main(void)
{
            float chf = 0;
            char waehrung;
            float result = 0;
            const float euroFactor = 1.01f;
            const float dollarFactor = 1.09f;
            const float pfundFactor = 0.86f;
            bool valid = true;

    printf("Geben Sie den Betrag in CHF ein (oder drücken Sie q, um zu beenden): ");
    
    while (scanf("%f",&chf)==1) 
    { 
           
            getchar();//Buffer leeren
            printf("Geben Sie gewünschte Währung ein [$=Dollar, e,E=Euro, p,P=Pfund]:");
            scanf("%c",&waehrung);
            getchar();//Buffer leeren

            switch(waehrung)
            {
                case '$': result = dollarFactor * chf; break;
                case 'e':
                case 'E': result = euroFactor * chf; break;
                case 'p':
                case 'P': result = pfundFactor * chf; break;
                default: printf("Ungültige Währung!"); valid = false; break;
            }

            if(valid)
            {
                printf("%f Schweizer Franken sind %f %c.",chf,result,waehrung);
            }

            printf("Geben Sie den Betrag in CHF ein (oder drücken Sie q, um zu beenden): ");
    }

}