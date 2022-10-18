/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una funzione che prenda come parametri 2 array di double della stessa dimensione e
 *       ne calcoli il prodotto scalare.
 * 
 */


#include <iostream>
using namespace std;

double* inputArray(int n);
double prodotto(double* a, double* a2, int& n);

int main(){
    int n;
    double* array;
    double* array2;
    double risultato;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    cout << "Inserire gli elementi del primo array: " << endl;
    array = inputArray(n);

    cout << "Inserire gli elementi del secondo array: " << endl;
    array2 = inputArray(n);

    risultato = prodotto(array, array2, n);
    cout << risultato << endl;

    return 0;
}

double* inputArray(int n){
    double* array = new double[n];

    for(int i=0; i<(n); i++){
        cin >> array[i];
    }

    return array;
}

double prodotto(double* a, double* a2, int& n){
    double ris;

    cout << "Il risultato è ";
    for(int i=0; i < n; i++){
        ris += a[i] * a2[i];
    }

    return ris;
}