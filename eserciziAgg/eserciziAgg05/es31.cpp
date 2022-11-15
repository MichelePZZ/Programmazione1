/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che implementi la ricerca sequenziale di un elemento in un array tramite ricorsione.
 * 
 */


#include <iostream>
using namespace std;

int* inputArray();
void ricercaSequenziale(int n, int* a);

int main(){
    int n;

    int* a = inputArray();
    cin >> n;

    ricercaSequenziale(n, a+1);

    return 0;
}

int* inputArray(){
    int* array;
    int n;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    array = new int[n+1];

    cout << "Inserire gli elementi dell'array: " << endl;
    for(int i=0; i<(n); i++){
        if(i == n){
            array[i] = -1;
        } else {
            cin >> array[i];
        }
    }
    return array;
}

void ricercaSequenziale(int n, int* a){
    if(n == *a){
        cout << "Trovato!" << endl;
    } else if((*a) != -1){
        a++;
        ricercaSequenziale(n, a);
    } else {
        cout << "Questo numero non è presente nell'array." << endl;
    }
}