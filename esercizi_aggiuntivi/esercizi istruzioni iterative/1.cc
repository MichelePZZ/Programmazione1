#include <iostream>
#include <math.h>

using namespace std;

int N;
double sol = 0;

int main(int argc, char const *argv[])
{
    cout << "Calcolatore della sommatoria di (1/(2^i)) per i da 0 ad n escluso" << endl;
    cout << "Inserire il valore n: ";
    cin >> N;

    for(size_t i = 0; i < N; ++i)
        sol += 1/pow(2, i);

    cout << "Il risultato è: " << sol << endl;

    return 0;
}
