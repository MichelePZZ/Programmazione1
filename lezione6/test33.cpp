/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che generi un numero compreso tra 1 e 10 utilizzando la funzione
 *       presentata. Chiedere poi all'utente ripetutamente di inserire un numero e terminare il
 *       programma quando si sara indovinato.
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;

    srand(time(NULL));
    int random = rand() % 10 + 1;

    do{
        cin >> n;
    } while (n != random);

    cout << "Hai indovinato!" << endl;
    
    return 0;
}