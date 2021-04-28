#include <stdio.h>
#include <stdlib.h>

int main()
{
      //Declarazione Variabili
      int numeri = 0;

      int inizio = 4;

      while(numeri < 10) //inizia il programma
      {

            int divisori = 0; //Variabile per prendere i divisori

            for(int i = 1; i <= inizio/2; i++)
                    if (inizio % i == 0)
                         divisori = divisori + i;

            if (divisori == inizio)
            {
                  printf("%d  numero perfetto\n", inizio);
                  numeri++;
             }
             inizio++;
       }
 }

