#include <iostream>
#include <limits.h>

using namespace std;

int max_, tmp;

int main(int argc, char const *argv[])
{
    max_ = INT_MIN;
    for(size_t i = 0; i < 3; ++i) {
        cout << "Inserisci un numero: ";
        cin >> tmp;
        if (tmp > max_)
            max_ = tmp;
    }

    cout << "Il numero maggiore è: " << max_ << endl;
    return 0;
}
