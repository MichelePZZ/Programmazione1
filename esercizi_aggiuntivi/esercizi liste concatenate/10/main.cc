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
void merge(lista *tokeep, lista *theotherone);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    ifstream input2("./input2.txt");
    int tmp;
    lista *numeri = new lista;
    lista *numeri2 = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);
    while (input2 >> tmp)
        aggiungi(numeri2, tmp);

    print(numeri);
    print(numeri2);

    merge(numeri, numeri2);
    
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

void merge(lista *tokeep, lista *theotherone)
{
    lista *tmp = theotherone;
    while (tmp->next)
    {
        aggiungi(tokeep, tmp->next->value);
        tmp = tmp->next;
    }
}
