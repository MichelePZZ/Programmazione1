#include <iostream>

using namespace std;

struct list
{
    int value = 0;
    list *next = NULL;
};

list *coda = new list;
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
    list *tmp = coda;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new list;
    tmp->next->value = value;
}

int pop()
{
    if (coda->next)
    {
        int res = coda->next->value;
        list *tmp = coda->next;
        coda->next = coda->next->next;
        delete tmp;
        return res;
    }
    return INT32_MAX;
}
