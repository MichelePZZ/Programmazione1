/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che determini se il computer che state utilizzando lavora in Big
 *       Endian o Little Endian.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n = 2;
    int w = 1;

    cout << ((&n > &w) ? "Big Endian" : "Little Endian") << endl;
    return 0;
}