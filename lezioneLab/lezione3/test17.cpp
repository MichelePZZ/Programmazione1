/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - date in input 2 variabili a,b, scrivere un programma che scambi il valore di a al
 *       valore di b e viceversa (senza l'utilizzo di variabile temporanea)
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    a = a+b;
    b = a-b;
    a -= b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}