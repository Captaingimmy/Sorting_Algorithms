// chiamo le funzioni 
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

int main(){
    // definisco la dimensione della lista
    int n;
    printf("dimensione lista\n");
    scanf("%d",&n);


    int arr[n];
    int dim = n;
    // popolo l'array con numeri randomici
    for(int i = 0; i < dim;i++){
        arr[i] = rand(0);
    }
    // start time
    clock_t start = clock();

    // richiamo la funzione 
    bubble_sort(arr,dim);
    
    // end timer
    clock_t end = clock();
    
    // stampo il tempo di esecuzione della funzione 
    printf("Time elapsed:%f second \n", (double)(end - start) / CLOCKS_PER_SEC);
                    
    return 0;
}

// definisco  della funzione 
void  bubble_sort(int arr[], int size){
    // setto trovato a vero 
    bool trovato = true;
    int appo = 0;
                
    while(trovato == true){
        trovato = false;
        for(int i = 0; i<size; i++){
            if(arr[i] > arr[i  + 1]){
                appo = arr [i];
                arr[i] = arr[i+1];
                arr[i+1] = appo;
                trovato = true;     
            }
        }                                                
    } 
    
    // stampo l'array ordinato
    printf("stampa lista ordinata\n\n");
    for(int i = 0; i < size;i++){
        printf("%d \n",arr[i]);
    }
}
