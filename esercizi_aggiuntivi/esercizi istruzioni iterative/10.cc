/**
 * 10- 
 * Scrivere un programma che, dato in input un numero N inserito dall’utente, stampi a video un rombo, 
 * in cui ogni riga deve contenere un numero dispari di asterischi. Il numero di righe del rombo e indicato dalla formula 2N − 1.
 */

#include <iostream>

using namespace std;

int main(){
    int n, n_asterischi, offset;
    cout << "Inserisci n : ";
    cin >> n;

    n = (2*n) - 1; 
    offset = n/2;

    for (int i=0, n_asterischi=1; i<n; i++){     
        
        for (int j=0; j<offset; j++){
            cout << " ";
        }

        for (int j=1; j<=n_asterischi; j++){
            cout << "*";
        }  
        cout << endl;

        if (i < n/2){
            n_asterischi += 2;
            offset -= 1;
        } else {
            n_asterischi -= 2;
            offset += 1;
        }
    }

    return 0;
}