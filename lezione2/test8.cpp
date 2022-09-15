/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere maiuscolo, ritorna lo stesso
 *       carattere in minuscolo;
 * 
 */


#include <iostream>
using namespace std;

int main(){
    char carattereMaiuscolo;
    char carattereMinuscolo;

    cout << "Inserisci un carattere: ";
    cin >> carattereMaiuscolo;

    if(carattereMaiuscolo >= 'A' && carattereMaiuscolo<= 'Z'){

        carattereMinuscolo = carattereMaiuscolo + 32;        
        cout << "Il carattere in minuscolo è \'" << carattereMinuscolo << "\'" << endl;
    }
    else{
        cout << "Il carattere inserito non fa parte dell\'alfabeto oppure non è una lettera" << endl;
    }

    return 0;
}