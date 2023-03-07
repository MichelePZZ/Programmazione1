#include <iostream>

using namespace std;

float T;

int main(int argc, char const *argv[])
{
    cout << "Inserire la temperatura: ";
    cin >> T;

    if (T < -273.15)
        cout << "Temperatura impossibile!" << endl;
    else if (T < 0.0)
        cout << "Fa freddo!" << endl;
    else if (T < 18.0)
        cout << "Temperatura così così" << endl;
    else if (T < 30.0)
        cout << "Temperatura accettabile" << endl;
    else
        cout << "Fa caldo!" << endl;

    return 0;
}
