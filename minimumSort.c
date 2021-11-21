#include <stdio.h>

int main()
{
    int elenco[10],k,pos_min,min,appo;
    
    for(k = 0;k<10;k++)
    {
        printf("numero: ");
        scanf("%d", &elenco[k]);
    }
    
    int ultimo = 0;
    
    while(ultimo < 10)
    {
        min = elenco[9];
        pos_min = 9;
        for(k=ultimo;k<10;k++)
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
    
    for(k = 0;k<10;k++)
    {
        printf("%d,", elenco[k]);
    }
    
}
