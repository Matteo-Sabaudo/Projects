#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, div=1;
	int conta=0;
	printf("inserisci il numero: ");
        scanf("%d", &numero);

//ho impostato conta < 3 per far in modo che esca subito appena trova due divisori

	while(conta < 3 && div <= numero / 2)
	{
		if(numero%div==0)  //se trova divisori incrementa il contatore dei divisori
			conta++;
		div=div+1;
	}
	if (conta==1)
	   printf("il numero e' primo\n ");
	else
	   printf("il numero non e' primo\n ");

}
