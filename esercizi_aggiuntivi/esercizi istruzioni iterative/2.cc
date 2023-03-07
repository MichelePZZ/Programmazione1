#include <iostream>
#include <math.h>

using namespace std;

int N;
double pi = 0;

int main(int argc, char const *argv[])
{
    cout << "Calcolatore di pi-greco" << endl;
    cout << "Inserire un numero, più alto è più pi greco sarà preciso, ma ci metterà più tempo: ";
    cin >> N;

    for (size_t i = 0; i < N; ++i)
        pi += (pow(-1, i + 1)*4)/(2*i-1);

    cout << "Secondo i miei calcoli pi greco è: " << pi << endl;

    return 0;
}
