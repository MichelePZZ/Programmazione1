#include <iostream>
#include <fstream>

using namespace std;

struct lista
{
    int value = 0;
    lista *next = NULL;
};

void aggiungi(lista *l, int value);
void print(lista *l);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp, i1, i2;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);

    cout << "Numero intero da aggiungere: ";
    cin >> tmp;
    aggiungi(numeri, tmp);
    
    print(numeri);

    return 0;
}

void aggiungi(lista *l, int value)
{
    if (l->next)
    {
        lista *tmp = l;
        lista *n = new lista;
        n->value = value;

        while (tmp->next && tmp->next->value < value)
            tmp = tmp->next;

        n->next = tmp->next;
        tmp->next = n;
    }
    else
    {
        l->next = new lista;
        l->next->value = value;
    }
}

void print(lista *l)
{
    if (l->next) // Print exclunding first "fake" value
    {
        lista *tmp = l->next;

        while (tmp->next)
        {
            cout << tmp->value << " -> ";
            tmp = tmp->next;
        }
        cout << tmp->value << endl;
    }
}
