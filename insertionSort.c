#include <stdbool.h>
#include <stdio.h>
int main(){
    int arr[]={4,365,3,7,2,6,3,47};
    int dim = 8;
    insertion_Sort(arr,dim);
    return 0;

}


void insertion_Sort(int arr[], int size){
    int appo = 0;
    for(int i = 1;i<8; i++){
        appo = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > appo){
            arr[j+1] = arr[j];
            j = j -1;
        arr[j+1] = appo; 
        }
               
    }
    printf("\n\n stampa lista ordinata");
    for(int i = 0; i < size;i++){
        printf("%d \n",arr[i]);
    }    

}

