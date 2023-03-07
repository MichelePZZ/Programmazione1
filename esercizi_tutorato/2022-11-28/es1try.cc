#include <iostream>

using namespace std;

int converti_rec(char *numero)
{
    int risultato = -1;
    if (numero[0] != '\0')
    {
        risultato = 0;
        int next = converti_rec(numero+1);

        if ('0' <= numero[0] && '9' >= numero[0])
        {
            risultato += numero[0] - '0';
        }
        else
        {
            risultato += numero[0] - 'A' + 10;
        }

        if( next != -1)
        {
            risultato *= 17;
            risultato += next;
        }

    }

    return risultato;
}

int main(int argc, char const *argv[])
{
    char s[] = "74";
    cout << converti_rec(s) << endl;
    return 0;
}
