/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati in input i secondi a
 *       mezzanotte, li salvi in una variabile e ritorni a video
 *       l'equivalente orario in ore, minuti e secondi.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    //variabili, costanti necessarie
    int secondiMezzanotte;
    int ore, minuti, secondi;

    //input
    cout << "Inserire i secondi per arrivare a mezzanotte: ";
    cin >> secondiMezzanotte;

    //calcoli
    ore = (secondiMezzanotte / 60) / 60;
    secondiMezzanotte %= (60*60);
    
    minuti = secondiMezzanotte / 60;
    secondi = secondiMezzanotte % 60;

    //output
    cout << "L'orario è " << ore << ":" << minuti << ":" << secondi;

    return 0;
}