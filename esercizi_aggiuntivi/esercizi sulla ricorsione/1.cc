/**
 * 1- 
 * Scrivere un programma che prenda in input due interi (riga e colonna) e ritorni il corrispondente numero 
 * del Triangolo di Pascal tramite funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int t_pascal(int r, int c){
    if (c == 0){
        return 1;
    }
    if (r == c){
        return 1;
    }
    return (t_pascal(r-1, c-1) + t_pascal(r-1, c));
}

int main(){
    int r, c;
    cout << "Inserisci r, c : " << endl;
    cin >> r >> c;

    cout << t_pascal(r, c) << endl;

    return 0;
}