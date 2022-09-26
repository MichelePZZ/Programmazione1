/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato in input un numero interno n, ritorni a video la frequenza
 *       di ogni cifra (tra 0 e 9) contenuta nel numero.
 * 
 */


#include <iostream>
#define MAX_DIGIT 10
using namespace std;

int main(){
    int n, frequenza [MAX_DIGIT];

    cout << "Inserire un numero: ";
    cin >> n;

    for(int i=0; i<MAX_DIGIT; i++){
        frequenza[i] = 0;
    }

    while (n != 0){
        switch (n % 10){
            case 0: frequenza[0] += 1; break;
            case 1: frequenza[1] += 1; break;
            case 2: frequenza[2] += 1; break;
            case 3: frequenza[3] += 1; break;
            case 4: frequenza[4] += 1; break;
            case 5: frequenza[5] += 1; break;
            case 6: frequenza[6] += 1; break;
            case 7: frequenza[7] += 1; break;
            case 8: frequenza[8] += 1; break;
            case 9: frequenza[9] += 1; break;
            default: cout << "Errore" << endl;
        }
        n /= 10;
    }

    for(int i=0; i<MAX_DIGIT; i++){
        cout << "Frequenza " << i << ": " << frequenza[i] << endl;
    }


    return 0;
}