/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che simuli un attacco 2 contro 2 a RisiKo!.
 *       Tirare 2 dadi a 6 facce per l'attaccante e 2 dadi per il difensore.
 *       Confrontare il dado più alto dell'attaccante contro il piu alto del
 *       difensore, e il piu basso dell'attaccante contro il piu basso del 
 *       difensore. Dichiarare infine gli scontri vinti dall'attaccante e quelli
 *       vinti dal difensore.
 * 
 */


#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int a[4];
    int dif, att;
    
    for(int i=0; i<4; i++){
        a[i] = rand() % 6 + 1; 
    }

    if(max(a[0], a[1]) >= max(a[2], a[3])){
        att += 1;
    } else {
        dif += 1;
    }

    if(min(a[0], a[1]) >= min(a[2], a[3])){
        att += 1;
    } else {
        dif += 1;
    }

    cout << "Battaglie vinte dagli attaccanti: " << att << endl;
    cout << "Battaglie vinte dai difensori: " << dif << endl;

    return 0;
}