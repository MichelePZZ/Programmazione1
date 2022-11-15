/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, generata una lettera dell'alfabeto (maiuscola o minuscola) in
 *       modo casuale, chieda all'utente di indovinare suddetta lettera. Il programma termina solo se
 *       l'utente indovina.
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    char c = ((rand()%2) == 0) ? (int)'a' + (rand() % 26) : (int)'A' + (rand() % 26),
    input = 0;

    while(input != c){
        cin  >> input;
    }

    return 0;
}