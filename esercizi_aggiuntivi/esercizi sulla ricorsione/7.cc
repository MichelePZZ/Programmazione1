/**
 * 7- 
 * Scrivere un programma con una funziona ricorsiva che si invoca fino ad riempire lo stack e ottenere un errore Segmentation Fault. 
 * Stampare a video la profondita raggiunta usando un contatore. Usare cout.flush(); per essere sicuri di stampare a video 
 * il contatore prima che il processo termini per Segmentation Fault (sul computer dell’esercitatore il numero e 261991).
 */

#include <iostream>

using namespace std;

void dangerous(int i = 0) {
    cout << "Profondità: " << i++ << endl << flush;
    dangerous(i);
}

int main(int argc, char const *argv[])
{
    dangerous();
    return 0;
}
