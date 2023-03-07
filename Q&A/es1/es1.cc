// Inserire tutto quello che serve qui
#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#define BASE 17         // TODO: change 17 with your base
using namespace std;

int toDecimal(char numero[]);
char to_lower(char carattere);
int calcola(char *a, char *b, char op);
void swap(char &a, char &b);
char *toBase(int n);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: ./a.out input.txt output.txt" << endl;
        exit(1);
    }

    fstream in, out;

    in.open(argv[1], ios::in);
    out.open(argv[2], ios::out);

    if (in.fail() || out.fail())
    {
        cerr << "Errore nell'apertura degli stream!" << endl;
        in.close();
        out.close();
        exit(2);
    }

    // Test
    char a[11], b[11], op;
    while (in >> a >> op >> b)
    {
        char *ris = toBase(calcola(a, b, op));
        out << ris << endl;
        delete[] ris;
    }

    in.close();
    out.close();

    return 0;
}

int toDecimal(char *numero)
{
    int len_ = strlen(numero); // sostituire con la lunghezza saputa se necessario
    int risultato = 0;

    for (int dim = 0; dim < len_; ++dim)
    {
        risultato *= BASE;
        if ('0' <= numero[dim] && '9' >= numero[dim])
        {
            risultato += numero[dim] - '0';
        }
        else if (to_lower(numero[dim]) >= 'a' && (to_lower(numero[dim]) - 'a' + 10) < BASE)
        {
            // - numero[dim] - 'A' + 10 per soli caratteri maiscoli
            // - numero[dim] - 'a' + 10 per solin caratteri minuscoli
            // - to_lower(numero[dim]) - 'a' + 10 per entrambe le opzioni (implementata)
            risultato += to_lower(numero[dim]) - 'a' + 10;
        }
        else
        {
            cerr << "Valore inserito non valido: " << numero[dim] << endl;
        }
    }

    return risultato;
}

void swap(char &a, char &b)
{
    char tmp = a;
    a = b;
    b = tmp;
}

char* toBase(int n)
{
    char *ris = new char[11]{}; // TODO: change 11 con il numero max di elementi + 1

    if (n == 0)
    {
        ris[0] = '0';
    }
    else if (n >= 0)
    {
        int dim;

        for (dim = 0; n > 0; dim++)
        {
            int resto = n % BASE;

            if (resto <= 9)
            {
                ris[dim] = (char)('0' + resto);
            }

            if (resto > 9 && resto < BASE)
            {
                ris[dim] = (char)(resto + 'a' - 10);
            }

            n /= BASE;
        }

        for (int j = 0; j < (dim / 2); ++j) // Inverti l'ordine della stringa
        {
            swap(ris[j], ris[dim - j - 1]);
        }
    } 
    else  // conversione numero negativo
    {
        n = -n;

        int dim;

        for (dim = 0; n > 0; dim++)
        {
            int resto = n % BASE;

            if (resto <= 9)
            {
                ris[dim] = (char)('0' + resto);
            }

            if (resto > 9 && resto < BASE)
            {
                ris[dim] = (char)(resto + 'a' - 10);
            }

            n /= BASE;
        }
       
        ris[dim] = '-';
        dim++;

        for (int j = 0; j < (dim / 2); ++j) // Inverti l'ordine della stringa
        {
            swap(ris[j], ris[dim - j - 1]);
        }
    }
    return ris;
}

char to_lower(char carattere)
{
    if (carattere >= 'A' && carattere <= 'Z')
        return (char)(carattere - 'A') + 'a';
    return carattere;
}

int calcola(char *a, char *b, char op)
{
    int n1 = toDecimal(a);
    int n2 = toDecimal(b);
    int risultato = 0;
    switch (op)
    {
    case '+':
        risultato = n1 + n2;
        break;
    case '*':
        risultato = n1 * n2;
        break;
    case '^':
        risultato = pow(n1, n2);
        break;
    case '-':
        risultato = n1-n2;
        break;
    case '/':
        if(n2 == 0) cerr << "Operazione non riuscita! (divisione per 0)" << endl;
        else risultato = n1/n2;
        break;
    case '%':
        if(n2 == 0) cerr << "Operazione non riuscita! (divisione per 0)" << endl;
        else risultato = n1%n2;
        break;
    default:
        cout << "Operazione non riconosciuta!" << endl;
        break;
    }
    return risultato;
}