/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dichiari e poi inizializzi
 *       due array di 10 interi e poi conti quanti interi uguali
 *       sono allo stesso indice nei 2 array.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

int main(){
    srand(time(NULL));
    int arr[SIZE], arr2[SIZE], ris = 0;

    for(int i=0; i < SIZE; i++){
        arr[i] = rand() % 9;
        arr2[i] = rand() % 9;
        

        if(arr[i] == arr2[i]){
            ris++;
        }
    }

    cout << "ris: " << ris << endl;

    return 0;
}