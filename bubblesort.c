#include <stdbool.h>
#include <stdio.h>
int main(){
    // definisco l'array 
    int arr[]={9,3,6,8,1,4,76,2,5};
    int dim = 9;
    //richiamo la funzione 
    bubble_sort(arr,dim);
    
    return 0;
}

// definizione della funzione 
void  bubble_sort(int arr[], int size){
    // setto trovato a vero 
    bool trovato = true;
    int appo = 0;
    
    while(trovato == true){
        trovato = false;
        for(int i = 0; i<9; i++){
            if(arr[i] > arr[i  + 1]){
                appo = arr [i];
                arr[i] = arr[i+1];
                arr[i+1] = appo;
                trovato = true;
            }
        }
    }
    // 
    printf("stampa lista ordinata\n\n");
    for(int i = 0; i < size;i++){
        printf("%d \n",arr[i]);
    }
}
