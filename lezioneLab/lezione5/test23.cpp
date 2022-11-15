/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 3 numeri, a, b, c, scrivere un programma che controlli che b stampi a video
 *       un numero, seguendo il comportamento della funzione rappresentata sotto.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(b <= a && a <= c){
        cout << "-1";
    } else if(a < b){
        cout << "1";
    } else if(a > c){
        cout << "0";
    }

    return 0;
}