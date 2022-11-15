/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 2 interi, scrivere un programma che faccia la divisione tramite una funzione;
 *       la funzione restituisce tramite valore di ritorno il quoziente e tramite parametro per
 *       riferimento il resto.
 * 
 */


#include <iostream>
using namespace std;

int divisione(int a, int b, int &resto);

int main(){
    int a, b, risultato, resto;

    cin >> a >> b;

    risultato = divisione(a, b, resto);

    cout << "risultato: " << risultato << endl;
    cout << "resto: " << resto << endl;

    return 0;
}

int divisione(int a, int b, int &resto){
    int ris = a / b;
    resto = a % b;

    return ris;
}