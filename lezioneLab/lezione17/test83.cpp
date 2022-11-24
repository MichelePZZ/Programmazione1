/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Utilizzando le funzioni scritte precedentemente, scrivere un programma
 *       che, dato in input un file contenente i dati di alcuni studenti e il numero di
 *       righe del file, generi un array dinamico che contenga tutti questi studenti. E’
 *       consigliato raggruppare questa logica all’interno di una funzione separata.
 *       Utilizzare la libreria fstream.
 * 
 */


#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
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

    void set_nome(char n[]){
        strcpy(nome, n);
    }

    void set_cognome(char c[]){
        strcpy(cognome, c);
    }

    void set_matricola(int matricola){
        this->matricola = matricola;
    }

    void set_media(float media_ponderata){
        this->media_ponederata = media_ponderata;
    }
};

Studente* input_db(fstream& input, int& dim);

int main(int argc, char* argv[]){

    if(argc!=3){
        cerr << "Usage: ./input.txt" << endl;
        exit(1);
    }

    fstream input;
    input.open(argv[1], ios::in);

    int dim = atoi(argv[2]);

    if(input.fail()){
        cerr << "File doesn't exist." << endl;
        exit(2);
    }

    // creazione dell'array Studente
    Studente* db = input_db(input, dim);

    for(int i=0; i<dim; i++){
        db[i].stampa_studente();
    }

    input.clear();
    input.seekg(0);
    
    input.close();
    return 0;
}

Studente* input_db(fstream& input, int& dim){
    Studente* db = new Studente[dim];

    int n_valori = dim*4;

    char buffer[256];
    for(int i = 0; i<n_valori; ++i){
        input >> buffer;

        switch((i+1)%4){
            case 1: db[i/4].set_nome(buffer); break;
            case 2: db[i/4].set_cognome(buffer); break;
            case 3: db[i/4].set_matricola(atoi(buffer)); break;
            case 0: db[i/4].set_media(atof(buffer)); break;
        }
    }

    delete[] buffer;
    return db;
}