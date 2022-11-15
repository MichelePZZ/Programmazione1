/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una matrice che dichiari e poi inizializzi una matrice di interi
 *       la stampa a video, calcoli la matrice trasposta e la stampi a video.
 * 
 */

#include <iostream>
#include <cstdlib>
#define SIZE1 10
#define SIZE2 5
using namespace std;

void new_matrix(int a[][SIZE2]);
void print_matrix_a(int a[][SIZE2]);
void print_matrix_b(int a[][SIZE1]);
void transposed(int a[][SIZE2], int b[][SIZE1]);

int main(){
    srand(time(NULL));
    int a[SIZE1][SIZE2];
    int b[SIZE2][SIZE1];

    new_matrix(a);
    print_matrix_a(a);

    transposed(a,b);
    print_matrix_b(b);

    return 0;
}


void new_matrix(int a[][SIZE2]){
    for(int i = 0; i < SIZE1; ++i){
        for(int j=0; j < SIZE2; ++j){
            a[i][j] = rand() % 10;
        }
    }
}

void print_matrix_a(int a[][SIZE2]){
    for(int i = 0; i < SIZE1; ++i){
        for(int j=0; j < SIZE2; ++j){
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void print_matrix_b(int a[][SIZE1]){
    for(int i = 0; i < SIZE2; ++i){
        for(int j=0; j < SIZE1; ++j){
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void transposed(int a[][SIZE2], int b[][SIZE1]){
    for(int i = 0; i < SIZE1; ++i){
        for(int j=0; j < SIZE2; ++j){
            b[i][j] = a[j][i];
        }
    }
}