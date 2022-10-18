/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che simuli un attacco a 3 contro 3 a risiko. Tirare 3 dadi a 6 facce
 *       per l'attaccante e 3 per il difensore. Confrontare il dado piu' alto dell'attaccante contro il
 *       il piu' alto del difensore, il medio dell'attaccante contro il medio del difensore
 *       e il piu' basso dell'attaccante contro il piu' basso del difensore. Dichiarare infine gli
 *       scontri vinti dall'attaccante e dal difensore.
 * 
 */


#include <iostream>
#include <cstdlib>
#define size 3
using namespace std;

void tiraDado(int a[]);
void scambio(int &a, int &b);

int main(){
    srand(time(NULL));

    int a[size], d[size];
    int vittA, vittD;
    
    tiraDado(a);
    tiraDado(d);

    for(int i = 0; i < size; i++){
        (a[i] >= d[i]) ? (vittA++) : (vittD++);
    }

    cout << "vittA: " << vittA << endl;
    cout << "vittD: " << vittD << endl;

    return 0;
}

void tiraDado(int a[]){    
    for(int i=0; i<size; i++){
        a[i] = rand() % 6 + 1;
    }

    for(int i = 1; i< size; i++){
        if(a[i] < a[i-1]){
            scambio(a[i], a[i-1]);
        }
    }
}

void scambio(int &a, int &b){
    int tmp = a; 
    a = b;
    b = tmp;
}