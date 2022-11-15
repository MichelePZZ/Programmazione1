/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input il nome di un file F e una lettera
 *       L, stampi a video il contenuto di quel file, sostituendo ogni occorrenza
 *       della lettera L con il simbolo "?".
 * 
 */


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Usage: ./a.out ./input.txt" << endl;
        exit(1);
    }

    fstream input;
    input.open(*(argv+1), ios::in);
    
    char l = **(argv+2);

    char c;
    while(input.get(c)){
        if(c == l)
            cout << "?";
        else
            cout << c;
    }

    input.close();

    return 0;
}