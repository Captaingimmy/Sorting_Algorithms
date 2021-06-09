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


#function bubbleSort
def bubbleSort(arr):
  Trovato = True
  appo = 0
  while(Trovato):
    Trovato= False
    for i in range(len(arr)-1):
      if(arr[i]>arr[i+1]):
        appo = arr[i]
        arr[i] = arr[i+1]
        arr[i+1] = appo
        Trovato = True
  return(arr)

#function call
start=time.time()
print(bubbleSort(arr))
end=time.time()
temp=end-start

print('\n\nil tempo di esecuzione è di ' + str(temp) + str(' secondi') )