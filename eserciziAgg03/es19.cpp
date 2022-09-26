/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un intero n, stampi a video il numero scritto
 *       però con parole corrispondenti alle cifre.
 * 
 */


#include <iostream>
using namespace std;

// errore perchè prende il numero al contrario (8)
int main(){
    int n;
    cin >> n;

    cout << "Il numero in lettere è ";

    while (n != 0){
        switch (n % 10){
            case 0: cout << "Zero"; break;
            case 1: cout << "Uno"; break;
            case 2: cout << "Due"; break;
            case 3: cout << "Tre"; break;
            case 4: cout << "Quattro"; break;
            case 5: cout << "Cinque"; break;
            case 6: cout << "Sei"; break;
            case 7: cout << "Sette"; break;
            case 8: cout << "Otto"; break;
            case 9: cout << "Nove"; break;
            default: cout << "Errore" << endl;
        }


        n /= 10;
    }

    return 0;
}