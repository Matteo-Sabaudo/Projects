#include <stdio.h>

int main()
{
	int number, div=1;
	int counter=0;
	printf("Insert a number: ");
        scanf("%d", &number);

	while(counter < 3 && div <= number / 2)
	{
		if(number%div==0)  
			counter++;
		div=div+1;
	}
	if (counter==1)
	   printf("It's an ordinal number\n ");
	else
	   printf("Isn't an ordinal number\n ");

}
