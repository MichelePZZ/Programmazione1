/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 3 numeri interi, scrivere un programma che ritorni a video il minimo tra
 *       questi tre numeri reali.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Il numero più piccolo è ";

    if (a < b) {
        if (a < c)
            cout << a;
        else
            cout << c;
    } else {
        if (b < c)
            cout << b;
        else
            cout << c;
    }

    cout << endl;
    
    return 0;
}