/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input 2 numeri interi e
 *       calcoli il massimo comune divisore tramite funzione ricorsiva
 *       usando l'algoritmo di Euclide.
 * 
 */


#include <iostream>
using namespace std;

void scambio(int &n, int &m);
int mcd(int &n, int &m);

int main(){
    int n, m;

    cout << "n?: ";
    cin >> n;

    cout << "m?: ";
    cin >> m;

    // m numero maggiore
    if(m < n){
        scambio(n, m);
    }

    cout << "MCD: " << mcd(n, m) << endl;

    return 0;
}

int mcd(int &n, int &m){
    if(m % n != 0){
        n--;
        mcd(n, m);
    } else if(n == 0){
        return -1;
    }
    else{
        return n;
    }
}

void scambio(int &n, int &m){
    int temp = n;
    n = m;
    m = temp;
}