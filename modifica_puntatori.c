#include <stdio.h>

int main() {
  int arr[50] = {50,10,20,4};
  int *point;
  point = &arr;
  printf("\n\n%d",&arr);
  printf("\n\nindirizzo di x== %d",point);
  int *indirizzo = point + 1;
  printf("\n\nindirizzo di indirizzo== %d",indirizzo);
  *indirizzo = 150;
  printf("\n\nindirizzo di arr[1]==%d",arr[1]);
  
  
  
    return 0;
}
  