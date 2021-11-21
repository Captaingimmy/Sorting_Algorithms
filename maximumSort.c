#include <stdio.h>

int main()
{
    int elenco[10],k,pos_max,max,appo,j;
    
    for(k = 0;k<10;k++)
    {
        printf("numero: ");
        scanf("%d", &elenco[k]);
    }
    int ultimo = 9;
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
    for(k = 0;k<10;k++)
    {
        printf("%d,", elenco[k]);
    }
    
}
