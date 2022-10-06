/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un valore interno n, stampi a video la successione
 *       di Fibonacci fino all'n-esima cifra.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n, risultato;
    cin >> n;

    if(n > 1){
        risultato = (n-1) + (n-2);
        cout << risultato;
    } else {
        cout << "Il numero n deve essere maggiore di 1" << endl;
    }
    

    return 0;
}