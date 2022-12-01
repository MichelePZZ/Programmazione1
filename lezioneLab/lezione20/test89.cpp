/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Partendo dall’implementazione di una Pila tramite liste concatenate
 *       https://pastebin.com/wBdjc5jJ (.cc), https://pastebin.com/u0U03x31 (.h)
 *       scrivere un programma che legge una sequenza di caratteri in input
 *       dall’utente e determina se le parentesi sono “bilanciate”:
 * 
 */


#include <iostream>
#include "pila.h"
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: ./a.out \"string\"" << endl;
        exit(1);
    }

    char* input = argv[1];

    init();

    bool bilanciata = true;
    int c;
    for(int i=0; input[i] != '\0' && bilanciata == true; ++i){
        if(input[i] == '('){
            push(input[i]);
        } else if(input[i] == ')'){
            if(top(c) == true){
                pop();
            } else {
                bilanciata = false;
            }
        } else {
            cerr << "Nella stringa possono essere inseriti solo '(' e ')'" << endl;
            exit(2);
        }
    }

    cout << "La stringa " << (bilanciata ? "" : "NON ") << "e' bilanciata" << endl;
    return 0;
}