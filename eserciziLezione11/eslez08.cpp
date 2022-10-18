/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una procedura che normalizzi un vettore, cioe' che sostituisca un vettore con quello
 *       risultante dalla divisione di tutti i suoi elementi per la sua norma.
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

double* inputArray(int &n);
void calcoloNorma(double* a, int &n, double &ris);
void calcoloVettoreNormalizzato(double* a, int &n, double norma);

int main(){
    int n;
    double norma;
    double* a;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    cout << "Inserire gli elementi del vettore: " << endl;
    a = inputArray(n);

    calcoloNorma(a, n, norma);
    calcoloVettoreNormalizzato(a, n, norma);

    return 0;
}

double* inputArray(int &n){
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

void calcoloVettoreNormalizzato(double* a, int &n, double norma){
    double* tmp = new double[n];

    for(int i = 0; i < n; i++){
        tmp[i] = a[i] / norma;

        cout << tmp[i] << "\t";
    }
}