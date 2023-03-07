/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che, data una parola in input (massimo 100
 *       caratteri), dica se è palindroma oppure no usando una pila e/o una coda.
 * 
 *       Nota: non potete sfruttare la conoscenza della lunghezza della parola
 *       (non potete nemmeno calcolarla)
 * 
 */


#include <iostream>
#include "pila.h"
using namespace std;

int length(char*c);

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: ./a.out \"string ... \"" << endl;
        exit(1);
    }
    
    char* word = argv[1];
    int dim = length(word);
    bool palindroma = true;
    pila_init();

    for(int i=0; i < ((dim/2)-1); i++){
        pila_push(word[i]);
    }

    if(dim%2 == 1) dim++;

    int c;
    for(int i = dim/2; word[i] != '/0'; i++){
        if(palindroma == true){
            pila_top(c);
            pila_pop();

            if(c != word[i]) palindroma = false;
        }
    }

    cout << palindroma << endl;

    return 0;
}

int length(char*c){
    int length = 0;

    for(int i = 0; c[i] != '\0'; i++){
        length++;
    }

    if(length > 100){
        cerr << "La stringa e' troppo lunga!" << endl;
        exit(2);
    }

    return length;
}