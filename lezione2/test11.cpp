/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - definite 2 variabili booleane, stampate a video la tabella
 *       di verita dell'operazione XOR.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    bool a,b;

    a = true;
    b = true;

    cout << "Tabella di verita AND" << endl;
    cout << (a && b) << endl;
    cout << (!a && b) << endl;
    cout << (a && !b) << endl;
    cout << (!a && !b) << endl;
    cout << endl;
    
    cout << "Tabella di verita OR" << endl;
    cout << (a || b) << endl;
    cout << (!a || b) << endl;
    cout << (a || !b) << endl;
    cout << (!a || !b) << endl;

    return 0;
}