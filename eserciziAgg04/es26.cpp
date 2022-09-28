/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un intero e controlli se l'intero è
 *       palindromo tramite funzione ricorsiva.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

void palindromo(int n, int c);
int calcoloCifre(int n);

int main(){
    int n, c;   // numero, cifre

    cout << "Inserisci un numero:  ";
    cin >> n;

    for(int i = n; i != 0; i /=10){
        c++;
    }

    palindromo(n,c);

    return 0;
}

void palindromo(int n, int c){
    if((c > 1) && (n / (int)pow(10, c-1) == n % 10)){

        // modificare il numero eliminando i valori già confrontati
        n %= (int)pow(10, c-1);
        n /= 10;

        // eliminare le 2 cifre confrontate
        c -= 2;

        // ricorsione
        palindromo(n, c);
    } else if (c > 1){
        cout << "Il numero non è palindromo" << endl;
    } else {
        cout << "Il numero è palindromo" << endl;
    }
}