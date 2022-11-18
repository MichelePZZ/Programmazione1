/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input il nome di un file F,
 *       ritorni a video il conteggio id tutte le lettere presenti all'interno del file.
 *       Il conteggio e' case insensitive.
 * 
 */


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc =! 2){
        cerr << "Usage: ./input.txt" << endl;
        exit(1);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cerr << "file doesn't exist." << endl;
        exit(2);
    }

    char c;
    int alfabeth[26] = {};

    while(input.get(c)){
        c = tolower(c);
        int i = (int)c - 'a';
        alfabeth[i]++;
    }

    for(int j=0; j<26; j++){
        cout << (char)(j+'a') << ": " << alfabeth[j] << endl;
    }

    delete[] alfabeth;
    return 0;
}