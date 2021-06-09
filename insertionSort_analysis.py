#import libraries
import random 
import time

arr= []
#importo il primo apice 
x=int(input('Inserisci il primo estremo: '))
#importo il secondo apice
y=int(input('Inserisci il esecondo estremo: '))
#stampo quanti numeri vuoi generare
n = int(input('Quanti valori vuoi generare? '))
for i in range(n):
  casuale=random.randint(x,y)
  arr.append(casuale)
print(arr)
print('\n\n\n lista ordinata:')


#function insertionSort
def insertionSort(arr):
  appo = 0
  i = 0
  for i in range(1,len(arr)):
    appo=arr[i]
    j = i-1
    while(j>=0) and (arr[j]> appo):
      arr[j+1] = arr[j]
      j = j -1
    arr[j+1] = appo
  return arr


#function call
start=time.time()
print(insertionSort(arr))
end=time.time()
temp=end-start


#print time 
print('\n\nil tempo di esecuzione è di ' + str(temp) + str(' secondi') )
