/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una funzione che dica se 2 vettori della stessa dimensione sono ortogonali
 *       (ovvero se il loro prodotto scalare e' nullo)
 * 
 */


#include <iostream>
using namespace std;

double* inputArray(int &n);

int main(){
    int n;
    double* a;
    double* a2;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    cout << "Inserire gli elementi del primo vettore: " << endl;
    a = inputArray(n);

    cout << "Inserire gli elementi del secondo vettore: " << endl;
    a2 = inputArray(n);

    if(prodotto(a, a2, n) == 0){
        cout << "I vettori sono ortogonali" << endl;
    } else {
        cout << "I vettori non sono ortogonali." << endl;
    }

    return 0;
}

double* inputArray(int &n){
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