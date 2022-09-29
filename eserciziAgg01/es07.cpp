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
    int n = 1;

    cout << ((*(char *)&n == 1) ? "Little Endian" : "Big Endian"); 

    return 0;
}