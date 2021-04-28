#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, media, cont = 0;

    printf("Inserisce un numero: ");
    scanf("%f", &num);

    while(num > 0){
        cont += num;
        printf("Inserisce un numero: ");
        scanf("%f", &num);
    }

    media = num / cont;

    printf("La media tra i numeri inseriti e' di: %.2f", media);
}
