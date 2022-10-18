/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una procedura che calcoli la norma di un vettore di double.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

double* inputArray(int n);
void calcoloNorma(double* a, int &n, double &ris);

int main(){
    int n;
    double* a;
    double ris;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    cout << "Inserire gli elementi del vettore: " << endl;
    a = inputArray(n);

    calcoloNorma(a, n, ris);
    cout << "Il vettore norma è " << ris << endl;

    return 0;
}

double* inputArray(int n){
    double* array = new double[n];

    for(int i=0; i<(n); i++){
        cin >> array[i];
    }

    return array;
}

void calcoloNorma(double* a, int &n, double &ris){
    double tmp = 0.0;

    for(int i = 0; i < n; i++){
        tmp += a[i]*a[i];
    }

    ris = sqrt(tmp);
}