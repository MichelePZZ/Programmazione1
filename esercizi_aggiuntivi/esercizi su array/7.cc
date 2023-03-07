/**
 * 7-
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) un array di 10 interi, lo stampi a video, 
 * lo inverta tramite funzione ricorsiva e poi stampi l’array invertito. Si pu`o utilizzare la funzione rand della libreria <cstdlib>.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int a[10];

void invert(int a[], int i = 0, int size = 10)
{
    if (((int) size / 2) == i)
        return;

    swap(a[i], a[size - i - 1]);
    invert(a, i+1, size);
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    for (size_t i = 0; i < 10; ++i)
        a[i] = rand() % INT64_MAX;

    cout << "Initial array: ";
    for (size_t i = 0; i < 10; ++i)
        cout << a[i] << " ";
    cout << endl;

    invert(a);

    cout << "Final array: ";
    for (size_t i = 0; i < 10; ++i)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
