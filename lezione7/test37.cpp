/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che stampi a video il valore ASCII di tutte le lettere dell'alfabeto
 *       minuscole e maiuscole.
 * 
 */


#include <iostream>
using namespace std;

void printAscii(char a);

int main(){
    printAscii('a');
    printAscii('A');
    return 0;
}

void printAscii(char a){
    char max = a+26;

    while(a < (int)(max)){
        cout << (char)a << endl;
        a++;
    }
}