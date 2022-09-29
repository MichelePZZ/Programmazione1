/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che calcoli la tabella di verità dell'operatore implicazione.
 *       Il programma riceve il valore di P e Q in input dall'utente.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    bool p, q;

    cout << "Inserisci il primo booleano: ";
    cin >> p;

    cout << "Inserisci il secondo booleano: ";
    cin >> q;

    cout << "L'implicazione ha valore: " << (!p || q) << endl;

    return 0;
}