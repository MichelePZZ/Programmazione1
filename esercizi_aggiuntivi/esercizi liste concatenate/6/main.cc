#include <iostream>
#include <fstream>

#define MAX_LEN 100

using namespace std;

struct lista
{
    int value = 0;
    lista *next = NULL;
};

void aggiungi(lista *l, int value);
void print(lista *l);
int len(lista *l);
int* toArray(lista *l);

int main(int argc, char const *argv[])
{
    ifstream input("./input.txt");
    int tmp, i1, i2;
    lista *numeri = new lista;

    while (input >> tmp)
        aggiungi(numeri, tmp);

    print(numeri);

    int *arr = toArray(numeri);
    int len_ = len(numeri);
    
    for(size_t i = 0; i < len_ - 1; ++i)
    {
        cout << arr[i] << " -> "; 
    }
    cout << arr[len_ - 1] << endl;

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

int* toArray(lista *l)
{
    static int a[MAX_LEN];

    lista *tmp = l;
    int len = -1;

    while (tmp->next)
    {
        tmp = tmp->next;
        len++;
        a[len] = tmp->value;
    }

    return a;
}
