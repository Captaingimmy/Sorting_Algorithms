// includo le librerie 
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    // inserimento dati
    int n = 0  ;
    printf("list dimension\n");
    scanf("%d",&n);
 

    int arr[n];
    int dim = n;
    // inserimento dati randomici nella lista 
    for(int i = 0;i<dim;i++){
        arr[i] = rand();
    }
    
    // start timer
    clock_t start = clock();

    // function call
    insertion_Sort(arr,dim);
    
    // end timer
    clock_t end = clock();
    
    // stampo il tempo di esecuzione
    printf("Time elapsed: %f second \n", (double)(end-start) / CLOCKS_PER_SEC);

    return 0;

}

// dichiarazione della fuzione
void insertion_Sort(int arr[], int size){
    int appo = 0;
    for(int i = 1;i<size; i++){
        appo = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > appo){
            arr[j+1] = arr[j];
            j = j -1;
            arr[j+1] = appo;
        }
    }
    // stampo array
    printf(" stampa lista ordinata \n");
    for(int i = 0; i < size;i++){
        printf("%d \n",arr[i]);
    }
                                    
}

