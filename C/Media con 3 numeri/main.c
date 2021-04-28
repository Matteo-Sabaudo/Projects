#include <stdio.h>
#include <stdlib.h>

void main()
{
    float n1, n2, n3, media;

    printf("Inserire il primo voto: ");
    scanf("%f", &n1);

    printf("Inserire il secondo voto: ");
    scanf("%f", &n2);

    printf("Inserire il voto orale: ");
    scanf("%f", &n3);
    printf("\n");

    media = (n1 + n2 + n3) / 3;
    printf("La media del studente e: %.1f \n", media);

    if(media >= 7){
        printf("Il studente e stato approvato! \n");
    }

}
