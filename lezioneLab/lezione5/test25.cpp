/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere alfabetico, scrivete un programma che stampa a video se il
 *       carattere è una consonante o una vocale.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;

    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U': cout << "Vocale" << endl; break;
        default: cout << "Consonante" << endl; break;
    }
}