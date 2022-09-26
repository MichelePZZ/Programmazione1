/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un valore n, ritorni a video il risultato
 *       della seguente serie geometrica, calcolata fino all'n-esimo termine.
 * 
 */

#include <cmath>
#include <iostream>

using namespace std;
using std::pow;

int main(){
    unsigned int n;
    float risultato = 0;

    cin >> n;

    for(int i = 0; i <= n; i++){
        risultato += 1.0 / pow(2, i);
    }

    cout << risultato;

    return 0;
}