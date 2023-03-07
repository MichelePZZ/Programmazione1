/**
 * 6- Random sort 
 * Scrivere un programma che implementi l’algoritmo di ordinamento Random Sort (scegliere due indici a caso, 
 * scambiare gli elementi e controllare se l’array `e ordinato oppure no. Ripetere fino a che l’array non `e ordinato
 */

#include <iostream>
#include <cstdlib>

using namespace std;

bool check(int a[], int size = 10) {
    for (size_t i = 0; i < size - 1; ++i)
        if (a[i] > a[i+1])
            return false;
    return true;
}

void randomSort(int a[], int size = 10) {
    int i, j;
    while (!check(a, size)){
        i = rand() % size;
        j = rand() % size;

        if (i > j)  // force i <= j
            swap (i, j);

        if (a[i] > a[j])
            swap(a[i], a[j]);
    }
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int a[10];
    for (size_t i = 0; i < 10; ++i)
    {
        cout << "Inserire un valore dell'array: ";
        cin >> a[i];
    }

    randomSort(a);

    cout << "Il tuo array ordinato è: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
