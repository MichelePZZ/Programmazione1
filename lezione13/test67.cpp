/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dichiari e poi inzializzi un array di 10 interi
 *       e lo stampi a video.
 *     - chiedere all'utente un intero da 0 a 9 ed implementare la ricerca sequenziale
 *       per trovare la posizione della prima occorrenza del numero.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

int occorrenza(const int a[], int* n);

int main(){
    int n;
    srand(time(NULL));
    int a[SIZE];

    for(int i=0; i < SIZE; ++i)
    {
        a[i] = rand() % 10;
        cout << a[i];
    }

    cout << "Inserire un elemento da cercare nell'array: ";
    cin >> n;


    if(occorrenza(a, &n) == -1)
    {
        cout << "L'elemento non esiste" << endl;
    } else
    {
        cout << "La prima occorrenza dell'elemento cercato è nella posizione: " << occorrenza(a,&n) << endl;
    }

    return 0;
}



int occorrenza(const int a[], int *n){
    for(int i=0; i < SIZE; ++i)
    {
        if(*n == a[i])
        {
            return i;
            i += SIZE;
        }
    }

    return -1;
}