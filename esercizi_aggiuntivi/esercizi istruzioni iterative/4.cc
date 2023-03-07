/**
 * 4- 
 * Scrivere un programma che, dato in input un numero intero N, ritorni a video la somma delle sue cifre. 
 * Ad esempio, dato in input il numero 13465, l’output del programma dovra essere ` 19, poich`e 1 + 3 + 4 + 6 + 5 = 19.
 */

#include <iostream>

using namespace std;

int n, sol;

int main(int argc, char const *argv[])
{
    cout << "Inserire un numero: ";
    cin >> n;

    while (n > 0) {
        sol += n % 10;
        n /= 10;
    }

    cout << "La somma delle cifre è: " << sol << endl;
    return 0;
}
