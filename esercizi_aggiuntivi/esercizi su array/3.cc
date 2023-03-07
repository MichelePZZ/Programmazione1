/**
 * 3- 
 * Scrivere un programma che implementi la ricerca sequenziale di un elemento in un array tramite ricorsione.
 */

#include <iostream>

using namespace std;

bool search (int* arr, int size, int x) {
    size--;

    if (size < 0)
        return false;
    if (*arr == x)
        return true;
    else {
        return search (++arr, size, x);
    }
}

int main(){
    int size;

    cout << "size arr : ";
    cin >> size;    

    int* arr = new int(size);   

    for (int i = 0; i < size; i++) {
        cout << "Arr[" << i << "] : ";
        cin >> arr[i];
    }

    int x;

    cout << "elem. da ricercare : ";
    cin >> x;

    cout << "presente? " << (search(arr, size, x) ? "True" : "False") << endl;

    return 0;
}