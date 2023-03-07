/**
 * 6- 
 * Scrivere un programma che, dato un numero N, ritorni a video la scomposizione in fattori primi di questo numero. 
 * Ad esempio, dato in input il numero 22, il programma dovra ritornare in output ` 2, 11.
 */

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Inserisci N : ";
    cin >> n;

    for (int i=2; n != 1; i++){
        while (n%i == 0){
            cout << i << ", ";
            n /= i;
        }
    }

    cout << "\b\b"; //formattazione output

    return 0;
}
