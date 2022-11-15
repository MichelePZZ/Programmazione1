/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati 3 input da tastiera (ore,
 *       minuti, secondi), li memorizzi in 3 variabili distinte e
 *       calcoli i secondi alla mezzanotte.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    //variabili, costanti
    const int secondiMezzanotte = 86400; 
    char orario[8];
    int orarioSecondi;
    int ore, minuti, secondi;

    //input
    cout << "Inserisci orario (formato \"xx:xx:xx\"): ";
    cin >> orario;

    //parsing
    sscanf(orario, "%d:%d:%d", &ore, &minuti, &secondi);
    
    //calcolare l'orario in secondi
    orarioSecondi = (ore*60*60) + (minuti*60) + secondi;
    
    //output
    cout << "Alla mezzanotte mancano " << secondiMezzanotte-orarioSecondi << " secondi." << endl;

    return 0;
}