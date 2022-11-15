/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero bianrio n, ritorni a video il
 *       completamento di questo numero binario.
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int complemento(int n);
void coutOutput(int output[]);

int main(){
    int n;
    int input[8], output[8];

    cin >> n;

    for(int i = 0; i < 8; i++){

        if((n % 10) > 1){
            cout << "ERRORE" << endl;
            goto stop;  //termina il codice con errore -1
        }

        input[7-i] = n % 10;
        output[7-i] = complemento(input[7-i]);

        n /= 10;
    }

    coutOutput(output);

    return 0;
    stop: return -1;
}

int complemento(int n){
    if(n == 0)
        return 1;
    else
        return 0;
}

void coutOutput(int output[]){
    cout << "Il numero in completamento a 2 è ";
    for(int i=0; i < 8; i++){
        cout << output[i];
    }
    cout << endl;
}