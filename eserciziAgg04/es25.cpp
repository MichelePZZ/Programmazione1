/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un intero e calcoli la somma delle cifre
 *       dell'intero tramite funzione ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void sommaCifre(int n);
int risultato;

int main(){
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;

    risultato = 0;
    sommaCifre(n);

    cout << "Il risultato è " << risultato << endl;

    return 0;
}

void sommaCifre(int n){
    if(n != 0){
        risultato += n % 10;
        n /= 10;

        sommaCifre(n);
    }
}