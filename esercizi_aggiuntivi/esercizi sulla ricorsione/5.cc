/**
 * 5- 
 * Scrivere un programma che prenda in input un intero e controlli se l’intero e palindromo tramite funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int reverse (int n, int temp){

    if (n == 0){
        return temp;
    }

    temp = (temp*10) + (n % 10);

    return reverse (n/10, temp);
}

int main(){
    int n;

    cout << "Inserisci n : ";
    cin >> n;

    cout << "Palindromo : " << ((reverse (n, 0) == n) ? "Sì" : "No") << endl;

    return 0;
}