#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, i, resto;

    printf("Inserire un numero intero per vedere i suoi divisori: ");
    scanf("%d", &n1); //legge la variabile

    printf("I divisori di %d sono: \n", n1);

    for(i=1; i<=n1; i++){ //repetizione
        resto = n1 % i;
        if (resto==0){
            printf("%d ", i); //se resto == 0 mostrano i numeri divisibile
        }
    }
}
