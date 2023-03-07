/**
 * 9- Numero duplicati
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) un array di 10 interi, lo stampi a video e 
 * conti il numero totale di elementi duplicati nell’array. Si pu`o utilizzare la funzione rand della libreria <cstdlib>
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int a[10];
int duplicati = 0;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (size_t i = 0; i < 10; ++i)
        a[i] = rand() % 10;

    for (size_t i = 0; i < 10; ++i)
        for (size_t j = i + 1; j < 10; ++j)
            if (a[i] == a[j])
                duplicati++;

    cout << "Nell'array [";
    for (size_t i = 0; i < 9; ++i)
        cout << a[i] << ", ";
    
    cout << a[9] << "] ci sono " << duplicati << " duplicati" << endl;

    return 0;
}
