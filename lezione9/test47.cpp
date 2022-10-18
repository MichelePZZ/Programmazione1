/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 2 reali (double) in 2 variabili, scrivere un programma che usi una procedura
 *       per scambiare i valori delle 2 variabili usando il passaggio di paramentri per puntatore.
 * 
 */


#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main(){
    int a, b;

    cin >> a >> b;
    swap(&a, &b);

    cout << a << "\t" << b;

    return 0;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}