/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input 2 interi (riga e colonna) e ritorni il
 *       corrispondente numero del Triangolo di Pascal tramite funzione ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void numeroPascal(int colonna, int riga);
int risultato;

int main(){
    int colonna, riga;

    cout << "Inserire il numero di colonna: ";
    cin >> colonna;

    cout << "Inserire il numero di riga: ";
    cin >> riga;

    if(colonna > riga){
        return -1;
    }

    numeroPascal(colonna, riga);
    cout << risultato << endl;

    return 0;
}

void numeroPascal(int colonna, int riga){
    if(colonna == 1 || colonna == riga){
        risultato++;
    } else {
        riga--;
        numeroPascal(colonna, riga);

        colonna--;
        numeroPascal(colonna, riga);
    }
}