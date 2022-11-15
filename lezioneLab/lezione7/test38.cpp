/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che stampi a video il carattere corrispondente ad i valori ascii
 *       compresi tra un intervallo a e b definito dall'utente in input.
 * 
 */


#include <iostream>
using namespace std;

void scambio (int &a, int &b);

int main(){
    int a, b;
    cin >> a >> b;

    if(b < a){
        scambio(a, b);
    }

    for(int i = a; i <= b; i++){
        cout << ((char)i) << endl;
    }

    return 0;
}

void scambio (int &a, int &b){
        int aux = a;
        a = b;
        b = aux;
    }