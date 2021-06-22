#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  float a,b,c;
    
  printf("Inserisci il primo numero: ");
  scanf("%f", &a);
    
  printf("Inserisci il secondo numero: ");
  scanf("%f", &b);
    
  printf("Inserisci il terzo numero: ");
  scanf("%f", &c);

  char  operazione[50];
  printf("dimmi la espressione che vuoi eseguire? ");
  scanf("%s",&operazione);
  

  float finale,risultato = 0.0;
  
  
  




  if(operazione[2] == '+'){
    risultato = a + b;
  }
  else if(operazione[2] == '-'){
    risultato = a - b;
  }
  else if(operazione[2] == '/'){
    risultato = a / b;
  }
  else if(operazione[2] == '*'){
    risultato = a * b;
  }

  
  if(operazione[5] == '+'){
    finale = risultato + c;
    printf("%f",finale);
  }
  if(operazione[5] == '-'){
    finale = risultato - c;
    printf("%f",finale);
    
  }
  if(operazione[5] == '/'){
    finale = risultato / c;
    printf("%f",finale);
  }
  if(operazione[5] == '*'){
    finale = risultato * c;
    printf("%f",finale);
  }
  
  return 0;
}   

  