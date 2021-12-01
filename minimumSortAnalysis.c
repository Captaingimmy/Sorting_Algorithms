#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int elenco[10000],k,pos_max,max,appo,j;
    
    for(k = 0;k<10000;k++)
    {
        elenco[k] = rand();
    }
    int ultimo = 9999;
    clock_t start = clock();
    while(ultimo > 0)
    {
        max = elenco[0];
        pos_max = 0;
        for(k=1;k<=ultimo;k++)
        {
            if(elenco[k] > max)
            {
                pos_max = k;
                max = elenco[k];
            }
        }
        appo = elenco[ultimo];
        elenco[ultimo] = max;
        elenco[pos_max] = appo;
        ultimo--;
    }
    clock_t end = clock();
    printf("Time elapsed: %f second \n", (double)(end-start) / CLOCKS_PER_SEC);
    for(k = 0;k<10000;k++)
    {
        printf("%d,", elenco[k]);
    }
    
}
