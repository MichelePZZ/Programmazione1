#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int tmp = 0x1;

    if (((char *) &tmp)[0] == tmp)
        cout << " Il computer che state utilizzando lavora in Big Endian" << endl;
    else
        cout << " Il computer che state utilizzando lavora in Little Endian" << endl;        

    return 0;
}
