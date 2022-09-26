/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati in input i lati di un triangolo, ritorni a video se il
 *       triangolo è isoscele, equilatero o scaleno.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double a,b,c;

    cin >> a >> b >> c;

    cout << (((a == b) && (b == c)) ? "è equilatero" : 
              (a == b || b == c || a == c) ? "è isoscele" : "è scaleno");

    return 0;
}