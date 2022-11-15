/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere minuscolo, scrivere un programma che memorizzi il carattere in una variabile e
 *       ritorni lo stesso carattere in maiuscolo.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    const int OFFSET = 'a' - 'A';
    char c;
    cin >> c;

    c -= OFFSET;

    cout << c << endl;

    return 0;
}