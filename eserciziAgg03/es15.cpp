/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero interno n, ritorni a video la somma
 *       delle sue cifre.
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int n, risultato = 0;

    cin >> n;

    while (n != 0){
        risultato += n % 10;
        n /= 10;
    }

    cout << risultato << endl;

    return 0;
}