/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input 2 interi e calcoli la potenza tramite funzione
 *       ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void calcoloPotenza(int b, int e, int i);
long long risultato;

int main(){
    int b, e, i = 0;

    cout << "Inserire base e esponente: ";
    cin >> b >> e;

    risultato = 1;
    calcoloPotenza(b, e, i);

    cout << risultato << endl;

    return 0;
}

void calcoloPotenza(int b, int e, int i){
    if(e > i){
        risultato *= b;
        i++;
        calcoloPotenza(b, e, i);
    }
}