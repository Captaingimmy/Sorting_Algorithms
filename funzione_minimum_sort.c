#include <stdio.h>
void find_min(int vett[10],int *minus,int *pos_minus,int ultim);
void leggi(int vett[10]);
void stampo(int vett[10]);
void minimum(int vett[10]);
int main()
{
    int elenco[10];
    leggi(elenco);
    minimum(elenco);
    stampo(elenco);
}
void leggi(int vett[10])
{
    for(int k = 0;k < 10;k++)
    {
        printf("array: ");
        scanf("%d", &vett[k]);
    }
}

void minimum(int vett[10])
{
    int ultimo = 0;
    int appo;
    while(ultimo < 10)
    {
        int min = vett[9];
        int pos_min = 9;
        find_min(vett,&min,&pos_min,ultimo);
        appo = vett[ultimo];
        vett[ultimo] = min;
        vett[pos_min] = appo;
        ultimo++;
    }
}
void stampo(int vett[10])
{
    for(int k = 0;k < 10;k++)
    {
        printf("array: %d", vett[k]);
    }
}

void find_min(int vett[10],int *minus,int *pos_minus,int ultim)
{
    for(int k = ultim;k < 10;k++)
    {
        if(vett[k] < (*minus))
        {
            (*minus) = vett[k];
            (*pos_minus) = k;
        }
    }
}

