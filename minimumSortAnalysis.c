#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int elenco[10000],k,pos_min,min,appo;
    
    for(k = 0;k<10000;k++)
    {
        elenco[k] = rand();
    }
    
    int ultimo = 0;
    clock_t start = clock();
    while(ultimo < 10000)
    {
        min = elenco[9999];
        pos_min = 9999;
        for(k=ultimo;k<10000;k++)
        {
            if(elenco[k] < min)
            {
                min = elenco[k];
                pos_min = k;
            }
        }
        appo = elenco[ultimo];
        elenco[ultimo] = min;
        elenco[pos_min] = appo;
        ultimo++;
    }
    clock_t end = clock();
    printf("Time elapsed: %f second \n", (double)(end-start) / CLOCKS_PER_SEC);
    
    for(k = 0;k<10000;k++)
    {
        printf("%d,", elenco[k]);
    }
    
}
