/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - dato in input un carattere, scrivere un programma che controlli con
 *       una funzione se il carattere fornito in input sia una lettera
 *       dell'alfabeto minuscola. In caso affermativo, il programma deve stampare
 *       a video il carattere in maiuscolo, usando una funzione per la 
 *       conversione.
 * 
 */


#include <iostream>
using namespace std;

bool isMinuscolo(char &c);
char toMaiuscolo(char &c);

int main(){
    char c;
    cin >> c;

    if(isMinuscolo){
        c = toMaiuscolo(c);
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

char toMaiuscolo(char &c){
    int offset = 'A' - 'a';
    c += offset;
    return c;
}