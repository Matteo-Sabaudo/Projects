//INCLUDES:
#include <stdio.h>

//DEFINES:
#define SIZE 200

//VARIABILI:
char nome[SIZE][50];
char email[SIZE][50];
int codicefiscale[SIZE];
int opzione;

void registrare();
void clienti();
void registrati();

int main(void){

    do{
        system("cls");
        printf("-----Registry Database by Sabaudo Matteo-----\n");
        printf("\n1. Registrare\n");
        printf("2. Find\n");
        printf("3. Registrati\n");
        printf("4. Uscire\n");
        printf("\nOpzione: ");

        scanf("%d", &opzione);

        switch(opzione){
        case 1:
            system("cls");
            registrare();
            break;
        case 2:
            system("cls");
            clienti();
            break;
        case 3:
            system("cls");
            registrati();
            break;
        case 4:
            system("exit");
            break;
        default:
            printf("ERRORE! Scelta Invalita!");
            getchar();
            getchar();
            break;
        }
    }while(opzione != 4);
}



void registrati(){
    int i;

    for(i=0;i<SIZE;i++){
        if(codicefiscale[i]>0){
            printf("\nCognome: %s", nome[i]);
            printf("\nEmail: %s", email[i]);
            printf("\nCodice Fiscale: %d\n", codicefiscale[i]);
        }else{
            break;
        }
    }
    getchar();
    getchar();
}


void registrare(){
    static int linea;

    do{
        printf("Inserisce il cognome: ");
        scanf("%s", &nome[linea]);

        printf("\nInserisce L'email: ");
        scanf("%s", &email[linea]);

        printf("\nInserisce il Codice Fiscale: ");
        scanf("%d", &codicefiscale[linea]);

        printf("\nInserisce 1 per continuare o altro valore per uscire: \n");
        scanf("%d", &opzione);

        system("cls");

        linea++;
    }while(opzione == 1);

}

void clienti(){

    int idcodice;
    int i;

        system("cls");

            printf("Inserisce il codice fiscale: ");
            scanf("%d", &idcodice);
            for(i=0;i<SIZE;i++){
                if(codicefiscale[i]==idcodice){
                    printf("\nCognome: %s", nome[i]);
                    printf("\nEmail: %s", email[i]);
                    printf("\nCodice Fiscale: %d\n", codicefiscale[i]);
                }
            }

        printf("\nInserisce 1 per continuare o altro valore per uscire: \n");
        scanf("%d", &opzione);

}
