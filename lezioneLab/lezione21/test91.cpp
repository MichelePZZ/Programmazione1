/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che inverta gli elementi di una pila usando una
 *       coda.
 * 
 */


#include <iostream>
#include <cstdlib>
#include "coda.h"
#include "pila.h"
using namespace std;

int main(int argc, char* argv[]){
    pila_init();
    coda_init();

    char c[10];
    while(c != "e"){
        cin >> c;
        pila_push(atoi(c));
    }

    int i;
    while(pila_top(i)){
        coda_enqueue(pila_pop());
    }

    coda_print();

    return 0;
}