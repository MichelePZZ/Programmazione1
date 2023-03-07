/**
 * 10- Frequenza elementi
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) un array di 10 interi, lo stampi a video e 
 * conti la frequenza di ogni elemento nell’array. Si pu`o utilizzare la funzione rand della libreria <cstdlib>.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int a[10];
int freq[10];

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (size_t i = 0; i < 10; ++i)
        a[i] = rand() % 10;

    for (size_t i = 0; i < 10; ++i)
        freq[a[i]]++;

    cout << "Nell'array [";
    for (size_t i = 0; i < 9; ++i)
        cout << a[i] << ", ";
    cout << a[9] << "] ci sono le seguenti frequenze: " << endl;
    for (size_t i = 0; i < 10; ++i)
        cout << "  " << i << " -> " << freq[i] << endl;

    return 0;
}
