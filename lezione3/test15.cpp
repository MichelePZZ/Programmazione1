/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere, scrivere un programma che ritorni lo stesso carattere in codifica ascii + 10
 * 
 */


#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;

    c = (c+10 > 'z') ? c-16 : c+10;

    cout << c << endl;

    return 0;
}