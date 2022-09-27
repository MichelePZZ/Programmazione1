/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 2 numeri reali, il prezzi e l'iva, scrivere un programma che calcoli il prezzo al
 *       cliente di un prodotto.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double prezzo, iva;

    cin >> prezzo >> iva;

    prezzo += prezzo * iva / 100.0;

    cout << prezzo;

    return 0;
}