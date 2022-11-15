/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero dall'utente, ritorni a video se questo
 *       numero possa essere espresso come la somma di 2 numeri primi.
 * 
 */


#include <iostream>
using namespace std;

bool isPrimo(int n);

int main(){
    int n, a, b;
    cout << "Input: ";
    cin >> n;

    for(int i = n; i >= (n/2); i--){
        if(isPrimo(i) && isPrimo(n-i)){
            cout << "Output: " << i << " + " << (n-i) << endl;
        }
    }
    return 0;
}

bool isPrimo(int n){
    for(int i=2; i < n; i++){
        if((n % i) == 0){
            return false;
        }
    }
    return true;
}