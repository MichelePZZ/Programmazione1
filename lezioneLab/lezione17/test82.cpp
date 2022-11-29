/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che definisca una struttura chiamata
 *       Studente formata dai campi nome, cognome, matricola e media
 *       ponderata dei voti. Implementare poi le funzioni definite in basso: la
 *       funzione stampa_studente stampa a video il contenuto di una
 *       struttura Studente, mentre la funzione genera_studente genera una
 *       struttura Studente dati in input il valore dei suoi campi.
 *       Si può utilizzare la funzione strcpy della libreria cstring.
 * 
 */


#include <cstring>
#include <iostream>
using namespace std;

#define dim_nome 100

struct Studente{
    char nome[dim_nome];
    char cognome[dim_nome];
    int matricola;
    float media_ponederata;

    void stampa_studente(){
        cout << "Nome: " << this->nome << endl;
        cout << "Cognome: " << this->cognome << endl;
        cout << "Matricola: " << this->matricola << endl;
        cout << "Media ponderata: " << this->media_ponederata << endl;
        cout << endl;
    }

    void genera_studente(char n[], char c[], int matricola, float media_ponderata){
        strcpy(nome, n);
        strcpy(cognome, c);
        this->matricola = matricola;
        this->media_ponederata = media_ponderata;
    }
};

int main(int argc, char* argv[]){

    Studente s;
    s.genera_studente("Merdina", "Rossi", 102345, 12.3);
    s.stampa_studente();

    return 0;
}