/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - prendere gli esempi di funzioni ricorsive in questa directory e farne una versione iterativa.
 * 
 *     - stampare i numeri fino a quello inserito dall'utente
 */


#include <iostream>
using namespace std;

int main(){
    long long n;
    cout <<"n? :";
    cin >> n;

    for(int i = 0; i<=n; i++){
        cout << i << endl;
    }
        
    return 0;
}