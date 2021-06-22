#include <stdio.h>
int main(){
    int n;
    printf("inserisci il numero che vuoi trasformare in fattoriale ");
    scanf("%d", &n);
    int risultato_1 = fattoriale(n);
    printf("il risultato in fattoriale e  %d",risultato_1);
  return 0;
}

int fattoriale(n){
    int risultato = 1;
    for(int num = n;num>1;num --){
        risultato = risultato * num;
    }
    return risultato;
}