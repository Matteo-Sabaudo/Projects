#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char utente[30];
    char password[30];
} persona; persona p[1];

int main(){

    char utente[30];
    char password[30];


    strcpy(p[0].utente, "");
    strcpy(p[0].password, "");

    printf("UTENTE: ");
    scanf("%s", utente);
    printf("PASSWORD: ");
    scanf("%s", password);

    if ((strcmp(utente,p[0].utente)==0) && (strcmp(password,p[0].password)==0)){

        printf("SUCESS: Accesso fatto con successo!\n");

        system("cls");
        float n1, n2, n3, media;
        printf("Benvenuto al Sistema di Media!\n");

        printf("Inserisce il primo vuoto: ");
        scanf("%f", &n1);
        printf("Inserisce il secondo vuoto: ");
        scanf("%f", &n2);
        printf("Inserisce i punti positivi(facoltativo): ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;
        printf("\nLa media e': %.2f\n", media);

        if(media < 6){
            printf("\nInsuficienza\n");
        }
        else{
            printf("\nAlluno approvato!\n");
        }











    }
    else{
        printf("ERROR: Utente o password sbagliato o non esiste! \n");
    }





















    return 0;
}
