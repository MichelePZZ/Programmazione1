/**
 * 2- 
 * Scrivere un programma che prenda in input un intero (riga) e stampi il Triangolo di Pascal fino alla riga 
 * specificata tramite funzione ricorsiva.
 */

#include <iostream>

using namespace std;

int t_pascal(int r, int c){
    if (c == 0){
        return 1;
    }
    if (r == c){
        return 1;
    }
    return (t_pascal(r-1, c-1) + t_pascal(r-1, c));
}

int main(){
    int n_r;
    cout << "Inserisci n_r : ";
    cin >> n_r;

    for(int r=0; r < n_r; r++){

        for (int i=0; i<(3*n_r)-3*r; i++){
            cout << " ";
        }
        
        for(int c=0; c <= r; c++){      
            cout << ((t_pascal(r, c)<10) ? "   " : "  ") << t_pascal(r, c) << "  " ;
        }
        cout << endl;
    }

    return 0;
}