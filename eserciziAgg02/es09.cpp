/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, data una temperatura in input dall'utente, riporti a video
 *       un messaggio seguendo le regole elencate.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double t;

    cout << "Inserire temperatura: ";
    cin >> t;

    cout << ((t < -273.15) ? "Temeratura Impossibile" : "");
    cout << ((t > -273.15 && t < 0.0) ? "Fa freddo!" : "");
    cout << ((t > 0.0 && t < 18.0) ? "Temeratura così così" : "");
    cout << ((t > 18.0 && t < 30.0) ? "Temeratura accettabile" : "");
    cout << ((t > 30.0) ? "Fa caldo!" : "");


    return 0;
}