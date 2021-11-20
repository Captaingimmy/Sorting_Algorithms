#include <iostream>
using namespace std;

int main() {
  int array[10],j,i,appo;

  for(i=0;i<10;i++)
  {
    cout << "numero: ";
    cin >> array[i];
  }

  appo = 0;
  i = 0;
  for(i = 1;i<10;i++)
  {
    appo = array[i];
    j = i - 1;
    while((j>=0) && (array[j] > appo))
    {
      array[j+1] = array[j];
      j = j - 1;
      array[j+1] = appo;
    }
  }
  for(i=0;i < 10;i++)
  {
    cout << "array[" << i << "]=" << array[i] << endl;
  }
