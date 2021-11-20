#include <iostream>
using namespace std;
int main(){
  int array[10],j,i,appo;

  for(i=0;i<10;i++)
  {
    cout << "numero: ";
    cin >> array[i];
  }

  for(i=0;i < 10;i++)
  {
    for(j=i+1;j < 10;j++)
    {
      if(array[i] > array[j])
      {
        appo = array[i];
        array[i] = array[j];
        array[j] = appo;
      }
    }
  }
  for(i=0;i < 10;i++)
  {
    cout << "array[" << i << "]=" << array[i] << endl;
  }
} 
