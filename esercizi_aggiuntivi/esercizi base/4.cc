#include <iostream>

using namespace std;

int operation, type;
float n1, n2, result;

void getOperation()
{
    do
    {
        cout << "0. exit" << endl
             << "1. Somma" << endl
             << "2. Sottrazione" << endl
             << "3. Prodotto" << endl
             << "Selezionare l'operazione tra l'elenco sopra indicato: ";
        cin >> operation;
    } while (operation < 0 || operation > 3);
}

void getType()
{
    do
    {
        cout << "0. exit" << endl
             << "1. int" << endl
             << "2. float" << endl
             << "Selezionare la tipologia di output tra l'elenco sopra indicato: ";
        cin >> type;
    } while (type < 0 || type > 2);
}

void getNumbers()
{
    cout << "Inserire il primo numero: ";
    cin >> n1;
    cout << "Inserire il secondo numero: ";
    cin >> n2;
}

void doOperation()
{
    switch (operation)
    {
    case 1: // somma
        result = n1 + n2;
        break;
    case 2: // sottrazione
        result = n1 - n2;
        break;
    case 3: // prodotto
        result = n1 * n2;
    default:
        break;
    }
}

void printResult()
{
    cout << "Il risultato è: ";
    switch (type)
    {
    case 1: // int
        cout << (int)result;
        break;
    case 2: // float
        cout << (float)result;

    default:
        break;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    getOperation();
    if (operation == 0)
        return 0;

    getType();
    if (type == 0)
        return 0;

    getNumbers();
    doOperation();
    printResult();

    return 0;
}
