#include <stdio.h>
#include <stdlib.h>

void main()
{
    //DECLARAZIONE DI VARIBILE
    int num1, num2, somma;

    //INIZIO DEL CODICE
    printf("Inserisci il primo numero: ");
    scanf("%d", & num1);

    printf("\n");

    printf("Inserisce il secondo numero: ");
    scanf("%d", & num2);

    //CALCOLO DI SOMMA E PRINT
    somma = num1 + num2;

    printf("\n");

    printf("Il risultato e: %d \n" , somma);
}
