/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Partendo dall’implementazione di una Pila tramite liste concatenate
 *       https://pastebin.com/wBdjc5jJ (.cc), https://pastebin.com/u0U03x31 (.h)
 *       scrivere un programma che prenda in ingresso un file con un intero per
 *       riga e lo copi su un altro file con le righe in ordine inverso
 * 
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "pila.h"
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: ./a.out ./input.txt" << endl;
        exit(1);
    }

    fstream input, output;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cerr << "Errore durante l'apertura di input.txt" << endl;
        exit(2);
    }

    init();

    char buffer[10];
    while(input >> buffer){
        push(atoi(buffer));
    }

    int n;
    while(top(n)){
        cout << n << " ";
        pop();
    }

    return 0;
}