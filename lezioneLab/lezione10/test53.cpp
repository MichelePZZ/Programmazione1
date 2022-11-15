/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che calcoli il fattoriale di un intero positivo tramite funzione
 *       ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

int fattoriale(int &n);

int main(){
    int n;
    cin >> n;

    cout << fattoriale(n) << endl;

    return 0;
}

int fattoriale(int &n){
    int ris = 1;

    if(n != 0){
        ris *= n;
        ris *= fattoriale(--n);
    }

    return ris;
}