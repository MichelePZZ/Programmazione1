/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, ricevuto in input dall'utente un valore di distanza in miglia,
 *       ritorni lo stesso valore in km.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double distanzaMiglia, distanzaKm;

    cout << "Inserire una distanza (in miglia): ";
    cin >> distanzaMiglia;

    distanzaKm = distanzaMiglia/0.62137;

    cout << "La distanza (in km) è " << distanzaKm << endl;
    return 0;
}