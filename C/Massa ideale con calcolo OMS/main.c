#include <stdio.h>
#include <stdlib.h>

void main()
{

    float peso, altezza, imc;

    printf("Quale e il tuo peso? ");
    scanf("%f", &peso);
    printf("\n");
    printf("Quale e la tua altezza? ");
    scanf("%f", &altezza);


    imc = peso / (altezza * altezza);
    printf(" \n IL TUO IMC E:  %.2f \n \n", imc);

    if(imc <= 18.5){
    printf(" OMS: PESO SOTTO DEL NORMALE! \n");
    printf(" \n IMC MENORE DI 18.5 = SOTTO IL PESO IDEALE! \n IMC MAGGIORE DI 18.5 E MINORE DI 25 = PESO IDEALE! \n IMC MAGGIORE DI 25 E MINORE DI 30 = SOPRA IL PESO IDEALE! \n IMC MAGGIORE DI 30 = OBESITA! \n");
    }

    if(imc > 18.5 && imc <= 25){
    printf(" OMS: PESO NORMALE! \n");
    printf(" \n IMC MENORE DI 18.5 = SOTTO IL PESO IDEALE! \n IMC MAGGIORE DI 18.5 E MINORE DI 25 = PESO IDEALE! \n IMC MAGGIORE DI 25 E MINORE DI 30 = SOPRA IL PESO IDEALE! \n IMC MAGGIORE DI 30 = OBESITA! \n");
    }

    if(imc > 25 && imc <= 30){
    printf(" OMS: PESO SOPRA DEL NORMALE! \n");
    printf(" \n IMC MENORE DI 18.5 = SOTTO IL PESO IDEALE! \n IMC MAGGIORE DI 18.5 E MINORE DI 25 = PESO IDEALE! \n IMC MAGGIORE DI 25 E MINORE DI 30 = SOPRA IL PESO IDEALE! \n IMC MAGGIORE DI 30 = OBESITA! \n");
    }

    if(imc > 30){
    printf(" OMS: OBESITA! \n");
    printf(" \n IMC MENORE DI 18.5 = SOTTO IL PESO IDEALE! \n IMC MAGGIORE DI 18.5 E MINORE DI 25 = PESO IDEALE! \n IMC MAGGIORE DI 25 E MINORE DI 30 = SOPRA IL PESO IDEALE! \n IMC MAGGIORE DI 30 = OBESITA! \n");
    }

}
