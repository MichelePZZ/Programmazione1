/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Modificare il programma scritto precedentemente implementando le funzioni
 *       definite sotto: la funzione cerca_matricola permette di cercare uno studente
 *       tramite il numero di matricola, la funzione cerca_nome_e_cognome permette di
 *       cercare uno studente per nome e cognome, mentre la funzione
 *       studente_top_media ritorna lo studente con la più alta media ponderata. Tutte le
 *       funzioni ritornano l’indice del database corrispondente.
 *       Si può utilizzare la funzione strcmp della libreria cstring.
 * 
 */


#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

#define dim_nome 50

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
int top_media(Studente* array, int& dim);
int esiste_nome(Studente* array, char nome[], int& dim);
int esiste_cognome(Studente* array, char cognome[], int& dim);
int esiste_matricola(Studente* array, int matricola, int& dim);

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

    cout << esiste_cognome(db, "Howard", dim);

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

int top_media(Studente* array, int& dim){
    Studente s = array[0];
    int max = 0;

    for(int i=1; i<dim; ++i){
        if(array[i].media_ponederata > s.media_ponederata){
            s = array[i];
            max = i;
        }
    }

    return max;
}

int esiste_nome_cognome(Studente* array, char nome[], char cognome[], int& dim){
    for(int i=0; i < dim; i++){
        if((strcmp(array[i].cognome, cognome) == 0) && (strcmp(array[i].nome, nome) == 0)){
            return i;
        }
    }
    return -1;
}

int esiste_matricola(Studente* array, int matricola, int& dim){
    for(int i=0; i < dim; i++){
        if(array[i].matricola == matricola){
            return i;
        }
    }
    return -1;
}