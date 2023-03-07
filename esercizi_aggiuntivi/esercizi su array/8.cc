/**
 * 8- Codifica di Cesare
 * Scrivere un programma che prenda in input un array di 5 caratteri e ne stampi a video la codifica di Cesare 
 * (sostituire ad ogni lettera la corrispondente lettera tre posizioni successiva nell’alfabeto. Tutti gli altri caratteri rimangono inalterati). 
 * Si pu`o utilizzare la funzione rand della libreria <cstdlib>.
 */

#include <iostream>
#include <iomanip>

using namespace std;

char word[6];

char rot(char c, unsigned int positions = 3)
{
    if (c >= 'A' && c <= 'Z')
        c = (c - 'A' + positions) % ('Z' - 'A' + 1) + 'A';
    else if (c >= 'a' && c <= 'z')
        c = (c - 'a' + positions) % ('z' - 'a' + 1) + 'a';
    return c;
}

int main(int argc, char const *argv[])
{
    cout << "Insert 5 chars word: ";
    cin >> setw(6) >> word;

    cout << "Encrypted text: ";
    for (char c : word)
        if (c != 0)
            cout << rot(c);
    cout << endl;

    return 0;
}