/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - definite 2 variabili booleane, stampate a video la tabella
 *       di verita dell'operazione XOR
 * 
 */


#include <iostream>
using namespace std;

int main(){
    bool a,b;
    a = true, b = true;

    cout << "Tabella di verita XOR" << endl;
    cout << ((a && !b)||(!a && b)) << endl;
    cout << ((!a && !b)||(a && b)) << endl;
    cout << ((a && b)||(!a && !b)) << endl;
    cout << ((!a && b)||(a && !b)) << endl;

    return 0;
}