/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere la dichiarazione e definizione di una funzione ricorsiva estrai
 *       che, data una stringa lunga al massimo 80 caratteri senza spazi, estragga
 *       tutte le lettere maiuscole contenute e restituisca un’altra stringa contenente
 *       solo le lettere maiuscole.
 *       
 *       Nota: la funzione estrai deve essere ricorsiva. Al suo interno non
 *       devono essere presenti cicli o chiamate a funzioni che contengano
 *       cicli. Si può fare uso di eventuali funzioni ricorsive ausiliarie.
 *       
 *       Nota 2: non è ammesso l’utilizzo di variabili globali, static o di funzioni
 *       di libreria
 */


#include <iostream>
using namespace std;

void estrai(char* input, char* min, char* max);

int main(){
    char* c = new char[80];
    cin >> c;

    char* min = new char[80];
    char* max = new char[80];

    estrai(c, min, max);

    cout << "Input: " << c << endl;
    cout << "Max: " << max << endl;
    
    cout << "Min: " <<  min << endl;

    return 0;
}

void estrai(char* input, char* min, char* max){
    if(input[0] <= 'Z' && input[0] >= 'A'){
        max[0] = input[0];
        estrai(++input, min, ++max);
    }
    else if(input[0] <= 'z' && input[0] >= 'a'){
        min[0] = input[0];
        estrai(++input, ++min, max);
    } else {
        min[0] = '\0';
        max[0] = '\0';
    }
}