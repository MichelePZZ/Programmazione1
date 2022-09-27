/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input tre numeri reali, a, b, c, scrivere un programma che calcoli le soluzioni dell'equazione
 *       di secondo grado.
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    double radiceDelta, risultatoP, risultatoN;

    cin >> a >> b >> c;

    radiceDelta = sqrt(b*b - (4*a*c));
    
    risultatoP = (-b + radiceDelta) / (double)2*a;
    risultatoN = (-b - radiceDelta) / (double)2*a;

    cout << "Il risultato (con delta positivo) è " << risultatoP << endl;
    cout << "Il risultato (con delta negativo) è " << risultatoN << endl;

    return 0;
}