/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero n inserito dall'utente, stampi a video 
 *       un rombo, in cui ogni riga deve contenere un numero dispari di asterischi. Il numero di 
 *       righe del rombo è indicato dalla formula 2n-1.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n_righe, n_colonne, n_asterischi, n_spazi;
    cin >> n_righe;

    n_colonne = n_righe*2 - 1;

    for(int i=1; i<=n_righe; i++){

        n_asterischi = i*2 - 1;
        n_spazi = n_colonne-n_asterischi / 2;

        while(n_asterischi != 0){

            if(n_spazi != 0){
                cout << "\t";
                n_spazi--;
            } else {
                cout << "*\t";
                n_asterischi--;
            }
        }

        cout << endl;
    }

    for(int i=n_righe-1; i>0; i--){

        n_asterischi = i*2 - 1;
        n_spazi = n_colonne-n_asterischi / 2;

        while(n_asterischi != 0){

            if(n_spazi != 0){
                cout << "\t";
                n_spazi--;
            } else {
                cout << "*\t";
                n_asterischi--;
            }
        }

        cout << endl;
    }

    return 0;
}