arr=[]
for i in range(10):
  inserimento=int(input('inserisci un numero'))
  arr.append(inserimento)
print(arr)

#function bubblesort
def bubblesort(arr):
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
  print(arr)

#function call
bubblesort(arr)