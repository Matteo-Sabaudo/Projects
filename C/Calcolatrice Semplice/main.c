#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opzione;

    printf("Schegli un metodo: \n \n 1) Divisione \n 2) Moltiplicazione \n 3) Somma \n 4) Sottrazione \n \n");
    scanf("%d", &opzione);

    if(opzione == 1){

        float div1, div2, divisione;

        printf("\n");
        printf("Inserire un numero: ");
        scanf("%f", &div1);

        printf("Diviso per: ");
        scanf("%f", &div2);
        printf("\n");

        divisione = div1 / div2;
        printf("Il risultato e: %.2f \n", divisione);
    }

    if(opzione == 2){

        float mult1, mult2, multiplicazione;

        printf("\n");
        printf("Inserire un numero: ");
        scanf("%f", &mult1);

        printf("Moltiplicato per: ");
        scanf("%f", &mult2);
        printf("\n");

        multiplicazione = mult1 * mult2;
        printf("Il risultato e: %.2f \n", multiplicazione);
    }

        if(opzione == 3){

        float somma1, somma2, somma;

        printf("\n");
        printf("Inserire un numero: ");
        scanf("%f", &somma1);

        printf("Piu: ");
        scanf("%f", &somma2);
        printf("\n");

        somma = somma1 + somma2;
        printf("Il risultato e: %.2f \n", somma);
    }

        if(opzione == 4){

        float sub1, sub2, sub;

        printf("\n");
        printf("Inserire un numero: ");
        scanf("%f", &sub1);

        printf("Meno: ");
        scanf("%f", &sub2);
        printf("\n");

        sub = sub1 - sub2;
        printf("Il risultato e: %.2f \n", sub);
    }



}
