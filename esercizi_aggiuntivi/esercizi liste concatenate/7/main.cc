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
void elimina_duplicati(lista *l);
bool exists(lista *l, int value);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp, i1, i2;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);
    
    elimina_duplicati(numeri);
    
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

bool exists(lista *l, int value)
{
    lista *tmp2 = l;

    while (tmp2->next)
        if (tmp2->next->value == value)
            return true;
        else
            tmp2 = tmp2->next;

    return false;
}

void elimina_duplicati(lista *l)
{
    lista *univoci = new lista;
    univoci->value = 0;
    lista *tmp = l;

    while (tmp->next)
    {
        if (!exists(univoci, tmp->next->value))
            aggiungi(univoci, tmp->next->value);
        tmp = tmp->next;
    }

    *l = *univoci;
}
