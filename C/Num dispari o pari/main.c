#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, rest, x, f;

    printf("Insert a integer number: ");
    scanf("%d", &num);

    for(i = 0; i<=num; i++){
            rest = i % 2;

            if(rest == 1){
                printf("%d odd \n", i);
    }
            else{
                printf("%d even \n", i);
            }

    }
    printf("\n");
    for(i = num; i>=0; i--){
        printf("%d ", i);
    }

    rest = num % 2;
    if(rest == 1){
        printf("The number is odd!");
    }

f = 1;
printf("\n");
for(x=1; x<=num; x++){
    f=f*x;
}
        printf("%d", f);

}
