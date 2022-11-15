/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un progarmma che dichiari e poi inizializzi un array di 10 interi
 *       e lo stampi a video. Ordinare poi l'array implementando l'algoritmo Bubble
 *       Sort.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void newArray(int a[]);
void ordBubbleSort(int a[]);
void scambio (int &a, int &b);

int main(){
    srand(time(NULL));
    int a[SIZE];
    newArray(a);

    ordBubbleSort(a);

    for(int i=0; i < SIZE; i++){
        cout << a[i] << " ";
    }

    return 0;
}

void newArray(int a[]){
    for(int i=0; i<SIZE; ++i)
    {
        a[i] = rand() % 10;
    }
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