/**
 * 8- 
 * Scrivere un programma che, dato in input un intero N, stampi a video il numero scritto pero con parole corrsipondenti alle cifre. 
 * Ad esempio, dato in input il numero 134, l’output del programma dovra essere “Uno Tre Quattro”.
 */

#include <iostream>
#include <math.h>

using namespace std;

int n, tmp, digit;

int main(int argc, char const *argv[])
{
    cout << "Inserisci un numero: ";
    cin >> n;

    tmp = 0;
    while (pow(10, tmp) < n)
        tmp++;
    tmp--;

    for (int i = tmp; i >= 0; --i) {
        digit = (n / (int) pow(10, i)) % 10;
        switch (digit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "Uno ";
            break;
        case 2:
            cout << "Due ";
            break;
        case 3:
            cout << "Tre ";
            break;
        case 4:
            cout << "Quattro ";
            break;
        case 5:
            cout << "Cinque ";
            break;
        case 6:
            cout << "Sei ";
            break;
        case 7:
            cout << "Sette ";
            break;
        case 8:
            cout << "Otto ";
            break;
        case 9:
            cout << "Nove ";
            break;
        
        default:
            break;
        }
    }

    cout << endl;

    return 0;
}
