/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, preso in input un numero intero, controlli se il numero è un
 *       palindromo. Scrivere una funzione ricorsiva che faccia il controllo.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

void isPalindrome(int &n);

int main(){
    int n;
    cin >> n;

    isPalindrome(n);

    if(n < 10){
        cout << "Palindromo" << endl;
    }

    return 0;
}

void isPalindrome(int &n){
    if(n > 9){
        if((n % 10) == (n / (int)pow(10, (int)log10(n)))){
            n /= (int)pow(10, (int)log10(n));
            n /= 10;
            isPalindrome(n);
        }
    }
}