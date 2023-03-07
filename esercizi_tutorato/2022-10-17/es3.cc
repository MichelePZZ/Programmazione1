#include <iostream>

using namespace std;

int somma(int n1, int n2){
    if (n2 == 0){
        return n1;
    } else {
        return 1 + somma(n1, n2-1);
    }
}

int prodotto(int n1, int n2){
    if (n2 == 1){
        return n1;
    } else {
        return somma(n1, prodotto(n1, n2 - 1));
    }
}

int pow(int n1, int n2){
    if (n2 == 1){
        return n1;
    } else {
        return prodotto(n1, pow(n1, n2 - 1));
    }
}


int main(){
    int n1, n2;
    cout << "inserire due numeri interi positivi: ";
    cin >> n1 >> n2;
    cout << "somma= " << somma(n1,n2) << endl;
    cout << "prodotto= " << prodotto(n1,n2) << endl;
    cout << "potenza= " << pow(n1,n2) << endl;
}