/**
 * 5- 
 * Scrivere un programma che, dato in input un numero intero N, ritorni a video la frequenza di ogni cifra (tra 0 e 9) contenuta nel numero. 
 * Ad esempio, dato in input il numero 1231156, l’output sara: `
 * Frequenza 0 : 0
 * Frequenza 1 : 3
 * Frequenza 2 : 1
 * Frequenza 3 : 1
 * Frequenza 4 : 0
 * . . . e via dicendo fino al 9
 */

#include <iostream>

using namespace std;

int n;
int f[10] = {0};

int main(int argc, char const *argv[])
{
    cout << "Inserire un numero: ";
    cin >> n;

    while (n > 0) {
        f[n%10]++;
        n /= 10;
    }

    for (size_t i = 0; i < 10; ++i)
        cout << "Frequenza " << i << ": " << f[i] << endl;
    return 0;
}
