#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sol = 0, tmp;
    char op;

    cout << "Insert an operation ending with '=' (eg. 1 + 4 =): ";

    do {
        cin >> tmp >> op;
        sol += tmp;
    } while (op != '=');

    cout << "Result: " << sol << endl;

    return 0;
}
