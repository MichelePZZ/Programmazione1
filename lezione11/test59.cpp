/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una funzione che, dato in input due interi, base ed
 *       esponente, calcoli la potenza in modo ricorsivo.
 * 
 */


#include <iostream>
using namespace std;

int potenza(int b, int e);

int main(){
    int b, e;

    cout << "b?: ";
    cin >> b;

    cout << "e?: ";
    cin >> e;

    cout << "pow: " << potenza(b,e) << endl;

    return 0;
}

int potenza(int b, int e){
    int ris = 1;

    if(e != 0){
        ris *= b;
        ris *= potenza(b, --e);
    }

    return ris;
}