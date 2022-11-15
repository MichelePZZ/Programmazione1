/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dato in input un numero binario, stampi a video il suo
 *       corrispondente valore decimale.
 * 
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,  risultato;
    cin >> n;

    for(int i=0; n != 0; i++){
        risultato += (n % 10) * pow(2, i);
        n /= 10;
    }

    cout << risultato;
    return 0;
}