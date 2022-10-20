/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una funzione ricorsiva che, dato in input un numero intero, ritorni la somma delle
 *       cifre che compongono il numero intero.
 * 
 */


#include <iostream>
using namespace std;

int sumDigits(int &n);

int main(){
    int n;
    cin >> n;

    cout << sumDigits(n) << endl;

    return 0;
}

int sumDigits(int &n){
    int sum = 0;

    if(n != 0){
        sum += n % 10;
        n /= 10;
        sum += sumDigits(n);
    }

    return sum;
}