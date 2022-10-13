/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere, scrivere un programma che controlli con
 *       una funzione se il carattere fornito in input sia una lettera
 *       dell'alfabeto minuscola. In caso affermativo, il programma deve stampare
 *       a video il carattere in maiuscolo, usando una funzione per la 
 *       conversione. La funzione di conversione non deve ritornare alcun
 *       valore.
 * 
 */


#include <iostream>
using namespace std;

bool isMinuscolo(char &c);
void toMaiuscolo(char &c);

int main(){
    char c;
    cin >> c;

    if(isMinuscolo){
        toMaiuscolo(c);
    }

    cout << "Il carattere in maiuscolo e' " << c;

    return 0;
}

bool isMinuscolo(char &c){
    if(c >= 'a' && c <= 'z'){
        return true;
    } else {
        return false;
    }
}

void toMaiuscolo(char &c){
    c += 'A' - 'a';
}