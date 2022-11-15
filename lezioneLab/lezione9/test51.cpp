/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dati in input 3 interi positivi in 3 variabili (n1, n2, n3) scrivere un programma che 
 *       con una procedura "ri-ordini" i numeri in ordine crescente usando il passaggio di parametri
 *       per riferimento.
 * 
 */


#include <iostream>
using namespace std;

void sort(int &n1, int &n2, int &n3);
void scambio(int &a, int &b);

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    sort(n1,n2,n3);
    cout << n1 << "\t" << n2 << "\t" << n3 << endl;

    return 0;
}

void sort(int &n1, int &n2, int &n3){
    if(n1 > n2){
        scambio(n1, n2);
    }
    if(n2 > n3){
        scambio(n2, n3);
    }
}

void scambio(int &a, int &b){
    int tmp = a; 
    a = b;
    b = tmp;
}