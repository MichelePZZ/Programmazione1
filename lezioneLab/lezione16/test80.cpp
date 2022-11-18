/*
 * AUTORE: Michele Pezzo
 * DESCRIZIONE:
 *     - scrivere un programma che, dato un file in input da liea di comando contenente
 *       diverse temperature, salvi queste temperature in un array dinamico e stampi a
 *       video le prime N temperature piu' alte. Il valore N viene specificato dall'utente da
 *       linea di comando. Il programma accetta anche un intero M che indica quante temperature
 *       sono presenti nel file.
 * 
 */


#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc =! 4){
        cerr << "Usage: ./input.txt n.elementi l.file" << endl;
        exit(1);
    }

    int n = atoi(argv[2]);
    int l = atoi(argv[3]);

    fstream input;
    input.open(*(argv+1), ios::in);

    if(input.fail()){
        cerr << "file doesn't exist." << endl;
        exit(2);
    }

    float* temp = new float[l];

    char buffer[256];
    for(int i = 0; i<l; i++){
        input >> buffer;
        temp[i] = atof(buffer);
    }
    delete[] buffer;

    sort_array(temp, l);

    for(int i=0; i<n; i++){
        cout << temp[i] << " ";
    }

    delete[] temp;
    return 0;
}

void sort_array(float array[], int length){
    for(int i=0; i<length-1; i++){
        for(int j=0; j<length-1; j++){
            if(array[j] < array[j+1]){
                float tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}