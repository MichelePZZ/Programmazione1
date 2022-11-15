/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dichiari e poi inizializzi (con valori random)
 *       un array di 10 interi e poi stampi a video tutti gli elementi dell'array
 *       come puntatore.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void new_array(int* a);
void print_array(int* a);

int main(){
    srand(time(NULL));
    int* a = new int[SIZE];

    new_array(a);

    print_array(a);

    return 0;
}

void new_array(int* a){
    for(int i = 0; i < SIZE; ++i){
        *(a+i) = rand() % 10;
    }
}

void print_array(int* a){
    for(int i=0; i<SIZE; ++i){
        cout << *(a+i) << " ";
    }
}