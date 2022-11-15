/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 3 interi in 3 variabili, scrivere un programma che con una procedura converta
 *       un eventuale eccesso di secondi in minuti e un eventuale eccesso di minuti in ore. Usare a
 *       scelta passaggio di parametri per riferimento o puntatore.
 * 
 */


#include <iostream>
using namespace std;

void controllo(int &o, int &m, int &s);

int main(){
    int o, m, s;

    cout << "o?: ";
    cin >> o;

    cout << "m?: ";
    cin >> m;

    cout << "s?: ";
    cin >> s;

    controllo(o,m,s);

    cout << "o: " << o << endl;
    cout << "m: " << m << endl;
    cout << "s: " << s << endl;

    return 0;
}

void controllo(int &o, int &m, int &s){
    m += s/60;
    s %= 60;
    o += m/60;
    m %= 60;
}