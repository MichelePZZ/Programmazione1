/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input tre numeri reali, a, b, c scrivere un programma che calcoli le soluzioni
 *       dell'equazione di secondo grado. In caso di delta negativo, notificare l'utente e non
 *       fare nulla.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c, delta;
    double s1, s2;

    cin >> a >> b >> c;

    delta = (b*b) - (4*a*c);

    if(delta < 0){
        cout << "Il delta è negativo.";
    } else{
        s1 = (double)(-b  + sqrt(delta)) / 2*a;
        s2 = (double)(-b  - sqrt(delta)) / 2*a;

        cout << "Le soluzioni sono: " << s1 << " e " << s2 << endl; 
    }


    return 0;
}