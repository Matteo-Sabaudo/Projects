#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int i, n, x, tentativi = 0 ;
    srand( time (NULL) ); 

    n = 1+(rand() %10);  

    printf("Indovina un numero tra 1 e 10, hai tre tentativi\n");
    
    while(tentativi < 1) {
        
        printf("Inserisci un numero: ");
        scanf("%d", &x);
        
        if (x > n) 	
          if(tentativi != 1)
              printf("Hai perso, il numero da indovinare era: %d\n" , n ); 
            	
       else if (x < n){
            if(tentativi != 1 )
                printf("Hai perso, il numero da indovinare era: %d\n" , n );
       }

       else
            printf("Hai vinto\n" );
                       
        tentativi++;
    }

    return 0;
}