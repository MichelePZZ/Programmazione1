/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato un array di
 *       10 interi ordinato, rimuova eventuali interi
 *       duplicati e li sostituisca con -1.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void newArray(int a[]);
void ordBubbleSort(int a[]);
void scambio (int &a, int &b);
void delateDuplicate(int a[]);

int main(){
    srand(time(NULL));
    int a[SIZE];
    newArray(a);

    ordBubbleSort(a);


    return 0;
}

void ordBubbleSort(int a[]){
    bool continua = true;
    for (int i = 0; i < SIZE-1 && continua; i++){
        continua = false;

        for (int j = 0; j < SIZE-i-1; j++){
            if(a[j] > a[j+1]){
                continua = true;
                scambio(a[j], a[j+1]);
            }
        }
    }
}

void scambio (int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

void newArray(int a[]){
    for(int i=0; i<SIZE; ++i)
    {
        a[i] = rand() % 10;
    }
}


void delateDuplicate(int a[]){
    for(int i = SIZE; i > 0; --i){
        if(a[i] == a[i-1]){
            a[i] = -1;
        }
    }
}