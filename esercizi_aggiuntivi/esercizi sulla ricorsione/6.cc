/**
 * 6- 
 * Scrivere un programma che prenda in input un intero e stampi a video la sequenza di Hailstone tramite
 * funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int hailstone (int n, int counter){
    counter++;
    if(counter % 10 == 0){
        cout << endl;
    }

    if (n == 1){
        return 1;
    }

    if ((n % 2) == 0){
        cout << counter << " : " << n/2 << "  /  ";
        return hailstone (n/2, counter);
    } else {
        cout << counter << " : " << (3*n) + 1 << "  /  ";
        return hailstone ((3*n) + 1, counter);
    }
}

int main(){
    int n;

    cout << "Inserisci n : ";
    cin >> n;

    hailstone (n, 1);

    return 0;
}