/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - realizzare una versione tail-recursive della funzione di fibonacci
 */


#include <iostream>
using namespace std;

long long fibonacci(long long n);

int main(){
    long long n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}

long long fibonacci(long long n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}