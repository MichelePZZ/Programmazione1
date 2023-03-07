/**
 * 13- 
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) una matrice di 10x10 interi e ne calcoli 
 * il determinante tramite il Teorema di Laplace. Si pu`o utilizzare la funzione rand della libreria <cstdlib>
 */

#include <iostream>
#include <cstdlib>

#define SIZE 10

using namespace std;

int calcoloDeterminante(int a[SIZE][SIZE], int size = SIZE)
{
    if (size == 1)
        return a[0][0];

    if (size == 2)
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];

    int sol = 0;
    for (size_t i = 0; i < size; ++i)
    {
        int sottomatrice[SIZE][SIZE];
        for (size_t x = 0; x < size - 1; ++x)
            for (size_t y = 0; y < size - 1; ++y)
                sottomatrice[x][y] = a[(x < i ? x : x+1)][y+1];

        sol += (i % 2 == 0 ? 1 : -1) * a[i][0] * calcoloDeterminante(sottomatrice, size - 1);
    }
    return sol;
}

int main(int argc, char const *argv[])
{
    int a[SIZE][SIZE];

    srand(time(NULL));
    for (size_t i = 0; i < SIZE; ++i)
        for (size_t j = 0; j < SIZE; ++j)
            a[i][j] = rand() % 10;

    cout << "L'array A è: " << endl;
    for (size_t i = 0; i < SIZE; ++i)
    {
        for (size_t j = 0; j < SIZE; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Il determinante è: " << calcoloDeterminante(a) << endl;

    return 0;
}
