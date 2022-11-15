/*
 * @author: Michele Pezzo
 * @details:
 *     - scrivere un programma che dichiari e poi inizializzi
 *       un array di 10 interi e poi stampi a video tutti gli
 *       elementi dell'array.
 * 
 */


#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;
 
int main(){
    srand(time(NULL));
    int arr[SIZE];

    cout << "arr: ";
    for(int i=0; i < SIZE; i++){
        arr[i] = rand() % 9;
        cout << arr[i] << " ";
    }
    return 0;
}