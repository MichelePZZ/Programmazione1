/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero n, ritorni a video la scoposizione
 *       in fattori primi di questo numero.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "Il numero è scomponibile per ";
    for(int i=2; i<n; i++){
        while((n % i) == 0){
            cout << i << ", ";
            n /= i;
        }
    }
    cout << n << endl;
}