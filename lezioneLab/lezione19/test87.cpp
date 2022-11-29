/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che, dato in input un file con un intero per
 *       riga, crea una lista concatenata con i numeri contenuti nel file
 *     - Scrivere un programma che, data una lista di interi, legge la lista e
 *       poi elimina tutti i nodi (delete)
 * 
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct node{
    int dato;
    node* next;
};

void insert_last(node*&p, int n);
void print_list(node*&root);
void print_node(node*& n);
void dealloc(node*& root);

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: ./input.txt" << endl;
        exit(1);
    }

    node* root = NULL;

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cerr << "Error during opening ./input.txt" << endl;
        exit(2);
    }

    char buffer[10];
    while(input >> buffer){
        insert_last(root, atoi(buffer));
    }

    print_list(root);

    dealloc(root);

    return 0;
}

void insert_last(node*&p, int n){
    node* r = new node;
    r->dato = n;
    r->next = NULL;
    if(p!= NULL){
        node* q = p;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = r; 
    }
    else{
        p=r;
    }
}

void print_list(node*&root){
    print_node(root);
    if(root->next != NULL){
        print_list(root->next);
    }
}

void print_node(node*& n){
    cout << "Dato: " << n->dato << endl;
}

void dealloc(node*& root){
    if(root->next != NULL){
        dealloc(root->next);
    }
    delete[] root;
}