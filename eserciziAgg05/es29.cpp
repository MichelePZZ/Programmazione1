/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che ruoti un array di n elementi di x posizioni.
 *       una rotazione corrisponde a spostare l'elemento in indice i in indice i + 1 % n.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int x;
    int arrayPartenza[6] = {1, 2, 3, 4, 5, 6}, arrayArrivo[6];

    cout << "Inserire di quante posizioni spostare l'array {1, 2, 3, 4, 5, 6}: ";
    cin >> x;

    for(int i=0; i < 6; i++){
        arrayArrivo[(i+x)%6] = arrayPartenza[i];
    }

    cout << "L'array di arrivo è " << endl;
    
    for(int i=0; i < 6; i++){
        cout << arrayArrivo[i] << endl;
    }



    return 0;
}

