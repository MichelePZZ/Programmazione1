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
void inverti_ordine(lista *l);
int len(lista *l);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);

    inverti_ordine(numeri);
    
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

void inverti_ordine(lista *l)
{
    int i = 0;
    int lunghezza = len(l);
    int values[lunghezza];
    lista *tmp = l;
    while (tmp->next)
    {
        values[i++] = tmp->value;
        tmp = tmp->next;
    }
    values[i] = tmp->value;

    tmp = l->next;
    for (size_t i = 1; i < lunghezza + 1; ++i)
    {
        tmp->value = values [lunghezza - i + 1];
        tmp = tmp->next;
    }
}

int len(lista *l)
{
    lista *tmp = l;
    int len = 0;

    while (tmp->next)
    {
        tmp = tmp->next;
        len++;
    }

    return len;
}
