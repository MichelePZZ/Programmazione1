/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un numero compreso tra 1 e 7, stampare a video il corrispondente giorno
 *       della settimana.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    switch (a) {
        case 1: cout << "Lunedi" << endl; break;
        case 2: cout << "Martedi" << endl; break;
        case 3: cout << "Mercoledi" << endl; break;
        case 4: cout << "Giovedi" << endl; break;
        case 5: cout << "Venerdi" << endl; break;
        case 6: cout << "Sabato" << endl; break;
        case 7: cout << "Domenica" << endl; break;
        default: cout << "Errore" << endl;
    }

    return 0;
}