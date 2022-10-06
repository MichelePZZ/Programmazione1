/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un numero intero (compreso tra 0 e 1000), scrivere un programma che ritorni a
 *       video se il numero inserito è primo.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    bool primitivo = true;

    cin >> n;

    if(n >= 0 && n <+ 1000){
        for(int i=2; i<n; i++){
            if (n %i == 0){
                primitivo = false;
                i += n;
            }
        }
    }

    if(primitivo == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}