/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input il raggio di un cerchio, calcola il volume 
 *       della sfera corrispondente;
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double raggio;

    cout << "Raggio: ";
    cin >> raggio;

    cout << "Volume: " << raggio*raggio*raggio*4/3*3.14 << endl;

    return 0;
}