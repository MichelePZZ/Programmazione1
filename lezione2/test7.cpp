/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - stampa a video la tabella di verita dell'operatore AND e
 *       OR;
 * 
 */


#include <iostream>
using namespace std;

int main(){
    
    cout << "AND" << endl;
    cout << "A\tB\tAuB" << endl;
    cout << "F\tF\tF" << endl;
    cout << "F\tV\tF" << endl;
    cout << "V\tF\tF" << endl;
    cout << "V\tV\tV" << endl << endl;

    cout << "OR" << endl;
    cout << "A\tB\tAuB" << endl;
    cout << "F\tF\tF" << endl;
    cout << "F\tV\tV" << endl;
    cout << "V\tF\tV" << endl;
    cout << "V\tV\tV" << endl;

    return 0;
}