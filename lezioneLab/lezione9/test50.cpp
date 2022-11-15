/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input da 1 a 5 interi, scrivere una funzione che ritorni il valore massimo. Usare
 *       questi argomenti di default per il secondo, terzo, quarto e quinto input.
 * 
 */


#include <iostream>
using namespace std;

int max(int* a, int& n, int low = 0, int high = 1);

int main(){
    int* a;
    int n;

    cout << "Inserire il numero di elementi da inserire (max 5): ";
    cin >> n;

    a = new int[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << max(a, n);

    return 0;
}

int max(int* a, int& n, int low, int high){

    if(a[low] > a[high]){
        if(++high > n-1){
            return a[low];
        }
        else{
            max(a, n, low, high);
        }
    }
    else{
        if(++low > n-1){
            return a[high];
        }
        else{
            max(a, n, low, high);
        }
    }
}