# Funzioni
## 5.4.2 Passaggio di parametri per riferimento
Quando una funzione deve modificare il valore della variabile passatagli come argomento si deve utilizzare il metodo del passaggio per riferimento, ovvero al posto di passare la variabile, viene passato il suo indirizzo di memoria.

Questa tecnica può essere implementata in 2 modi:

    - metodi dei puntatori (*)  
      es. chiamata = scambio_puntatori(&i, &j)
          metodo = scambio_puntatori(int* a, int* b){ ... }
    - metodo dei riferimenti (&)
      es. chiamata = scambio_puntatori(i, j)
          metodo = scambio_puntatori(int& a, int& b){ ... }

## 5.5 Argomenti di default
es. void asterischi (int fila, char c = '*'){ ... }

## 5.7 Visibilità

    - di programma (variabili globali con l'uso di extern);
    - di file (per rendere privata ad un solo file una variabile globale si utilizza  la parola riservata static);
    - di fuzione (variabili locali. Una variabile locale può essere definita come static in modo che non muoia al
        terminare della funzione e mantenga il suo valore)

## 5.8 Librerie

    <ctype>, <cmath>, <cstdlib>, <ctime>

## 5.13 template di funzioni

    es. template <class Tipo> Tipo funz(tipo arg){  
        // corpo funzione  
    }

In C++ al posto delle 4 funzioni (per ogni tipo di dato) si può scrivere un unico ***template***.