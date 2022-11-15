/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un numero e stampi a
 *       video il numero invertito usando una procedura.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

void reverse(int &n);

int main(){
    int n;
    cin >> n;

    reverse(n);

    cout << "Il numero invertito e' " << n << endl;

    return 0;
}

void reverse(int &n){
    int rst = 0;

    for(int i=log10(n); i >= 0; i--){
        rst += (n%10) * pow(10, i);
        n /= 10;
    }
    
    n = rst;
}