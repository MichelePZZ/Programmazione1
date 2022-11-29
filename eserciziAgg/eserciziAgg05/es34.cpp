/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che implementi l'algoritmo di ordinamento random
 *       sort (scegliere 2 indici a caso, scambiare gli elementi e controllare se
 *       l'array e' ordinato oppure no. Ripetere fino a che l'array non e' ordinato.)
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

void random_sort(int* array, int dim);
void scambio(int&n1, int&n2);

int main(int argc, char* argv[]){
    int a[] = {2,3,4,5,67,8,9};
    int dim = 7;

    random_sort(a, 7);

    for(int i = 0; i < dim; i++)
        cout << a[i];
    return 0;
}

void random_sort(int* array, int dim){
    int i = rand() % dim;
    int j = rand() % dim;

    if((array[i] > array[j]) && i > j){
        
    } else {
        scambio(array[i], array[j]);
    }

    for(int i = 0; i < dim; i++){
        if(i != 0 && array[i-1] <= array[i]){}
        else{
            i+=dim;
            random_sort(array, dim);
        }
    }
}

void scambio(int&n1, int&n2){
    int tmp = n2;
    n2 = n1;
    n1 = n2;
}