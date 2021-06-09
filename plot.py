#importo la libreria matplotlib
import matplotlib.pyplot as plt 

#inserisco i dati dei risultati ottenuti 
x = [0,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000]
#insertion sort:
y = [0,0.024276256561279297,0.11598634719848633,0.21288323402404785,0.3853728771209717,0.6030993461608887,0.8427243232727051,1.19171142578125,1.5056602954864502,1.9390900135040283,2.478433847427368]
#tempo analizzato tramite la libreria time 

#parte grafica:
#creo il grafico e coloro la linea  
plt.plot(x,y,color='blue')
# nella asse y viene assegnato il nome s che starebbe per tempo che uno dei 2 algoritmi mette per completare l'ordinamento
plt.ylabel('S (execution time)')
# nella asse x viene assegnato il nome n che indica i numeri che popolano l'array
plt.xlabel('N (list size)')
#creo il titolo 
plt.title('Execution time')
#inserisci i dati gli risultati ottenuti
#bubble sort :
y2 = [0,0.1058652400970459,0.34180569648742676,0.786597728729248,1.4346916675567627,2.2366673946380615,3.182283401489258, 4.391887426376343,5.860845565795898,7.415553569793701,9.327478408813477]
#tempo analizzato tramite la libreria time 
#creo e coloro la linea 
plt.plot(x,y2,color='green')
#creo una legenda per tuuti i 2 algoritmi di ordinamento
plt.plot(x,y,label = 'insertionSort')
plt.plot(x,y2,label = 'bubbleSort')
#mostro la legenda nel grafico all'utente
plt.legend()
#mostro il grafico all'utente
plt.show()
