/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che controlli se un dato array è un sottovettore di un
 *       altro dato array.
 * 
 */


#include <iostream>
using namespace std;

int* inputArray();
bool confronto(int a1[], int a2[]);

int main(){
    int* arrayPrincipale;
    int* arraySecondario;
    bool controllo;

    arrayPrincipale = inputArray();
    arraySecondario = inputArray();

    controllo = confronto(arrayPrincipale, arraySecondario);

    if(controllo == true){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

int* inputArray(){
    int* array;
    int n;

    cout << "Inserisci il numero di elementi dell'array principale: ";
    cin >> n;

    array = new int[n+1];
    array[0] = n;

    cout << "Inserire gli elementi dell'array: " << endl;
    for(int i=1; i<(n+1); i++){
        cin >> array[i];
    }

    return array;
}

bool confronto(int a1[], int a2[]){
    bool controllo = true;

    for(int j=0; j<a2[0] && controllo == true; j++){
        controllo = false;

        for(int i=0; i<a1[0]; i++){
            if(a1[i] == a2[j]){
                controllo = true;
            }
        }
    }

    return controllo;
}