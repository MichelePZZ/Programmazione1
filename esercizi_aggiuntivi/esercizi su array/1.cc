/**
 * 1- 
 * Scrivere un programma che ruoti un array di n elementi di X posizioni. 
 * Una rotazione corrisponde a spostare l’elemento in indice i in indice i+1% n.
 */

#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int arr_r[6] = {};

    cout << "Inserisci il numero di posizioni : ";
    cin >> n;

    //arr
    cout << "{ ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << ", "; 
    }
    cout << "\b\b }" << endl;

    for (int i = 0; i < 6; i++){
        arr_r[(i + n) % 6] = arr[i]; 
    }

    //arr ruotato
    cout << "{ ";
    for (int i = 0; i < 6; i++){
        cout << arr_r[i] << ", "; 
    }
    cout << "\b\b }" << endl;

    return 0;
}