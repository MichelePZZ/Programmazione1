/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dati a linea di comando tre valori, 2 numeri ed un operatore,
 *       ritorni a video il risultato dell'operazione matematica definita dall'operatore.
 * 
 */


#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){

    if(argc != 4){
        cerr << "Usage: ./a.out n1 op n2" << endl;
        exit(1);
    }

    int n1, n2, ris;
    char c;

    n1 = atoi(*(argv+1));
    c = **(argv+2);
    n2 = atoi(*(argv+3));

    switch(c){
        case '-': cout << (n1-n2); break;
        case '*': cout << (n1*n2); break;
        case '/': cout << (n1/n2); break;
        case '+': cout << (n1+n2); break;
        default:
            cerr << "Operazione non supportata" << endl;
            exit(3);
    }

    return 0;
}