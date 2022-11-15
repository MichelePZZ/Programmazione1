/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che calcoli il risultato della seguente serie che approssima il valore   
 *       del pi greco. Il limite superiore di questa serie viene dato dall'utente in input.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    double risultato = 0.0;

    cin >> n;

    for(int i=1; i<=n; i++){
        risultato += (double)(1.0 / (i*i));
    }

    cout << risultato;

    return 0;
}