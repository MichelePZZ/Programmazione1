/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input il valore numerico di un mese, ritorni a video
 *       il corrispondente nome di quel mese.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int mese;

    cout << "Inserire il valore numerico del mese: ";
    cin >> mese;

    cout << "Il mese inserito è ";

    switch (mese){
        case 1: cout << "gennaio"; break;
        case 2: cout << "febbraio"; break;
        case 3: cout << "marzo"; break;
        case 4: cout << "aprile"; break;
        case 5: cout << "maggio"; break;
        case 6: cout << "giugno"; break;
        case 7: cout << "luglio"; break;
        case 8: cout << "agosto"; break;
        case 9: cout << "settembre"; break;
        case 10: cout << "ottobre"; break;
        case 11: cout << "novembre"; break;
        case 12: cout << "dicembre"; break;
        default: cout << "MESE NON ESISTENTE"; 
    }

    cout << endl;

    return 0;
}