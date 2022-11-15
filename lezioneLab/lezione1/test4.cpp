/*
 * AUTORE: Michele Pezzo
 * NOME: Distanziamento Sociale
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un raggio, calcolare circonferenza e area;
 * 
 */


#include <iostream>
using namespace std;

int main(){
    //variabili
    double raggio;

    //input
    cout << "Inserire il raggio (in cm): ";
    cin >> raggio;
    cout << endl;

    //output
    cout << "La circonferenza è " << (double)raggio*2*3.14 << endl;
    cout << "L'area è " << (double)raggio*raggio*3.14 << endl;

    return 0;
}