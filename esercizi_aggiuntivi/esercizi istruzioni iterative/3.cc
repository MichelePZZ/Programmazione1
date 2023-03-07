/**
 * 3-
 * Scrivere un programma che, dato in input il valore x e il valore N, calcoli l’espansione fino all’N-esimo termine della serie di Taylor 
 * calcolata per e^x.
 */

#include <iostream>
#include <math.h>

using namespace std;

int x, N;
double sol = 0;

int factorial(int f)
{
    if (f==0)
        return 1;
    return(f * factorial(f - 1));
}

int main(int argc, char const *argv[])
{
    cout << "Calcolo serie di Taylor e^x" << endl;
    cout << "Inserire x: ";
    cin >> x;
    cout << "Inserire un'approssimazione: ";
    cin >> N;

    for (size_t i = 0; i < N; ++i)
        sol += pow(x, i)/factorial(i);

    cout << "Il risultato è: " << sol;
    return 0;
}
