#include <stdio.h>
#include <string.h>
void leggi(char par[100][20],int *lung);
void insertion_sort(char par[100][20],int lung);
void stampo(char par[100][20],int lung);
int main()
{
    char parola[100][20];
    int dim = 0;
    leggi(parola,&dim);
    insertion_sort(parola,dim);
    stampo(parola,dim);
}
void leggi(char par[100][20],int *lung)
{
    (*lung) = 0;
    int boolean = 0;
    while(boolean != 1)
    {
        printf("lista: ");
        gets(par[(*lung)]);
        if(strlen(par[(*lung)]) == 0)
        {
            boolean = 1;
        }
        else (*lung)++;
    }
}
void insertion_sort(char par[100][20],int lung)
{
    char appo[20];
    for(int i = 1;i < lung;i++)
    {
        strcpy(appo,par[i]);
        int j = i - 1;
        while(j >= 0 && par[j] > appo)
        {
            strcpy(par[j+1],par[j]);
            j--;
            strcpy(par[j+1],appo);
        }
    }
}
void stampo(char par[100][20],int lung)
{
    for(int i = 0;i < lung;i++)
    {
        printf("lista ordinata: ");
        puts(par[i]);
    }
}



