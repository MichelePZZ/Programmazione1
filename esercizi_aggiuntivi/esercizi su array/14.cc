/**
 * 14- Isole (elemento singolo)
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) una matrice di 10x10 interi con valore 0 oppure 1. 
 * Scrivere poi una funzione che torni il numero di “isole”, definite come elementi della matrice con valore 1 circondati da soli zeri.
 * Si pu`o utilizzare la funzione rand della libreria <cstdlib>.
 */

#include <iostream>
#include <cstdlib>

#define SIZE 10

using namespace std;

bool isola(bool m[SIZE][SIZE], int x, int y)
{
    if (m[x][y] == 0)
        return false;
        
    for (int i = x-1; i <= x+1; ++i)
        for (int j = y-1; j <= y+1; ++j)
            if (!((x == j) && (j == y)) && i >= 0 && j >= 0)
                if (m[i][j])
                    return false;
    return true;
}

int main(int argc, char const *argv[])
{
    bool m[SIZE][SIZE];
    int sol = 0;

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; ++i)
    {
        for (size_t j = 0; j < SIZE; ++j)
            m[i][j] = rand() % 2, cout << m[i][j] << " ";
        cout << endl;
    }

    for (size_t i = 0; i < SIZE; ++i)
        for (size_t j = 0; j < SIZE; ++j)
            sol += (int) isola(m, i, j);

    cout << "Ci sono " << sol << " isola/e" << endl;
    
    return 0;
}
