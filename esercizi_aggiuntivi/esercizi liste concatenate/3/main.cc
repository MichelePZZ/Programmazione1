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
void del(lista *l, int value);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);

    cout << "Inserire il numero da eliminare: ";
    cin >> tmp;
    del(numeri, tmp);

    print(numeri);

    return 0;
}

void aggiungi(lista *l, int value)
{
    if (l->next)
    {
        aggiungi(l->next, value);
    }
    else
    {
        l->next = new lista;
        l->next->value = value;
    }
}

void print(lista *l)
{
    if (l->next) // Print exclundig first "fake" value
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

void del(lista *l, int value)
{
    if (l->next)
    {
        if (l->next->value == value)
        {
            lista *tmp = l->next;
            l->next = l->next->next;
            delete tmp;
        }
        else
        {
            del(l->next, value);
        }
    }
    else
    {
        cerr << "Numero non trovato" << endl;
    }
}
