/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che simuli un attacco 1 contro 1 a RisiKo.
 *       Tirare 1 dado a 6 facce per l'attaccante e 1 dado per il difensore.
 *       Dichiarare infine il numero più alto come il vincitore.-+1`
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

bool tiraDado();

int main(){
    
    if(tiraDado()){
        cout << "Vince l'attaccante" << endl;
    } else {
        cout << "Vince il difensore" << endl;
    }
    return 0;
}

bool tiraDado(){
    srand(time(NULL));
    int att = rand() % 6 + 1;
    int dif = rand() % 6 + 1;

    return (att >= dif);
}