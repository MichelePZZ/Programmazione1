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
lista *prossimo_maggiore(lista *l);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp;
    lista *numeri = new lista;
    lista *prossimi_maggiori;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);

    prossimi_maggiori = prossimo_maggiore(numeri);

    print(prossimi_maggiori);

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

lista *prossimo_maggiore(lista *l)
{
    lista *sol = new lista;
    if (l->next)
    {
        lista *tmp = l->next;

        while (tmp->next)
        {
            int v = tmp->value;
            lista *tmp2 = tmp;
            while (tmp2->next && tmp2->next->value <= v)
                tmp2 = tmp2->next;
            if (tmp2->next)
                aggiungi(sol, tmp2->next->value);
            else
                aggiungi(sol, 0);
            tmp = tmp->next;
        }
    }

    return sol;
}
