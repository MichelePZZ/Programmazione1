/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - prendere gli esempi di funzioni ricorsive in questa directory e farne una versione iterativa.
 * 
 *     - la somma di 2 numeri avendo a disposizione incremento e decremento
 */


#include <iostream>
using namespace std;

int calcoloRisultato(int n);

int main(){
        int n, m;
        cout <<"n? m? (>=0):";
        cin >> n >> m;

        cout << (calcoloRisultato(n) + calcoloRisultato(m));

    return 0;
}

int calcoloRisultato(int n){
    int tmp = 0;

    for(int i = 1; i <= n; i++){
        tmp++;
    }

    return tmp;
}