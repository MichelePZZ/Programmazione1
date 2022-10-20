/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un numero e ne stampi a video la rappresentazione
 *       binaria tramite procedura ricorsiva.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

void toBinary(int &n, int &bin, int i = 0);

int main(){
    int n, bin;
    cin >> n;

    toBinary(n, bin);

    cout << bin << endl;

    return 0;
}

void toBinary(int &n, int &bin, int i){
    if(n % 2 == 1){
        bin += pow(10, i);
    }

    if(n != 0){
        n /= 2;
        toBinary(n, bin, ++i);
    }
}