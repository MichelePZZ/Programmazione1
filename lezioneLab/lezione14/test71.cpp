/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dichiari e poi inizializzi una matrice di interi
 *       e poi stampi a video tutti gli elementi della matrice.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE1 125
#define SIZE2 125
using namespace std;

void new_matrix(int a[][SIZE2]);
void print_matrix(int a[][SIZE2]);

int main(){
    srand(time(NULL));
    int a[SIZE1][SIZE2];
    new_matrix(a);

    print_matrix(a);
    return 0;
}


void new_matrix(int a[][SIZE2]){
    for(int i = 0; i < SIZE1; ++i){
        for(int j=0; j < SIZE2; ++j){
            a[i][j] = rand() % 10;
        }
    }
}

void print_matrix(int a[][SIZE2]){
    for(int i = 0; i < SIZE1; ++i){
        for(int j=0; j < SIZE2; ++j){
            cout << a[i][j] << "  ";
            // a[i][j] = *(a+i*SIZE2+j);
        }
        cout << endl;
    }
}