/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati in input 2 numeri, a e b, calcoli il risultato, in
 *       valore assoluto, dell'operazione (a-b).
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a, b, risultato;
    cin >> a >> b;

    risultato = a-b;

    if(risultato < 0){
        risultato -= 2*risultato;
    }

    cout << risultato << endl;

    return 0;
}