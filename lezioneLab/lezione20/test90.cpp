/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Partendo dall’implementazione di una Coda tramite liste concatenate
 *       https://pastebin.com/zPPVXtXh (.cc), https://pastebin.com/UiJcZfdQ (.h)
 *       Scrivere un programma che simuli l'arrivo e lo smaltimento di una coda
 *       all'ufficio postale. Gli elementi della coda sono i nomi delle persone. Il
 *       main sarà un menù con tre opzioni: (1) aggiungi persona, (2) smaltisci
 *       persona, (3) stampa situazione corrente
 * 
 *       Potete usare la funzione strcmp della libreria <cstring>
 * 
 */


#include <iostream>
#include "coda.h"
using namespace std;

int main(int argc, char* argv[]){
    init();

    int option;
    switch(option){
        case 1:
            char* name;
            cout << "name:? ";
            cin >> name;
            enqueue(name);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            print();
    }
}