#include <iostream>

using namespace std;

struct list
{
    int value = 0;
    list *next = NULL;
};

list *pila = new list;
void push(int value);
int pop();

int main(int argc, char const *argv[])
{
    cout << "Insert: 1, 2 and 3" << endl;

    push(1);
    push(2);
    push(3);

    cout << "Reading data: " << endl;

    for (size_t i = 0; i < 3; ++i)
    {
        cout << pop() << endl;
    }

    return 0;
}

void push(int value)
{
    list *tmp = pila;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new list;
    tmp->next->value = value;
}

int pop()
{
    if (pila->next)
    {
        list *tmp = pila;
        int res;

        while (tmp->next->next)
            tmp = tmp->next;
        
        res = tmp->next->value;
        delete tmp->next;
        tmp->next = NULL;
        return res;
    }
    return INT32_MAX;
}
