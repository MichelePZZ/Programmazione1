/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma con una funzione ricorsiva che si invoca fino ad riempire lo stack e
 *       ottenere un errore Segmentation Fault. Stampare a video la profondità raggiunta usando un
 *       contatore. Usare cout.flush(); per essere sicuri di stampare a video il contatore prima che
 *       il processo termini per Segmentation Fault.
 * 
 */


#include <iostream>
using namespace std;

void riempimento(int n);

int main(){
    int n = 0;
    riempimento(n);
}

void riempimento(int n){
    cout.flush();
    cout << n << endl;

    long long arrayInutile[1000];

    riempimento(++n);
}