/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, datin in input 2 valori interi R e C,
 *       crei dinamicamente una matrice con R righe ed C colonne. Popolate poi questa
 *       matrice con dei numeri random.
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int ** generate_matrix(int r, int c);

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Usage: n.righe n.colonne" << endl;
        exit(1);
    }

    int r = atoi(argv[1]);
    int c = atoi(argv[2]);

    int** matrix = generate_matrix(r, c);
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i=0; i<r; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}

int ** generate_matrix(int r, int c){
    srand(time(NULL));

    int** matrix = new int*[r];

    for(int i=0; i<r; i++){
        matrix[i] = new int[c];
        for(int j=0; j<c; j++){
            matrix[i][j] = rand() % 100;
        }
    }

    return matrix;
}