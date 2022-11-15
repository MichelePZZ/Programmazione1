/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un intero e stampi a video la sequenza di
 *       Hailstone tramite funzione ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void sequenzaHailstone(int n);

int main(){
    double n;
    cin >> n;

    sequenzaHailstone(n);

    return 0;
}

void sequenzaHailstone(int n){
    if(n == 1){
        cout << endl;
    } else if (n % 2 == 0){
        n /= 2;

        cout << n << "  ";

        sequenzaHailstone(n);
    } else if (n % 2 == 1){
        n = n*3 + 1;

        cout << n << "  ";

        sequenzaHailstone(n);
    }
}