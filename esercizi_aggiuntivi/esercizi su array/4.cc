/**
 * 4- Quicksort 
 * Scrivere un programma che implementi l’algoritmo di ordinamento Quicksort.
 */

#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int count = 0;
    int pivotIndex;
    int i = low, j = high;

    for (size_t i = low + 1; i <= high; i++)
        if (arr[i] <= pivot)
            count++;
    pivotIndex = low + count;

    swap(arr[pivotIndex], arr[low]);

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int a[10];
    for (size_t i = 0; i < 10; ++i)
    {
        cout << "Inserire un valore dell'array: ";
        cin >> a[i];
    }

    quickSort(a, 0, 9);

    cout << "Il tuo array ordinato è: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}