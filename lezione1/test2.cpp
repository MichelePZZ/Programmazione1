/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE: basic stuff:
 *     - prova variabili e operazioni con le variabili;
 *     - stream di output (in questo caso l'area del quadrato);
 * 
 */

#include <iostream>

using namespace std;

int main(){
    int lato_quadrato = 5;
    int area_quadrato;

    area_quadrato = lato_quadrato * lato_quadrato;

    cout << area_quadrato << endl;

    return 0;
}