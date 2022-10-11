/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - 
 * 
 */


#include <iostream>
using namespace std;

void inserisciInTesta(Nodo*& inizio, int elem);

struct Nodo{
    int info;
    Nodo* suc;
};

int main(){
    return 0;
}

void inserisciInTesta(Nodo*& inizio, int elem){     //puntatore a primo elemento della lista, informazione del nodo
    Nodo* nuovo_nodo;

    nuovo_nodo->suc = inizio;
    nuovo_nodo->info = elem;

    inizio = nuovo_nodo;
}

void inserisciInCoda(Nodo*& inizio, int elem){      //puntatore a primo elemento della lista, informazione del nodo
    Nodo* p;
    Nodo* q = inizio;

    while(q != NULL){   // ciclo while che raggiunge la fine della lista
        p = q;
        q = q->suc;
    }

    q = new Nodo; // q viene utilizzato per puntare il nuovo nodo generato.
    q->info = elem;

    if(inizio == 0) 
        inizio->suc = q;
    else 
        p->suc = q;
}

void inserisciOrdinamento(Nodo*& inizio, int elem){
    Nodo* r, p;
    Nodo* q = inizio;

    while((q != NULL) && (q->info < elem)){
        p = q;
        q = q->suc;
    }

    
}