#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sol = 0, tmp_product = 1, tmp_read;
    char op, lop = '+';

    cout << "Insert an operation ending with '=' (eg. 1 + 4 * 2 =): ";

    do {
        cin >> tmp_read >> op;
        if (op == '*')
            tmp_product *= tmp_read;
        else if (lop == '*')
            sol += tmp_product * tmp_read,
            tmp_product = 1;
        else
            sol += tmp_read;
        lop = op;
    } while (op != '=');

    cout << "Result: " << sol << endl;

    return 0;
}
