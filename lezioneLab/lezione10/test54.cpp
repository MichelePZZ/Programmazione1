/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che calcoli la divisione di un intero tramite funzione ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void divisione(int &a, int &b, int &ris);

int main(){
    int a, b, ris = 0;
    cin >> a >> b;
    
    divisione(a,b,ris);

    cout << ris << endl;

    return 0;
}

void divisione(int &a, int &b, int &ris){
    if((a / b) >= 1){
        a-=b;
        ris++;
        divisione(a, b, ris);
    }
}