#include <stdio.h>
void leggi(int vett[10]);
void maximum_sort(int vett[10]);
void find_max(int vett[10],int *maxi,int *pos_maxi,int ultim);
void stampo(int vett[10]);
int main()
{
    int elenco[10];
    leggi(elenco);
    maximum_sort(elenco);
    stampo(elenco);
}

void leggi(int vett[10])
{
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        printf("array: ");
        scanf("%d", &vett[i]);
    }
}
void maximum_sort(int vett[10])
{
    int ultimo = 9;
    int appo;
    while(ultimo > 0)
    {
        int max = vett[0];
        int pos_max = 0;
        find_max(vett,&max,&pos_max,ultimo);
        appo = vett[ultimo];
        vett[ultimo] = max;
        vett[pos_max] = appo;
        ultimo--;
    }
}
void stampo(int vett[10])
{
   int i = 0;
   for(i = 0;i  < 10;i++)
   {
       printf("array: %d", vett[i]);
   }
}

void find_max(int vett[10],int *maxi,int *pos_maxi,int ultim)
{
    int i;
    for(i = 1;i <=ultim;i++)
    {
        if(vett[i] > (*maxi))
        {
            (*pos_maxi)= i;
            (*maxi) = vett[i];
        }
    }
}
