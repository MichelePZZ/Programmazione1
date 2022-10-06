/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che ritorni a video tutti i numeri interi primi compresi tra 1 e un
 *       limite superiore n. Il limite superiore viene dato in input dall'utente.
 * 
 */


#include <iostream>
using namespace std;

bool controlloPrimitivo (int n);

int main(){
    int n;
    cin >> n;

    cout << "I numeri primitivi compresi tra 1 e " << n << "sono:";

    for (int i = 1; i <= n; i++){
        if(controlloPrimitivo(i)){
            cout << " "<< i;
        }
    }

    return 0;
}

bool controlloPrimitivo (int n){
    bool primitivo = true;

    for(int i=2; i<n; i++){
        if (n %i == 0){
            primitivo = false;
            i += n;
        }
    }

    return primitivo;
}