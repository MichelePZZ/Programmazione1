/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - prendere gli esempi di funzioni ricorsive in questa directory e farne una versione iterativa.
 * 
 *     - calcolo fattoriale di un numero
 */


#include <iostream>
using namespace std;

void calcoloFattoriale(int &n);

int main(){
        int n;
        cout <<"n? ";
        cin >> n;

        calcoloFattoriale(n);

        cout << n;

    return 0;
}

void calcoloFattoriale(int &n){
    int tmp = 1;

    for(int i = 1; i <= n; i++){
        tmp *= i;
    }

    n = tmp;
}