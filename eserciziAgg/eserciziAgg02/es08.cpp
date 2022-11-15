/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - srivere un programma che, dati in input tre valori all'utente, riporti a video il maggiore
 *       di questi 3 valori;
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int i = 123;
    float f = 324;
    int c = 5432;

    cout << ((i > f) ? ((c>i) ? c : i) : ((c>f) ? c : f)) << endl;

    return 0;
}