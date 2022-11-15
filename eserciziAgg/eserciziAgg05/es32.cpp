/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che implementi l'algoritmo di ordinamento quicksort.
 * 
 */


#include <iostream>
using namespace std;

int* inputArray(int &n);
void scambio (int &a, int &b);
void quickSort(int* array, int low, int high);

int main(){
    int n;
    int* array;

    array = inputArray(n);





    return 0;
}

int* inputArray(int &n){
    int* array = new int[n];

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

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

void quickSort(int* array, int low, int high){
    int pivot = array[low];

    int i = low+1, j = high-1;


    while(i < j){

        while(array[i] < pivot){
            i++;

            if(i > j){
                quickSort(array, low, j);
                quickSort(array, i, high);
            }
        }

        while(array[j] > pivot){
            j--;

            if(i > j){
                quickSort(array, low, j);
                quickSort(array, i, high);
            }
        }

        scambio(array[i], array[j]);
    }
}