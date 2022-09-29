# Puntatori e Riferimenti
## 7.1 Riferimenti
All'indirizzo della memoria si accede con (&).

## 7.2 Puntatori
Ogni volta che si definisce una variabile il compilatore riserva un'area di memoria per scriverne il contenuto.  
Un ***puntaotre*** è una variabile che contiene l'indirizzo di memoria di un'altra variabile.

    es. int n = 75;
        int* p = &n;
        cout << &n << p;    //il risultato sarà uguale.

        *p++;               //aumentando il valore di p* aumenterai anche n (76).

## 7.5 Puntatori e array
In C++ gli array sono implementati mediante puntatori.

    es. cout << gradi[0] << gradi*;     //il risultato sarà uguale.