/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che dichiari e poi inizializzi
 *       un array di 10 interi e poi calcoli media, valore 
 *       massimo e valore minimo.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

int max(int arr[]);
int min(int arr[]);
double avg(int arr[]);
 
int main(){
    srand(time(NULL));
    int arr[SIZE], min, max;
    double avg;

    cout << "arr: ";
    for(int i=0; i < SIZE; i++){
        arr[i] = rand() % 9;
        cout << arr[i] << " ";
    }

    max = max(arr[]);


    cout << "max: " << max(arr) << endl;
    cout << "min: " << min(arr) << endl;
    cout << "avg: " << avg(arr) << endl;

    return 0;
}

int max(int arr[]){
    int max = 0;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
   
    return max;
}

int max(int arr[]){
    int min = 9;

    for(int i = 0; i < SIZE; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
   
    return min;
}

double avg(int arr[]){
    double avg = 0;

    for(int i = 0; i < SIZE; i++){
        avg += arr[i];
    }

    return avg /= (double)(SIZE-1);
}