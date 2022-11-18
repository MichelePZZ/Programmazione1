/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che, dati in input da linea di comando i
 *      nomi di due file, A e B, copi il contenuto di A all’interno di B.
 *      Implementare anche dei controlli che avvisino l’utente in caso il
 *      numero di argomenti sia sbagliato (manca il file di input) oppure
 *      nel caso in cui il file di input non esista.
 * 
 */


#include <iostream>
#include <fstream>
#define SIZE 1000
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Usage: ./a.out ./input.txt" << endl;
        exit(1);
    }

    fstream a, b;
    a.open(*(argv+1), ios::in);
    b.open(*(argv+2), ios::out);

    if(a.fail() || b.fail()){
        cerr << "file doesn't exist." << endl;
        exit(2);
    }

    char** matrix_a = new char*[SIZE];
    char c;
    int n;
    while(a.get(c)){
        if(c == ' '){
            
        } else { 
            n++;
        }
    }

    a.close();
    b.close();

    return 0;
}