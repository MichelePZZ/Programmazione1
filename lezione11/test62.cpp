/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere una procedura che fattorizzi in primi un dato numero intero
 *       tramite ricorsione. E' possibile definire delle fuzioni ausiliarie.
 *       Se possibile, le funzioni ausiliarie devono essere ricorsive loro stesse.
 * 
 */


#include <iostream>
using namespace std;

void factor(int &n, int i = 2);
void operazione(int &n, int i);

int main(){
    int n;
    cout << "n?: ";
    cin >> n;

    cout << "f:";
    factor(n);
    cout << endl;

    return 0;
}

void factor(int &n, int i){
    if(n % i == 0){
        operazione(n, i);

        i++;
        factor(n, i);
    } else if((n/i) != 0){
        i++;
        factor(n, i);
    }
}

void operazione(int &n, int i){
    if(n % i == 0){
        cout << " " << i << " ";
        n /= i;
        operazione(n, i);
    }
}