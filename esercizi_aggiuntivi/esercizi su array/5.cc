/**
 * 5- Merge sort 
 * Scrivere un programma che implementi l’algoritmo di ordinamento Merge Sort.
 */

#include <iostream>

using namespace std;

void merge(int a[], int left, int right, int center) {
    int i = left, j = center + 1, k = 0;
    int b[right - left + 1] = {0};

    while (i <= center && j <= right)
        if (a[i] <= a[j])
            b[k++] = a[i], ++i;
        else
            b[k++] = a[j], ++j;

    while (i <= center)
        b[k++] = a[i++];

    while (j <= right)
        b[k++] = a[j++];

    for (size_t z = left; z <= right; ++z)
        a[z] = b[z-left];
}

void mergeSort(int a[], int left = 0, int right = 9) {
    if (left < right)
    {
        int center = (left + right) / 2;
        mergeSort(a, left, center);
        mergeSort(a, center + 1, right);
        merge(a, left, right, center);
    }
}

int main(int argc, char const *argv[])
{
    int a[10];
    for (size_t i = 0; i < 10; ++i)
    {
        cout << "Inserire un valore dell'array: ";
        cin >> a[i];
    }

    mergeSort(a);

    cout << "Il tuo array ordinato è: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
