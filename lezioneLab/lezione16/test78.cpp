/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input dall'utente un intero n,
 *       ritorni a video una lista di n numeri generalti randomicamente.
 *       Questi numeri devono essere salvati in un array. Questo arrray deve 
 *       essere generato dinamicamente da una funzione con la firma uguale a
 *       quella mostrata sopra.
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: n. elementi" << endl;
        exit(1);
    }

    int n = atoi(*(argv+1));

    srand(time(NULL));
    int *generate_n;

    generate_n = new int[n];

    for(int i = 0; i<n; i++){
        generate_n[i] = rand() % 100;
        cout << generate_n[i] << endl;
    }

    delete[] generate_n;
    return 0;
}

void generate_numbers(int *a, int i, int n){
    if(i == n){
        return;
    } else{
        a[i] = rand() % 100;
    }
    generate_numbers(a, i, n);
}