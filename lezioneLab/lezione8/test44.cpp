/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che lanci 10 dadi e 6 facce utilizzando
 *       la funzione presentata sotto. Chiedere poi all'utente di indovinare
 *       quanti dadi sono risultato essere 1.
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int random, n, input;

    for(int i=1; i <= 10; i++){
        random = rand() % 6 + 1;
        if(random == 1) n++;
    }

    do{
        cout << "Indovina il numero di dadi che sono risultati essere 1 ";
        cin >> input;
    }while(n != input);

    return 0;
}