/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input da linea di comando il nome
 *       di un file ritorni a video il contenuto del suddetto file.
 *       Implementare anche dei controlli che avvisino l'utente in caso il numero
 *       di argomenti sia sbagliato (manca il file di input) oppure nel caso in cui
 *       il file di input non esista.
 * 
 */


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: ./a.out ./input.txt" << endl;
        exit(1);
    }

    fstream input;
    input.open(*(argv+1), ios::in);

    if(input.fail()){
        cerr << "file doesn't exist." << endl;
        exit(2);
    }
    
    char buffer[256];
    while(input >> buffer){
        cout << buffer << " ";
    }
    
    char c;
    while(input.get(c)){
        cout << c;
    }

    cout << endl;
    input.close();
    
    return 0;
}