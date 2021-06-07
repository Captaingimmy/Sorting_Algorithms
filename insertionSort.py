arr=[]
for i in range(10):
  inserimento=int(input('inserisci un numero '))
  arr.append(inserimento)
print(arr)

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
print(insertionSort(arr))