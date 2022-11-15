/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che disegni sul terminale un triangolo le cui righe devono essere
 *       composte da un numero dispari di asterischi. L'altezza di questo triangolo viene data in
 *       input dall'utente.
 * 
 */


#include <iostream>
using namespace std;

int main(){
    int n_righe, n_colonne, n_asterischi, n_spazi;

    cin >> n_righe;

    n_colonne = (n_righe*2) - 1;

    for(int i=1; i<=n_righe; i++){                 // riga
        n_asterischi = (i * 2) - 1;
        n_spazi = (n_colonne - n_asterischi) / 2;

        for(int j=1; j<=n_colonne; j++){
            if(n_spazi != 0){
                cout << "\t";
                n_spazi--;
            } else if(n_asterischi != 0){
                cout << "*\t";
                n_asterischi--;
            }
        }

        cout << endl;
    }

    return 0;
}