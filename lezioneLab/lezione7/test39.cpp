/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che calcoli il risultato dell seguente serie che approssima il
 *       valore pi greco.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    double risultato = 0;
    cin >> n;

    for(int i=1; i <= n; i++){
        risultato += 1.0 / (i*i);
    }

    cout << risultato << endl;

    return 0;
}