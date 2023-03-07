/**
 * 11- 
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) un array di 10 interi, lo stampi a video e poi 
 * sposti tutti gli zeri alla fine dell’array. Si pu`o utilizzare la funzione rand della libreria <cstdlib>
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int a[10];
int last = 9, p = 0;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (size_t i = 0; i < 10; ++i)
        a[i] = rand() % 10;

    cout << "L'array [";
    for (size_t i = 0; i < 9; ++i)
        cout << a[i] << ", ";
    cout << a[9] << "] è diventato: ";

    while (p < last)
    {
        if (a[p] == 0)
            swap(a[p], a[last--]);

        p++;
    }

    cout << "[";
    for (size_t i = 0; i < 9; ++i)
        cout << a[i] << ", ";
    cout << a[9] << "]" << endl;

    return 0;
}
