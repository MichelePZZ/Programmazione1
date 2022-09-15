/*
 * AUTORE: Michele Pezzo
 * NOME: Termometri Americani
 * DESCRIZIONE:
 *     - scrivere un programma che, data in input una temperatura
 *       Fahrenheit, ritorni a video il corretto valore in Celsius.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    double tFahrenheit;

    cout << "Inserire la temperatura (in Fahrenheit): ";
    cin >> tFahrenheit;

    cout << "La temperatura in Celsius è " << (tFahrenheit-32)/1.8 << endl;
    
    return 0;
}