/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che utilizzi tutte le funzioni definite nei precedenti
 *       esercizi per fornire delle funzionalità molto semplici di database per
 *       memorizzare i dati degli studenti. La dimensione del database è fissata a priori a
 *       100. Il programma dovrà permettere all’utente di eseguire le seguenti azioni:
 * 
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

#define dim_db 100
#define dim_nome 30

struct Studente{
    char nome[dim_nome];
    char cognome[dim_nome];
    int matricola;
    float media_ponederata;

    void stampa_studente(){
        cout << "Nome: " << this->nome << endl;
        cout << "Cognome: " << this->cognome << endl;
        cout << "Matricola: " << this->matricola << endl;
        cout << "Media ponderata: " << this->media_ponederata << endl << endl;
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

void input_db(Studente*& db, char file[]);
int top_media(Studente* array);
int esiste_nome_cognome(Studente* array, char nome[], char cognome[]);
int esiste_matricola(Studente* array, int matricola);

int main(){
    Studente* array = new Studente[dim_db];

    int option = 0;


    while(option != -1){
        cout << "Inserire il numero dell'opzione che si vuole selezionare:" << endl;
        cout << "1. aggiungere un utente;" << endl;
        cout << "2. cercare un utente;" << endl;
        cout << "3. cercare l'utente con la media ponderata piu' alta;" << endl;
        cout << "4. caricare gli studenti da un file esterno;" << endl;
        cout << "-1. per uscire." << endl;
        cin >> option;

        
        switch(option){
            case 1:
                char buffer[256];
                Studente s;

                cout << "Inserire i parametri elencati:" << endl;

                cout << "Nome: ";
                cin >> buffer;
                s.set_nome(buffer);

                cout << "Cognome: ";
                cin >> buffer;
                s.set_cognome(buffer);

                cout << "Matricola: ";
                cin >> buffer;
                s.set_matricola(atoi(buffer));

                cout << "Media ponderata: ";
                cin >> s.media_ponederata;
                s.set_media(atof(buffer));

                cout << "Utente inserito!" << endl << endl;
                system("clear");              

                delete[] buffer;
                break;

            case 2:
                cout << "Inserire:" << endl;
                cout << "1. per cercare un utente con nome/cognome" << endl;
                cout << "2. per cercare un utente con matricola" << endl;
                cin >> option;

                switch (option){
                    case 1:
                        char nome[dim_nome], cognome[dim_nome];

                        cout << "Inserire il nome: ";
                        cin >> nome;
                        cout << "Inserire il cognome: ";
                        cin >> cognome;

                        if(esiste_nome_cognome(array, nome, cognome) != -1){
                            cout << "Lo studente e' presente e si trova nella posizione " <<  esiste_nome_cognome(array, nome, cognome) << endl;
                        } else {
                            cout << "Lo studente non e' presente." << endl;
                        }

                        delete[] nome;
                        delete[] cognome;
                        break;

                    case 2:
                        int matricola;

                        cout << "Inserire la matricola: ";
                        cin >> matricola;

                        if(esiste_matricola(array, matricola) != -1){
                            cout << "Lo studente e' presente e si trova nella posizione " <<  esiste_matricola(array, matricola) << endl;
                        } else {
                            cout << "Lo studente non e' presente";
                        }

                        break;
                    default:
                        cerr << "Opzione non esistente" << endl;
                        break;
                }
            case 3:
                cout << "Lo studente con la media piu' alta e': " << endl;
                array[top_media(array)].stampa_studente();
                cout << endl;       
                break;
            case 4:
                char file[256];

                cout << "Inserire il nome del file: ";
                cin >> file;

                input_db(array, file);

                for(int i = 0; i < dim_db; i++){
                    array[i].stampa_studente();
                }
                break;
            default:
                cerr << "Opzione non esistente" << endl;
                break;

        }
    
    }
    return 0;
}

void input_db(Studente*& db, char file[]){
    fstream input;
    input.open(file, ios::in);

    if(input.fail()){
        cerr << "Errore nella lettura del file." << endl;
    }

    int n_valori = dim_db*4;
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
    
    input.close();
    delete[] buffer;
}

int top_media(Studente* array){
    Studente s = array[0];
    int max = 0;

    for(int i=1; i<dim_db; ++i){
        if(array[i].media_ponederata > s.media_ponederata){
            s = array[i];
            max = i;
        }
    }

    return max;
}

int esiste_nome_cognome(Studente* array, char nome[], char cognome[]){
    for(int i=0; i < dim_db; i++){
        if((strcmp(array[i].cognome, cognome) == 0) && (strcmp(array[i].nome, nome) == 0)){
            return i;
        }
    }
    return -1;
}

int esiste_matricola(Studente* array, int matricola){
    for(int i=0; i < dim_db; i++){
        if(array[i].matricola == matricola){
            return i;
        }
    }
    return -1;
}