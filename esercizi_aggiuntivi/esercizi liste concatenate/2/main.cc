#include <iostream>
#include <fstream>

using namespace std;

struct lista
{
    int value = 0;
    lista *before = NULL;
    lista *next = NULL;
};

void aggiungi(lista *l, int value);
void print(lista *l);
void del(lista *l);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp;
    lista *numeri = new lista;
    numeri->value = 0;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);
    del(numeri);

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
        l->next->before = l;
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

void del(lista *l)
{
    if (l->next)
        del(l->next);
    delete l;
}
