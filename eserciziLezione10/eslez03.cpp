/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - prendere gli esempi di funzioni ricorsive in questa directory e farne una versione iterativa.
 * 
 *     - calcolo del numero nella sequenza di fibonacci
 */


#include <iostream>
using namespace std;

void calcoloFibonacci(long long &n);

int main(){
    long long n;
    cout <<"n? :";
    cin >> n;

    calcoloFibonacci(n);

    cout << n;

    return 0;
}

void calcoloFibonacci(long long &n){
    long long tmp = 1;
    long long i1 = 1, i2 = 0;

    for(int i = 1; i<n; i++){
        tmp = i1 + i2;
        i2 = i1;
        i1 = tmp;
    }
    n = tmp;
}