/**
 * 3- 
 * Scrivere un programma che prenda in input due interi (base ed esponente) e calcoli la potenza tramite funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int pow (int n, int e){
    if (e == 0){
        return 1;
    } else
        return n * pow (n, e-1);
}

int main(){
    int n, e;

    cout << "Inserisci base, esponente : " << endl;
    cin >> n >> e;

    cout << pow (n, e) << endl;

    return 0;
}