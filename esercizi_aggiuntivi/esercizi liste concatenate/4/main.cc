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
void swaplista(lista *l, int i1, int i2);
lista* get(lista *l, int i);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp, i1, i2;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);
    
    cout << "Scegliere l'indice del primo numero da scambiare: ";
    cin >> i1;
    cout << "Scegliere l'indice del secondo numero da scambiare: ";
    cin >> i2;
    swaplista(numeri, i1, i2);

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

void swaplista(lista *l, int i1, int i2)
{
    lista *before1, *before2, *pos1, *pos2;
    
    before1 = get(l, i1 - 1);
    before2 = get(l, i2 - 1);
    pos1 = get(l, i1);
    pos2 = get(l, i2);

    swap(before1->next, before2->next);
    swap(pos1->next, pos2->next);
}

lista* get(lista *l, int i)
{
    lista* tmp = l->next;
    while (tmp->next && i != 0)
    {
        tmp = tmp->next;
        i--;
    }

    if (i == 0)
        return tmp;

    cerr << "Indice non trovato" << endl;
    exit(1);
}
