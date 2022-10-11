/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che implementi l'algoritmo di ordinamento quicksort.
 * 
 */


#include <iostream>
using namespace std;

int* inputArray(int n);
void scambio (int &a, int &b);

int main(){
    int n;
    int* array;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    array = inputArray(n);





    return 0;
}

int* inputArray(int n){
    int* array = new int[n];

    cout << "Inserire gli elementi dell'array: " << endl;
    for(int i=0; i<(n); i++){
        cin >> array[i];
    }

    return array;
}

void scambio (int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

void quickSort(int* array, int high){
    
}

int partition(int* array, int left, int pivot){
    int low = left - 1;
    int high = pivot -1;

    for(int j = left; j <= high; j++){
        if(array[j] <= array[pivot]){
            low++;
            scambio()
        }
    }
}