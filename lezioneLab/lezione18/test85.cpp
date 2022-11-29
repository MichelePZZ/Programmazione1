/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - Scrivere un programma che implementi il Cifrario di Cesare. Il programma dovrà
 *       prendere in input il file contenente il messaggio da cifrare (assumete che il file
 *       contenga solo lettere minuscole e spazi fino ad un massimo di 255 lettere), il
 *       nome di un file in cui verrà salvato l’output e la chiave di cifratura. All’utente verrà
 *       inoltre chiesto se intende cifrare o decifrare il messaggio.
 *       Utilizzare le funzioni della libreria fstream
 * 
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int N_LETTER = 2*('Z' - 'A');

void crypt(char buffer[], int&key);
void decrypt(char buffer[], int&key);

int main(int argc, char* argv[]){
    if(argc != 4){
        cerr << "Usage: ./input.txt ./output.txt key" << endl;
        exit(1);
    }

    fstream input;
    fstream output;

    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if(input.fail()){
        cerr << "Error during opening ./input.txt" << endl;
        exit(2);
    }

    int key = atoi(argv[3]) % N_LETTER;

    char buffer[256];
    while(!input.eof()){
        input >> buffer;
        crypt(buffer, key);
        output << buffer;
        output << ' ';
    }
}

void crypt(char buffer[], int&key){
    for(int i = 0; buffer[i] != '\0'; i++){
        if((buffer[i] > 'A' && buffer[i] < 'Z') || (buffer[i] > 'a' && buffer[i] < 'z')){
            buffer[i] += key;
            if(buffer[i] > 'z'){
                buffer[i] -= N_LETTER;
            } else if(buffer[i] < 'A'){
                buffer[i] += N_LETTER;
            } else if(buffer[i] > 'Z' && buffer[i] < 'a' && key > 0){
                buffer[i] += 'a' - 'Z';
            } else if(buffer[i] > 'Z' && buffer[i] < 'a' && key > 0){
                buffer[i] -= 'a' - 'Z';
            }
        }
    }
}

void decrypt(char buffer[], int&key){
    for(int i = 0; buffer[i] != '\0'; i++){
        if((buffer[i] > 'A' && buffer[i] < 'Z') || (buffer[i] > 'a' && buffer[i] < 'z')){
            buffer[i] -= key;
            if(buffer[i] > 'z'){
                buffer[i] -= N_LETTER;
            } else if(buffer[i] < 'A'){
                buffer[i] += N_LETTER;
            } else if(buffer[i] > 'Z' && buffer[i] < 'a' && key > 0){
                buffer[i] -= 'a' - 'Z';
            } else if(buffer[i] > 'Z' && buffer[i] < 'a' && key > 0){
                buffer[i] += 'a' - 'Z';
            }
        }
    }
}