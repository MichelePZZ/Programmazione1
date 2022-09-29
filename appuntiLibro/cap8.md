# Allocazione dinamica della memoria
# 8.1 Gestione dinamica della memoria
In C++, per gestire la memoria dinamicamente si utilizzano gli operatori ***new*** e ***delate***. Con questi operatori si definiscono variabili a run-time e si possono rilasciare le posizioni occupate dinamicamente.  

Il Sistema Operativo assegna al programma 3 segmenti della memoria principale:

    - code segment che ospita il codice stesso;
    - data segment che ospita costanti e variabili globali;
    - stack che conterrà le variabili locali alle funzioni, i parametri delle funzioni e le copie dei registri.

## 8.2 L'operatore new
Questo operatore genera dinamicamente una variabile di un certo tipo assegnandole un blocco di memoria della dimentsione di quel tipo. L'operatore restituisce poi l'indirizzo del blocco di memoria allocato, che verrà assegnato a un puntatore a quel tipo.

    es. tipo* puntatore = new tipo;
    es. tipo* puntatore = new tipo[dimensione]

Con questo metodo si può inizializzare un array in un secondo momento.

    es. int n;
        cin >> n;
        char* s = new char[n];

Si può inizializzare la variabile dinamica indicandole il valore fra parentesi tonde alla fine dell'istruzione.

    es. int* pi = new int(1000);

## 8.3 L'operatore delete
L'operatore delete libera la memoria allocata dinamicamente.

    es. delete puntatore    //non array
        delete [] puntatore //per array

## 8.5 Gestione dell'overflow della memoria
Per far fronte alla mancanza di spazio nello heap si può utilizzare la funzione set_new_handler() che serve per gestire gli errori.

    es. #include <new>

        void overflow(){
            cout << "Memoria insufficiente" << endl;
            exit(1);
        }

        int main(){
            set_new_handler(overflow);

            ...
        }

## 8.6 Tipi di memoria in C++
Esistono 3 tipi di memoria:

    - automatica: le variabili di una funzione. Esse si allocano automaticamente e si cancellano quando la funzione termina;
    - statica (vedi 5.7): l'allocazione avviene nel data segment;
    - dinamica: viene allocata nello heap;