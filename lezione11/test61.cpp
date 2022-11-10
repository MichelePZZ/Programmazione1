/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input due caratteri e stampi
 *       a video tutti i caratteri compresi tramite procedura ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void printChar(char c1, char c2);

int main(){
    char c1, c2;

    cout << "c1?: ";
    cin >> c1;

    cout << "c2?: ";
    cin >> c2;

    cout << "ris: {";
    printChar(c1, c2);
    cout << "}" << endl;

    return 0;
}

void printChar(char c1, char c2){
    if((int)c1 <= (int)c2){
        cout << c1;
        c1++;
        printChar(c1,c2);
    }
}