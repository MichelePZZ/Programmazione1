/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un valore n, ritorni a video il risultato
 *       della seguente serie che approssima il valore di (pi greco).
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int n;
    double pi = 0;

    cin >> n;

    for(int i=1; i <= n; i++){
        pi += (pow((-1), 1+i) * 4.0) / (2 * i - 1.0);
    }

    cout << pi;

    return 0;
}