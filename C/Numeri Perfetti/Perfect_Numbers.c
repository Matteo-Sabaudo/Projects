#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, x, r, z = 0;

    fflush(stdout);

    for(i = 4; i <= 9999; i++){ 
        for(x = 1; x < i; x++){

            r = i % x;

            if(r == 0)
                z = z + x;
        }
        if(z == i)
            fprintf( stdout, "%d\n", i);
        z = 0;
    }
    return 0;
}
