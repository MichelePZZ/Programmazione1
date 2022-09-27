/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che prenda in input un intero (riga) e stampi il Triangolo
 *       di Pascal fino alla riga specificata tramite funzione ricorsiva.
 * 
 */


#include <iostream>
using namespace std;

void coutPascal(int colonna, int riga);
void numeroPascal(int colonna, int riga);

int risultato;

int main(){
    int dim;

    cout << "Inserire il numero di riga: ";
    cin >> dim;

    coutPascal(1,1);
}

void coutPascal(int colonna, int riga){
    if(colonna == riga){
        // stampare a video 1
        cout << "1" << endl;

        // riga successiva
        riga ++;
        coutPascal(1, riga);
    } else if(colonna == 1){
        // stampare a video 1
        cout << "1\t";
    } else {

        // stampare a video il numero (colonna, riga)
        risultato = 0;
        numeroPascal(colonna, riga);
        cout << risultato << "\t";

        // ripartire con il numero successivo
        colonna++;
        coutPascal(colonna, riga);
    }
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