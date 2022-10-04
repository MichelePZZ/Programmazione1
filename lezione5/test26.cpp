/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input 2 numeri, a ed n, scrivere un programma che stampi a video la successione di
 *       potenze di a da 1 ad n.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a, n, r = 1;
    cin >> a >> n;

    cout << r << endl;

    for (int i=0; i < n; i++){
        r *= a;
        cout << r << endl;
    }

    return 0;
}