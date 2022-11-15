/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, data in input la lunghezza di un lato l, calcoli l'area e il
 *       perimetro di un esagono.
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    double l, p, a;
  
    cout << "Inserire il lato: ";
    cin >> l;

    p = 6 * l;
    a = 3 * ((l*l)/2) * sqrt(3);

    cout << "Il perimetro è " << p << endl;
    cout << "L'area è " << a << endl; 

    return 0;
}