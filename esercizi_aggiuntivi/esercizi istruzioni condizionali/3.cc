#include <iostream>

using namespace std;

float a, b, c;

int main(int argc, char const *argv[])
{
    cout << "Inserire il primo lato del triangolo: ";
    cin >> a;
    cout << "Inserire il secondo lato del triangolo: ";
    cin >> b;
    cout << "Inserire il terzo lato del triangolo: ";
    cin >> c;

    if ((a + b) < c || (b + c) < a || (a + c) < b)
        cout << "Non è un triangolo" << endl;
    else if (a == b && a == c)
        cout << "Il triangolo è equilatero" << endl;
    else if (a == b || b == c || a == c)
        cout << "Il triangolo è isoscele" << endl;
    else
        cout << "Il triangolo è scaleno" << endl;
    
    return 0;
}
