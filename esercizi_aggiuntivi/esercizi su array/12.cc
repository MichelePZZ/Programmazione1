/**
 * 12- 
 * Scrivere un programma che dichiari e poi inizializzi (con valori random) due matrici di 10x10 interi e ne calcoli 
 * la somma, sottrazione e prodotto. Si pu`o utilizzare la funzione rand della libreria <cstdlib>.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int a[10][10], b[10][10], somma[10][10], sottrazione[10][10], prodotto[10][10];

void somma_sottrazione(int a[10][10], int b[10][10], int result[10][10], bool somma)
{
    for (size_t i = 0; i < 10; ++i)
        for (size_t j = 0; j < 10; ++j)
            if (somma)
                result[i][j] = a[i][j] + b[i][j];
            else
                result[i][j] = a[i][j] - b[i][j];
}

void prodotto_(int a[10][10], int b[10][10], int result[10][10])
{
    for (size_t i = 0; i < 10; ++i)
        for (size_t j = 0; j < 10; ++j)
            for (size_t z = 0; z < 10; ++z)
                result[i][j] += a[i][z] * b [z][j];
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (size_t i = 0; i < 10; ++i)
        for (size_t j = 0; j < 10; ++j)
            a[i][j] = rand() % 10, b[i][j] = rand() % 10;

    cout << "L'array A è: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "L'array B è: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
            cout << b[i][j] << " ";
        cout << endl;
    }

    somma_sottrazione(a, b, somma, true);
    somma_sottrazione(a, b, sottrazione, false);
    prodotto_(a, b, prodotto);

    cout << "L'array A+B è: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
            cout << somma[i][j] << " ";
        cout << endl;
    }
    cout << "L'array A-B è: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
            cout << sottrazione[i][j] << " ";
        cout << endl;
    }
    cout << "L'array A*B è: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
            cout << prodotto[i][j] << " ";
        cout << endl;
    }

    return 0;
}
