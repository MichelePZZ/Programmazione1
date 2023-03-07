#include <iostream>

using namespace std;

float mi, km;

int main(int argc, char const *argv[])
{
    cout << "Inserire la distanza in miglia: ";
    cin >> mi;

    km = mi / 0.62137;

    cout << "La distanza in km è: " << km << endl;

    return 0;
}
