/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input 2 caratteri e stampi a video tutti i caratteri
 *       compresi tramite procedura ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void printChar(char &a, char &b);

int main(){
    char a, b;
    cin >> a >> b;

    printChar(a, b);

    return 0;
}

void printChar(char &a, char &b){
    cout << a << " ";
    if(++a <= b){
        printChar(a, b);
    }
}