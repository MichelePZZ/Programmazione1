/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati in input 2 numeri, a e b, li salvi in 2 variabili
 *       distinte, max e min, in cui la prima conterrà il numero maggiore tra i 2 e la seconda
 *       il più piccolo.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int a, b, min, max;

    cin >> a >> b;
    
    //min = (a < b) ? a : b;
    //max = (a >= b) ? a : b;

    max = a*(a>=b) + b*(a<b);
    min = (a+b)-max;

    cout << "Il maggiore è " << max << endl;
    cout << "Il minore è " << min << endl; 

    return 0;
}