/**
 * 4- 
 * Scrivere un programma che prenda in input un intero e calcoli la somma delle cifre dell’intero tramite funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int sum (int n){
    if (n / 10 == 0){
        return n % 10;
    } else {
        return (n % 10) + sum (n / 10);
    }
}

int main(){
    int n;
    
    cout << "Inserisci n : ";
    cin >> n;

    cout << "Somma cifre : " << sum(n) << endl;

    return 0;
}