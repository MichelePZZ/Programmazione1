/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input il valore x e il valore n, calcoli l'espressione
 *       fino all'n-esimo termine della serie di taylor calcolata per e alla x.
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int calcoloFattoriale(int i);

int main(){
    int x,n;
    double risultato = 1;

    cin >> x >> n;

    for(int i=1; i <= n; i++){
        risultato += pow(x,i) / calcoloFattoriale(i);
    }

    cout << risultato << endl;

    return 0;
}

int calcoloFattoriale(int i){
    int risultato = 1;

    for(int j = 1; j <= i; j++){
        risultato *= j;
    }

    return risultato;
}