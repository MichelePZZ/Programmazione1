#include <iostream>

using namespace std;

const float RAD3 = 1.73205;
float L, P, A;

int main(int argc, char const *argv[])
{
    cout << "Benvenuto nella calcolatrice per il calcolo dell'area e del perimetro di un'esagono" << endl;
    cout << "Per iniziare inserire il lato: ";
    cin >> L;

    P = 6 * L;
    A = (3 * RAD3 * L * L) / 2;

    cout << "Il perimetro dell'esagono è: " << P << endl
         << "e l'area: " << A << endl;
    return 0;
}
